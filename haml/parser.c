#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH = 1,
  anon_sym_SPACE = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_id = 5,
  sym_name = 6,
  sym_class = 7,
  sym_attribute_name = 8,
  anon_sym_EQ = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_quoted_attribute_value_token1 = 11,
  anon_sym_DQUOTE = 12,
  sym__text = 13,
  anon_sym_DASH = 14,
  anon_sym_POUND = 15,
  sym__newline = 16,
  sym__indent = 17,
  sym__dedent = 18,
  sym_ruby_attributes = 19,
  sym_source_file = 20,
  sym_tag = 21,
  sym__children = 22,
  sym__children_choice = 23,
  sym_html_attributes = 24,
  sym_attributes = 25,
  sym_attribute = 26,
  sym_quoted_attribute_value = 27,
  sym_text_content = 28,
  sym_ruby_block_output = 29,
  sym_ruby_block_run = 30,
  sym_ruby_interpolation = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_tag_repeat1 = 33,
  aux_sym__children_repeat1 = 34,
  aux_sym_html_attributes_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH] = "self_close_slash",
  [anon_sym_SPACE] = " ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_id] = "id",
  [sym_name] = "name",
  [sym_class] = "class",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [sym__text] = "_text",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "#",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_ruby_attributes] = "ruby_attributes",
  [sym_source_file] = "source_file",
  [sym_tag] = "tag",
  [sym__children] = "_children",
  [sym__children_choice] = "_children_choice",
  [sym_html_attributes] = "html_attributes",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_text_content] = "text_content",
  [sym_ruby_block_output] = "ruby_block_output",
  [sym_ruby_block_run] = "ruby_block_run",
  [sym_ruby_interpolation] = "ruby_interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__children_repeat1] = "_children_repeat1",
  [aux_sym_html_attributes_repeat1] = "html_attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_id] = sym_id,
  [sym_name] = sym_name,
  [sym_class] = sym_class,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__text] = sym__text,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_ruby_attributes] = sym_ruby_attributes,
  [sym_source_file] = sym_source_file,
  [sym_tag] = sym_tag,
  [sym__children] = sym__children,
  [sym__children_choice] = sym__children_choice,
  [sym_html_attributes] = sym_html_attributes,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_text_content] = sym_text_content,
  [sym_ruby_block_output] = sym_ruby_block_output,
  [sym_ruby_block_run] = sym_ruby_block_run,
  [sym_ruby_interpolation] = sym_ruby_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__children_repeat1] = aux_sym__children_repeat1,
  [aux_sym_html_attributes_repeat1] = aux_sym_html_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
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
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_ruby_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__children] = {
    .visible = false,
    .named = true,
  },
  [sym__children_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_html_attributes] = {
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
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text_content] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_run] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_attributes_repeat1] = {
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
  [9] = 7,
  [10] = 8,
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
  [28] = 16,
  [29] = 14,
  [30] = 15,
  [31] = 13,
  [32] = 27,
  [33] = 25,
  [34] = 24,
  [35] = 23,
  [36] = 21,
  [37] = 18,
  [38] = 20,
  [39] = 26,
  [40] = 17,
  [41] = 19,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 48,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 64,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 66,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '=') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ')') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '=') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10, .external_lex_state = 2},
  [3] = {.lex_state = 10, .external_lex_state = 2},
  [4] = {.lex_state = 10, .external_lex_state = 2},
  [5] = {.lex_state = 10, .external_lex_state = 3},
  [6] = {.lex_state = 10, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 4},
  [8] = {.lex_state = 2, .external_lex_state = 4},
  [9] = {.lex_state = 2, .external_lex_state = 4},
  [10] = {.lex_state = 2, .external_lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10, .external_lex_state = 5},
  [14] = {.lex_state = 10, .external_lex_state = 5},
  [15] = {.lex_state = 10, .external_lex_state = 5},
  [16] = {.lex_state = 10, .external_lex_state = 5},
  [17] = {.lex_state = 10, .external_lex_state = 2},
  [18] = {.lex_state = 10, .external_lex_state = 2},
  [19] = {.lex_state = 10, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 2},
  [21] = {.lex_state = 10, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 4},
  [23] = {.lex_state = 10, .external_lex_state = 2},
  [24] = {.lex_state = 10, .external_lex_state = 2},
  [25] = {.lex_state = 10, .external_lex_state = 2},
  [26] = {.lex_state = 10, .external_lex_state = 2},
  [27] = {.lex_state = 10, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 6},
  [29] = {.lex_state = 0, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 6},
  [31] = {.lex_state = 0, .external_lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2, .external_lex_state = 3},
  [43] = {.lex_state = 2, .external_lex_state = 3},
  [44] = {.lex_state = 2, .external_lex_state = 3},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 2, .external_lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 3},
  [48] = {.lex_state = 2, .external_lex_state = 3},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 2, .external_lex_state = 3},
  [51] = {.lex_state = 2, .external_lex_state = 3},
  [52] = {.lex_state = 2, .external_lex_state = 3},
  [53] = {.lex_state = 2, .external_lex_state = 3},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2, .external_lex_state = 3},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_ruby_attributes] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym_tag] = STATE(12),
    [sym_ruby_block_output] = STATE(12),
    [sym_ruby_block_run] = STATE(12),
    [sym_ruby_interpolation] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [sym_name] = ACTIONS(5),
    [sym_class] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      sym__text,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym__dedent,
    ACTIONS(15), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(3), 7,
      sym_tag,
      sym__children_choice,
      sym_text_content,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym__children_repeat1,
  [36] = 8,
    ACTIONS(34), 1,
      anon_sym_EQ,
    ACTIONS(37), 1,
      sym__text,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(46), 1,
      sym__newline,
    ACTIONS(29), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(3), 7,
      sym_tag,
      sym__children_choice,
      sym_text_content,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym__children_repeat1,
  [70] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      sym__text,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__newline,
    ACTIONS(49), 1,
      sym__dedent,
    ACTIONS(15), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(3), 7,
      sym_tag,
      sym__children_choice,
      sym_text_content,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym__children_repeat1,
  [106] = 7,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      sym__text,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(15), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(2), 7,
      sym_tag,
      sym__children_choice,
      sym_text_content,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym__children_repeat1,
  [136] = 7,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      sym__text,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(15), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(4), 7,
      sym_tag,
      sym__children_choice,
      sym_text_content,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym__children_repeat1,
  [166] = 11,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_SPACE,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym_ruby_attributes,
    STATE(10), 1,
      aux_sym_tag_repeat1,
    STATE(34), 1,
      sym_ruby_block_output,
    STATE(45), 1,
      sym_attributes,
    STATE(52), 1,
      sym_html_attributes,
    ACTIONS(61), 3,
      sym_id,
      sym_name,
      sym_class,
  [202] = 11,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_ruby_attributes,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_SPACE,
    ACTIONS(75), 1,
      sym__newline,
    STATE(20), 1,
      sym_ruby_block_output,
    STATE(22), 1,
      aux_sym_tag_repeat1,
    STATE(42), 1,
      sym_attributes,
    STATE(52), 1,
      sym_html_attributes,
    ACTIONS(73), 3,
      sym_id,
      sym_name,
      sym_class,
  [238] = 11,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_ruby_attributes,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(79), 1,
      anon_sym_SPACE,
    ACTIONS(83), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_tag_repeat1,
    STATE(24), 1,
      sym_ruby_block_output,
    STATE(43), 1,
      sym_attributes,
    STATE(52), 1,
      sym_html_attributes,
    ACTIONS(81), 3,
      sym_id,
      sym_name,
      sym_class,
  [274] = 11,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      sym_ruby_attributes,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_SPACE,
    ACTIONS(89), 1,
      sym__newline,
    STATE(22), 1,
      aux_sym_tag_repeat1,
    STATE(38), 1,
      sym_ruby_block_output,
    STATE(44), 1,
      sym_attributes,
    STATE(52), 1,
      sym_html_attributes,
    ACTIONS(73), 3,
      sym_id,
      sym_name,
      sym_class,
  [310] = 6,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(93), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(11), 5,
      sym_tag,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym_source_file_repeat1,
  [335] = 6,
    ACTIONS(7), 1,
      anon_sym_EQ,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 3,
      sym_id,
      sym_name,
      sym_class,
    STATE(11), 5,
      sym_tag,
      sym_ruby_block_output,
      sym_ruby_block_run,
      sym_ruby_interpolation,
      aux_sym_source_file_repeat1,
  [360] = 4,
    ACTIONS(111), 1,
      sym__indent,
    STATE(19), 1,
      sym__children,
    ACTIONS(107), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(109), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [381] = 4,
    ACTIONS(111), 1,
      sym__indent,
    STATE(20), 1,
      sym__children,
    ACTIONS(113), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(115), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [402] = 4,
    ACTIONS(111), 1,
      sym__indent,
    STATE(27), 1,
      sym__children,
    ACTIONS(117), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(119), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [423] = 4,
    ACTIONS(111), 1,
      sym__indent,
    STATE(25), 1,
      sym__children,
    ACTIONS(121), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(123), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [444] = 2,
    ACTIONS(125), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(127), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [459] = 2,
    ACTIONS(129), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(131), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [474] = 2,
    ACTIONS(133), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(135), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [489] = 2,
    ACTIONS(121), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(123), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [504] = 2,
    ACTIONS(137), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(139), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [519] = 4,
    STATE(22), 1,
      aux_sym_tag_repeat1,
    ACTIONS(141), 3,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_EQ,
    ACTIONS(143), 3,
      sym__newline,
      sym_ruby_attributes,
      anon_sym_SPACE,
    ACTIONS(145), 3,
      sym_id,
      sym_name,
      sym_class,
  [538] = 2,
    ACTIONS(148), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(150), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [553] = 2,
    ACTIONS(113), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(115), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [568] = 2,
    ACTIONS(117), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(119), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [583] = 2,
    ACTIONS(152), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(154), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [598] = 2,
    ACTIONS(107), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(109), 7,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      sym__text,
      anon_sym_DASH,
      anon_sym_POUND,
  [613] = 4,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__indent,
    STATE(33), 1,
      sym__children,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [631] = 4,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__indent,
    STATE(38), 1,
      sym__children,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [649] = 4,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__indent,
    STATE(32), 1,
      sym__children,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [667] = 4,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym__indent,
    STATE(41), 1,
      sym__children,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [685] = 2,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [697] = 2,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [709] = 2,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [721] = 2,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [733] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [745] = 2,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [757] = 2,
    ACTIONS(123), 1,
      anon_sym_POUND,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [769] = 2,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [781] = 2,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [793] = 2,
    ACTIONS(135), 1,
      anon_sym_POUND,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      sym_id,
      sym_name,
      sym_class,
      anon_sym_EQ,
      anon_sym_DASH,
  [805] = 5,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(158), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      anon_sym_SPACE,
    ACTIONS(162), 1,
      sym__newline,
    STATE(25), 1,
      sym_ruby_block_output,
  [821] = 5,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_SPACE,
    ACTIONS(75), 1,
      sym__newline,
    STATE(20), 1,
      sym_ruby_block_output,
  [837] = 5,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    ACTIONS(166), 1,
      anon_sym_SPACE,
    ACTIONS(168), 1,
      sym__newline,
    STATE(33), 1,
      sym_ruby_block_output,
  [853] = 5,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_SPACE,
    ACTIONS(89), 1,
      sym__newline,
    STATE(38), 1,
      sym_ruby_block_output,
  [869] = 2,
    ACTIONS(170), 2,
      anon_sym_SLASH,
      anon_sym_EQ,
    ACTIONS(172), 2,
      sym__newline,
      anon_sym_SPACE,
  [878] = 4,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_SPACE,
    ACTIONS(75), 1,
      sym__newline,
    STATE(20), 1,
      sym_ruby_block_output,
  [891] = 4,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_SPACE,
    ACTIONS(176), 1,
      sym__newline,
    STATE(27), 1,
      sym_ruby_block_output,
  [904] = 4,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(180), 1,
      sym_attribute_name,
    STATE(57), 1,
      aux_sym_html_attributes_repeat1,
    STATE(59), 1,
      sym_attribute,
  [917] = 4,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(160), 1,
      anon_sym_SPACE,
    ACTIONS(162), 1,
      sym__newline,
    STATE(25), 1,
      sym_ruby_block_output,
  [930] = 4,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(166), 1,
      anon_sym_SPACE,
    ACTIONS(168), 1,
      sym__newline,
    STATE(33), 1,
      sym_ruby_block_output,
  [943] = 2,
    ACTIONS(182), 2,
      anon_sym_SLASH,
      anon_sym_EQ,
    ACTIONS(184), 2,
      sym__newline,
      anon_sym_SPACE,
  [952] = 4,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_SPACE,
    ACTIONS(89), 1,
      sym__newline,
    STATE(38), 1,
      sym_ruby_block_output,
  [965] = 4,
    ACTIONS(180), 1,
      sym_attribute_name,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_html_attributes_repeat1,
    STATE(59), 1,
      sym_attribute,
  [978] = 3,
    ACTIONS(188), 1,
      anon_sym_SPACE,
    ACTIONS(192), 1,
      anon_sym_EQ,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [989] = 2,
    ACTIONS(194), 2,
      anon_sym_SLASH,
      anon_sym_EQ,
    ACTIONS(196), 2,
      sym__newline,
      anon_sym_SPACE,
  [998] = 4,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      sym_attribute_name,
    STATE(57), 1,
      aux_sym_html_attributes_repeat1,
    STATE(59), 1,
      sym_attribute,
  [1011] = 4,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(203), 1,
      anon_sym_SPACE,
    ACTIONS(205), 1,
      sym__newline,
    STATE(32), 1,
      sym_ruby_block_output,
  [1024] = 2,
    ACTIONS(207), 1,
      anon_sym_SPACE,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1032] = 2,
    ACTIONS(211), 1,
      anon_sym_SPACE,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1040] = 2,
    ACTIONS(215), 1,
      anon_sym_SPACE,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1048] = 3,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_quoted_attribute_value,
  [1058] = 2,
    ACTIONS(223), 1,
      anon_sym_SPACE,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1066] = 2,
    ACTIONS(227), 1,
      sym__text,
    STATE(20), 1,
      sym_text_content,
  [1073] = 2,
    ACTIONS(229), 1,
      sym__text,
    STATE(32), 1,
      sym_text_content,
  [1080] = 2,
    ACTIONS(229), 1,
      sym__text,
    STATE(33), 1,
      sym_text_content,
  [1087] = 1,
    ACTIONS(198), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1092] = 2,
    ACTIONS(227), 1,
      sym__text,
    STATE(27), 1,
      sym_text_content,
  [1099] = 2,
    ACTIONS(229), 1,
      sym__text,
    STATE(38), 1,
      sym_text_content,
  [1106] = 2,
    ACTIONS(227), 1,
      sym__text,
    STATE(19), 1,
      sym_text_content,
  [1113] = 2,
    ACTIONS(229), 1,
      sym__text,
    STATE(41), 1,
      sym_text_content,
  [1120] = 2,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      aux_sym_quoted_attribute_value_token1,
  [1127] = 2,
    ACTIONS(227), 1,
      sym__text,
    STATE(25), 1,
      sym_text_content,
  [1134] = 2,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_quoted_attribute_value_token1,
  [1141] = 1,
    ACTIONS(237), 1,
      sym__text,
  [1145] = 1,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
  [1149] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1153] = 1,
    ACTIONS(243), 1,
      sym__text,
  [1157] = 1,
    ACTIONS(245), 1,
      sym_ruby_attributes,
  [1161] = 1,
    ACTIONS(247), 1,
      sym__text,
  [1165] = 1,
    ACTIONS(249), 1,
      sym_ruby_attributes,
  [1169] = 1,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
  [1173] = 1,
    ACTIONS(251), 1,
      sym__text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 402,
  [SMALL_STATE(16)] = 423,
  [SMALL_STATE(17)] = 444,
  [SMALL_STATE(18)] = 459,
  [SMALL_STATE(19)] = 474,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 504,
  [SMALL_STATE(22)] = 519,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 568,
  [SMALL_STATE(26)] = 583,
  [SMALL_STATE(27)] = 598,
  [SMALL_STATE(28)] = 613,
  [SMALL_STATE(29)] = 631,
  [SMALL_STATE(30)] = 649,
  [SMALL_STATE(31)] = 667,
  [SMALL_STATE(32)] = 685,
  [SMALL_STATE(33)] = 697,
  [SMALL_STATE(34)] = 709,
  [SMALL_STATE(35)] = 721,
  [SMALL_STATE(36)] = 733,
  [SMALL_STATE(37)] = 745,
  [SMALL_STATE(38)] = 757,
  [SMALL_STATE(39)] = 769,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 793,
  [SMALL_STATE(42)] = 805,
  [SMALL_STATE(43)] = 821,
  [SMALL_STATE(44)] = 837,
  [SMALL_STATE(45)] = 853,
  [SMALL_STATE(46)] = 869,
  [SMALL_STATE(47)] = 878,
  [SMALL_STATE(48)] = 891,
  [SMALL_STATE(49)] = 904,
  [SMALL_STATE(50)] = 917,
  [SMALL_STATE(51)] = 930,
  [SMALL_STATE(52)] = 943,
  [SMALL_STATE(53)] = 952,
  [SMALL_STATE(54)] = 965,
  [SMALL_STATE(55)] = 978,
  [SMALL_STATE(56)] = 989,
  [SMALL_STATE(57)] = 998,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1024,
  [SMALL_STATE(60)] = 1032,
  [SMALL_STATE(61)] = 1040,
  [SMALL_STATE(62)] = 1048,
  [SMALL_STATE(63)] = 1058,
  [SMALL_STATE(64)] = 1066,
  [SMALL_STATE(65)] = 1073,
  [SMALL_STATE(66)] = 1080,
  [SMALL_STATE(67)] = 1087,
  [SMALL_STATE(68)] = 1092,
  [SMALL_STATE(69)] = 1099,
  [SMALL_STATE(70)] = 1106,
  [SMALL_STATE(71)] = 1113,
  [SMALL_STATE(72)] = 1120,
  [SMALL_STATE(73)] = 1127,
  [SMALL_STATE(74)] = 1134,
  [SMALL_STATE(75)] = 1141,
  [SMALL_STATE(76)] = 1145,
  [SMALL_STATE(77)] = 1149,
  [SMALL_STATE(78)] = 1153,
  [SMALL_STATE(79)] = 1157,
  [SMALL_STATE(80)] = 1161,
  [SMALL_STATE(81)] = 1165,
  [SMALL_STATE(82)] = 1169,
  [SMALL_STATE(83)] = 1173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__children, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__children_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__children_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__children_repeat1, 2), SHIFT_REPEAT(75),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__children_repeat1, 2), SHIFT_REPEAT(17),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__children_repeat1, 2), SHIFT_REPEAT(80),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__children_repeat1, 2), SHIFT_REPEAT(79),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__children_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_content, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_content, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_interpolation, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_interpolation, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_run, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_block_run, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_block_output, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__children, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__children, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_attributes, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attributes, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_attributes, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attributes, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_attributes_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_html_attributes_repeat1, 2), SHIFT_REPEAT(55),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_attributes_repeat1, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_ruby_attributes = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_ruby_attributes] = sym_ruby_attributes,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_ruby_attributes] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
    [ts_external_token_ruby_attributes] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
  },
  [7] = {
    [ts_external_token_ruby_attributes] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_haml_external_scanner_create(void);
void tree_sitter_haml_external_scanner_destroy(void *);
bool tree_sitter_haml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_haml_external_scanner_serialize(void *, char *);
void tree_sitter_haml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_haml() {
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
      tree_sitter_haml_external_scanner_create,
      tree_sitter_haml_external_scanner_destroy,
      tree_sitter_haml_external_scanner_scan,
      tree_sitter_haml_external_scanner_serialize,
      tree_sitter_haml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
