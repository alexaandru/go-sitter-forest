#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 4
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  aux_sym_rust_block_token1 = 2,
  anon_sym_DASH = 3,
  anon_sym_LTtemplate_GT = 4,
  aux_sym_template_block_token1 = 5,
  anon_sym_LT = 6,
  aux_sym_template_block_token2 = 7,
  anon_sym_LT_SLASH = 8,
  aux_sym_template_block_token3 = 9,
  anon_sym_LT_SLASHt = 10,
  aux_sym_template_block_token4 = 11,
  anon_sym_LT_SLASHte = 12,
  aux_sym_template_block_token5 = 13,
  anon_sym_LT_SLASHtem = 14,
  aux_sym_template_block_token6 = 15,
  anon_sym_LT_SLASHtemp = 16,
  aux_sym_template_block_token7 = 17,
  anon_sym_LT_SLASHtempl = 18,
  aux_sym_template_block_token8 = 19,
  anon_sym_LT_SLASHtempla = 20,
  anon_sym_LT_SLASHtemplat = 21,
  anon_sym_LT_SLASHtemplate = 22,
  aux_sym_template_block_token9 = 23,
  anon_sym_LT_SLASHtemplate_GT = 24,
  anon_sym_LTstyle_GT = 25,
  aux_sym_style_block_token1 = 26,
  anon_sym_LT_SLASHs = 27,
  anon_sym_LT_SLASHst = 28,
  aux_sym_style_block_token2 = 29,
  anon_sym_LT_SLASHsty = 30,
  anon_sym_LT_SLASHstyl = 31,
  anon_sym_LT_SLASHstyle = 32,
  anon_sym_LT_SLASHstyle_GT = 33,
  anon_sym_LTscript_GT = 34,
  aux_sym_script_block_token1 = 35,
  anon_sym_LT_SLASHsc = 36,
  aux_sym_script_block_token2 = 37,
  anon_sym_LT_SLASHscr = 38,
  aux_sym_script_block_token3 = 39,
  anon_sym_LT_SLASHscri = 40,
  anon_sym_LT_SLASHscrip = 41,
  anon_sym_LT_SLASHscript = 42,
  anon_sym_LT_SLASHscript_GT = 43,
  anon_sym_SLASH_SLASH = 44,
  aux_sym_comment_token1 = 45,
  anon_sym_SLASH_STAR = 46,
  aux_sym_comment_token2 = 47,
  anon_sym_SLASH = 48,
  sym_source_file = 49,
  sym_rust_block = 50,
  sym_template_block = 51,
  sym_style_block = 52,
  sym_script_block = 53,
  sym_comment = 54,
  aux_sym_rust_block_repeat1 = 55,
  aux_sym_template_block_repeat1 = 56,
  aux_sym_style_block_repeat1 = 57,
  aux_sym_script_block_repeat1 = 58,
  alias_sym_css_content = 59,
  alias_sym_html_content = 60,
  alias_sym_js_content = 61,
  alias_sym_rust_content = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_rust_block_token1] = "rust_block_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_LTtemplate_GT] = "<template>",
  [aux_sym_template_block_token1] = "template_block_token1",
  [anon_sym_LT] = "<",
  [aux_sym_template_block_token2] = "template_block_token2",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_template_block_token3] = "template_block_token3",
  [anon_sym_LT_SLASHt] = "</t",
  [aux_sym_template_block_token4] = "template_block_token4",
  [anon_sym_LT_SLASHte] = "</te",
  [aux_sym_template_block_token5] = "template_block_token5",
  [anon_sym_LT_SLASHtem] = "</tem",
  [aux_sym_template_block_token6] = "template_block_token6",
  [anon_sym_LT_SLASHtemp] = "</temp",
  [aux_sym_template_block_token7] = "template_block_token7",
  [anon_sym_LT_SLASHtempl] = "</templ",
  [aux_sym_template_block_token8] = "template_block_token8",
  [anon_sym_LT_SLASHtempla] = "</templa",
  [anon_sym_LT_SLASHtemplat] = "</templat",
  [anon_sym_LT_SLASHtemplate] = "</template",
  [aux_sym_template_block_token9] = "template_block_token9",
  [anon_sym_LT_SLASHtemplate_GT] = "</template>",
  [anon_sym_LTstyle_GT] = "<style>",
  [aux_sym_style_block_token1] = "style_block_token1",
  [anon_sym_LT_SLASHs] = "</s",
  [anon_sym_LT_SLASHst] = "</st",
  [aux_sym_style_block_token2] = "style_block_token2",
  [anon_sym_LT_SLASHsty] = "</sty",
  [anon_sym_LT_SLASHstyl] = "</styl",
  [anon_sym_LT_SLASHstyle] = "</style",
  [anon_sym_LT_SLASHstyle_GT] = "</style>",
  [anon_sym_LTscript_GT] = "<script>",
  [aux_sym_script_block_token1] = "script_block_token1",
  [anon_sym_LT_SLASHsc] = "</sc",
  [aux_sym_script_block_token2] = "script_block_token2",
  [anon_sym_LT_SLASHscr] = "</scr",
  [aux_sym_script_block_token3] = "script_block_token3",
  [anon_sym_LT_SLASHscri] = "</scri",
  [anon_sym_LT_SLASHscrip] = "</scrip",
  [anon_sym_LT_SLASHscript] = "</script",
  [anon_sym_LT_SLASHscript_GT] = "</script>",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_rust_block] = "rust_block",
  [sym_template_block] = "template_block",
  [sym_style_block] = "style_block",
  [sym_script_block] = "script_block",
  [sym_comment] = "comment",
  [aux_sym_rust_block_repeat1] = "rust_block_repeat1",
  [aux_sym_template_block_repeat1] = "template_block_repeat1",
  [aux_sym_style_block_repeat1] = "style_block_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [alias_sym_css_content] = "css_content",
  [alias_sym_html_content] = "html_content",
  [alias_sym_js_content] = "js_content",
  [alias_sym_rust_content] = "rust_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_rust_block_token1] = aux_sym_rust_block_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LTtemplate_GT] = anon_sym_LTtemplate_GT,
  [aux_sym_template_block_token1] = aux_sym_template_block_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_template_block_token2] = aux_sym_template_block_token2,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_template_block_token3] = aux_sym_template_block_token3,
  [anon_sym_LT_SLASHt] = anon_sym_LT_SLASHt,
  [aux_sym_template_block_token4] = aux_sym_template_block_token4,
  [anon_sym_LT_SLASHte] = anon_sym_LT_SLASHte,
  [aux_sym_template_block_token5] = aux_sym_template_block_token5,
  [anon_sym_LT_SLASHtem] = anon_sym_LT_SLASHtem,
  [aux_sym_template_block_token6] = aux_sym_template_block_token6,
  [anon_sym_LT_SLASHtemp] = anon_sym_LT_SLASHtemp,
  [aux_sym_template_block_token7] = aux_sym_template_block_token7,
  [anon_sym_LT_SLASHtempl] = anon_sym_LT_SLASHtempl,
  [aux_sym_template_block_token8] = aux_sym_template_block_token8,
  [anon_sym_LT_SLASHtempla] = anon_sym_LT_SLASHtempla,
  [anon_sym_LT_SLASHtemplat] = anon_sym_LT_SLASHtemplat,
  [anon_sym_LT_SLASHtemplate] = anon_sym_LT_SLASHtemplate,
  [aux_sym_template_block_token9] = aux_sym_template_block_token9,
  [anon_sym_LT_SLASHtemplate_GT] = anon_sym_LT_SLASHtemplate_GT,
  [anon_sym_LTstyle_GT] = anon_sym_LTstyle_GT,
  [aux_sym_style_block_token1] = aux_sym_style_block_token1,
  [anon_sym_LT_SLASHs] = anon_sym_LT_SLASHs,
  [anon_sym_LT_SLASHst] = anon_sym_LT_SLASHst,
  [aux_sym_style_block_token2] = aux_sym_style_block_token2,
  [anon_sym_LT_SLASHsty] = anon_sym_LT_SLASHsty,
  [anon_sym_LT_SLASHstyl] = anon_sym_LT_SLASHstyl,
  [anon_sym_LT_SLASHstyle] = anon_sym_LT_SLASHstyle,
  [anon_sym_LT_SLASHstyle_GT] = anon_sym_LT_SLASHstyle_GT,
  [anon_sym_LTscript_GT] = anon_sym_LTscript_GT,
  [aux_sym_script_block_token1] = aux_sym_script_block_token1,
  [anon_sym_LT_SLASHsc] = anon_sym_LT_SLASHsc,
  [aux_sym_script_block_token2] = aux_sym_script_block_token2,
  [anon_sym_LT_SLASHscr] = anon_sym_LT_SLASHscr,
  [aux_sym_script_block_token3] = aux_sym_script_block_token3,
  [anon_sym_LT_SLASHscri] = anon_sym_LT_SLASHscri,
  [anon_sym_LT_SLASHscrip] = anon_sym_LT_SLASHscrip,
  [anon_sym_LT_SLASHscript] = anon_sym_LT_SLASHscript,
  [anon_sym_LT_SLASHscript_GT] = anon_sym_LT_SLASHscript_GT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_rust_block] = sym_rust_block,
  [sym_template_block] = sym_template_block,
  [sym_style_block] = sym_style_block,
  [sym_script_block] = sym_script_block,
  [sym_comment] = sym_comment,
  [aux_sym_rust_block_repeat1] = aux_sym_rust_block_repeat1,
  [aux_sym_template_block_repeat1] = aux_sym_template_block_repeat1,
  [aux_sym_style_block_repeat1] = aux_sym_style_block_repeat1,
  [aux_sym_script_block_repeat1] = aux_sym_script_block_repeat1,
  [alias_sym_css_content] = alias_sym_css_content,
  [alias_sym_html_content] = alias_sym_html_content,
  [alias_sym_js_content] = alias_sym_js_content,
  [alias_sym_rust_content] = alias_sym_rust_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rust_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTtemplate_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHte] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHtem] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHtemp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHtempl] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHtempla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHtemplat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_block_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHtemplate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTstyle_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_style_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHst] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_style_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHsty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHstyl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHstyle_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTscript_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHsc] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHscr] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_block_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHscri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHscrip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHscript_GT] = {
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_block] = {
    .visible = true,
    .named = true,
  },
  [sym_template_block] = {
    .visible = true,
    .named = true,
  },
  [sym_style_block] = {
    .visible = true,
    .named = true,
  },
  [sym_script_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rust_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_style_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_css_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_html_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_js_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rust_content] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_rust_content,
  },
  [2] = {
    [1] = alias_sym_html_content,
  },
  [3] = {
    [1] = alias_sym_css_content,
  },
  [4] = {
    [1] = alias_sym_js_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_rust_block_repeat1, 2,
    aux_sym_rust_block_repeat1,
    alias_sym_rust_content,
  aux_sym_template_block_repeat1, 2,
    aux_sym_template_block_repeat1,
    alias_sym_html_content,
  aux_sym_style_block_repeat1, 2,
    aux_sym_style_block_repeat1,
    alias_sym_css_content,
  aux_sym_script_block_repeat1, 2,
    aux_sym_script_block_repeat1,
    alias_sym_js_content,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '<') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(136);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '/') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '<') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '<') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '<') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != 'i') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != 's') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != 'c') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != 'r') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != 'l') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != 'p') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != 't') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != 'y') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != 'e') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != 'm') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != 'a') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '<') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_rust_block_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_rust_block_token1);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_rust_block_token1);
      if (lookahead == '/') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LTtemplate_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_template_block_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_template_block_token1);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_template_block_token1);
      if (lookahead == '/') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_template_block_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_template_block_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_template_block_token3);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_template_block_token3);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_template_block_token3);
      if (lookahead == '/') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != 't') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_SLASHt);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_template_block_token4);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_template_block_token4);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_template_block_token4);
      if (lookahead == '/') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != 'e') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_SLASHte);
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_template_block_token5);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_template_block_token5);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_template_block_token5);
      if (lookahead == '/') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != 'm') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtem);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_template_block_token6);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_template_block_token6);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_template_block_token6);
      if (lookahead == '/') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != 'p') ADVANCE(78);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtemp);
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_template_block_token7);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_template_block_token7);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_template_block_token7);
      if (lookahead == '/') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != 'l') ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtempl);
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_template_block_token8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_template_block_token8);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_template_block_token8);
      if (lookahead == '/') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != 'a') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtempla);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtemplat);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtemplate);
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_template_block_token9);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_template_block_token9);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_template_block_token9);
      if (lookahead == '/') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtemplate_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LTstyle_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_style_block_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_style_block_token1);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_style_block_token1);
      if (lookahead == '/') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != 's') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_SLASHs);
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_SLASHs);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_SLASHs);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_SLASHst);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_style_block_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_style_block_token2);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_style_block_token2);
      if (lookahead == '/') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != 'y') ADVANCE(104);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsty);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyl);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyle);
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstyle_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LTscript_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '/') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != 'c') ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsc);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_script_block_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_script_block_token2);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_script_block_token2);
      if (lookahead == '/') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != 'r') ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_SLASHscr);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_script_block_token3);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_script_block_token3);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_script_block_token3);
      if (lookahead == '/') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != 'i') ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_SLASHscri);
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_SLASHscrip);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_SLASHscript);
      if (lookahead == '>') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_SLASHscript_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 44},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 131},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 24},
  [67] = {(TSStateId)(-1)},
  [68] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_SLASHt] = ACTIONS(1),
    [anon_sym_LT_SLASHte] = ACTIONS(1),
    [anon_sym_LT_SLASHtem] = ACTIONS(1),
    [anon_sym_LT_SLASHtemp] = ACTIONS(1),
    [anon_sym_LT_SLASHtempl] = ACTIONS(1),
    [anon_sym_LT_SLASHtempla] = ACTIONS(1),
    [anon_sym_LT_SLASHtemplat] = ACTIONS(1),
    [anon_sym_LT_SLASHtemplate] = ACTIONS(1),
    [anon_sym_LT_SLASHtemplate_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHs] = ACTIONS(1),
    [anon_sym_LT_SLASHst] = ACTIONS(1),
    [anon_sym_LT_SLASHsty] = ACTIONS(1),
    [anon_sym_LT_SLASHstyl] = ACTIONS(1),
    [anon_sym_LT_SLASHstyle] = ACTIONS(1),
    [anon_sym_LT_SLASHstyle_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsc] = ACTIONS(1),
    [anon_sym_LT_SLASHscr] = ACTIONS(1),
    [anon_sym_LT_SLASHscri] = ACTIONS(1),
    [anon_sym_LT_SLASHscrip] = ACTIONS(1),
    [anon_sym_LT_SLASHscript] = ACTIONS(1),
    [anon_sym_LT_SLASHscript_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym_rust_block] = STATE(17),
    [sym_template_block] = STATE(47),
    [sym_style_block] = STATE(47),
    [sym_script_block] = STATE(47),
    [sym_comment] = STATE(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
    [anon_sym_LTtemplate_GT] = ACTIONS(9),
    [anon_sym_LTstyle_GT] = ACTIONS(11),
    [anon_sym_LTscript_GT] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      aux_sym_template_block_token1,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASHte,
    ACTIONS(25), 1,
      anon_sym_LT_SLASHtem,
    ACTIONS(27), 1,
      anon_sym_LT_SLASHtemp,
    ACTIONS(29), 1,
      anon_sym_LT_SLASHtempl,
    ACTIONS(31), 1,
      anon_sym_LT_SLASHtemplate,
    ACTIONS(33), 1,
      anon_sym_LT_SLASHtemplate_GT,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_template_block_repeat1,
    ACTIONS(19), 2,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHtempla,
    ACTIONS(21), 2,
      anon_sym_LT_SLASHt,
      anon_sym_LT_SLASHtemplat,
  [45] = 14,
    ACTIONS(15), 1,
      aux_sym_template_block_token1,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASHte,
    ACTIONS(25), 1,
      anon_sym_LT_SLASHtem,
    ACTIONS(27), 1,
      anon_sym_LT_SLASHtemp,
    ACTIONS(29), 1,
      anon_sym_LT_SLASHtempl,
    ACTIONS(31), 1,
      anon_sym_LT_SLASHtemplate,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_LT_SLASHtemplate_GT,
    STATE(2), 1,
      aux_sym_template_block_repeat1,
    STATE(3), 1,
      sym_comment,
    ACTIONS(19), 2,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHtempla,
    ACTIONS(21), 2,
      anon_sym_LT_SLASHt,
      anon_sym_LT_SLASHtemplat,
  [90] = 13,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      aux_sym_template_block_token1,
    ACTIONS(44), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_SLASHte,
    ACTIONS(56), 1,
      anon_sym_LT_SLASHtem,
    ACTIONS(59), 1,
      anon_sym_LT_SLASHtemp,
    ACTIONS(62), 1,
      anon_sym_LT_SLASHtempl,
    ACTIONS(65), 1,
      anon_sym_LT_SLASHtemplate,
    ACTIONS(68), 1,
      anon_sym_LT_SLASHtemplate_GT,
    ACTIONS(47), 2,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHtempla,
    ACTIONS(50), 2,
      anon_sym_LT_SLASHt,
      anon_sym_LT_SLASHtemplat,
    STATE(4), 2,
      sym_comment,
      aux_sym_template_block_repeat1,
  [133] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_comment,
    ACTIONS(70), 12,
      aux_sym_template_block_token1,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHt,
      anon_sym_LT_SLASHte,
      anon_sym_LT_SLASHtem,
      anon_sym_LT_SLASHtemp,
      anon_sym_LT_SLASHtempl,
      anon_sym_LT_SLASHtempla,
      anon_sym_LT_SLASHtemplat,
      anon_sym_LT_SLASHtemplate,
      anon_sym_LT_SLASHtemplate_GT,
  [157] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(68), 12,
      aux_sym_template_block_token1,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHt,
      anon_sym_LT_SLASHte,
      anon_sym_LT_SLASHtem,
      anon_sym_LT_SLASHtemp,
      anon_sym_LT_SLASHtempl,
      anon_sym_LT_SLASHtempla,
      anon_sym_LT_SLASHtemplat,
      anon_sym_LT_SLASHtemplate,
      anon_sym_LT_SLASHtemplate_GT,
  [181] = 14,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      aux_sym_template_block_token1,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
      anon_sym_LT_SLASH,
    ACTIONS(78), 1,
      anon_sym_LT_SLASHs,
    ACTIONS(80), 1,
      anon_sym_LT_SLASHsc,
    ACTIONS(82), 1,
      anon_sym_LT_SLASHscr,
    ACTIONS(84), 1,
      anon_sym_LT_SLASHscri,
    ACTIONS(86), 1,
      anon_sym_LT_SLASHscrip,
    ACTIONS(88), 1,
      anon_sym_LT_SLASHscript,
    ACTIONS(90), 1,
      anon_sym_LT_SLASHscript_GT,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_script_block_repeat1,
  [224] = 14,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      aux_sym_template_block_token1,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
      anon_sym_LT_SLASH,
    ACTIONS(78), 1,
      anon_sym_LT_SLASHs,
    ACTIONS(80), 1,
      anon_sym_LT_SLASHsc,
    ACTIONS(82), 1,
      anon_sym_LT_SLASHscr,
    ACTIONS(84), 1,
      anon_sym_LT_SLASHscri,
    ACTIONS(86), 1,
      anon_sym_LT_SLASHscrip,
    ACTIONS(88), 1,
      anon_sym_LT_SLASHscript,
    ACTIONS(92), 1,
      anon_sym_LT_SLASHscript_GT,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_script_block_repeat1,
  [267] = 13,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_template_block_token1,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
    ACTIONS(103), 1,
      anon_sym_LT_SLASHs,
    ACTIONS(106), 1,
      anon_sym_LT_SLASHsc,
    ACTIONS(109), 1,
      anon_sym_LT_SLASHscr,
    ACTIONS(112), 1,
      anon_sym_LT_SLASHscri,
    ACTIONS(115), 1,
      anon_sym_LT_SLASHscrip,
    ACTIONS(118), 1,
      anon_sym_LT_SLASHscript,
    ACTIONS(121), 1,
      anon_sym_LT_SLASHscript_GT,
    STATE(9), 2,
      sym_comment,
      aux_sym_script_block_repeat1,
  [308] = 13,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      aux_sym_template_block_token1,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_LT_SLASH,
    ACTIONS(129), 1,
      anon_sym_LT_SLASHs,
    ACTIONS(131), 1,
      anon_sym_LT_SLASHst,
    ACTIONS(133), 1,
      anon_sym_LT_SLASHsty,
    ACTIONS(135), 1,
      anon_sym_LT_SLASHstyl,
    ACTIONS(137), 1,
      anon_sym_LT_SLASHstyle,
    ACTIONS(139), 1,
      anon_sym_LT_SLASHstyle_GT,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_style_block_repeat1,
  [348] = 13,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      aux_sym_template_block_token1,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_LT_SLASH,
    ACTIONS(129), 1,
      anon_sym_LT_SLASHs,
    ACTIONS(131), 1,
      anon_sym_LT_SLASHst,
    ACTIONS(133), 1,
      anon_sym_LT_SLASHsty,
    ACTIONS(135), 1,
      anon_sym_LT_SLASHstyl,
    ACTIONS(137), 1,
      anon_sym_LT_SLASHstyle,
    ACTIONS(141), 1,
      anon_sym_LT_SLASHstyle_GT,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_style_block_repeat1,
  [388] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(121), 10,
      aux_sym_template_block_token1,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHs,
      anon_sym_LT_SLASHsc,
      anon_sym_LT_SLASHscr,
      anon_sym_LT_SLASHscri,
      anon_sym_LT_SLASHscrip,
      anon_sym_LT_SLASHscript,
      anon_sym_LT_SLASHscript_GT,
  [410] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(143), 10,
      aux_sym_template_block_token1,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHs,
      anon_sym_LT_SLASHsc,
      anon_sym_LT_SLASHscr,
      anon_sym_LT_SLASHscri,
      anon_sym_LT_SLASHscrip,
      anon_sym_LT_SLASHscript,
      anon_sym_LT_SLASHscript_GT,
  [432] = 12,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      aux_sym_template_block_token1,
    ACTIONS(148), 1,
      anon_sym_LT,
    ACTIONS(151), 1,
      anon_sym_LT_SLASH,
    ACTIONS(154), 1,
      anon_sym_LT_SLASHs,
    ACTIONS(157), 1,
      anon_sym_LT_SLASHst,
    ACTIONS(160), 1,
      anon_sym_LT_SLASHsty,
    ACTIONS(163), 1,
      anon_sym_LT_SLASHstyl,
    ACTIONS(166), 1,
      anon_sym_LT_SLASHstyle,
    ACTIONS(169), 1,
      anon_sym_LT_SLASHstyle_GT,
    STATE(14), 2,
      sym_comment,
      aux_sym_style_block_repeat1,
  [470] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(171), 9,
      aux_sym_template_block_token1,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHs,
      anon_sym_LT_SLASHst,
      anon_sym_LT_SLASHsty,
      anon_sym_LT_SLASHstyl,
      anon_sym_LT_SLASHstyle,
      anon_sym_LT_SLASHstyle_GT,
  [491] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(169), 9,
      aux_sym_template_block_token1,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_SLASHs,
      anon_sym_LT_SLASHst,
      anon_sym_LT_SLASHsty,
      anon_sym_LT_SLASHstyl,
      anon_sym_LT_SLASHstyle,
      anon_sym_LT_SLASHstyle_GT,
  [512] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LTtemplate_GT,
    ACTIONS(13), 1,
      anon_sym_LTscript_GT,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      sym_template_block,
    STATE(32), 1,
      sym_script_block,
  [537] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(13), 1,
      anon_sym_LTscript_GT,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(31), 1,
      sym_script_block,
    STATE(62), 1,
      sym_style_block,
  [562] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(179), 1,
      aux_sym_rust_block_token1,
    ACTIONS(181), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_rust_block_repeat1,
  [584] = 7,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      aux_sym_rust_block_token1,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(19), 1,
      aux_sym_rust_block_repeat1,
    STATE(20), 1,
      sym_comment,
  [606] = 6,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(187), 1,
      aux_sym_rust_block_token1,
    ACTIONS(190), 1,
      anon_sym_DASH,
    STATE(21), 2,
      sym_comment,
      aux_sym_rust_block_repeat1,
  [626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      anon_sym_LTtemplate_GT,
      anon_sym_LTstyle_GT,
  [641] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_DASH_DASH_DASH,
      aux_sym_rust_block_token1,
      anon_sym_DASH,
  [656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_LTstyle_GT,
      anon_sym_LTscript_GT,
  [671] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_LTtemplate_GT,
      anon_sym_LTstyle_GT,
  [686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_LTtemplate_GT,
      anon_sym_LTscript_GT,
  [701] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_DASH_DASH_DASH,
      aux_sym_rust_block_token1,
      anon_sym_DASH,
  [716] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_DASH_DASH_DASH,
      aux_sym_rust_block_token1,
      anon_sym_DASH,
  [731] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_LTtemplate_GT,
      anon_sym_LTscript_GT,
  [746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LTstyle_GT,
      anon_sym_LTscript_GT,
  [761] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LTstyle_GT,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_comment,
    STATE(65), 1,
      sym_style_block,
  [780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LTtemplate_GT,
    STATE(31), 1,
      sym_template_block,
    STATE(32), 1,
      sym_comment,
  [796] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      aux_sym_rust_block_token1,
    ACTIONS(213), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_comment,
  [812] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_script_block_token3,
    STATE(34), 1,
      sym_comment,
  [825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_comment,
  [838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_comment,
  [851] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      aux_sym_template_block_token2,
    STATE(37), 1,
      sym_comment,
  [864] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_style_block_token1,
    STATE(38), 1,
      sym_comment,
  [877] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_script_block_token1,
    STATE(39), 1,
      sym_comment,
  [890] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_script_block_token2,
    STATE(40), 1,
      sym_comment,
  [903] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token7,
    STATE(41), 1,
      sym_comment,
  [916] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_template_block_token6,
    STATE(42), 1,
      sym_comment,
  [929] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_template_block_token3,
    STATE(43), 1,
      sym_comment,
  [942] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_template_block_token9,
    STATE(44), 1,
      sym_comment,
  [955] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token9,
    STATE(45), 1,
      sym_comment,
  [968] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
  [981] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
  [994] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      aux_sym_template_block_token2,
    STATE(48), 1,
      sym_comment,
  [1007] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_style_block_token1,
    STATE(49), 1,
      sym_comment,
  [1020] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      aux_sym_rust_block_token1,
    STATE(50), 1,
      sym_comment,
  [1033] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_template_block_token3,
    STATE(51), 1,
      sym_comment,
  [1046] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_style_block_token2,
    STATE(52), 1,
      sym_comment,
  [1059] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
  [1072] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_template_block_token7,
    STATE(54), 1,
      sym_comment,
  [1085] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_comment,
  [1098] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      aux_sym_template_block_token2,
    STATE(56), 1,
      sym_comment,
  [1111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [1124] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token3,
    STATE(58), 1,
      sym_comment,
  [1137] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token4,
    STATE(59), 1,
      sym_comment,
  [1150] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token5,
    STATE(60), 1,
      sym_comment,
  [1163] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token6,
    STATE(61), 1,
      sym_comment,
  [1176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
  [1189] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_template_block_token4,
    STATE(63), 1,
      sym_comment,
  [1202] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_template_block_token9,
    STATE(64), 1,
      sym_comment,
  [1215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_comment,
  [1228] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_template_block_token8,
    STATE(66), 1,
      sym_comment,
  [1241] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1245] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 348,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 410,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 537,
  [SMALL_STATE(19)] = 562,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 606,
  [SMALL_STATE(22)] = 626,
  [SMALL_STATE(23)] = 641,
  [SMALL_STATE(24)] = 656,
  [SMALL_STATE(25)] = 671,
  [SMALL_STATE(26)] = 686,
  [SMALL_STATE(27)] = 701,
  [SMALL_STATE(28)] = 716,
  [SMALL_STATE(29)] = 731,
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 761,
  [SMALL_STATE(32)] = 780,
  [SMALL_STATE(33)] = 796,
  [SMALL_STATE(34)] = 812,
  [SMALL_STATE(35)] = 825,
  [SMALL_STATE(36)] = 838,
  [SMALL_STATE(37)] = 851,
  [SMALL_STATE(38)] = 864,
  [SMALL_STATE(39)] = 877,
  [SMALL_STATE(40)] = 890,
  [SMALL_STATE(41)] = 903,
  [SMALL_STATE(42)] = 916,
  [SMALL_STATE(43)] = 929,
  [SMALL_STATE(44)] = 942,
  [SMALL_STATE(45)] = 955,
  [SMALL_STATE(46)] = 968,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 994,
  [SMALL_STATE(49)] = 1007,
  [SMALL_STATE(50)] = 1020,
  [SMALL_STATE(51)] = 1033,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1059,
  [SMALL_STATE(54)] = 1072,
  [SMALL_STATE(55)] = 1085,
  [SMALL_STATE(56)] = 1098,
  [SMALL_STATE(57)] = 1111,
  [SMALL_STATE(58)] = 1124,
  [SMALL_STATE(59)] = 1137,
  [SMALL_STATE(60)] = 1150,
  [SMALL_STATE(61)] = 1163,
  [SMALL_STATE(62)] = 1176,
  [SMALL_STATE(63)] = 1189,
  [SMALL_STATE(64)] = 1202,
  [SMALL_STATE(65)] = 1215,
  [SMALL_STATE(66)] = 1228,
  [SMALL_STATE(67)] = 1241,
  [SMALL_STATE(68)] = 1245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 1, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_block_repeat1, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rust_block_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rust_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rust_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 3, 0, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rust_block_repeat1, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_block, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rust_block_repeat1, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_block, 3, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 3, 0, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 3, 0, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_rsx(void) {
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
