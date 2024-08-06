#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__alpha_word = 1,
  sym_tag = 2,
  sym_feature_keyword = 3,
  sym_title = 4,
  aux_sym__multiline_text_token1 = 5,
  aux_sym__multiline_text_token2 = 6,
  anon_sym_LF = 7,
  sym_rule_keyword = 8,
  sym_background_keyword = 9,
  sym_scenario_keyword = 10,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 11,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 12,
  anon_sym_PIPE = 13,
  sym__table_word = 14,
  sym_given_keyword = 15,
  sym_when_keyword = 16,
  sym_then_keyword = 17,
  sym_and_keyword = 18,
  sym_but_keyword = 19,
  sym_asterisk_keyword = 20,
  sym_step_definition = 21,
  sym_comment = 22,
  sym_feature = 23,
  sym_description = 24,
  sym__multiline_text = 25,
  sym_rules = 26,
  sym_rule = 27,
  sym_scenarios = 28,
  sym_background = 29,
  sym_scenario = 30,
  sym_steps = 31,
  sym_given_steps = 32,
  sym_then_steps = 33,
  sym_given_step = 34,
  sym_when_step = 35,
  sym_then_step = 36,
  sym_additional_step = 37,
  sym_step_arguments = 38,
  sym_doc_string = 39,
  sym_doc_string_content_type = 40,
  sym_doc_string_content = 41,
  sym_doc_string_delimiter = 42,
  sym_data_table = 43,
  sym__data_table_line = 44,
  sym_additional_step_keyword = 45,
  aux_sym__multiline_text_repeat1 = 46,
  aux_sym_rules_repeat1 = 47,
  aux_sym_scenarios_repeat1 = 48,
  aux_sym_given_steps_repeat1 = 49,
  aux_sym_then_steps_repeat1 = 50,
  aux_sym_data_table_repeat1 = 51,
  aux_sym__data_table_line_repeat1 = 52,
  aux_sym__data_table_line_repeat2 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alpha_word] = "_alpha_word",
  [sym_tag] = "tag",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym__multiline_text_token1] = "_multiline_text_token1",
  [aux_sym__multiline_text_token2] = "_multiline_text_token2",
  [anon_sym_LF] = "\n",
  [sym_rule_keyword] = "rule_keyword",
  [sym_background_keyword] = "background_keyword",
  [sym_scenario_keyword] = "scenario_keyword",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_PIPE] = "|",
  [sym__table_word] = "_table_word",
  [sym_given_keyword] = "given_keyword",
  [sym_when_keyword] = "when_keyword",
  [sym_then_keyword] = "then_keyword",
  [sym_and_keyword] = "and_keyword",
  [sym_but_keyword] = "but_keyword",
  [sym_asterisk_keyword] = "asterisk_keyword",
  [sym_step_definition] = "step_definition",
  [sym_comment] = "comment",
  [sym_feature] = "feature",
  [sym_description] = "description",
  [sym__multiline_text] = "_multiline_text",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_scenarios] = "scenarios",
  [sym_background] = "background",
  [sym_scenario] = "scenario",
  [sym_steps] = "steps",
  [sym_given_steps] = "given_steps",
  [sym_then_steps] = "then_steps",
  [sym_given_step] = "given_step",
  [sym_when_step] = "when_step",
  [sym_then_step] = "then_step",
  [sym_additional_step] = "additional_step",
  [sym_step_arguments] = "step_arguments",
  [sym_doc_string] = "doc_string",
  [sym_doc_string_content_type] = "doc_string_content_type",
  [sym_doc_string_content] = "doc_string_content",
  [sym_doc_string_delimiter] = "doc_string_delimiter",
  [sym_data_table] = "data_table",
  [sym__data_table_line] = "_data_table_line",
  [sym_additional_step_keyword] = "additional_step_keyword",
  [aux_sym__multiline_text_repeat1] = "_multiline_text_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_scenarios_repeat1] = "scenarios_repeat1",
  [aux_sym_given_steps_repeat1] = "given_steps_repeat1",
  [aux_sym_then_steps_repeat1] = "then_steps_repeat1",
  [aux_sym_data_table_repeat1] = "data_table_repeat1",
  [aux_sym__data_table_line_repeat1] = "_data_table_line_repeat1",
  [aux_sym__data_table_line_repeat2] = "_data_table_line_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__alpha_word] = sym__alpha_word,
  [sym_tag] = sym_tag,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_title] = sym_title,
  [aux_sym__multiline_text_token1] = aux_sym__multiline_text_token1,
  [aux_sym__multiline_text_token2] = aux_sym__multiline_text_token2,
  [anon_sym_LF] = anon_sym_LF,
  [sym_rule_keyword] = sym_rule_keyword,
  [sym_background_keyword] = sym_background_keyword,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__table_word] = sym__table_word,
  [sym_given_keyword] = sym_given_keyword,
  [sym_when_keyword] = sym_when_keyword,
  [sym_then_keyword] = sym_then_keyword,
  [sym_and_keyword] = sym_and_keyword,
  [sym_but_keyword] = sym_but_keyword,
  [sym_asterisk_keyword] = sym_asterisk_keyword,
  [sym_step_definition] = sym_step_definition,
  [sym_comment] = sym_comment,
  [sym_feature] = sym_feature,
  [sym_description] = sym_description,
  [sym__multiline_text] = sym__multiline_text,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_scenarios] = sym_scenarios,
  [sym_background] = sym_background,
  [sym_scenario] = sym_scenario,
  [sym_steps] = sym_steps,
  [sym_given_steps] = sym_given_steps,
  [sym_then_steps] = sym_then_steps,
  [sym_given_step] = sym_given_step,
  [sym_when_step] = sym_when_step,
  [sym_then_step] = sym_then_step,
  [sym_additional_step] = sym_additional_step,
  [sym_step_arguments] = sym_step_arguments,
  [sym_doc_string] = sym_doc_string,
  [sym_doc_string_content_type] = sym_doc_string_content_type,
  [sym_doc_string_content] = sym_doc_string_content,
  [sym_doc_string_delimiter] = sym_doc_string_delimiter,
  [sym_data_table] = sym_data_table,
  [sym__data_table_line] = sym__data_table_line,
  [sym_additional_step_keyword] = sym_additional_step_keyword,
  [aux_sym__multiline_text_repeat1] = aux_sym__multiline_text_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_scenarios_repeat1] = aux_sym_scenarios_repeat1,
  [aux_sym_given_steps_repeat1] = aux_sym_given_steps_repeat1,
  [aux_sym_then_steps_repeat1] = aux_sym_then_steps_repeat1,
  [aux_sym_data_table_repeat1] = aux_sym_data_table_repeat1,
  [aux_sym__data_table_line_repeat1] = aux_sym__data_table_line_repeat1,
  [aux_sym__data_table_line_repeat2] = aux_sym__data_table_line_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_word] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multiline_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_rule_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_background_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__table_word] = {
    .visible = false,
    .named = true,
  },
  [sym_given_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_when_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_then_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_and_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_but_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_step_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_text] = {
    .visible = false,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_scenarios] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_given_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_then_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_given_step] = {
    .visible = true,
    .named = true,
  },
  [sym_when_step] = {
    .visible = true,
    .named = true,
  },
  [sym_then_step] = {
    .visible = true,
    .named = true,
  },
  [sym_additional_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_content_type] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_data_table] = {
    .visible = true,
    .named = true,
  },
  [sym__data_table_line] = {
    .visible = false,
    .named = true,
  },
  [sym_additional_step_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multiline_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenarios_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_given_steps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_then_steps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__data_table_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__data_table_line_repeat2] = {
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
  [4] = 3,
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 3,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 13,
  [23] = 23,
  [24] = 16,
  [25] = 12,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 16,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 12,
  [37] = 20,
  [38] = 38,
  [39] = 39,
  [40] = 21,
  [41] = 41,
  [42] = 12,
  [43] = 43,
  [44] = 16,
  [45] = 38,
  [46] = 32,
  [47] = 34,
  [48] = 48,
  [49] = 26,
  [50] = 48,
  [51] = 20,
  [52] = 21,
  [53] = 43,
  [54] = 20,
  [55] = 55,
  [56] = 26,
  [57] = 21,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 26,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 61,
  [71] = 71,
  [72] = 66,
  [73] = 59,
  [74] = 74,
  [75] = 16,
  [76] = 69,
  [77] = 71,
  [78] = 78,
  [79] = 65,
  [80] = 59,
  [81] = 61,
  [82] = 12,
  [83] = 61,
  [84] = 59,
  [85] = 85,
  [86] = 86,
  [87] = 20,
  [88] = 21,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 26,
  [102] = 102,
  [103] = 103,
  [104] = 99,
  [105] = 95,
  [106] = 94,
  [107] = 107,
  [108] = 108,
  [109] = 98,
  [110] = 110,
  [111] = 111,
  [112] = 110,
  [113] = 113,
  [114] = 99,
  [115] = 94,
  [116] = 99,
  [117] = 94,
  [118] = 95,
  [119] = 94,
  [120] = 95,
  [121] = 99,
  [122] = 122,
  [123] = 39,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 129,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 129,
  [140] = 129,
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 143,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 137,
  [155] = 130,
  [156] = 138,
  [157] = 157,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '#', 167,
        '@', 97,
        'E', 94,
        'G', 90,
        'R', 92,
        'S', 86,
        'W', 88,
        '|', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('!' <= lookahead && lookahead <= '?') ||
          ('[' <= lookahead && lookahead <= '_') ||
          ('{' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '#') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '`') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '#') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '#', 167,
        '*', 126,
        '@', 135,
        'A', 131,
        'B', 132,
        'E', 134,
        'G', 130,
        'S', 127,
        '|', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'B') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(130);
      if (lookahead == 'W') ADVANCE(129);
      if (lookahead == '|') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(125);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == 'G') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == 'T') ADVANCE(128);
      if (lookahead == '|') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(125);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '|') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == '`') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 15,
        '#', 167,
        '*', 10,
        '@', 75,
        'A', 56,
        'B', 32,
        'E', 74,
        'F', 41,
        'G', 50,
        'R', 70,
        'S', 36,
        'T', 48,
        'W', 49,
        '`', 30,
        '|', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77);
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '#', 167,
        '*', 126,
        '@', 135,
        'A', 131,
        'B', 132,
        'E', 134,
        'R', 133,
        'S', 127,
        'T', 128,
        '|', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(125);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '#', 167,
        '*', 126,
        '@', 135,
        'A', 131,
        'B', 132,
        'E', 134,
        'S', 127,
        'T', 128,
        '|', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '}') ||
          lookahead == 0x20ac) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'c') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'h') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'i') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'u') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'x') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '`') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(98);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(98);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '`') ADVANCE(29);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__table_word);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__table_word);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(158);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(164);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(159);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'i') ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'm') ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'p') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'v') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 77},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 77},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 78},
  [13] = {.lex_state = 77},
  [14] = {.lex_state = 77},
  [15] = {.lex_state = 77},
  [16] = {.lex_state = 78},
  [17] = {.lex_state = 77},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 79},
  [25] = {.lex_state = 79},
  [26] = {.lex_state = 78},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 77},
  [32] = {.lex_state = 77},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 77},
  [46] = {.lex_state = 77},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 79},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 77},
  [69] = {.lex_state = 77},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 77},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 77},
  [78] = {.lex_state = 77},
  [79] = {.lex_state = 77},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 77},
  [98] = {.lex_state = 77},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 77},
  [109] = {.lex_state = 77},
  [110] = {.lex_state = 77},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 77},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 77},
  [125] = {.lex_state = 77},
  [126] = {.lex_state = 77},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 77},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 77},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 77},
  [153] = {.lex_state = 77},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 77},
  [157] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__alpha_word] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [aux_sym__multiline_text_token1] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__table_word] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_feature] = STATE(150),
    [sym_tag] = ACTIONS(5),
    [sym_feature_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(21), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    ACTIONS(9), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [35] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(21), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    ACTIONS(15), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [70] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(40), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(15), 7,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [104] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(40), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(9), 7,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(52), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(15), 6,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(52), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(21), 6,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [204] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_tag,
    ACTIONS(25), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(27), 1,
      sym_rule_keyword,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    STATE(18), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(90), 1,
      sym_background,
    STATE(74), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(76), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(135), 2,
      sym_rules,
      sym_scenarios,
  [244] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_tag,
    ACTIONS(25), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(27), 1,
      sym_rule_keyword,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    STATE(23), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(90), 1,
      sym_background,
    STATE(74), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(76), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(131), 2,
      sym_rules,
      sym_scenarios,
  [284] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(57), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(21), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [316] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      sym_step_arguments,
    STATE(96), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(57), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(15), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__table_word,
    STATE(12), 1,
      aux_sym__data_table_line_repeat2,
    STATE(99), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_then_keyword,
    STATE(140), 1,
      sym_additional_step_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(14), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_then_keyword,
    STATE(140), 1,
      sym_additional_step_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(15), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_then_keyword,
    STATE(140), 1,
      sym_additional_step_keyword,
    ACTIONS(53), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(15), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym__table_word,
    STATE(12), 1,
      aux_sym__data_table_line_repeat2,
    STATE(99), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_then_keyword,
    STATE(139), 1,
      sym_additional_step_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
    STATE(19), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [499] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_tag,
    ACTIONS(27), 1,
      sym_rule_keyword,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    STATE(90), 1,
      sym_background,
    STATE(74), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(76), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(131), 2,
      sym_rules,
      sym_scenarios,
  [530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_then_keyword,
    STATE(139), 1,
      sym_additional_step_keyword,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
    ACTIONS(53), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(19), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    STATE(20), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    STATE(20), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_then_keyword,
    STATE(139), 1,
      sym_additional_step_keyword,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(17), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [622] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_tag,
    ACTIONS(27), 1,
      sym_rule_keyword,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    STATE(90), 1,
      sym_background,
    STATE(74), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(76), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(145), 2,
      sym_rules,
      sym_scenarios,
  [653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym__table_word,
    STATE(25), 1,
      aux_sym__data_table_line_repeat2,
    STATE(114), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__table_word,
    STATE(25), 1,
      aux_sym__data_table_line_repeat2,
    STATE(114), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__table_word,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__table_word,
    STATE(36), 1,
      aux_sym__data_table_line_repeat2,
    STATE(104), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(56), 7,
      sym_tag,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [787] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(89), 1,
      sym_then_keyword,
    STATE(96), 1,
      sym_doc_string_delimiter,
    STATE(153), 1,
      sym_step_arguments,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(28), 2,
      sym_doc_string,
      sym_data_table,
    STATE(88), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
  [815] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_given_keyword,
    STATE(129), 1,
      sym_additional_step_keyword,
    ACTIONS(91), 2,
      sym_tag,
      sym_scenario_keyword,
    ACTIONS(96), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(32), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [839] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(99), 1,
      sym_tag,
    ACTIONS(101), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    STATE(58), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(91), 1,
      sym_background,
    STATE(100), 1,
      sym_scenarios,
    STATE(69), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_given_keyword,
    STATE(129), 1,
      sym_additional_step_keyword,
    ACTIONS(105), 2,
      sym_tag,
      sym_scenario_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(38), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [895] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(99), 1,
      sym_tag,
    ACTIONS(101), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    STATE(62), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(91), 1,
      sym_background,
    STATE(113), 1,
      sym_scenarios,
    STATE(69), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__table_word,
    STATE(36), 1,
      aux_sym__data_table_line_repeat2,
    STATE(104), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(35), 7,
      sym_tag,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_given_keyword,
    STATE(129), 1,
      sym_additional_step_keyword,
    ACTIONS(115), 2,
      sym_tag,
      sym_scenario_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(32), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__table_word,
    STATE(42), 1,
      aux_sym__data_table_line_repeat2,
    STATE(116), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(35), 6,
      anon_sym_PIPE,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1066] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(68), 1,
      sym__multiline_text,
    STATE(72), 1,
      sym_description,
    STATE(93), 1,
      sym_steps,
    STATE(109), 1,
      sym_when_step,
    STATE(126), 1,
      sym_given_steps,
  [1097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__table_word,
    STATE(42), 1,
      aux_sym__data_table_line_repeat2,
    STATE(116), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(56), 6,
      anon_sym_PIPE,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_when_keyword,
    ACTIONS(126), 1,
      sym_given_keyword,
    STATE(134), 1,
      sym_additional_step_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(46), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [1141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_when_keyword,
    ACTIONS(132), 1,
      sym_given_keyword,
    STATE(134), 1,
      sym_additional_step_keyword,
    ACTIONS(96), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(46), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [1164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_when_keyword,
    ACTIONS(126), 1,
      sym_given_keyword,
    STATE(134), 1,
      sym_additional_step_keyword,
    ACTIONS(44), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(45), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [1187] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(64), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(89), 1,
      sym_steps,
    STATE(109), 1,
      sym_when_step,
    STATE(126), 1,
      sym_given_steps,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__table_word,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1235] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(67), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(89), 1,
      sym_steps,
    STATE(98), 1,
      sym_when_step,
    STATE(124), 1,
      sym_given_steps,
  [1266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    STATE(51), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(65), 6,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    STATE(51), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(70), 6,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1304] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(66), 1,
      sym_description,
    STATE(68), 1,
      sym__multiline_text,
    STATE(93), 1,
      sym_steps,
    STATE(98), 1,
      sym_when_step,
    STATE(124), 1,
      sym_given_steps,
  [1335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    STATE(54), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(65), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__table_word,
    ACTIONS(35), 7,
      sym_tag,
      sym_scenario_keyword,
      anon_sym_PIPE,
      sym_given_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    STATE(54), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
    ACTIONS(70), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1401] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(99), 1,
      sym_tag,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    STATE(91), 1,
      sym_background,
    STATE(113), 1,
      sym_scenarios,
    STATE(69), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1424] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(145), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(143), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 7,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1454] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(154), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(152), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [1471] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_background_keyword,
    ACTIONS(99), 1,
      sym_tag,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    STATE(91), 1,
      sym_background,
    STATE(102), 1,
      sym_scenarios,
    STATE(69), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__table_word,
    ACTIONS(35), 6,
      anon_sym_PIPE,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [1509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(86), 1,
      sym_steps,
    STATE(109), 1,
      sym_when_step,
    STATE(126), 1,
      sym_given_steps,
  [1531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_tag,
    ACTIONS(161), 1,
      sym_scenario_keyword,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(65), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(89), 1,
      sym_steps,
    STATE(98), 1,
      sym_when_step,
    STATE(124), 1,
      sym_given_steps,
  [1571] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(86), 1,
      sym_steps,
    STATE(98), 1,
      sym_when_step,
    STATE(124), 1,
      sym_given_steps,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
  [1605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    ACTIONS(168), 1,
      sym_tag,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(65), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1623] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(171), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(152), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [1639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    ACTIONS(175), 1,
      sym_tag,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(65), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1657] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_given_keyword,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(47), 1,
      sym_given_step,
    STATE(89), 1,
      sym_steps,
    STATE(109), 1,
      sym_when_step,
    STATE(126), 1,
      sym_given_steps,
  [1679] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(178), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(143), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [1695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_rule_keyword,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_tag,
    STATE(78), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__table_word,
    STATE(82), 1,
      aux_sym__data_table_line_repeat2,
    STATE(121), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(56), 2,
      anon_sym_PIPE,
      sym_then_keyword,
  [1729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_tag,
    STATE(79), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_tag,
    STATE(79), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_tag,
    ACTIONS(194), 1,
      sym_rule_keyword,
    STATE(78), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym_tag,
    ACTIONS(200), 1,
      sym_scenario_keyword,
    STATE(79), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1797] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(143), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(203), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1812] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(152), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(206), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__table_word,
    STATE(82), 1,
      aux_sym__data_table_line_repeat2,
    STATE(121), 1,
      aux_sym__data_table_line_repeat1,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      sym_then_keyword,
  [1844] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(152), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(211), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1859] = 4,
    ACTIONS(148), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(143), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(213), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_then_keyword,
    ACTIONS(220), 1,
      anon_sym_PIPE,
    STATE(87), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
  [1908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_then_keyword,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(87), 2,
      sym__data_table_line,
      aux_sym_data_table_repeat1,
  [1922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_scenario_keyword,
    ACTIONS(187), 1,
      sym_tag,
    STATE(77), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_tag,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    STATE(71), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__table_word,
    STATE(44), 1,
      aux_sym__data_table_line_repeat2,
    STATE(116), 1,
      aux_sym__data_table_line_repeat1,
  [1993] = 3,
    ACTIONS(148), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(231), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [2004] = 4,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__alpha_word,
    ACTIONS(235), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym_doc_string_content_type,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym_doc_string_delimiter,
    ACTIONS(237), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [2028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_then_keyword,
    STATE(13), 1,
      sym_then_step,
    STATE(85), 1,
      sym_then_steps,
  [2041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      sym__table_word,
    STATE(107), 1,
      aux_sym__data_table_line_repeat1,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [2063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__table_word,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      sym_then_keyword,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_doc_string_delimiter,
    ACTIONS(237), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [2094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__table_word,
    ACTIONS(247), 1,
      anon_sym_PIPE,
    STATE(107), 1,
      aux_sym__data_table_line_repeat1,
  [2107] = 3,
    ACTIONS(148), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(249), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [2118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__table_word,
    STATE(16), 1,
      aux_sym__data_table_line_repeat2,
    STATE(99), 1,
      aux_sym__data_table_line_repeat1,
  [2131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      sym__table_word,
    STATE(107), 1,
      aux_sym__data_table_line_repeat1,
  [2144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_given_keyword,
    STATE(34), 1,
      sym_given_step,
    STATE(125), 1,
      sym_given_steps,
  [2157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_then_keyword,
    STATE(22), 1,
      sym_then_step,
    STATE(85), 1,
      sym_then_steps,
  [2170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_then_keyword,
    STATE(22), 1,
      sym_then_step,
    STATE(92), 1,
      sym_then_steps,
  [2183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym__multiline_text_token1,
    STATE(97), 1,
      sym_doc_string_content,
    STATE(127), 1,
      sym__multiline_text,
  [2196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_then_keyword,
    STATE(13), 1,
      sym_then_step,
    STATE(92), 1,
      sym_then_steps,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__table_word,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    STATE(107), 1,
      aux_sym__data_table_line_repeat1,
  [2231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__table_word,
    STATE(30), 1,
      aux_sym__data_table_line_repeat2,
    STATE(104), 1,
      aux_sym__data_table_line_repeat1,
  [2244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__table_word,
    ACTIONS(266), 1,
      anon_sym_PIPE,
    STATE(107), 1,
      aux_sym__data_table_line_repeat1,
  [2257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__table_word,
    STATE(24), 1,
      aux_sym__data_table_line_repeat2,
    STATE(114), 1,
      aux_sym__data_table_line_repeat1,
  [2270] = 3,
    ACTIONS(148), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(270), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [2281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym__table_word,
    STATE(75), 1,
      aux_sym__data_table_line_repeat2,
    STATE(121), 1,
      aux_sym__data_table_line_repeat1,
  [2294] = 3,
    ACTIONS(148), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(274), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [2305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__table_word,
    ACTIONS(276), 1,
      anon_sym_PIPE,
    STATE(107), 1,
      aux_sym__data_table_line_repeat1,
  [2318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym__multiline_text_token1,
    STATE(103), 1,
      sym_doc_string_content,
    STATE(127), 1,
      sym__multiline_text,
  [2331] = 3,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__alpha_word,
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(112), 1,
      sym_when_step,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      sym_tag,
      sym_scenario_keyword,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_when_keyword,
    STATE(110), 1,
      sym_when_step,
  [2369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_rule_keyword,
    ACTIONS(286), 1,
      sym_scenario_keyword,
  [2387] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_step_definition,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_title,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_title,
  [2415] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
  [2422] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_step_definition,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
  [2436] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_step_definition,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_title,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_scenario_keyword,
  [2457] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_step_definition,
  [2464] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_step_definition,
  [2471] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_step_definition,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_title,
  [2485] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_step_definition,
  [2492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_rule_keyword,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [2506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_title,
  [2513] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_step_definition,
  [2520] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_step_definition,
  [2527] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_step_definition,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_title,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_feature_keyword,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_then_keyword,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_title,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_title,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_scenario_keyword,
  [2583] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 372,
  [SMALL_STATE(14)] = 398,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 450,
  [SMALL_STATE(17)] = 474,
  [SMALL_STATE(18)] = 499,
  [SMALL_STATE(19)] = 530,
  [SMALL_STATE(20)] = 555,
  [SMALL_STATE(21)] = 576,
  [SMALL_STATE(22)] = 597,
  [SMALL_STATE(23)] = 622,
  [SMALL_STATE(24)] = 653,
  [SMALL_STATE(25)] = 676,
  [SMALL_STATE(26)] = 699,
  [SMALL_STATE(27)] = 717,
  [SMALL_STATE(28)] = 733,
  [SMALL_STATE(29)] = 749,
  [SMALL_STATE(30)] = 765,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 815,
  [SMALL_STATE(33)] = 839,
  [SMALL_STATE(34)] = 871,
  [SMALL_STATE(35)] = 895,
  [SMALL_STATE(36)] = 927,
  [SMALL_STATE(37)] = 949,
  [SMALL_STATE(38)] = 969,
  [SMALL_STATE(39)] = 993,
  [SMALL_STATE(40)] = 1009,
  [SMALL_STATE(41)] = 1029,
  [SMALL_STATE(42)] = 1045,
  [SMALL_STATE(43)] = 1066,
  [SMALL_STATE(44)] = 1097,
  [SMALL_STATE(45)] = 1118,
  [SMALL_STATE(46)] = 1141,
  [SMALL_STATE(47)] = 1164,
  [SMALL_STATE(48)] = 1187,
  [SMALL_STATE(49)] = 1218,
  [SMALL_STATE(50)] = 1235,
  [SMALL_STATE(51)] = 1266,
  [SMALL_STATE(52)] = 1285,
  [SMALL_STATE(53)] = 1304,
  [SMALL_STATE(54)] = 1335,
  [SMALL_STATE(55)] = 1353,
  [SMALL_STATE(56)] = 1367,
  [SMALL_STATE(57)] = 1383,
  [SMALL_STATE(58)] = 1401,
  [SMALL_STATE(59)] = 1424,
  [SMALL_STATE(60)] = 1441,
  [SMALL_STATE(61)] = 1454,
  [SMALL_STATE(62)] = 1471,
  [SMALL_STATE(63)] = 1494,
  [SMALL_STATE(64)] = 1509,
  [SMALL_STATE(65)] = 1531,
  [SMALL_STATE(66)] = 1549,
  [SMALL_STATE(67)] = 1571,
  [SMALL_STATE(68)] = 1593,
  [SMALL_STATE(69)] = 1605,
  [SMALL_STATE(70)] = 1623,
  [SMALL_STATE(71)] = 1639,
  [SMALL_STATE(72)] = 1657,
  [SMALL_STATE(73)] = 1679,
  [SMALL_STATE(74)] = 1695,
  [SMALL_STATE(75)] = 1712,
  [SMALL_STATE(76)] = 1729,
  [SMALL_STATE(77)] = 1746,
  [SMALL_STATE(78)] = 1763,
  [SMALL_STATE(79)] = 1780,
  [SMALL_STATE(80)] = 1797,
  [SMALL_STATE(81)] = 1812,
  [SMALL_STATE(82)] = 1827,
  [SMALL_STATE(83)] = 1844,
  [SMALL_STATE(84)] = 1859,
  [SMALL_STATE(85)] = 1874,
  [SMALL_STATE(86)] = 1884,
  [SMALL_STATE(87)] = 1894,
  [SMALL_STATE(88)] = 1908,
  [SMALL_STATE(89)] = 1922,
  [SMALL_STATE(90)] = 1932,
  [SMALL_STATE(91)] = 1946,
  [SMALL_STATE(92)] = 1960,
  [SMALL_STATE(93)] = 1970,
  [SMALL_STATE(94)] = 1980,
  [SMALL_STATE(95)] = 1993,
  [SMALL_STATE(96)] = 2004,
  [SMALL_STATE(97)] = 2017,
  [SMALL_STATE(98)] = 2028,
  [SMALL_STATE(99)] = 2041,
  [SMALL_STATE(100)] = 2054,
  [SMALL_STATE(101)] = 2063,
  [SMALL_STATE(102)] = 2074,
  [SMALL_STATE(103)] = 2083,
  [SMALL_STATE(104)] = 2094,
  [SMALL_STATE(105)] = 2107,
  [SMALL_STATE(106)] = 2118,
  [SMALL_STATE(107)] = 2131,
  [SMALL_STATE(108)] = 2144,
  [SMALL_STATE(109)] = 2157,
  [SMALL_STATE(110)] = 2170,
  [SMALL_STATE(111)] = 2183,
  [SMALL_STATE(112)] = 2196,
  [SMALL_STATE(113)] = 2209,
  [SMALL_STATE(114)] = 2218,
  [SMALL_STATE(115)] = 2231,
  [SMALL_STATE(116)] = 2244,
  [SMALL_STATE(117)] = 2257,
  [SMALL_STATE(118)] = 2270,
  [SMALL_STATE(119)] = 2281,
  [SMALL_STATE(120)] = 2294,
  [SMALL_STATE(121)] = 2305,
  [SMALL_STATE(122)] = 2318,
  [SMALL_STATE(123)] = 2331,
  [SMALL_STATE(124)] = 2341,
  [SMALL_STATE(125)] = 2351,
  [SMALL_STATE(126)] = 2359,
  [SMALL_STATE(127)] = 2369,
  [SMALL_STATE(128)] = 2377,
  [SMALL_STATE(129)] = 2387,
  [SMALL_STATE(130)] = 2394,
  [SMALL_STATE(131)] = 2401,
  [SMALL_STATE(132)] = 2408,
  [SMALL_STATE(133)] = 2415,
  [SMALL_STATE(134)] = 2422,
  [SMALL_STATE(135)] = 2429,
  [SMALL_STATE(136)] = 2436,
  [SMALL_STATE(137)] = 2443,
  [SMALL_STATE(138)] = 2450,
  [SMALL_STATE(139)] = 2457,
  [SMALL_STATE(140)] = 2464,
  [SMALL_STATE(141)] = 2471,
  [SMALL_STATE(142)] = 2478,
  [SMALL_STATE(143)] = 2485,
  [SMALL_STATE(144)] = 2492,
  [SMALL_STATE(145)] = 2499,
  [SMALL_STATE(146)] = 2506,
  [SMALL_STATE(147)] = 2513,
  [SMALL_STATE(148)] = 2520,
  [SMALL_STATE(149)] = 2527,
  [SMALL_STATE(150)] = 2534,
  [SMALL_STATE(151)] = 2541,
  [SMALL_STATE(152)] = 2548,
  [SMALL_STATE(153)] = 2555,
  [SMALL_STATE(154)] = 2562,
  [SMALL_STATE(155)] = 2569,
  [SMALL_STATE(156)] = 2576,
  [SMALL_STATE(157)] = 2583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0), SHIFT_REPEAT(99),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_table_line, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_table, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_arguments, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_delimiter, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 5, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0), SHIFT_REPEAT(116),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_text, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 1, 0, 0), SHIFT(156),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 2, 0, 0), SHIFT(156),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__data_table_line_repeat2, 2, 0, 0), SHIFT_REPEAT(121),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_table_line_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_table_line_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_string_delimiter, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_content, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_content_type, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step_keyword, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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

TS_PUBLIC const TSLanguage *tree_sitter_gherkin(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__alpha_word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
