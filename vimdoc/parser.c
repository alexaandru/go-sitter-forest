#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  aux_sym_word_token1 = 1,
  aux_sym_word_noli_token1 = 2,
  aux_sym_word_noli_token2 = 3,
  anon_sym_STAR = 4,
  anon_sym_SQUOTE = 5,
  aux_sym__word_common_token1 = 6,
  aux_sym__word_common_token2 = 7,
  anon_sym_SQUOTE2 = 8,
  aux_sym__word_common_token3 = 9,
  anon_sym_PIPE = 10,
  anon_sym_SQUOTE_PIPE_SQUOTE = 11,
  anon_sym_LBRACE = 12,
  anon_sym_LBRACE_RBRACE = 13,
  aux_sym__word_common_token4 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_LBRACK = 16,
  anon_sym_TILDE = 17,
  anon_sym_GT = 18,
  anon_sym_COMMA = 19,
  anon_sym_Note_COLON = 20,
  anon_sym_NOTE_COLON = 21,
  anon_sym_Notes_COLON = 22,
  anon_sym_Warning_COLON = 23,
  anon_sym_WARNING_COLON = 24,
  anon_sym_Deprecated = 25,
  anon_sym_DEPRECATED_COLON = 26,
  aux_sym_keycode_token1 = 27,
  aux_sym_keycode_token2 = 28,
  aux_sym_keycode_token3 = 29,
  aux_sym_keycode_token4 = 30,
  aux_sym_keycode_token5 = 31,
  anon_sym_CTRL_DASH_LBRACEchar_RBRACE = 32,
  aux_sym_keycode_token6 = 33,
  aux_sym_keycode_token7 = 34,
  aux_sym_uppercase_name_token1 = 35,
  aux_sym_uppercase_name_token2 = 36,
  anon_sym_LT = 37,
  aux_sym_codeblock_token1 = 38,
  aux_sym_codeblock_token2 = 39,
  aux_sym__blank_token1 = 40,
  aux_sym_line_li_token1 = 41,
  aux_sym_line_code_token1 = 42,
  sym_modeline = 43,
  aux_sym_h1_token1 = 44,
  aux_sym_h2_token1 = 45,
  aux_sym_tag_token1 = 46,
  anon_sym_STAR2 = 47,
  sym_url_word = 48,
  aux_sym_optionlink_token1 = 49,
  aux_sym_taglink_token1 = 50,
  anon_sym_PIPE2 = 51,
  anon_sym_BQUOTE = 52,
  aux_sym_codespan_token1 = 53,
  anon_sym_BQUOTE2 = 54,
  aux_sym_argument_token1 = 55,
  anon_sym_RBRACE = 56,
  anon_sym_QMARK = 57,
  sym_help_file = 58,
  sym__atom = 59,
  sym_word = 60,
  sym__atom_noli = 61,
  sym_word_noli = 62,
  sym__atom_common = 63,
  sym__word_common = 64,
  sym_note = 65,
  sym_keycode = 66,
  sym_uppercase_name = 67,
  sym__uppercase_words = 68,
  sym_block = 69,
  sym_codeblock = 70,
  sym__blank = 71,
  sym_line = 72,
  sym_line_li = 73,
  sym_line_code = 74,
  sym__line_noli = 75,
  sym_column_heading = 76,
  sym__column_heading = 77,
  sym_h1 = 78,
  sym_h2 = 79,
  sym_h3 = 80,
  sym_tag = 81,
  sym_url = 82,
  sym_optionlink = 83,
  sym_taglink = 84,
  sym_codespan = 85,
  sym_argument = 86,
  aux_sym_help_file_repeat1 = 87,
  aux_sym_help_file_repeat2 = 88,
  aux_sym_help_file_repeat3 = 89,
  aux_sym_uppercase_name_repeat1 = 90,
  aux_sym_block_repeat1 = 91,
  aux_sym_block_repeat2 = 92,
  aux_sym_codeblock_repeat1 = 93,
  aux_sym_line_li_repeat1 = 94,
  aux_sym_line_li_repeat2 = 95,
  alias_sym_code = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [aux_sym__word_common_token2] = "_word_common_token2",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token3] = "_word_common_token3",
  [anon_sym_PIPE] = "|",
  [anon_sym_SQUOTE_PIPE_SQUOTE] = "'|'",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_TILDE] = "~",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_Note_COLON] = "Note:",
  [anon_sym_NOTE_COLON] = "NOTE:",
  [anon_sym_Notes_COLON] = "Notes:",
  [anon_sym_Warning_COLON] = "Warning:",
  [anon_sym_WARNING_COLON] = "WARNING:",
  [anon_sym_Deprecated] = "Deprecated",
  [anon_sym_DEPRECATED_COLON] = "DEPRECATED:",
  [aux_sym_keycode_token1] = "keycode_token1",
  [aux_sym_keycode_token2] = "keycode_token2",
  [aux_sym_keycode_token3] = "keycode_token3",
  [aux_sym_keycode_token4] = "keycode_token4",
  [aux_sym_keycode_token5] = "keycode_token5",
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = "CTRL-{char}",
  [aux_sym_keycode_token6] = "keycode_token6",
  [aux_sym_keycode_token7] = "keycode_token7",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [aux_sym_uppercase_name_token2] = "uppercase_name_token2",
  [anon_sym_LT] = "<",
  [aux_sym_codeblock_token1] = "language",
  [aux_sym_codeblock_token2] = "codeblock_token2",
  [aux_sym__blank_token1] = "_blank_token1",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
  [sym_modeline] = "modeline",
  [aux_sym_h1_token1] = "delimiter",
  [aux_sym_h2_token1] = "delimiter",
  [aux_sym_tag_token1] = "word",
  [anon_sym_STAR2] = "*",
  [sym_url_word] = "word",
  [aux_sym_optionlink_token1] = "word",
  [aux_sym_taglink_token1] = "word",
  [anon_sym_PIPE2] = "|",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_codespan_token1] = "word",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_argument_token1] = "word",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "\?",
  [sym_help_file] = "help_file",
  [sym__atom] = "_atom",
  [sym_word] = "word",
  [sym__atom_noli] = "_atom_noli",
  [sym_word_noli] = "word",
  [sym__atom_common] = "_atom_common",
  [sym__word_common] = "_word_common",
  [sym_note] = "note",
  [sym_keycode] = "keycode",
  [sym_uppercase_name] = "heading",
  [sym__uppercase_words] = "_uppercase_words",
  [sym_block] = "block",
  [sym_codeblock] = "codeblock",
  [sym__blank] = "_blank",
  [sym_line] = "line",
  [sym_line_li] = "line_li",
  [sym_line_code] = "line",
  [sym__line_noli] = "_line_noli",
  [sym_column_heading] = "column_heading",
  [sym__column_heading] = "heading",
  [sym_h1] = "h1",
  [sym_h2] = "h2",
  [sym_h3] = "h3",
  [sym_tag] = "tag",
  [sym_url] = "url",
  [sym_optionlink] = "optionlink",
  [sym_taglink] = "taglink",
  [sym_codespan] = "codespan",
  [sym_argument] = "argument",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_help_file_repeat2] = "help_file_repeat2",
  [aux_sym_help_file_repeat3] = "help_file_repeat3",
  [aux_sym_uppercase_name_repeat1] = "uppercase_name_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_li_repeat1] = "line_li_repeat1",
  [aux_sym_line_li_repeat2] = "line_li_repeat2",
  [alias_sym_code] = "code",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_noli_token1] = aux_sym_word_noli_token1,
  [aux_sym_word_noli_token2] = aux_sym_word_noli_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SQUOTE_PIPE_SQUOTE] = anon_sym_SQUOTE_PIPE_SQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Note_COLON] = anon_sym_Note_COLON,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [anon_sym_Notes_COLON] = anon_sym_Notes_COLON,
  [anon_sym_Warning_COLON] = anon_sym_Warning_COLON,
  [anon_sym_WARNING_COLON] = anon_sym_WARNING_COLON,
  [anon_sym_Deprecated] = anon_sym_Deprecated,
  [anon_sym_DEPRECATED_COLON] = anon_sym_DEPRECATED_COLON,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [aux_sym_keycode_token2] = aux_sym_keycode_token2,
  [aux_sym_keycode_token3] = aux_sym_keycode_token3,
  [aux_sym_keycode_token4] = aux_sym_keycode_token4,
  [aux_sym_keycode_token5] = aux_sym_keycode_token5,
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
  [aux_sym_keycode_token6] = aux_sym_keycode_token6,
  [aux_sym_keycode_token7] = aux_sym_keycode_token7,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [aux_sym_uppercase_name_token2] = aux_sym_uppercase_name_token2,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [aux_sym_codeblock_token2] = aux_sym_codeblock_token2,
  [aux_sym__blank_token1] = aux_sym__blank_token1,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [sym_modeline] = sym_modeline,
  [aux_sym_h1_token1] = aux_sym_h1_token1,
  [aux_sym_h2_token1] = aux_sym_h1_token1,
  [aux_sym_tag_token1] = sym_word,
  [anon_sym_STAR2] = anon_sym_STAR,
  [sym_url_word] = sym_word,
  [aux_sym_optionlink_token1] = sym_word,
  [aux_sym_taglink_token1] = sym_word,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_codespan_token1] = sym_word,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_argument_token1] = sym_word,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_help_file] = sym_help_file,
  [sym__atom] = sym__atom,
  [sym_word] = sym_word,
  [sym__atom_noli] = sym__atom_noli,
  [sym_word_noli] = sym_word,
  [sym__atom_common] = sym__atom_common,
  [sym__word_common] = sym__word_common,
  [sym_note] = sym_note,
  [sym_keycode] = sym_keycode,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym__uppercase_words] = sym__uppercase_words,
  [sym_block] = sym_block,
  [sym_codeblock] = sym_codeblock,
  [sym__blank] = sym__blank,
  [sym_line] = sym_line,
  [sym_line_li] = sym_line_li,
  [sym_line_code] = sym_line,
  [sym__line_noli] = sym__line_noli,
  [sym_column_heading] = sym_column_heading,
  [sym__column_heading] = sym_uppercase_name,
  [sym_h1] = sym_h1,
  [sym_h2] = sym_h2,
  [sym_h3] = sym_h3,
  [sym_tag] = sym_tag,
  [sym_url] = sym_url,
  [sym_optionlink] = sym_optionlink,
  [sym_taglink] = sym_taglink,
  [sym_codespan] = sym_codespan,
  [sym_argument] = sym_argument,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_help_file_repeat2] = aux_sym_help_file_repeat2,
  [aux_sym_help_file_repeat3] = aux_sym_help_file_repeat3,
  [aux_sym_uppercase_name_repeat1] = aux_sym_uppercase_name_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_line_li_repeat1] = aux_sym_line_li_repeat1,
  [aux_sym_line_li_repeat2] = aux_sym_line_li_repeat2,
  [alias_sym_code] = alias_sym_code,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_noli_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_noli_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_PIPE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Notes_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warning_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Deprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPRECATED_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keycode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keycode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codeblock_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_codeblock_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_code_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_modeline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_h1_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_h2_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [sym_url_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_optionlink_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_taglink_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codespan_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_help_file] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_noli] = {
    .visible = false,
    .named = true,
  },
  [sym_word_noli] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_common] = {
    .visible = false,
    .named = true,
  },
  [sym__word_common] = {
    .visible = false,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_keycode] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym__uppercase_words] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_codeblock] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line_li] = {
    .visible = true,
    .named = true,
  },
  [sym_line_code] = {
    .visible = true,
    .named = true,
  },
  [sym__line_noli] = {
    .visible = false,
    .named = true,
  },
  [sym_column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym__column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_h1] = {
    .visible = true,
    .named = true,
  },
  [sym_h2] = {
    .visible = true,
    .named = true,
  },
  [sym_h3] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_optionlink] = {
    .visible = true,
    .named = true,
  },
  [sym_taglink] = {
    .visible = true,
    .named = true,
  },
  [sym_codespan] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_help_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_help_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_help_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_code] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_blank = 1,
  field_text = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
  [1] =
    {field_text, 0},
  [2] =
    {field_text, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
  [4] = {
    [0] = sym_word,
    [1] = sym_word,
  },
  [6] = {
    [2] = alias_sym_code,
  },
  [7] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [8] = {
    [1] = sym_line,
  },
  [9] = {
    [1] = sym_uppercase_name,
  },
  [10] = {
    [1] = aux_sym_h1_token1,
  },
  [11] = {
    [2] = sym_line,
    [3] = sym_line,
  },
  [12] = {
    [2] = sym_line,
  },
  [13] = {
    [0] = sym_line,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__line_noli, 2,
    sym__line_noli,
    sym_line,
  aux_sym_uppercase_name_repeat1, 2,
    aux_sym_uppercase_name_repeat1,
    sym_word,
  aux_sym_codeblock_repeat1, 2,
    aux_sym_codeblock_repeat1,
    alias_sym_code,
  aux_sym_line_li_repeat1, 3,
    aux_sym_line_li_repeat1,
    sym_line,
    sym_uppercase_name,
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
  [48] = 43,
  [49] = 44,
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
  [63] = 46,
  [64] = 47,
  [65] = 65,
  [66] = 55,
  [67] = 56,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 592,
        '\'', 690,
        '(', 699,
        '*', 700,
        ',', 699,
        '<', 695,
        '>', 698,
        '?', 698,
        'A', 631,
        'C', 640,
        'D', 621,
        'M', 625,
        'N', 635,
        'W', 615,
        '[', 699,
        '`', 698,
        'h', 683,
        '{', 688,
        '|', 698,
        '}', 698,
        '~', 698,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(594);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 592,
        '\'', 358,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 134,
        '>', 428,
        'A', 79,
        'C', 88,
        'D', 70,
        'M', 74,
        'N', 83,
        'W', 63,
        '[', 420,
        '`', 803,
        'h', 37,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 690,
        '(', 699,
        '*', 353,
        ',', 699,
        '<', 695,
        '>', 698,
        'A', 631,
        'C', 640,
        'D', 621,
        'M', 625,
        'N', 635,
        'W', 615,
        '[', 699,
        '`', 698,
        'h', 685,
        '{', 688,
        '|', 691,
        '~', 698,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 358,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 134,
        '>', 428,
        '?', 912,
        'A', 79,
        'C', 88,
        'D', 70,
        'M', 74,
        'N', 83,
        'W', 63,
        '[', 420,
        '`', 803,
        'h', 126,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 358,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 134,
        '>', 428,
        'A', 79,
        'C', 88,
        'D', 70,
        'M', 74,
        'N', 83,
        'W', 63,
        '[', 420,
        '`', 803,
        'h', 126,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 358,
        '(', 417,
        '*', 356,
        ',', 434,
        '<', 369,
        '>', 431,
        'A', 364,
        'C', 366,
        'D', 362,
        'M', 363,
        'N', 365,
        'W', 361,
        '[', 422,
        '`', 806,
        'h', 367,
        '{', 406,
        '|', 399,
        '~', 427,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 358,
        '(', 418,
        '*', 353,
        ',', 432,
        '<', 134,
        '>', 428,
        'A', 43,
        'C', 45,
        'D', 41,
        'M', 42,
        'N', 44,
        'W', 40,
        '[', 420,
        '`', 803,
        'h', 126,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 357,
        '(', 415,
        '*', 354,
        ',', 433,
        '<', 226,
        '>', 429,
        'A', 171,
        'C', 180,
        'D', 162,
        'M', 166,
        'N', 175,
        'W', 155,
        '[', 421,
        '`', 804,
        'h', 218,
        '{', 404,
        '|', 397,
        '~', 425,
        '\t', 8,
        ' ', 8,
        '-', 1,
        0x2022, 1,
      );
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 800,
        '(', 801,
        '*', 800,
        ',', 801,
        '<', 798,
        '>', 800,
        'A', 739,
        'C', 748,
        'D', 729,
        'M', 733,
        'N', 743,
        'W', 723,
        '[', 801,
        '`', 800,
        'h', 790,
        '{', 793,
        '|', 398,
        '~', 800,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(800);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 360,
        '(', 419,
        '*', 355,
        ',', 435,
        '<', 907,
        '>', 430,
        'A', 844,
        'C', 853,
        'D', 834,
        'M', 838,
        'N', 848,
        'W', 827,
        '[', 423,
        '`', 805,
        'h', 896,
        '{', 407,
        '|', 400,
        '}', 135,
        '~', 426,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(909);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 393,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 134,
        '>', 428,
        'A', 79,
        'C', 88,
        'D', 70,
        'M', 74,
        'N', 83,
        'W', 63,
        '[', 420,
        '`', 803,
        'h', 126,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '*') ADVANCE(700);
      if (lookahead == '<') ADVANCE(589);
      if (lookahead == '`') ADVANCE(808);
      if (lookahead == '|') ADVANCE(802);
      if (lookahead == '}') ADVANCE(911);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(24);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 338,
        '>', 428,
        'A', 280,
        'C', 289,
        'D', 271,
        'M', 274,
        'N', 284,
        'W', 264,
        '[', 420,
        '`', 803,
        'h', 329,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 416,
        '*', 353,
        ',', 432,
        '-', 25,
        '<', 590,
        '=', 260,
        '>', 428,
        'A', 232,
        'C', 234,
        'D', 230,
        'M', 231,
        'N', 233,
        'W', 229,
        '[', 420,
        '`', 803,
        'h', 329,
        '{', 405,
        '|', 398,
        '~', 424,
        0x2022, 26,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 416,
        '*', 353,
        ',', 432,
        '-', 25,
        '<', 590,
        '=', 260,
        '>', 428,
        'A', 232,
        'C', 234,
        'D', 230,
        'M', 231,
        'N', 233,
        'W', 229,
        '[', 420,
        '`', 803,
        'h', 329,
        '{', 405,
        '|', 398,
        '~', 424,
        0x2022, 26,
        '\t', 8,
        ' ', 8,
      );
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 416,
        '*', 353,
        ',', 432,
        '<', 590,
        '>', 428,
        'A', 232,
        'C', 234,
        'D', 230,
        'M', 231,
        'N', 233,
        'W', 229,
        '[', 420,
        '`', 803,
        'h', 329,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 416,
        '*', 353,
        ',', 432,
        '<', 590,
        '>', 428,
        'A', 232,
        'C', 234,
        'D', 230,
        'M', 231,
        'N', 233,
        'W', 229,
        '[', 420,
        '`', 803,
        'h', 329,
        '{', 405,
        '|', 398,
        '~', 424,
        '\t', 8,
        ' ', 8,
        '-', 26,
        0x2022, 26,
      );
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(597);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(595);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(595);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(462);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(807);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 593,
        '\'', 358,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 134,
        '>', 428,
        'A', 79,
        'C', 88,
        'D', 70,
        'M', 74,
        'N', 83,
        'W', 63,
        '[', 420,
        '`', 803,
        'h', 126,
        '{', 405,
        '|', 396,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 414,
        '*', 353,
        ',', 432,
        '<', 338,
        '>', 428,
        'A', 280,
        'C', 289,
        'D', 271,
        'M', 274,
        'N', 284,
        'W', 264,
        '[', 420,
        '`', 803,
        'h', 329,
        'v', 309,
        '{', 405,
        '|', 398,
        '~', 424,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 593,
        '\'', 359,
        '(', 416,
        '*', 353,
        ',', 432,
        '-', 25,
        '<', 590,
        '=', 260,
        '>', 428,
        'A', 232,
        'C', 234,
        'D', 230,
        'M', 231,
        'N', 233,
        'W', 229,
        '[', 420,
        '`', 803,
        'h', 329,
        'v', 309,
        '{', 405,
        '|', 398,
        '~', 424,
        0x2022, 26,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == 'p') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(579);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(578);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(575);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '>') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      ADVANCE_MAP(
        'B', 490,
        'D', 486,
        'I', 488,
        'P', 482,
        'S', 480,
        '{', 484,
        '\t', 465,
        ' ', 465,
        '(', 465,
        ',', 465,
        '[', 465,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(704);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(507);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(493);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(19);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(598);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '>') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ':') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '>') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '>') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'A') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'A') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'A') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        '\n', 596,
        'B', 471,
        'D', 469,
        'I', 470,
        'P', 467,
        'S', 466,
        '{', 468,
        '\t', 473,
        ' ', 473,
        '(', 473,
        '[', 473,
      );
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'C') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'D') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'F') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'G') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'I') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'R') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'R') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'k') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '}') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(702);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(227);
      if (lookahead != 0) ADVANCE(701);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(509);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(504);
      if (lookahead != 0) ADVANCE(503);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(495);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        '\n', 596,
        '\t', 23,
        ' ', 23,
        '(', 23,
        '[', 23,
        'A', 140,
        'C', 140,
        'D', 140,
        'M', 140,
        'S', 140,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(540);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(539);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'O') ADVANCE(541);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '>') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        'B', 491,
        'D', 487,
        'I', 489,
        'P', 483,
        'S', 481,
        '{', 485,
        '\t', 465,
        ' ', 465,
        '(', 465,
        '[', 465,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'C') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(317);
      if (lookahead == 'U') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'G') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'O') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'P') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(705);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(703);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(507);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(493);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(599);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '|') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '|') ADVANCE(228);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '|') ADVANCE(809);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(386);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'L') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'T') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 't') ADVANCE(709);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == 's') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(442);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(445);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(458);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'a') ADVANCE(389);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'c') ADVANCE(375);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'd') ADVANCE(454);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'g') ADVANCE(373);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'i') ADVANCE(384);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(382);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'p') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(383);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(379);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(705);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(704);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(395);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(900);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_SQUOTE_PIPE_SQUOTE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SQUOTE_PIPE_SQUOTE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_SQUOTE_PIPE_SQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '}') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '}') ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '}') ADVANCE(408);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(899);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(909);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(588);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(910);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(910);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(910);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'H') ADVANCE(569);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(278);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(588);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(588);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(588);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(588);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(549);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(550);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ':') ADVANCE(455);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'A') ADVANCE(542);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'A') ADVANCE(514);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      ADVANCE_MAP(
        '(', 552,
        'B', 547,
        'D', 545,
        'I', 546,
        'P', 544,
        'S', 529,
        '{', 485,
        '\t', 465,
        ' ', 465,
        '[', 465,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'C') ADVANCE(519);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'D') ADVANCE(518);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(516);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(522);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(523);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(543);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'G') ADVANCE(517);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'H') ADVANCE(530);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'I') ADVANCE(534);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'N') ADVANCE(531);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'N') ADVANCE(528);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'P') ADVANCE(538);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'R') ADVANCE(532);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'R') ADVANCE(533);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'R') ADVANCE(525);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(512);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(520);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(524);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(526);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(515);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(507);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(507);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(502);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(493);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(493);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == '-') ADVANCE(584);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == '-') ADVANCE(585);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == '-') ADVANCE(586);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == '-') ADVANCE(587);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ':') ADVANCE(455);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'C') ADVANCE(560);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(557);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(562);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(582);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'G') ADVANCE(558);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'I') ADVANCE(567);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'I') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'N') ADVANCE(570);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'N') ADVANCE(568);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'P') ADVANCE(577);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(571);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(565);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(561);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(564);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(566);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(588);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(507);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(507);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      ADVANCE_MAP(
        '(', 492,
        'B', 478,
        'D', 476,
        'I', 477,
        'P', 475,
        'S', 474,
        '{', 484,
        '\t', 465,
        ' ', 465,
        ',', 465,
        '[', 465,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(502);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(502);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(493);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(493);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__blank_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == ' ') ADVANCE(594);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_modeline);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\'') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(613);
      if (lookahead == '>') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(694);
      if (lookahead == 's') ADVANCE(608);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(694);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(694);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(694);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(699);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(612);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(644);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      ADVANCE_MAP(
        'B', 678,
        'D', 654,
        'I', 668,
        'P', 646,
        'S', 628,
        '{', 649,
        '(', 699,
        ',', 699,
        '[', 699,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'C') ADVANCE(616);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(669);
      if (lookahead == 'U') ADVANCE(670);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(642);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(629);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(626);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(602);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(630);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(627);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'O') ADVANCE(643);
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'P') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(632);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(623);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(614);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(622);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(624);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(648);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'd') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(655);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(677);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(607);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(653);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(657);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(689);
      if (lookahead == '}') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(600);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(702);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(227);
      if (lookahead != 0) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(23);
      if (lookahead != 0) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(391);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead == '>') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(800);
      if (lookahead == 's') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(796);
      if (lookahead == 's') ADVANCE(717);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(796);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(801);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(719);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(719);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(745);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(752);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      ADVANCE_MAP(
        'B', 784,
        'D', 762,
        'I', 776,
        'P', 754,
        'S', 736,
        '{', 757,
        '(', 801,
        ',', 801,
        '[', 801,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'C') ADVANCE(724);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(777);
      if (lookahead == 'U') ADVANCE(778);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(744);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(726);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(727);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(750);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(749);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'G') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(737);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(734);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(742);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(749);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(712);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(738);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(735);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'O') ADVANCE(751);
      if (lookahead == 'o') ADVANCE(788);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'P') ADVANCE(747);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(741);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(740);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(731);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(746);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(711);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(722);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(732);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(769);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(755);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(772);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(763);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(756);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'i') ADVANCE(775);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(792);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(783);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(795);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(766);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(787);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(765);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(780);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(789);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(764);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(773);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(794);
      if (lookahead == '}') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(800);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(794);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(800);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '>') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(901);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(902);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(906);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(438);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(904);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(904);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(444);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(450);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(447);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(457);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(910);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(824);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(850);
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(813);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      ADVANCE_MAP(
        'B', 890,
        'D', 868,
        'I', 882,
        'P', 860,
        'S', 841,
        '{', 863,
        '}', 465,
        '\t', 465,
        ' ', 465,
        '(', 910,
        ',', 910,
        '[', 910,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(909);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'C') ADVANCE(828);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(883);
      if (lookahead == 'U') ADVANCE(884);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(822);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(849);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(815);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(831);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(833);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(855);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(858);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'G') ADVANCE(820);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(842);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(839);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(847);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(854);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(812);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(843);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(840);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'O') ADVANCE(856);
      if (lookahead == 'o') ADVANCE(894);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'P') ADVANCE(852);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(846);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(845);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(836);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(851);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(811);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(829);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(835);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(814);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(877);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(897);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(875);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(861);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(832);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(821);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(869);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(862);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'i') ADVANCE(881);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(873);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(892);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(889);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(817);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(905);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(893);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(871);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(866);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(895);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(870);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(879);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(900);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(909);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(909);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(705);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(903);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(704);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(909);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(909);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(909);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(909);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(910);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__word_common_token1] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Note_COLON] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_Notes_COLON] = ACTIONS(1),
    [anon_sym_Warning_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [anon_sym_Deprecated] = ACTIONS(1),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_codeblock_token2] = ACTIONS(1),
    [aux_sym__blank_token1] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(108),
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(58),
    [sym__blank] = STATE(2),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_help_file_repeat3] = STATE(102),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(33),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [2] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(58),
    [sym__blank] = STATE(40),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_help_file_repeat1] = STATE(40),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_help_file_repeat3] = STATE(99),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(45),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [3] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_help_file_repeat3] = STATE(99),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(45),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [4] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_help_file_repeat3] = STATE(103),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(49),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [5] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_word_noli_token1] = ACTIONS(53),
    [aux_sym_word_noli_token2] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [aux_sym__word_common_token3] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(62),
    [aux_sym__word_common_token4] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_Note_COLON] = ACTIONS(74),
    [anon_sym_NOTE_COLON] = ACTIONS(74),
    [anon_sym_Notes_COLON] = ACTIONS(74),
    [anon_sym_Warning_COLON] = ACTIONS(74),
    [anon_sym_WARNING_COLON] = ACTIONS(74),
    [anon_sym_Deprecated] = ACTIONS(74),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(74),
    [aux_sym_keycode_token1] = ACTIONS(77),
    [aux_sym_keycode_token2] = ACTIONS(77),
    [aux_sym_keycode_token3] = ACTIONS(77),
    [aux_sym_keycode_token4] = ACTIONS(77),
    [aux_sym_keycode_token5] = ACTIONS(80),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(80),
    [aux_sym_keycode_token6] = ACTIONS(77),
    [aux_sym_keycode_token7] = ACTIONS(77),
    [aux_sym_uppercase_name_token1] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_line_li_token1] = ACTIONS(89),
    [sym_modeline] = ACTIONS(51),
    [aux_sym_h1_token1] = ACTIONS(92),
    [aux_sym_h2_token1] = ACTIONS(95),
    [sym_url_word] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(101),
  },
  [6] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_codeblock] = STATE(58),
    [sym__blank] = STATE(36),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(94),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(104),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [7] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(20),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym__column_heading] = STATE(109),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_word_noli_token1] = ACTIONS(106),
    [aux_sym_word_noli_token2] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [aux_sym__word_common_token3] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(115),
    [aux_sym__word_common_token4] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_Note_COLON] = ACTIONS(127),
    [anon_sym_NOTE_COLON] = ACTIONS(127),
    [anon_sym_Notes_COLON] = ACTIONS(127),
    [anon_sym_Warning_COLON] = ACTIONS(127),
    [anon_sym_WARNING_COLON] = ACTIONS(127),
    [anon_sym_Deprecated] = ACTIONS(127),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(127),
    [aux_sym_keycode_token1] = ACTIONS(130),
    [aux_sym_keycode_token2] = ACTIONS(130),
    [aux_sym_keycode_token3] = ACTIONS(130),
    [aux_sym_keycode_token4] = ACTIONS(130),
    [aux_sym_keycode_token5] = ACTIONS(133),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(133),
    [aux_sym_keycode_token6] = ACTIONS(130),
    [aux_sym_keycode_token7] = ACTIONS(130),
    [aux_sym_uppercase_name_token1] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(139),
    [aux_sym__blank_token1] = ACTIONS(141),
    [aux_sym_line_li_token1] = ACTIONS(141),
    [aux_sym_h1_token1] = ACTIONS(143),
    [aux_sym_h2_token1] = ACTIONS(146),
    [sym_url_word] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(152),
  },
  [8] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(12),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [aux_sym__blank_token1] = ACTIONS(159),
    [aux_sym_line_li_token1] = ACTIONS(159),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [9] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(13),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(161),
    [aux_sym__blank_token1] = ACTIONS(163),
    [aux_sym_line_li_token1] = ACTIONS(163),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [10] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(14),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(165),
    [aux_sym__blank_token1] = ACTIONS(167),
    [aux_sym_line_li_token1] = ACTIONS(167),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [11] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(15),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(169),
    [aux_sym__blank_token1] = ACTIONS(171),
    [aux_sym_line_li_token1] = ACTIONS(171),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [12] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(16),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(173),
    [aux_sym__blank_token1] = ACTIONS(175),
    [aux_sym_line_li_token1] = ACTIONS(175),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [13] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(16),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(177),
    [aux_sym__blank_token1] = ACTIONS(179),
    [aux_sym_line_li_token1] = ACTIONS(179),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [14] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(16),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(181),
    [aux_sym__blank_token1] = ACTIONS(183),
    [aux_sym_line_li_token1] = ACTIONS(183),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [15] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(16),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(185),
    [aux_sym__blank_token1] = ACTIONS(187),
    [aux_sym_line_li_token1] = ACTIONS(187),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [16] = {
    [sym__atom_noli] = STATE(21),
    [sym_word_noli] = STATE(21),
    [sym__atom_common] = STATE(21),
    [sym__word_common] = STATE(92),
    [sym_note] = STATE(21),
    [sym_keycode] = STATE(21),
    [sym__uppercase_words] = STATE(21),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_line_li_repeat2] = STATE(16),
    [aux_sym_word_noli_token1] = ACTIONS(189),
    [aux_sym_word_noli_token2] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [aux_sym__word_common_token3] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_SQUOTE_PIPE_SQUOTE] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(192),
    [aux_sym__word_common_token4] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_Note_COLON] = ACTIONS(207),
    [anon_sym_NOTE_COLON] = ACTIONS(207),
    [anon_sym_Notes_COLON] = ACTIONS(207),
    [anon_sym_Warning_COLON] = ACTIONS(207),
    [anon_sym_WARNING_COLON] = ACTIONS(207),
    [anon_sym_Deprecated] = ACTIONS(207),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(207),
    [aux_sym_keycode_token1] = ACTIONS(210),
    [aux_sym_keycode_token2] = ACTIONS(210),
    [aux_sym_keycode_token3] = ACTIONS(210),
    [aux_sym_keycode_token4] = ACTIONS(210),
    [aux_sym_keycode_token5] = ACTIONS(213),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(213),
    [aux_sym_keycode_token6] = ACTIONS(210),
    [aux_sym_keycode_token7] = ACTIONS(210),
    [aux_sym_uppercase_name_token1] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(219),
    [aux_sym__blank_token1] = ACTIONS(221),
    [aux_sym_line_li_token1] = ACTIONS(221),
    [sym_url_word] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(226),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(235), 1,
      aux_sym__blank_token1,
    STATE(11), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [81] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(237), 1,
      aux_sym__blank_token1,
    STATE(9), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [162] = 18,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(239), 1,
      anon_sym_TILDE,
    ACTIONS(242), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(56), 1,
      sym_codeblock,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 7,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [245] = 18,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(244), 1,
      anon_sym_TILDE,
    ACTIONS(247), 1,
      aux_sym__blank_token1,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(55), 1,
      sym_codeblock,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 7,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [328] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      aux_sym__blank_token1,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(66), 1,
      sym_codeblock,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [409] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(251), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(67), 1,
      sym_codeblock,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [490] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(253), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [566] = 15,
    ACTIONS(255), 1,
      aux_sym_word_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      aux_sym__blank_token1,
    ACTIONS(284), 1,
      sym_url_word,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(276), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(279), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(273), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(264), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [642] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(290), 1,
      aux_sym__blank_token1,
    STATE(28), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [718] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(292), 1,
      aux_sym__blank_token1,
    STATE(30), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [794] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(294), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(26), 1,
      sym_tag,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [872] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(296), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [948] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(298), 1,
      aux_sym__blank_token1,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1024] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(300), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1100] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(302), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(25), 1,
      sym_tag,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1178] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1251] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1324] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(31), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1397] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(18), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(231), 9,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(89), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1470] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(306), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(304), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1521] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(308), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1572] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(312), 1,
      aux_sym_line_li_token1,
    STATE(41), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(308), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1625] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(41), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(308), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1676] = 4,
    ACTIONS(318), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(316), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(314), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1727] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(323), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(321), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1778] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(312), 1,
      aux_sym_line_li_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(306), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(304), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1831] = 6,
    ACTIONS(327), 1,
      aux_sym__blank_token1,
    ACTIONS(329), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(47), 1,
      sym_line_code,
    ACTIONS(331), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(325), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1885] = 6,
    ACTIONS(335), 1,
      aux_sym__blank_token1,
    ACTIONS(338), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(47), 1,
      sym_line_code,
    ACTIONS(341), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(333), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1939] = 2,
    ACTIONS(345), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(343), 26,
      ts_builtin_sym_end,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1984] = 2,
    ACTIONS(349), 3,
      aux_sym__blank_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(347), 36,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2028] = 2,
    ACTIONS(353), 3,
      aux_sym__blank_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(351), 36,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2072] = 5,
    ACTIONS(355), 1,
      aux_sym__blank_token1,
    ACTIONS(357), 1,
      aux_sym_line_code_token1,
    STATE(49), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
    ACTIONS(325), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2122] = 5,
    ACTIONS(359), 1,
      aux_sym__blank_token1,
    ACTIONS(362), 1,
      aux_sym_line_code_token1,
    STATE(49), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
    ACTIONS(333), 35,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2172] = 2,
    ACTIONS(365), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(367), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2215] = 2,
    ACTIONS(369), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(371), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2258] = 2,
    ACTIONS(373), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(375), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2301] = 2,
    ACTIONS(377), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(379), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2344] = 2,
    ACTIONS(381), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(383), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2387] = 2,
    ACTIONS(385), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(387), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2430] = 2,
    ACTIONS(389), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(391), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2473] = 2,
    ACTIONS(393), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(395), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2516] = 2,
    ACTIONS(397), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(399), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2559] = 2,
    ACTIONS(401), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(403), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2602] = 2,
    ACTIONS(405), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(407), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2645] = 2,
    ACTIONS(409), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(411), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2688] = 2,
    ACTIONS(413), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(415), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2731] = 2,
    ACTIONS(349), 1,
      aux_sym__blank_token1,
    ACTIONS(347), 36,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2773] = 2,
    ACTIONS(353), 1,
      aux_sym__blank_token1,
    ACTIONS(351), 36,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2815] = 2,
    ACTIONS(417), 13,
      aux_sym_word_noli_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(419), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2856] = 2,
    ACTIONS(385), 13,
      aux_sym_word_noli_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(387), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2897] = 2,
    ACTIONS(389), 13,
      aux_sym_word_noli_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(391), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2938] = 4,
    ACTIONS(427), 1,
      aux_sym_optionlink_token1,
    ACTIONS(423), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(421), 16,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Deprecated,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(425), 16,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
  [2982] = 3,
    ACTIONS(429), 2,
      aux_sym_codeblock_token1,
      aux_sym_codeblock_token2,
    ACTIONS(421), 8,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym__blank_token1,
    ACTIONS(425), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3023] = 4,
    ACTIONS(435), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(431), 11,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(433), 21,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3066] = 5,
    ACTIONS(435), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(439), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(437), 11,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(441), 19,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
  [3111] = 3,
    ACTIONS(443), 2,
      aux_sym_codeblock_token1,
      aux_sym_codeblock_token2,
    ACTIONS(421), 8,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym__blank_token1,
    ACTIONS(425), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3152] = 4,
    ACTIONS(435), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(437), 11,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(441), 21,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3195] = 4,
    ACTIONS(449), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(445), 11,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(447), 21,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3238] = 5,
    ACTIONS(435), 1,
      aux_sym_uppercase_name_token2,
    STATE(71), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(452), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(431), 11,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(433), 19,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
  [3283] = 2,
    ACTIONS(454), 12,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token2,
    ACTIONS(456), 21,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3321] = 3,
    ACTIONS(458), 1,
      aux_sym_taglink_token1,
    ACTIONS(425), 2,
      aux_sym__word_common_token3,
      aux_sym__blank_token1,
    ACTIONS(421), 30,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3361] = 3,
    ACTIONS(460), 1,
      aux_sym_tag_token1,
    ACTIONS(425), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(421), 30,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3401] = 3,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(462), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(464), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3441] = 3,
    ACTIONS(468), 1,
      aux_sym_argument_token1,
    ACTIONS(425), 3,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
    ACTIONS(421), 29,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3481] = 3,
    ACTIONS(474), 1,
      anon_sym_SQUOTE2,
    ACTIONS(470), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(472), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3521] = 2,
    ACTIONS(476), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(478), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3558] = 2,
    ACTIONS(480), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(482), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3595] = 2,
    ACTIONS(484), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(486), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3632] = 2,
    ACTIONS(488), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(490), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3669] = 2,
    ACTIONS(492), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(494), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3706] = 2,
    ACTIONS(496), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(498), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3743] = 2,
    ACTIONS(500), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(502), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3780] = 2,
    ACTIONS(504), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(506), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3817] = 2,
    ACTIONS(508), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(510), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3854] = 2,
    ACTIONS(512), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(514), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3891] = 2,
    ACTIONS(516), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(518), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3928] = 2,
    ACTIONS(520), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(522), 25,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_SQUOTE_PIPE_SQUOTE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3965] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(524), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3982] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(526), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3999] = 4,
    ACTIONS(528), 1,
      anon_sym_LT,
    ACTIONS(531), 1,
      aux_sym__blank_token1,
    ACTIONS(533), 1,
      aux_sym_line_li_token1,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4013] = 4,
    ACTIONS(327), 1,
      aux_sym__blank_token1,
    ACTIONS(329), 1,
      aux_sym_line_code_token1,
    STATE(43), 1,
      aux_sym_codeblock_repeat1,
    STATE(47), 1,
      sym_line_code,
  [4026] = 4,
    ACTIONS(355), 1,
      aux_sym__blank_token1,
    ACTIONS(357), 1,
      aux_sym_line_code_token1,
    STATE(48), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
  [4039] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 1,
      sym_modeline,
    STATE(101), 1,
      aux_sym_help_file_repeat3,
  [4049] = 3,
    ACTIONS(538), 1,
      anon_sym_STAR,
    ACTIONS(540), 1,
      aux_sym__blank_token1,
    STATE(29), 1,
      sym_tag,
  [4059] = 3,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 1,
      sym_modeline,
    STATE(101), 1,
      aux_sym_help_file_repeat3,
  [4069] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 1,
      sym_modeline,
    STATE(101), 1,
      aux_sym_help_file_repeat3,
  [4079] = 3,
    ACTIONS(536), 1,
      sym_modeline,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      aux_sym_help_file_repeat3,
  [4089] = 1,
    ACTIONS(549), 1,
      anon_sym_PIPE2,
  [4093] = 1,
    ACTIONS(460), 1,
      aux_sym_tag_token1,
  [4097] = 1,
    ACTIONS(551), 1,
      aux_sym_codespan_token1,
  [4101] = 1,
    ACTIONS(553), 1,
      aux_sym_codeblock_token2,
  [4105] = 1,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
  [4109] = 1,
    ACTIONS(557), 1,
      anon_sym_TILDE,
  [4113] = 1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE2,
  [4117] = 1,
    ACTIONS(312), 1,
      aux_sym_line_li_token1,
  [4121] = 1,
    ACTIONS(561), 1,
      anon_sym_STAR2,
  [4125] = 1,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
  [4129] = 1,
    ACTIONS(565), 1,
      anon_sym_BQUOTE2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 81,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 409,
  [SMALL_STATE(23)] = 490,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 794,
  [SMALL_STATE(28)] = 872,
  [SMALL_STATE(29)] = 948,
  [SMALL_STATE(30)] = 1024,
  [SMALL_STATE(31)] = 1100,
  [SMALL_STATE(32)] = 1178,
  [SMALL_STATE(33)] = 1251,
  [SMALL_STATE(34)] = 1324,
  [SMALL_STATE(35)] = 1397,
  [SMALL_STATE(36)] = 1470,
  [SMALL_STATE(37)] = 1521,
  [SMALL_STATE(38)] = 1572,
  [SMALL_STATE(39)] = 1625,
  [SMALL_STATE(40)] = 1676,
  [SMALL_STATE(41)] = 1727,
  [SMALL_STATE(42)] = 1778,
  [SMALL_STATE(43)] = 1831,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1939,
  [SMALL_STATE(46)] = 1984,
  [SMALL_STATE(47)] = 2028,
  [SMALL_STATE(48)] = 2072,
  [SMALL_STATE(49)] = 2122,
  [SMALL_STATE(50)] = 2172,
  [SMALL_STATE(51)] = 2215,
  [SMALL_STATE(52)] = 2258,
  [SMALL_STATE(53)] = 2301,
  [SMALL_STATE(54)] = 2344,
  [SMALL_STATE(55)] = 2387,
  [SMALL_STATE(56)] = 2430,
  [SMALL_STATE(57)] = 2473,
  [SMALL_STATE(58)] = 2516,
  [SMALL_STATE(59)] = 2559,
  [SMALL_STATE(60)] = 2602,
  [SMALL_STATE(61)] = 2645,
  [SMALL_STATE(62)] = 2688,
  [SMALL_STATE(63)] = 2731,
  [SMALL_STATE(64)] = 2773,
  [SMALL_STATE(65)] = 2815,
  [SMALL_STATE(66)] = 2856,
  [SMALL_STATE(67)] = 2897,
  [SMALL_STATE(68)] = 2938,
  [SMALL_STATE(69)] = 2982,
  [SMALL_STATE(70)] = 3023,
  [SMALL_STATE(71)] = 3066,
  [SMALL_STATE(72)] = 3111,
  [SMALL_STATE(73)] = 3152,
  [SMALL_STATE(74)] = 3195,
  [SMALL_STATE(75)] = 3238,
  [SMALL_STATE(76)] = 3283,
  [SMALL_STATE(77)] = 3321,
  [SMALL_STATE(78)] = 3361,
  [SMALL_STATE(79)] = 3401,
  [SMALL_STATE(80)] = 3441,
  [SMALL_STATE(81)] = 3481,
  [SMALL_STATE(82)] = 3521,
  [SMALL_STATE(83)] = 3558,
  [SMALL_STATE(84)] = 3595,
  [SMALL_STATE(85)] = 3632,
  [SMALL_STATE(86)] = 3669,
  [SMALL_STATE(87)] = 3706,
  [SMALL_STATE(88)] = 3743,
  [SMALL_STATE(89)] = 3780,
  [SMALL_STATE(90)] = 3817,
  [SMALL_STATE(91)] = 3854,
  [SMALL_STATE(92)] = 3891,
  [SMALL_STATE(93)] = 3928,
  [SMALL_STATE(94)] = 3965,
  [SMALL_STATE(95)] = 3982,
  [SMALL_STATE(96)] = 3999,
  [SMALL_STATE(97)] = 4013,
  [SMALL_STATE(98)] = 4026,
  [SMALL_STATE(99)] = 4039,
  [SMALL_STATE(100)] = 4049,
  [SMALL_STATE(101)] = 4059,
  [SMALL_STATE(102)] = 4069,
  [SMALL_STATE(103)] = 4079,
  [SMALL_STATE(104)] = 4089,
  [SMALL_STATE(105)] = 4093,
  [SMALL_STATE(106)] = 4097,
  [SMALL_STATE(107)] = 4101,
  [SMALL_STATE(108)] = 4105,
  [SMALL_STATE(109)] = 4109,
  [SMALL_STATE(110)] = 4113,
  [SMALL_STATE(111)] = 4117,
  [SMALL_STATE(112)] = 4121,
  [SMALL_STATE(113)] = 4125,
  [SMALL_STATE(114)] = 4129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(72),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(88),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(88),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(75),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(111),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(35),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(106),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, 0, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, 0, 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, 0, 8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, 0, 8),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 11),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 12),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 12),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, 0, 11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, 0, 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, 0, 12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, 0, 12),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(88),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(88),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(70),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(106),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__column_heading, 2, 1, 0), SHIFT(84),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__column_heading, 1, 1, 0), SHIFT(84),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, 0, 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, 0, 6),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, 0, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, 0, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 5, 0, 9),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 5, 0, 9),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 4, 0, 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 4, 0, 9),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3, 0, 9),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3, 0, 9),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 5, 0, 9),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 5, 0, 9),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, 0, 10),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, 0, 10),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3, 0, 9),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3, 0, 9),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 4, 0, 9),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 4, 0, 9),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, 0, 13),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, 0, 13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, 0, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, 0, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, 0, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, 0, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, 0, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, 0, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, 0, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 4, 0, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, 0, 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, 0, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, 0, 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 5),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 5),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, 0, 5),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, 0, 5),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, 0, 5),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, 0, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(111),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(35),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2, 0, 0),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2, 0, 0), SHIFT_REPEAT(101),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [555] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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

TS_PUBLIC const TSLanguage *tree_sitter_vimdoc(void) {
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
