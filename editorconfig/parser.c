#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 2
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym__anything = 1,
  sym_comment = 2,
  aux_sym__line_token1 = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_STAR = 6,
  anon_sym_STAR_STAR = 7,
  anon_sym_QMARK = 8,
  anon_sym_SLASH = 9,
  aux_sym__glob_expression_token1 = 10,
  sym_escaped_character = 11,
  anon_sym_LBRACE = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DOT_DOT = 15,
  aux_sym_integer_range_token1 = 16,
  anon_sym_BANG = 17,
  aux_sym__character_choice_content_token1 = 18,
  anon_sym_DASH = 19,
  aux_sym_character_range_token1 = 20,
  anon_sym_EQ = 21,
  aux_sym_pair_token1 = 22,
  aux_sym__value_token1 = 23,
  aux_sym__value_token2 = 24,
  aux_sym__value_token3 = 25,
  aux_sym__value_token4 = 26,
  aux_sym__value_token5 = 27,
  aux_sym__value_token6 = 28,
  aux_sym__value_token7 = 29,
  aux_sym__value_token8 = 30,
  aux_sym__value_token9 = 31,
  aux_sym__value_token10 = 32,
  aux_sym__value_token11 = 33,
  aux_sym__value_token12 = 34,
  aux_sym__value_token13 = 35,
  aux_sym__value_token14 = 36,
  aux_sym__value_token15 = 37,
  aux_sym__value_token16 = 38,
  sym__end_of_file = 39,
  sym__integer_range_start = 40,
  sym__key_name_trimmed = 41,
  sym_document = 42,
  sym__line = 43,
  sym_section = 44,
  sym__section_header = 45,
  aux_sym__glob_expression = 46,
  sym_brace_expansion = 47,
  sym_expansion_string = 48,
  sym_integer_range = 49,
  sym_character_choice = 50,
  sym__character_choice_content = 51,
  sym_character_range = 52,
  sym_pair = 53,
  sym__value = 54,
  sym__newline = 55,
  aux_sym_document_repeat1 = 56,
  aux_sym_document_repeat2 = 57,
  aux_sym_brace_expansion_repeat1 = 58,
  aux_sym_expansion_string_repeat1 = 59,
  aux_sym__character_choice_content_repeat1 = 60,
  alias_sym_preamble = 61,
  alias_sym_section_name = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__anything] = "unknown",
  [sym_comment] = "comment",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "wildcard_characters",
  [anon_sym_STAR_STAR] = "wildcard_any_characters",
  [anon_sym_QMARK] = "wildcard_single_character",
  [anon_sym_SLASH] = "path_separator",
  [aux_sym__glob_expression_token1] = "character",
  [sym_escaped_character] = "escaped_character",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_integer_range_token1] = "integer",
  [anon_sym_BANG] = "negation",
  [aux_sym__character_choice_content_token1] = "character",
  [anon_sym_DASH] = "-",
  [aux_sym_character_range_token1] = "character",
  [anon_sym_EQ] = "=",
  [aux_sym_pair_token1] = "pair_token1",
  [aux_sym__value_token1] = "unset",
  [aux_sym__value_token2] = "integer",
  [aux_sym__value_token3] = "spelling_language",
  [aux_sym__value_token4] = "boolean",
  [aux_sym__value_token5] = "boolean",
  [aux_sym__value_token6] = "boolean",
  [aux_sym__value_token7] = "indent_style",
  [aux_sym__value_token8] = "indent_style",
  [aux_sym__value_token9] = "end_of_line",
  [aux_sym__value_token10] = "end_of_line",
  [aux_sym__value_token11] = "end_of_line",
  [aux_sym__value_token12] = "charset",
  [aux_sym__value_token13] = "charset",
  [aux_sym__value_token14] = "charset",
  [aux_sym__value_token15] = "charset",
  [aux_sym__value_token16] = "charset",
  [sym__end_of_file] = "_end_of_file",
  [sym__integer_range_start] = "integer",
  [sym__key_name_trimmed] = "identifier",
  [sym_document] = "document",
  [sym__line] = "_line",
  [sym_section] = "section",
  [sym__section_header] = "_section_header",
  [aux_sym__glob_expression] = "_glob_expression",
  [sym_brace_expansion] = "brace_expansion",
  [sym_expansion_string] = "expansion_string",
  [sym_integer_range] = "integer_range",
  [sym_character_choice] = "character_choice",
  [sym__character_choice_content] = "_character_choice_content",
  [sym_character_range] = "character_range",
  [sym_pair] = "pair",
  [sym__value] = "_value",
  [sym__newline] = "_newline",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_expansion_string_repeat1] = "expansion_string_repeat1",
  [aux_sym__character_choice_content_repeat1] = "_character_choice_content_repeat1",
  [alias_sym_preamble] = "preamble",
  [alias_sym_section_name] = "section_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__anything] = sym__anything,
  [sym_comment] = sym_comment,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__glob_expression_token1] = aux_sym__glob_expression_token1,
  [sym_escaped_character] = sym_escaped_character,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_integer_range_token1] = sym__integer_range_start,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym__character_choice_content_token1] = aux_sym__glob_expression_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_character_range_token1] = aux_sym__glob_expression_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [aux_sym__value_token1] = aux_sym__value_token1,
  [aux_sym__value_token2] = sym__integer_range_start,
  [aux_sym__value_token3] = aux_sym__value_token3,
  [aux_sym__value_token4] = aux_sym__value_token4,
  [aux_sym__value_token5] = aux_sym__value_token4,
  [aux_sym__value_token6] = aux_sym__value_token4,
  [aux_sym__value_token7] = aux_sym__value_token7,
  [aux_sym__value_token8] = aux_sym__value_token7,
  [aux_sym__value_token9] = aux_sym__value_token9,
  [aux_sym__value_token10] = aux_sym__value_token9,
  [aux_sym__value_token11] = aux_sym__value_token9,
  [aux_sym__value_token12] = aux_sym__value_token12,
  [aux_sym__value_token13] = aux_sym__value_token12,
  [aux_sym__value_token14] = aux_sym__value_token12,
  [aux_sym__value_token15] = aux_sym__value_token12,
  [aux_sym__value_token16] = aux_sym__value_token12,
  [sym__end_of_file] = sym__end_of_file,
  [sym__integer_range_start] = sym__integer_range_start,
  [sym__key_name_trimmed] = sym__key_name_trimmed,
  [sym_document] = sym_document,
  [sym__line] = sym__line,
  [sym_section] = sym_section,
  [sym__section_header] = sym__section_header,
  [aux_sym__glob_expression] = aux_sym__glob_expression,
  [sym_brace_expansion] = sym_brace_expansion,
  [sym_expansion_string] = sym_expansion_string,
  [sym_integer_range] = sym_integer_range,
  [sym_character_choice] = sym_character_choice,
  [sym__character_choice_content] = sym__character_choice_content,
  [sym_character_range] = sym_character_range,
  [sym_pair] = sym_pair,
  [sym__value] = sym__value,
  [sym__newline] = sym__newline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_expansion_string_repeat1] = aux_sym_expansion_string_repeat1,
  [aux_sym__character_choice_content_repeat1] = aux_sym__character_choice_content_repeat1,
  [alias_sym_preamble] = alias_sym_preamble,
  [alias_sym_section_name] = alias_sym_section_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__anything] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__glob_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_range_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__character_choice_content_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_range_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token7] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token8] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token9] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token10] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token11] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token12] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token13] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token14] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token15] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value_token16] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_file] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_range_start] = {
    .visible = true,
    .named = true,
  },
  [sym__key_name_trimmed] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_header] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__glob_expression] = {
    .visible = false,
    .named = false,
  },
  [sym_brace_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_range] = {
    .visible = true,
    .named = true,
  },
  [sym_character_choice] = {
    .visible = true,
    .named = true,
  },
  [sym__character_choice_content] = {
    .visible = false,
    .named = true,
  },
  [sym_character_range] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expansion_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__character_choice_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_end = 1,
  field_key = 2,
  field_start = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_end] = "end",
  [field_key] = "key",
  [field_start] = "start",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_key, 0},
    {field_value, 3},
  [3] =
    {field_end, 2},
    {field_start, 0},
  [5] =
    {field_end, 3},
    {field_start, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_preamble,
  },
  [3] = {
    [1] = alias_sym_section_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__glob_expression, 2,
    aux_sym__glob_expression,
    alias_sym_section_name,
  aux_sym_document_repeat1, 2,
    aux_sym_document_repeat1,
    alias_sym_preamble,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 20,
  [23] = 16,
  [24] = 17,
  [25] = 18,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
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
  [52] = 50,
  [53] = 53,
  [54] = 46,
  [55] = 55,
  [56] = 51,
  [57] = 48,
};

static TSCharacterRange aux_sym__glob_expression_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, ')'}, {'+', '.'}, {'0', '>'}, {'@', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '\n', 19,
        '\r', 4,
        '!', 48,
        '*', 24,
        ',', 41,
        '-', 53,
        '.', 61,
        '/', 31,
        '=', 57,
        '?', 29,
        '[', 21,
        '\\', 60,
        ']', 23,
        '{', 39,
        '}', 43,
        '\t', 2,
        ' ', 2,
        '#', 17,
        ';', 17,
        0x0b, 12,
        '\f', 12,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 19,
        '\r', 4,
        '*', 24,
        ',', 41,
        '/', 31,
        '=', 57,
        '?', 29,
        '[', 21,
        '\\', 60,
        ']', 23,
        '{', 39,
        '}', 43,
        '\t', 2,
        ' ', 2,
        '#', 17,
        ';', 17,
        0x0b, 12,
        '\f', 12,
      );
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 25,
        ',', 40,
        '/', 30,
        '?', 28,
        '[', 20,
        '\\', 35,
        '{', 38,
        '}', 42,
        '\t', 33,
        ' ', 33,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(32);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '*', 25,
        '/', 30,
        '?', 28,
        '[', 20,
        '\\', 35,
        ']', 22,
        '{', 38,
        '\t', 34,
        ' ', 34,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if ((!eof && set_contains(aux_sym__glob_expression_token1_character_set_1, 9, lookahead))) ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__glob_expression_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escaped_character);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escaped_character);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_range_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__character_choice_content_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__character_choice_content_token1);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__character_choice_content_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(36);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_range_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__value_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\n') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__anything);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'C', 1,
        'F', 2,
        'L', 3,
        'O', 4,
        'S', 5,
        'T', 6,
        'U', 7,
        'c', 8,
        'f', 9,
        'l', 10,
        'o', 11,
        's', 12,
        't', 13,
        'u', 14,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(28);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(30);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__value_token10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__value_token9);
      END_STATE();
    case 20:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__value_token10);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__value_token9);
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__value_token6);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__value_token8);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__value_token11);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__value_token4);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '8') ADVANCE(60);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__value_token5);
      END_STATE();
    case 56:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__value_token7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__value_token1);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__value_token13);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__value_token3);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__value_token12);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(65);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__value_token14);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__value_token15);
      END_STATE();
    case 70:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__value_token16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 6, .external_lex_state = 4},
  [4] = {.lex_state = 6, .external_lex_state = 4},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 14, .external_lex_state = 2},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 14, .external_lex_state = 2},
  [27] = {.lex_state = 14, .external_lex_state = 2},
  [28] = {.lex_state = 14, .external_lex_state = 2},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 14, .external_lex_state = 2},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14, .external_lex_state = 2},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14, .external_lex_state = 2},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14, .external_lex_state = 2},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__anything] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_escaped_character] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_character_range_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__value_token1] = ACTIONS(1),
    [aux_sym__value_token3] = ACTIONS(1),
    [aux_sym__value_token4] = ACTIONS(1),
    [aux_sym__value_token5] = ACTIONS(1),
    [aux_sym__value_token6] = ACTIONS(1),
    [aux_sym__value_token7] = ACTIONS(1),
    [aux_sym__value_token8] = ACTIONS(1),
    [aux_sym__value_token9] = ACTIONS(1),
    [aux_sym__value_token10] = ACTIONS(1),
    [aux_sym__value_token11] = ACTIONS(1),
    [aux_sym__value_token12] = ACTIONS(1),
    [aux_sym__value_token13] = ACTIONS(1),
    [aux_sym__value_token14] = ACTIONS(1),
    [aux_sym__value_token15] = ACTIONS(1),
    [aux_sym__value_token16] = ACTIONS(1),
    [sym__end_of_file] = ACTIONS(1),
    [sym__integer_range_start] = ACTIONS(1),
    [sym__key_name_trimmed] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(53),
    [sym__line] = STATE(33),
    [sym_section] = STATE(36),
    [sym__section_header] = STATE(28),
    [sym_pair] = STATE(33),
    [aux_sym_document_repeat1] = STATE(15),
    [aux_sym_document_repeat2] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym__line_token1] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__key_name_trimmed] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(37), 1,
      sym__newline,
    STATE(45), 1,
      sym__value,
    ACTIONS(13), 2,
      sym__end_of_file,
      aux_sym__line_token1,
    ACTIONS(11), 17,
      aux_sym__value_token1,
      aux_sym__value_token2,
      aux_sym__value_token3,
      aux_sym__value_token4,
      aux_sym__value_token5,
      aux_sym__value_token6,
      aux_sym__value_token7,
      aux_sym__value_token8,
      aux_sym__value_token9,
      aux_sym__value_token10,
      aux_sym__value_token11,
      aux_sym__value_token12,
      aux_sym__value_token13,
      aux_sym__value_token14,
      aux_sym__value_token15,
      aux_sym__value_token16,
      sym__anything,
  [30] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      sym__integer_range_start,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(6), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(17), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [69] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym__integer_range_start,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(7), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(17), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [108] = 9,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(5), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(36), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [144] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(5), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(17), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [180] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(5), 2,
      sym_expansion_string,
      aux_sym_brace_expansion_repeat1,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(17), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [216] = 7,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(56), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [246] = 4,
    STATE(8), 1,
      aux_sym_expansion_string_repeat1,
    STATE(11), 1,
      aux_sym__glob_expression,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(64), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [270] = 6,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym__glob_expression,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(69), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [297] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym__glob_expression,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(19), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(17), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [324] = 6,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym__glob_expression,
    STATE(21), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [350] = 6,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym__glob_expression,
    STATE(21), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(90), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [376] = 5,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym__glob_expression,
    STATE(21), 3,
      sym_brace_expansion,
      sym_integer_range,
      sym_character_choice,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
  [399] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym__key_name_trimmed,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_document_repeat1,
    STATE(28), 1,
      sym__section_header,
    ACTIONS(5), 2,
      sym_comment,
      aux_sym__line_token1,
    STATE(33), 2,
      sym__line,
      sym_pair,
    STATE(39), 2,
      sym_section,
      aux_sym_document_repeat2,
  [427] = 1,
    ACTIONS(98), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [440] = 1,
    ACTIONS(100), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [453] = 1,
    ACTIONS(102), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [466] = 1,
    ACTIONS(104), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [479] = 1,
    ACTIONS(106), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [492] = 1,
    ACTIONS(104), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [504] = 1,
    ACTIONS(106), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [516] = 1,
    ACTIONS(98), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [528] = 1,
    ACTIONS(100), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [540] = 1,
    ACTIONS(102), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_SLASH,
      aux_sym__glob_expression_token1,
      sym_escaped_character,
      anon_sym_LBRACE,
  [552] = 5,
    ACTIONS(9), 1,
      sym__key_name_trimmed,
    STATE(27), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      aux_sym__line_token1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym__line,
      sym_pair,
  [571] = 5,
    ACTIONS(115), 1,
      sym__key_name_trimmed,
    STATE(27), 1,
      aux_sym_document_repeat1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(112), 2,
      sym_comment,
      aux_sym__line_token1,
    STATE(33), 2,
      sym__line,
      sym_pair,
  [590] = 5,
    ACTIONS(9), 1,
      sym__key_name_trimmed,
    STATE(26), 1,
      aux_sym_document_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      aux_sym__line_token1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym__line,
      sym_pair,
  [609] = 5,
    ACTIONS(120), 1,
      sym_escaped_character,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(124), 1,
      aux_sym__character_choice_content_token1,
    STATE(52), 1,
      sym__character_choice_content,
    STATE(34), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [626] = 5,
    ACTIONS(120), 1,
      sym_escaped_character,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(124), 1,
      aux_sym__character_choice_content_token1,
    STATE(50), 1,
      sym__character_choice_content,
    STATE(34), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [643] = 1,
    ACTIONS(126), 5,
      sym__key_name_trimmed,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [651] = 4,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym__section_header,
    STATE(32), 2,
      sym_section,
      aux_sym_document_repeat2,
  [665] = 1,
    ACTIONS(133), 5,
      sym__key_name_trimmed,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [673] = 4,
    ACTIONS(124), 1,
      aux_sym__character_choice_content_token1,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(137), 1,
      sym_escaped_character,
    STATE(35), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [687] = 4,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(141), 1,
      sym_escaped_character,
    ACTIONS(144), 1,
      aux_sym__character_choice_content_token1,
    STATE(35), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [701] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym__section_header,
    STATE(32), 2,
      sym_section,
      aux_sym_document_repeat2,
  [715] = 1,
    ACTIONS(149), 5,
      sym__key_name_trimmed,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [723] = 4,
    ACTIONS(124), 1,
      aux_sym__character_choice_content_token1,
    ACTIONS(137), 1,
      sym_escaped_character,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [737] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym__section_header,
    STATE(32), 2,
      sym_section,
      aux_sym_document_repeat2,
  [751] = 1,
    ACTIONS(155), 5,
      sym__key_name_trimmed,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [759] = 2,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(157), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym__character_choice_content_token1,
  [768] = 3,
    ACTIONS(124), 1,
      aux_sym__character_choice_content_token1,
    ACTIONS(161), 1,
      sym_escaped_character,
    STATE(38), 2,
      sym_character_range,
      aux_sym__character_choice_content_repeat1,
  [779] = 1,
    ACTIONS(163), 3,
      anon_sym_RBRACK,
      sym_escaped_character,
      aux_sym__character_choice_content_token1,
  [785] = 2,
    STATE(40), 1,
      sym__newline,
    ACTIONS(165), 2,
      sym__end_of_file,
      aux_sym__line_token1,
  [793] = 2,
    STATE(31), 1,
      sym__newline,
    ACTIONS(167), 2,
      sym__end_of_file,
      aux_sym__line_token1,
  [801] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [805] = 1,
    ACTIONS(171), 1,
      aux_sym_character_range_token1,
  [809] = 1,
    ACTIONS(173), 1,
      anon_sym_DOT_DOT,
  [813] = 1,
    ACTIONS(175), 1,
      aux_sym_pair_token1,
  [817] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
  [821] = 1,
    ACTIONS(179), 1,
      aux_sym_integer_range_token1,
  [825] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
  [829] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [833] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
  [837] = 1,
    ACTIONS(187), 1,
      anon_sym_EQ,
  [841] = 1,
    ACTIONS(189), 1,
      aux_sym_integer_range_token1,
  [845] = 1,
    ACTIONS(191), 1,
      anon_sym_DOT_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 350,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 440,
  [SMALL_STATE(18)] = 453,
  [SMALL_STATE(19)] = 466,
  [SMALL_STATE(20)] = 479,
  [SMALL_STATE(21)] = 492,
  [SMALL_STATE(22)] = 504,
  [SMALL_STATE(23)] = 516,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 540,
  [SMALL_STATE(26)] = 552,
  [SMALL_STATE(27)] = 571,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 609,
  [SMALL_STATE(30)] = 626,
  [SMALL_STATE(31)] = 643,
  [SMALL_STATE(32)] = 651,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 673,
  [SMALL_STATE(35)] = 687,
  [SMALL_STATE(36)] = 701,
  [SMALL_STATE(37)] = 715,
  [SMALL_STATE(38)] = 723,
  [SMALL_STATE(39)] = 737,
  [SMALL_STATE(40)] = 751,
  [SMALL_STATE(41)] = 759,
  [SMALL_STATE(42)] = 768,
  [SMALL_STATE(43)] = 779,
  [SMALL_STATE(44)] = 785,
  [SMALL_STATE(45)] = 793,
  [SMALL_STATE(46)] = 801,
  [SMALL_STATE(47)] = 805,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 813,
  [SMALL_STATE(50)] = 817,
  [SMALL_STATE(51)] = 821,
  [SMALL_STATE(52)] = 825,
  [SMALL_STATE(53)] = 829,
  [SMALL_STATE(54)] = 833,
  [SMALL_STATE(55)] = 837,
  [SMALL_STATE(56)] = 841,
  [SMALL_STATE(57)] = 845,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_string, 1, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(29),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_string_repeat1, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(21),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__glob_expression, 2, 0, 0), SHIFT_REPEAT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_choice, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__glob_expression, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_range, 5, 0, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, 0, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_choice_content, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_choice_content, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4, 0, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__character_choice_content_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_range, 3, 0, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__end_of_file = 0,
  ts_external_token__integer_range_start = 1,
  ts_external_token__key_name_trimmed = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__end_of_file] = sym__end_of_file,
  [ts_external_token__integer_range_start] = sym__integer_range_start,
  [ts_external_token__key_name_trimmed] = sym__key_name_trimmed,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__end_of_file] = true,
    [ts_external_token__integer_range_start] = true,
    [ts_external_token__key_name_trimmed] = true,
  },
  [2] = {
    [ts_external_token__key_name_trimmed] = true,
  },
  [3] = {
    [ts_external_token__end_of_file] = true,
  },
  [4] = {
    [ts_external_token__integer_range_start] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_editorconfig_external_scanner_create(void);
void tree_sitter_editorconfig_external_scanner_destroy(void *);
bool tree_sitter_editorconfig_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_editorconfig_external_scanner_serialize(void *, char *);
void tree_sitter_editorconfig_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_editorconfig(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__anything,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_editorconfig_external_scanner_create,
      tree_sitter_editorconfig_external_scanner_destroy,
      tree_sitter_editorconfig_external_scanner_scan,
      tree_sitter_editorconfig_external_scanner_serialize,
      tree_sitter_editorconfig_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
