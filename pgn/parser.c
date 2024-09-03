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
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 40

enum ts_symbol_identifiers {
  sym__empty_line = 1,
  anon_sym_SEMI = 2,
  anon_sym_PERCENT = 3,
  aux_sym_rest_of_line_comment_token1 = 4,
  sym_rest_of_line_comment_text = 5,
  sym_old_style_twic_section_comment = 6,
  sym_tagpair_delimiter_open = 7,
  sym_tagpair_delimiter_close = 8,
  anon_sym_DQUOTE = 9,
  sym_tagpair_key = 10,
  aux_sym_tagpair_value_contents_token1 = 11,
  sym_variation_delimiter_open = 12,
  sym_variation_delimiter_close = 13,
  sym_inline_comment_delimiter_open = 14,
  sym_inline_comment_delimiter_close = 15,
  sym_inline_comment_text = 16,
  sym_move_number = 17,
  sym__san_file = 18,
  sym__san_rank = 19,
  sym__san_promotable_piece = 20,
  sym__san_major_or_minor_piece = 21,
  sym__san_capture_symbol = 22,
  anon_sym_EQ = 23,
  anon_sym_P = 24,
  anon_sym_u2659 = 25,
  anon_sym_u265fufe0e = 26,
  anon_sym_AT = 27,
  aux_sym__lan_move_by_coordinates_token1 = 28,
  sym__san_move_castle = 29,
  sym__san_null_move = 30,
  sym_check_or_mate_condition = 31,
  sym_annotation = 32,
  anon_sym_1 = 33,
  anon_sym_DASH = 34,
  aux_sym_result_code_token1 = 35,
  anon_sym_u2212 = 36,
  aux_sym_result_code_token2 = 37,
  anon_sym_u2010 = 38,
  aux_sym_result_code_token3 = 39,
  anon_sym_u2011 = 40,
  aux_sym_result_code_token4 = 41,
  anon_sym_u2012 = 42,
  aux_sym_result_code_token5 = 43,
  anon_sym_u2013 = 44,
  aux_sym_result_code_token6 = 45,
  anon_sym_u2014 = 46,
  aux_sym_result_code_token7 = 47,
  anon_sym_u2796 = 48,
  aux_sym_result_code_token8 = 49,
  anon_sym_O = 50,
  anon_sym_0 = 51,
  anon_sym_o = 52,
  anon_sym_SLASH = 53,
  aux_sym_result_code_token9 = 54,
  anon_sym_u2215 = 55,
  aux_sym_result_code_token10 = 56,
  anon_sym_u2044 = 57,
  aux_sym_result_code_token11 = 58,
  anon_sym_u27cb = 59,
  aux_sym_result_code_token12 = 60,
  anon_sym_u29f8 = 61,
  aux_sym_result_code_token13 = 62,
  anon_sym_2 = 63,
  anon_sym_u00bd = 64,
  aux_sym_result_code_token14 = 65,
  anon_sym_STAR = 66,
  aux_sym_result_code_token15 = 67,
  anon_sym_u2217 = 68,
  aux_sym_result_code_token16 = 69,
  anon_sym_u2731 = 70,
  aux_sym_result_code_token17 = 71,
  anon_sym_u204e = 72,
  aux_sym_result_code_token18 = 73,
  anon_sym_u066d = 74,
  aux_sym_result_code_token19 = 75,
  sym__full_line_comment_delimiter_bol_assertion = 76,
  sym_series_of_games = 77,
  sym_game = 78,
  sym_freestanding_comment = 79,
  sym_rest_of_line_comment_delimiter_open = 80,
  sym_rest_of_line_comment = 81,
  sym_header = 82,
  sym_double_quote = 83,
  sym_tagpair = 84,
  sym__tagpair_value = 85,
  sym_tagpair_value_contents = 86,
  sym_movetext = 87,
  sym_variation_movetext = 88,
  sym__movetext_element = 89,
  sym__variation_movetext_element = 90,
  sym_variation = 91,
  sym_recursive_variation = 92,
  sym_inline_comment = 93,
  sym_san_move = 94,
  sym__san_move_piece = 95,
  sym_lan_move = 96,
  sym__san_promotion_symbol = 97,
  sym__san_square = 98,
  sym__san_promotion = 99,
  sym__san_move_pawn = 100,
  sym__san_drop_pawn = 101,
  sym__san_move_major_or_minor_piece = 102,
  sym__san_drop_major_or_minor_piece = 103,
  sym__lan_move_by_coordinates = 104,
  sym_result_code = 105,
  aux_sym_series_of_games_repeat1 = 106,
  aux_sym_freestanding_comment_repeat1 = 107,
  aux_sym_header_repeat1 = 108,
  aux_sym_tagpair_value_contents_repeat1 = 109,
  aux_sym_movetext_repeat1 = 110,
  aux_sym_variation_movetext_repeat1 = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENT] = "%",
  [aux_sym_rest_of_line_comment_token1] = "rest_of_line_comment_token1",
  [sym_rest_of_line_comment_text] = "rest_of_line_comment_text",
  [sym_old_style_twic_section_comment] = "old_style_twic_section_comment",
  [sym_tagpair_delimiter_open] = "tagpair_delimiter_open",
  [sym_tagpair_delimiter_close] = "tagpair_delimiter_close",
  [anon_sym_DQUOTE] = "\"",
  [sym_tagpair_key] = "tagpair_key",
  [aux_sym_tagpair_value_contents_token1] = "tagpair_value_contents_token1",
  [sym_variation_delimiter_open] = "variation_delimiter_open",
  [sym_variation_delimiter_close] = "variation_delimiter_close",
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym_inline_comment_text] = "inline_comment_text",
  [sym_move_number] = "move_number",
  [sym__san_file] = "_san_file",
  [sym__san_rank] = "_san_rank",
  [sym__san_promotable_piece] = "_san_promotable_piece",
  [sym__san_major_or_minor_piece] = "_san_major_or_minor_piece",
  [sym__san_capture_symbol] = "_san_capture_symbol",
  [anon_sym_EQ] = "=",
  [anon_sym_P] = "P",
  [anon_sym_u2659] = "\u2659",
  [anon_sym_u265fufe0e] = "\u265f\ufe0e",
  [anon_sym_AT] = "@",
  [aux_sym__lan_move_by_coordinates_token1] = "_lan_move_by_coordinates_token1",
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [aux_sym_result_code_token1] = "result_code_token1",
  [anon_sym_u2212] = "\u2212",
  [aux_sym_result_code_token2] = "result_code_token2",
  [anon_sym_u2010] = "\u2010",
  [aux_sym_result_code_token3] = "result_code_token3",
  [anon_sym_u2011] = "\u2011",
  [aux_sym_result_code_token4] = "result_code_token4",
  [anon_sym_u2012] = "\u2012",
  [aux_sym_result_code_token5] = "result_code_token5",
  [anon_sym_u2013] = "\u2013",
  [aux_sym_result_code_token6] = "result_code_token6",
  [anon_sym_u2014] = "\u2014",
  [aux_sym_result_code_token7] = "result_code_token7",
  [anon_sym_u2796] = "\u2796",
  [aux_sym_result_code_token8] = "result_code_token8",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [aux_sym_result_code_token9] = "result_code_token9",
  [anon_sym_u2215] = "\u2215",
  [aux_sym_result_code_token10] = "result_code_token10",
  [anon_sym_u2044] = "\u2044",
  [aux_sym_result_code_token11] = "result_code_token11",
  [anon_sym_u27cb] = "\u27cb",
  [aux_sym_result_code_token12] = "result_code_token12",
  [anon_sym_u29f8] = "\u29f8",
  [aux_sym_result_code_token13] = "result_code_token13",
  [anon_sym_2] = "2",
  [anon_sym_u00bd] = "\u00bd",
  [aux_sym_result_code_token14] = "result_code_token14",
  [anon_sym_STAR] = "*",
  [aux_sym_result_code_token15] = "result_code_token15",
  [anon_sym_u2217] = "\u2217",
  [aux_sym_result_code_token16] = "result_code_token16",
  [anon_sym_u2731] = "\u2731",
  [aux_sym_result_code_token17] = "result_code_token17",
  [anon_sym_u204e] = "\u204e",
  [aux_sym_result_code_token18] = "result_code_token18",
  [anon_sym_u066d] = "\u066d",
  [aux_sym_result_code_token19] = "result_code_token19",
  [sym__full_line_comment_delimiter_bol_assertion] = "_full_line_comment_delimiter_bol_assertion",
  [sym_series_of_games] = "series_of_games",
  [sym_game] = "game",
  [sym_freestanding_comment] = "freestanding_comment",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
  [sym_rest_of_line_comment] = "rest_of_line_comment",
  [sym_header] = "header",
  [sym_double_quote] = "double_quote",
  [sym_tagpair] = "tagpair",
  [sym__tagpair_value] = "_tagpair_value",
  [sym_tagpair_value_contents] = "tagpair_value_contents",
  [sym_movetext] = "movetext",
  [sym_variation_movetext] = "variation_movetext",
  [sym__movetext_element] = "_movetext_element",
  [sym__variation_movetext_element] = "_variation_movetext_element",
  [sym_variation] = "variation",
  [sym_recursive_variation] = "recursive_variation",
  [sym_inline_comment] = "inline_comment",
  [sym_san_move] = "san_move",
  [sym__san_move_piece] = "_san_move_piece",
  [sym_lan_move] = "lan_move",
  [sym__san_promotion_symbol] = "_san_promotion_symbol",
  [sym__san_square] = "_san_square",
  [sym__san_promotion] = "_san_promotion",
  [sym__san_move_pawn] = "_san_move_pawn",
  [sym__san_drop_pawn] = "_san_drop_pawn",
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
  [sym__san_drop_major_or_minor_piece] = "_san_drop_major_or_minor_piece",
  [sym__lan_move_by_coordinates] = "_lan_move_by_coordinates",
  [sym_result_code] = "result_code",
  [aux_sym_series_of_games_repeat1] = "series_of_games_repeat1",
  [aux_sym_freestanding_comment_repeat1] = "freestanding_comment_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_tagpair_value_contents_repeat1] = "tagpair_value_contents_repeat1",
  [aux_sym_movetext_repeat1] = "movetext_repeat1",
  [aux_sym_variation_movetext_repeat1] = "variation_movetext_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__empty_line] = sym__empty_line,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_rest_of_line_comment_token1] = aux_sym_rest_of_line_comment_token1,
  [sym_rest_of_line_comment_text] = sym_rest_of_line_comment_text,
  [sym_old_style_twic_section_comment] = sym_old_style_twic_section_comment,
  [sym_tagpair_delimiter_open] = sym_tagpair_delimiter_open,
  [sym_tagpair_delimiter_close] = sym_tagpair_delimiter_close,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_tagpair_key] = sym_tagpair_key,
  [aux_sym_tagpair_value_contents_token1] = aux_sym_tagpair_value_contents_token1,
  [sym_variation_delimiter_open] = sym_variation_delimiter_open,
  [sym_variation_delimiter_close] = sym_variation_delimiter_close,
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym_inline_comment_text] = sym_inline_comment_text,
  [sym_move_number] = sym_move_number,
  [sym__san_file] = sym__san_file,
  [sym__san_rank] = sym__san_rank,
  [sym__san_promotable_piece] = sym__san_promotable_piece,
  [sym__san_major_or_minor_piece] = sym__san_major_or_minor_piece,
  [sym__san_capture_symbol] = sym__san_capture_symbol,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_u2659] = anon_sym_u2659,
  [anon_sym_u265fufe0e] = anon_sym_u265fufe0e,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__lan_move_by_coordinates_token1] = aux_sym__lan_move_by_coordinates_token1,
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_result_code_token1] = aux_sym_result_code_token1,
  [anon_sym_u2212] = anon_sym_u2212,
  [aux_sym_result_code_token2] = aux_sym_result_code_token2,
  [anon_sym_u2010] = anon_sym_u2010,
  [aux_sym_result_code_token3] = aux_sym_result_code_token3,
  [anon_sym_u2011] = anon_sym_u2011,
  [aux_sym_result_code_token4] = aux_sym_result_code_token4,
  [anon_sym_u2012] = anon_sym_u2012,
  [aux_sym_result_code_token5] = aux_sym_result_code_token5,
  [anon_sym_u2013] = anon_sym_u2013,
  [aux_sym_result_code_token6] = aux_sym_result_code_token6,
  [anon_sym_u2014] = anon_sym_u2014,
  [aux_sym_result_code_token7] = aux_sym_result_code_token7,
  [anon_sym_u2796] = anon_sym_u2796,
  [aux_sym_result_code_token8] = aux_sym_result_code_token8,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_result_code_token9] = aux_sym_result_code_token9,
  [anon_sym_u2215] = anon_sym_u2215,
  [aux_sym_result_code_token10] = aux_sym_result_code_token10,
  [anon_sym_u2044] = anon_sym_u2044,
  [aux_sym_result_code_token11] = aux_sym_result_code_token11,
  [anon_sym_u27cb] = anon_sym_u27cb,
  [aux_sym_result_code_token12] = aux_sym_result_code_token12,
  [anon_sym_u29f8] = anon_sym_u29f8,
  [aux_sym_result_code_token13] = aux_sym_result_code_token13,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_u00bd] = anon_sym_u00bd,
  [aux_sym_result_code_token14] = aux_sym_result_code_token14,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_result_code_token15] = aux_sym_result_code_token15,
  [anon_sym_u2217] = anon_sym_u2217,
  [aux_sym_result_code_token16] = aux_sym_result_code_token16,
  [anon_sym_u2731] = anon_sym_u2731,
  [aux_sym_result_code_token17] = aux_sym_result_code_token17,
  [anon_sym_u204e] = anon_sym_u204e,
  [aux_sym_result_code_token18] = aux_sym_result_code_token18,
  [anon_sym_u066d] = anon_sym_u066d,
  [aux_sym_result_code_token19] = aux_sym_result_code_token19,
  [sym__full_line_comment_delimiter_bol_assertion] = sym__full_line_comment_delimiter_bol_assertion,
  [sym_series_of_games] = sym_series_of_games,
  [sym_game] = sym_game,
  [sym_freestanding_comment] = sym_freestanding_comment,
  [sym_rest_of_line_comment_delimiter_open] = sym_rest_of_line_comment_delimiter_open,
  [sym_rest_of_line_comment] = sym_rest_of_line_comment,
  [sym_header] = sym_header,
  [sym_double_quote] = sym_double_quote,
  [sym_tagpair] = sym_tagpair,
  [sym__tagpair_value] = sym__tagpair_value,
  [sym_tagpair_value_contents] = sym_tagpair_value_contents,
  [sym_movetext] = sym_movetext,
  [sym_variation_movetext] = sym_variation_movetext,
  [sym__movetext_element] = sym__movetext_element,
  [sym__variation_movetext_element] = sym__variation_movetext_element,
  [sym_variation] = sym_variation,
  [sym_recursive_variation] = sym_recursive_variation,
  [sym_inline_comment] = sym_inline_comment,
  [sym_san_move] = sym_san_move,
  [sym__san_move_piece] = sym__san_move_piece,
  [sym_lan_move] = sym_lan_move,
  [sym__san_promotion_symbol] = sym__san_promotion_symbol,
  [sym__san_square] = sym__san_square,
  [sym__san_promotion] = sym__san_promotion,
  [sym__san_move_pawn] = sym__san_move_pawn,
  [sym__san_drop_pawn] = sym__san_drop_pawn,
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
  [sym__san_drop_major_or_minor_piece] = sym__san_drop_major_or_minor_piece,
  [sym__lan_move_by_coordinates] = sym__lan_move_by_coordinates,
  [sym_result_code] = sym_result_code,
  [aux_sym_series_of_games_repeat1] = aux_sym_series_of_games_repeat1,
  [aux_sym_freestanding_comment_repeat1] = aux_sym_freestanding_comment_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_tagpair_value_contents_repeat1] = aux_sym_tagpair_value_contents_repeat1,
  [aux_sym_movetext_repeat1] = aux_sym_movetext_repeat1,
  [aux_sym_variation_movetext_repeat1] = aux_sym_variation_movetext_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rest_of_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest_of_line_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_old_style_twic_section_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_tagpair_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tagpair_value_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variation_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_move_number] = {
    .visible = true,
    .named = true,
  },
  [sym__san_file] = {
    .visible = false,
    .named = true,
  },
  [sym__san_rank] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotable_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_capture_symbol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2659] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u265fufe0e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lan_move_by_coordinates_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__san_move_castle] = {
    .visible = false,
    .named = true,
  },
  [sym__san_null_move] = {
    .visible = false,
    .named = true,
  },
  [sym_check_or_mate_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2212] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2010] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2011] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2012] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2013] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2014] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2796] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2215] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2044] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u27cb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u29f8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00bd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token14] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token15] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2217] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2731] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u204e] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token18] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u066d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token19] = {
    .visible = false,
    .named = false,
  },
  [sym__full_line_comment_delimiter_bol_assertion] = {
    .visible = false,
    .named = true,
  },
  [sym_series_of_games] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_freestanding_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair] = {
    .visible = true,
    .named = true,
  },
  [sym__tagpair_value] = {
    .visible = false,
    .named = true,
  },
  [sym_tagpair_value_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym__movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_recursive_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_san_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_move_piece] = {
    .visible = false,
    .named = true,
  },
  [sym_lan_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_promotion_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__san_square] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__lan_move_by_coordinates] = {
    .visible = false,
    .named = true,
  },
  [sym_result_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_series_of_games_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_freestanding_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_value_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variation_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_annotation = 1,
  field_comment = 2,
  field_comment_content = 3,
  field_comment_delimiter = 4,
  field_freestanding_comment = 5,
  field_game = 6,
  field_header = 7,
  field_lan_move = 8,
  field_move_number = 9,
  field_movetext = 10,
  field_recursive_variation_content = 11,
  field_recursive_variation_delimiter = 12,
  field_result_code = 13,
  field_san_move = 14,
  field_tagpair = 15,
  field_tagpair_delimiter = 16,
  field_tagpair_key = 17,
  field_tagpair_value_contents = 18,
  field_tagpair_value_delimiter = 19,
  field_variation_annotation = 20,
  field_variation_comment = 21,
  field_variation_content = 22,
  field_variation_delimiter = 23,
  field_variation_lan_move = 24,
  field_variation_move_number = 25,
  field_variation_san_move = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_annotation] = "annotation",
  [field_comment] = "comment",
  [field_comment_content] = "comment_content",
  [field_comment_delimiter] = "comment_delimiter",
  [field_freestanding_comment] = "freestanding_comment",
  [field_game] = "game",
  [field_header] = "header",
  [field_lan_move] = "lan_move",
  [field_move_number] = "move_number",
  [field_movetext] = "movetext",
  [field_recursive_variation_content] = "recursive_variation_content",
  [field_recursive_variation_delimiter] = "recursive_variation_delimiter",
  [field_result_code] = "result_code",
  [field_san_move] = "san_move",
  [field_tagpair] = "tagpair",
  [field_tagpair_delimiter] = "tagpair_delimiter",
  [field_tagpair_key] = "tagpair_key",
  [field_tagpair_value_contents] = "tagpair_value_contents",
  [field_tagpair_value_delimiter] = "tagpair_value_delimiter",
  [field_variation_annotation] = "variation_annotation",
  [field_variation_comment] = "variation_comment",
  [field_variation_content] = "variation_content",
  [field_variation_delimiter] = "variation_delimiter",
  [field_variation_lan_move] = "variation_lan_move",
  [field_variation_move_number] = "variation_move_number",
  [field_variation_san_move] = "variation_san_move",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 5},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 1},
  [15] = {.index = 20, .length = 5},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 2},
  [22] = {.index = 35, .length = 3},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 3},
  [25] = {.index = 43, .length = 4},
  [26] = {.index = 47, .length = 10},
  [27] = {.index = 57, .length = 2},
  [28] = {.index = 59, .length = 3},
  [29] = {.index = 62, .length = 10},
  [30] = {.index = 72, .length = 3},
  [31] = {.index = 75, .length = 2},
  [32] = {.index = 77, .length = 2},
  [33] = {.index = 79, .length = 3},
  [34] = {.index = 82, .length = 4},
  [35] = {.index = 86, .length = 2},
  [36] = {.index = 88, .length = 5},
  [37] = {.index = 93, .length = 3},
  [38] = {.index = 96, .length = 3},
  [39] = {.index = 99, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_move_number, 0},
  [1] =
    {field_annotation, 0},
  [2] =
    {field_game, 0},
  [3] =
    {field_freestanding_comment, 0},
  [4] =
    {field_comment, 0},
  [5] =
    {field_tagpair, 0},
  [6] =
    {field_annotation, 0, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [11] =
    {field_san_move, 0},
  [12] =
    {field_lan_move, 0},
  [13] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_game, 0, .inherited = true},
  [15] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [17] =
    {field_variation_move_number, 0},
  [18] =
    {field_variation_annotation, 0},
  [19] =
    {field_variation_comment, 0},
  [20] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [25] =
    {field_variation_san_move, 0},
  [26] =
    {field_variation_lan_move, 0},
  [27] =
    {field_freestanding_comment, 0},
    {field_game, 1},
  [29] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [31] =
    {field_header, 0},
    {field_movetext, 1},
  [33] =
    {field_header, 0},
    {field_result_code, 1},
  [35] =
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0},
    {field_tagpair, 1, .inherited = true},
  [38] =
    {field_movetext, 0},
    {field_result_code, 1},
  [40] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [43] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [47] =
    {field_annotation, 0, .inherited = true},
    {field_annotation, 1, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_lan_move, 1, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_move_number, 1, .inherited = true},
    {field_san_move, 0, .inherited = true},
    {field_san_move, 1, .inherited = true},
  [57] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [59] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [62] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_annotation, 1, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_comment, 1, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_lan_move, 1, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_move_number, 1, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
    {field_variation_san_move, 1, .inherited = true},
  [72] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [75] =
    {field_header, 0},
    {field_movetext, 2},
  [77] =
    {field_header, 0},
    {field_result_code, 2},
  [79] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [82] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [86] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [88] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [93] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
  [96] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [99] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
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
  [6] = 4,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 11,
  [18] = 18,
  [19] = 12,
  [20] = 20,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 12,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 12,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 39,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 39,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 31,
  [61] = 41,
  [62] = 39,
  [63] = 12,
  [64] = 58,
  [65] = 57,
  [66] = 66,
  [67] = 67,
  [68] = 44,
  [69] = 38,
  [70] = 43,
  [71] = 34,
  [72] = 27,
  [73] = 36,
  [74] = 74,
  [75] = 37,
  [76] = 35,
  [77] = 58,
  [78] = 33,
  [79] = 25,
  [80] = 26,
  [81] = 81,
  [82] = 59,
  [83] = 83,
  [84] = 83,
  [85] = 58,
  [86] = 48,
  [87] = 47,
  [88] = 46,
  [89] = 89,
  [90] = 53,
  [91] = 54,
  [92] = 92,
  [93] = 49,
  [94] = 55,
  [95] = 51,
  [96] = 52,
  [97] = 56,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 100,
  [102] = 99,
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
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 140,
  [145] = 145,
  [146] = 146,
  [147] = 142,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 141,
  [153] = 151,
  [154] = 143,
  [155] = 138,
  [156] = 145,
  [157] = 148,
  [158] = 149,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 162,
  [172] = 159,
  [173] = 166,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 150,
  [180] = 168,
  [181] = 181,
  [182] = 170,
  [183] = 183,
  [184] = 184,
  [185] = 162,
  [186] = 168,
  [187] = 162,
  [188] = 168,
  [189] = 167,
  [190] = 165,
};

static TSCharacterRange sym_move_number_character_set_2[] = {
  {'\t', '\r'}, {' ', ' '}, {'.', '.'}, {0x660, 0x660}, {0x6f0, 0x6f0}, {0x701, 0x702}, {0x200e, 0x200e}, {0x2024, 0x2024},
  {0xa4f8, 0xa4f8}, {0xa60e, 0xa60e}, {0x1d16d, 0x1d16d},
};

static TSCharacterRange sym_annotation_character_set_4[] = {
  {'\t', '\r'}, {' ', '!'}, {'$', '$'}, {'&', '&'}, {'+', '+'}, {'-', '-'}, {'<', '='}, {'?', '?'},
  {'N', 'N'}, {'R', 'R'}, {'T', 'T'}, {'e', 'e'}, {0xb1, 0xb1}, {0x16ed, 0x16ed}, {0x2010, 0x2014}, {0x203c, 0x203d},
  {0x2047, 0x2049}, {0x2191, 0x2192}, {0x21c6, 0x21c6}, {0x21d4, 0x21d4}, {0x21d7, 0x21d7}, {0x2206, 0x2207}, {0x2212, 0x2213}, {0x221e, 0x221e},
  {0x2264, 0x2264}, {0x229e, 0x229e}, {0x22a5, 0x22a5}, {0x2313, 0x2313}, {0x2514, 0x2514}, {0x2518, 0x2518}, {0x25a1, 0x25a1}, {0x25cb, 0x25cb},
  {0x25fa, 0x25fa}, {0x25ff, 0x25ff}, {0x2642, 0x2642}, {0x2715, 0x2715}, {0x2795, 0x2796}, {0x27ea, 0x27eb}, {0x27f3, 0x27f3}, {0x2a00, 0x2a01},
  {0x2a71, 0x2a72}, {0x2b12, 0x2b13},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '"', 1482,
        '#', 1538,
        '%', 1471,
        '&', 798,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '-', 1563,
        '/', 1589,
        '0', 1585,
        '1', 1560,
        '2', 1599,
        ';', 1469,
        '=', 1516,
        '@', 1526,
        'O', 1581,
        'P', 1519,
        '[', 1478,
        ']', 1480,
        'o', 1588,
        '{', 1491,
        '}', 1493,
        0xbd, 1600,
        0x66d, 1620,
        0x2010, 1567,
        0x2011, 1569,
        0x2012, 1571,
        0x2013, 1573,
        0x2014, 1575,
        0x2044, 1593,
        0x204e, 1616,
        0x2212, 1565,
        0x2215, 1591,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        0x2796, 1577,
        0x27cb, 1595,
        0x29f8, 1597,
        '+', 1541,
        0x16ed, 1541,
        0x2795, 1541,
        ':', 1514,
        'X', 1514,
        'x', 1514,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1465);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1503);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1504);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(821);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '#', 73,
        'D', 336,
        'L', 299,
        'M', 379,
        'P', 385,
        'R', 300,
        'S', 361,
        'U', 420,
        'a', 447,
        'b', 378,
        'c', 377,
        'd', 298,
        'e', 426,
        'f', 437,
        'h', 293,
        'i', 400,
        'l', 334,
        'm', 302,
        'n', 296,
        'p', 337,
        'q', 483,
        'r', 304,
        's', 387,
        'u', 305,
        'x', 412,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '#', 94,
        'd', 312,
        'h', 503,
        'm', 324,
        'n', 325,
        'p', 397,
        's', 417,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'q') ADVANCE(499);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '#', 111,
        'd', 312,
        'h', 503,
        'm', 324,
        'n', 325,
        's', 417,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '#', 118,
        'd', 316,
        'h', 505,
        'm', 330,
        'n', 331,
        'p', 396,
        's', 418,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '#', 121,
        'D', 336,
        'L', 299,
        'M', 379,
        'P', 385,
        'R', 300,
        'S', 361,
        'U', 420,
        'a', 447,
        'b', 378,
        'c', 377,
        'd', 298,
        'e', 426,
        'f', 437,
        'h', 293,
        'i', 400,
        'l', 334,
        'm', 302,
        'n', 296,
        'p', 338,
        'q', 483,
        'r', 304,
        's', 387,
        'u', 305,
        'x', 412,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '#', 122,
        'D', 336,
        'L', 299,
        'M', 379,
        'P', 385,
        'R', 300,
        'S', 361,
        'U', 420,
        'a', 447,
        'b', 378,
        'c', 377,
        'd', 318,
        'e', 426,
        'f', 437,
        'h', 294,
        'i', 400,
        'l', 334,
        'm', 303,
        'n', 297,
        'p', 337,
        'q', 483,
        'r', 304,
        's', 387,
        'u', 305,
        'x', 412,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 8,
        '/', 17,
        0x2044, 17,
        0x2215, 17,
        0x27cb, 17,
        0x29f8, 17,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(775);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '6') ADVANCE(194);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(167);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(182);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead == '6') ADVANCE(159);
      if (lookahead == '7') ADVANCE(57);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == '7') ADVANCE(74);
      if (lookahead == ';') ADVANCE(1607);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 81,
        '1', 248,
        '2', 33,
        '3', 105,
        '5', 82,
        '6', 189,
        '7', 95,
        'A', 29,
        'a', 29,
        'B', 77,
        'b', 77,
        'D', 260,
        'd', 260,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 81,
        '1', 248,
        '2', 33,
        '3', 105,
        '5', 82,
        '6', 189,
        '7', 96,
        'A', 29,
        'a', 29,
        'B', 78,
        'b', 78,
        'D', 260,
        'd', 260,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 209,
        '1', 145,
        '6', 186,
        '9', 521,
        'A', 200,
        'a', 200,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 209,
        '1', 154,
        '6', 186,
        '9', 521,
        'A', 200,
        'a', 200,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 89,
        '2', 84,
        '7', 246,
        '9', 527,
        'B', 257,
        'b', 257,
        'D', 265,
        'd', 265,
        'F', 269,
        'f', 269,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 89,
        '2', 84,
        '7', 250,
        '9', 527,
        'D', 265,
        'd', 265,
        'F', 269,
        'f', 269,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(186);
      if (lookahead == '6') ADVANCE(127);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '6') ADVANCE(53);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 112,
        '2', 92,
        '7', 249,
        '9', 528,
        'B', 265,
        'b', 265,
        'D', 268,
        'd', 268,
        'F', 270,
        'f', 270,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '3') ADVANCE(177);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(260);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(260);
      if (lookahead == '1') ADVANCE(260);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(273);
      if (lookahead == '1') ADVANCE(281);
      if (lookahead == '3') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == '7') ADVANCE(252);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == '1') ADVANCE(280);
      if (lookahead == '2') ADVANCE(280);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead == '4') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == '1') ADVANCE(280);
      if (lookahead == '2') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '2') ADVANCE(100);
      if (lookahead == '7') ADVANCE(251);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead == '2') ADVANCE(268);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(268);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead == '2') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(276);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == '3') ADVANCE(282);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(279);
      if (lookahead == '1') ADVANCE(279);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead == '4') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(279);
      if (lookahead == '1') ADVANCE(279);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == '6') ADVANCE(56);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == '1') ADVANCE(59);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead == '6') ADVANCE(159);
      if (lookahead == '7') ADVANCE(57);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '0', 115,
        '1', 248,
        '2', 34,
        '3', 105,
        '5', 82,
        '6', 189,
        '7', 97,
        'A', 29,
        'a', 29,
        'B', 77,
        'b', 77,
        'D', 279,
        'd', 279,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '2') ADVANCE(103);
      if (lookahead == '7') ADVANCE(256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '6') ADVANCE(194);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '6') ADVANCE(194);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 24,
        '3', 164,
        '4', 139,
        '5', 231,
        '6', 46,
        '8', 129,
        '9', 187,
        'X', 86,
        'x', 86,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '2') ADVANCE(146);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '4') ADVANCE(224);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 185,
        'A', 76,
        'a', 76,
        'C', 511,
        'c', 511,
        'F', 510,
        'f', 510,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == '7') ADVANCE(195);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(124);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '4') ADVANCE(204);
      if (lookahead == '8') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 211,
        '2', 30,
        '3', 515,
        '6', 212,
        'B', 75,
        'b', 75,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 87:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 211,
        '2', 67,
        '3', 515,
        '6', 212,
        'B', 75,
        'b', 75,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(230);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '4') ADVANCE(191);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '7') ADVANCE(195);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(173);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 94:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 32,
        '4', 176,
        '5', 241,
        '8', 131,
        'X', 119,
        'x', 119,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 95:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 200,
        '3', 104,
        '9', 202,
        'E', 509,
        'e', 509,
        'F', 163,
        'f', 163,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 96:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 200,
        '3', 104,
        '9', 205,
        'E', 509,
        'e', 509,
        'F', 163,
        'f', 163,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 97:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 200,
        '3', 104,
        '9', 203,
        'E', 509,
        'e', 509,
        'F', 163,
        'f', 163,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(128);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(148);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(149);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(278);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(172);
      if (lookahead == '7') ADVANCE(196);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '4') ADVANCE(200);
      if (lookahead == '8') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(227);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(63);
      if (lookahead == '4') ADVANCE(199);
      if (lookahead == '8') ADVANCE(131);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(133);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '4') ADVANCE(163);
      if (lookahead == '5') ADVANCE(233);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(109);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '4') ADVANCE(224);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 116:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 222,
        '2', 31,
        '3', 515,
        '6', 212,
        'B', 75,
        'b', 75,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(183);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 118:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 68,
        '4', 162,
        '5', 233,
        '8', 137,
        'X', 110,
        'x', 110,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(223);
      if (lookahead == '2') ADVANCE(35);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead == '8') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 71,
        '3', 164,
        '4', 141,
        '5', 240,
        '6', 46,
        '8', 129,
        '9', 187,
        'X', 116,
        'x', 116,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 122:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '1', 72,
        '3', 164,
        '4', 140,
        '5', 231,
        '6', 46,
        '8', 157,
        '9', 187,
        'X', 87,
        'x', 87,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '5') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 129:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '2', 28,
        '5', 243,
        '6', 188,
        '7', 79,
        '8', 37,
        '9', 226,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(47);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '7') ADVANCE(134);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(209);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '7') ADVANCE(150);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '7') ADVANCE(138);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(152);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '5') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(267);
      if (lookahead == '5') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(40);
      if (lookahead == '7') ADVANCE(147);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == '9') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead == '3') ADVANCE(526);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(149);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(153);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(268);
      if (lookahead == '5') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(279);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '7') ADVANCE(277);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(70);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 157:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '2', 66,
        '5', 243,
        '6', 188,
        '7', 80,
        '8', 37,
        '9', 226,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '7') ADVANCE(151);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead == '5') ADVANCE(268);
      if (lookahead == '7') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(170);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(516);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '8') ADVANCE(228);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '4') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(161);
      if (lookahead == '8') ADVANCE(229);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(190);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(267);
      if (lookahead == '4') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(257);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(257);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '7') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(278);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(163);
      if (lookahead == '6') ADVANCE(163);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(163);
      if (lookahead == '7') ADVANCE(200);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(163);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(174);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(171);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(193);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(244);
      if (lookahead == '6') ADVANCE(179);
      if (lookahead == '7') ADVANCE(143);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(210);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(128);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(207);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(191);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(192);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '6') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead == '7') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(123);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(259);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(259);
      if (lookahead == '6') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(267);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(257);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(275);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(523);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(520);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(197);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(242);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(76);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(247);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(522);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(254);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(255);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(524);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(525);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(242);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(245);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(265);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(218);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == '9') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(214);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(280);
      if (lookahead == '9') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(268);
      if (lookahead == '9') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(282);
      if (lookahead == '9') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(279);
      if (lookahead == '9') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(220);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(221);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(160);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(125);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(200);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(206);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(512);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(259);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 248:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '9', 74,
        ';', 1545,
        'C', 210,
        'c', 210,
        'D', 184,
        'd', 184,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(198);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(210);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(512);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(210);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(216);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(257);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(217);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1540);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1548);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 'f') ADVANCE(473);
      if (lookahead == 'q') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1545);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1607);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1603);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1623);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1619);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1611);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1615);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1529);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1546);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(533);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead == 'U') ADVANCE(425);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(382);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'y') ADVANCE(423);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(474);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(412);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(366);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'q') ADVANCE(497);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'q') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'q') ADVANCE(486);
      if (lookahead == 'x') ADVANCE(322);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(494);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(261);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(348);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(455);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(453);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(311);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(315);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(320);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(424);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(429);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(430);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(431);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(1525);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(270);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 515:
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        'C', 273,
        'c', 273,
        'D', 281,
        'd', 281,
        'F', 271,
        'f', 271,
      );
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1533);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(537);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(537);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1495);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(822);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1458);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      END_STATE();
    case 539:
      ADVANCE_MAP(
        '\n', 788,
        '\r', 789,
        '!', 1550,
        '$', 534,
        '&', 11,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'N', 1511,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        'Z', 531,
        'z', 531,
        '+', 14,
        0x16ed, 14,
        0x2795, 14,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 540:
      ADVANCE_MAP(
        '\n', 788,
        '\r', 539,
        '!', 1550,
        '$', 534,
        '&', 11,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'N', 1511,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        'Z', 531,
        'z', 531,
        '+', 14,
        0x16ed, 14,
        0x2795, 14,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1476);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(580);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(590);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(619);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1477);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(776);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(664);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(676);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(702);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(757);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(761);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(763);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(764);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(765);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(769);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(771);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(773);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(774);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1477);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 777:
      ADVANCE_MAP(
        '\n', 780,
        '\r', 777,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 778:
      ADVANCE_MAP(
        '\n', 780,
        '\r', 777,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 779:
      ADVANCE_MAP(
        '\n', 1467,
        '\r', 777,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 780:
      ADVANCE_MAP(
        '\n', 1467,
        '\r', 779,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 781:
      ADVANCE_MAP(
        '\n', 1472,
        '\r', 781,
        '!', 1550,
        '$', 534,
        '&', 11,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'N', 1511,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        'Z', 531,
        'z', 531,
        '+', 14,
        0x16ed, 14,
        0x2795, 14,
        '\t', 781,
        0x0b, 781,
        '\f', 781,
        ' ', 781,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 782:
      ADVANCE_MAP(
        '\n', 1474,
        '\r', 782,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 782,
        0x0b, 782,
        '\f', 782,
        ' ', 782,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 783:
      ADVANCE_MAP(
        '\n', 1474,
        '\r', 782,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 782,
        0x0b, 782,
        '\f', 782,
        ' ', 782,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 784:
      ADVANCE_MAP(
        '\n', 1473,
        '\r', 784,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 784,
        0x0b, 784,
        '\f', 784,
        ' ', 784,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 785:
      ADVANCE_MAP(
        '\n', 1473,
        '\r', 784,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 784,
        0x0b, 784,
        '\f', 784,
        ' ', 784,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 786:
      ADVANCE_MAP(
        '\n', 1468,
        '\r', 782,
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 782,
        0x0b, 782,
        '\f', 782,
        ' ', 782,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 787:
      if (lookahead == ' ') SKIP(787);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(1483);
      if (lookahead != 0) ADVANCE(1484);
      END_STATE();
    case 788:
      ADVANCE_MAP(
        '!', 1550,
        '$', 534,
        '&', 11,
        '(', 1489,
        '*', 1605,
        '-', 1547,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'N', 1511,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        '\n', 789,
        '\r', 789,
        'Z', 531,
        'z', 531,
        '+', 14,
        0x16ed, 14,
        0x2795, 14,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 789:
      ADVANCE_MAP(
        '!', 1550,
        '$', 534,
        '&', 11,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'N', 1511,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        '\n', 789,
        '\r', 789,
        'Z', 531,
        'z', 531,
        '+', 14,
        0x16ed, 14,
        0x2795, 14,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 790:
      ADVANCE_MAP(
        '!', 1558,
        '#', 1538,
        '$', 1459,
        '&', 810,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1518,
        '?', 1558,
        '@', 1526,
        'O', 1581,
        'P', 1521,
        'R', 1507,
        'T', 1168,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 1542,
        0x16ed, 1542,
        0x2795, 1542,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1504);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 791:
      ADVANCE_MAP(
        '!', 1558,
        '#', 1538,
        '$', 1459,
        '&', 812,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1518,
        '?', 1558,
        '@', 1526,
        'O', 1581,
        'P', 1521,
        'R', 1507,
        'T', 1168,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 1542,
        0x16ed, 1542,
        0x2795, 1542,
        ':', 1514,
        'X', 1514,
        'x', 1514,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1530);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1504);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 792:
      ADVANCE_MAP(
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 793:
      ADVANCE_MAP(
        '!', 1558,
        '$', 1459,
        '&', 801,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'N', 1513,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 794:
      if (lookahead == '"') ADVANCE(1482);
      if (lookahead == ']') ADVANCE(1480);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(794);
      END_STATE();
    case 795:
      if (lookahead == '"') ADVANCE(1482);
      if (lookahead == ']') ADVANCE(1481);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(794);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1485);
      if (lookahead != 0) ADVANCE(1487);
      END_STATE();
    case 796:
      if (lookahead == '"') ADVANCE(1482);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(797);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1486);
      if (lookahead != 0) ADVANCE(1487);
      END_STATE();
    case 797:
      if (lookahead == '"') ADVANCE(1482);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(797);
      END_STATE();
    case 798:
      ADVANCE_MAP(
        '#', 891,
        'a', 1355,
        'd', 1177,
        'f', 1344,
        'h', 1178,
        'l', 1316,
        'm', 1209,
        'n', 1208,
        'p', 1282,
        's', 1320,
      );
      END_STATE();
    case 799:
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == 'd') ADVANCE(1192);
      if (lookahead == 'h') ADVANCE(1421);
      if (lookahead == 'm') ADVANCE(1212);
      if (lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 800:
      if (lookahead == '#') ADVANCE(911);
      if (lookahead == 'p') ADVANCE(1295);
      END_STATE();
    case 801:
      ADVANCE_MAP(
        '#', 894,
        'D', 1234,
        'L', 1185,
        'M', 1280,
        'P', 1297,
        'R', 1186,
        'S', 1255,
        'U', 1326,
        'a', 1355,
        'b', 1276,
        'c', 1275,
        'd', 1198,
        'e', 1334,
        'f', 1344,
        'h', 1173,
        'i', 1302,
        'l', 1225,
        'm', 1183,
        'n', 1175,
        'p', 1227,
        'q', 1399,
        'r', 1181,
        's', 1285,
        'u', 1182,
        'x', 1317,
      );
      END_STATE();
    case 802:
      if (lookahead == '#') ADVANCE(1019);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == 'q') ADVANCE(1416);
      END_STATE();
    case 803:
      if (lookahead == '#') ADVANCE(1069);
      if (lookahead == 'e') ADVANCE(1341);
      END_STATE();
    case 804:
      if (lookahead == '#') ADVANCE(906);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'm') ADVANCE(1224);
      if (lookahead == 'n') ADVANCE(1223);
      if (lookahead == 'p') ADVANCE(1299);
      if (lookahead == 's') ADVANCE(1325);
      END_STATE();
    case 805:
      ADVANCE_MAP(
        '#', 933,
        'a', 1355,
        'd', 1194,
        'f', 1344,
        'h', 1179,
        'l', 1316,
        'm', 1217,
        'n', 1218,
        's', 1320,
      );
      END_STATE();
    case 806:
      if (lookahead == '#') ADVANCE(905);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'h') ADVANCE(1423);
      if (lookahead == 'm') ADVANCE(1222);
      if (lookahead == 'n') ADVANCE(1221);
      if (lookahead == 's') ADVANCE(1323);
      END_STATE();
    case 807:
      if (lookahead == '#') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'h') ADVANCE(1423);
      if (lookahead == 'm') ADVANCE(1222);
      if (lookahead == 'n') ADVANCE(1221);
      if (lookahead == 'p') ADVANCE(1295);
      if (lookahead == 's') ADVANCE(1323);
      END_STATE();
    case 808:
      if (lookahead == '#') ADVANCE(946);
      if (lookahead == 'd') ADVANCE(1197);
      if (lookahead == 'h') ADVANCE(1422);
      if (lookahead == 'm') ADVANCE(1220);
      if (lookahead == 'n') ADVANCE(1219);
      END_STATE();
    case 809:
      if (lookahead == '#') ADVANCE(918);
      if (lookahead == 'p') ADVANCE(1299);
      END_STATE();
    case 810:
      ADVANCE_MAP(
        '#', 949,
        'D', 1234,
        'L', 1185,
        'M', 1280,
        'P', 1297,
        'R', 1186,
        'S', 1255,
        'U', 1326,
        'a', 1355,
        'b', 1276,
        'c', 1275,
        'd', 1198,
        'e', 1334,
        'f', 1344,
        'h', 1173,
        'i', 1302,
        'l', 1225,
        'm', 1183,
        'n', 1175,
        'p', 1228,
        'q', 1399,
        'r', 1181,
        's', 1285,
        'u', 1182,
        'x', 1317,
      );
      END_STATE();
    case 811:
      if (lookahead == '#') ADVANCE(948);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'h') ADVANCE(1423);
      if (lookahead == 'm') ADVANCE(1222);
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 812:
      ADVANCE_MAP(
        '#', 950,
        'D', 1234,
        'L', 1185,
        'M', 1280,
        'P', 1297,
        'R', 1186,
        'S', 1255,
        'U', 1326,
        'a', 1355,
        'b', 1276,
        'c', 1275,
        'd', 1201,
        'e', 1334,
        'f', 1344,
        'h', 1174,
        'i', 1302,
        'l', 1225,
        'm', 1184,
        'n', 1176,
        'p', 1228,
        'q', 1399,
        'r', 1181,
        's', 1285,
        'u', 1182,
        'x', 1317,
      );
      END_STATE();
    case 813:
      ADVANCE_MAP(
        '&', 805,
        '*', 1604,
        '-', 1563,
        '/', 1589,
        '0', 1582,
        '1', 1560,
        '2', 1599,
        'O', 1579,
        'o', 1586,
        0xbd, 1600,
        0x66d, 1620,
        0x2010, 1567,
        0x2011, 1569,
        0x2012, 1571,
        0x2013, 1573,
        0x2014, 1575,
        0x2044, 1593,
        0x204e, 1616,
        0x2212, 1565,
        0x2215, 1591,
        0x2217, 1608,
        0x2731, 1612,
        0x2796, 1577,
        0x27cb, 1595,
        0x29f8, 1597,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(813);
      END_STATE();
    case 814:
      if (lookahead == '&') ADVANCE(806);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(817);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1543);
      END_STATE();
    case 815:
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 816:
      if (lookahead == '&') ADVANCE(809);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(1543);
      END_STATE();
    case 817:
      if (lookahead == '&') ADVANCE(811);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1543);
      END_STATE();
    case 818:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 819:
      if (lookahead == '-') ADVANCE(818);
      END_STATE();
    case 820:
      if (lookahead == '-') ADVANCE(819);
      END_STATE();
    case 821:
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 822:
      if (lookahead == '-') ADVANCE(820);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1458);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(1543);
      END_STATE();
    case 824:
      if (lookahead == '0') ADVANCE(836);
      if (lookahead == '6') ADVANCE(1041);
      if (lookahead == '8') ADVANCE(1106);
      END_STATE();
    case 825:
      if (lookahead == '0') ADVANCE(1087);
      if (lookahead == '1') ADVANCE(842);
      if (lookahead == '6') ADVANCE(850);
      if (lookahead == '7') ADVANCE(851);
      END_STATE();
    case 826:
      ADVANCE_MAP(
        '0', 893,
        '2', 900,
        '7', 999,
        '9', 1448,
        'A', 1122,
        'a', 1122,
        'B', 1120,
        'b', 1120,
        'D', 1123,
        'd', 1123,
        'F', 1124,
        'f', 1124,
      );
      END_STATE();
    case 827:
      if (lookahead == '0') ADVANCE(828);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1041);
      if (lookahead == '7') ADVANCE(1080);
      if (lookahead == '8') ADVANCE(1106);
      END_STATE();
    case 828:
      if (lookahead == '0') ADVANCE(874);
      if (lookahead == '1') ADVANCE(1016);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1046);
      if (lookahead == '8') ADVANCE(1068);
      END_STATE();
    case 829:
      if (lookahead == '0') ADVANCE(874);
      if (lookahead == '1') ADVANCE(1023);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1046);
      if (lookahead == '8') ADVANCE(1068);
      END_STATE();
    case 830:
      if (lookahead == '0') ADVANCE(874);
      if (lookahead == '1') ADVANCE(1028);
      if (lookahead == '2') ADVANCE(928);
      if (lookahead == '7') ADVANCE(1046);
      if (lookahead == '8') ADVANCE(1068);
      END_STATE();
    case 831:
      ADVANCE_MAP(
        '0', 927,
        '1', 1105,
        '2', 834,
        '3', 921,
        '5', 897,
        '6', 1043,
        '7', 924,
        'A', 840,
        'a', 840,
        'B', 895,
        'b', 895,
        'D', 1144,
        'd', 1144,
      );
      END_STATE();
    case 832:
      ADVANCE_MAP(
        '0', 927,
        '1', 1105,
        '2', 834,
        '3', 921,
        '5', 897,
        '6', 1043,
        '7', 925,
        'A', 840,
        'a', 840,
        'B', 896,
        'b', 896,
        'D', 1144,
        'd', 1144,
      );
      END_STATE();
    case 833:
      if (lookahead == '0') ADVANCE(916);
      END_STATE();
    case 834:
      if (lookahead == '0') ADVANCE(1065);
      if (lookahead == '1') ADVANCE(979);
      if (lookahead == '6') ADVANCE(1036);
      if (lookahead == '9') ADVANCE(1442);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1053);
      END_STATE();
    case 835:
      if (lookahead == '0') ADVANCE(1065);
      if (lookahead == '1') ADVANCE(982);
      if (lookahead == '6') ADVANCE(1036);
      if (lookahead == '9') ADVANCE(1442);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1053);
      END_STATE();
    case 836:
      if (lookahead == '0') ADVANCE(1014);
      if (lookahead == '1') ADVANCE(997);
      if (lookahead == '7') ADVANCE(1029);
      END_STATE();
    case 837:
      if (lookahead == '0') ADVANCE(1014);
      if (lookahead == '1') ADVANCE(1017);
      if (lookahead == '7') ADVANCE(1029);
      END_STATE();
    case 838:
      ADVANCE_MAP(
        '0', 930,
        '2', 898,
        '7', 1116,
        '9', 1450,
        'D', 1145,
        'd', 1145,
        'F', 1151,
        'f', 1151,
      );
      END_STATE();
    case 839:
      ADVANCE_MAP(
        '0', 930,
        '2', 898,
        '7', 1118,
        '9', 1450,
        'B', 1119,
        'b', 1119,
        'D', 1145,
        'd', 1145,
        'F', 1151,
        'f', 1151,
      );
      END_STATE();
    case 840:
      if (lookahead == '0') ADVANCE(856);
      if (lookahead == '7') ADVANCE(909);
      if (lookahead == ';') ADVANCE(1606);
      END_STATE();
    case 841:
      if (lookahead == '0') ADVANCE(934);
      END_STATE();
    case 842:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1123);
      END_STATE();
    case 843:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1123);
      if (lookahead == '3') ADVANCE(1123);
      if (lookahead == '4') ADVANCE(1123);
      END_STATE();
    case 844:
      if (lookahead == '0') ADVANCE(903);
      END_STATE();
    case 845:
      if (lookahead == '0') ADVANCE(914);
      END_STATE();
    case 846:
      if (lookahead == '0') ADVANCE(1121);
      if (lookahead == '1') ADVANCE(1121);
      if (lookahead == '2') ADVANCE(1121);
      END_STATE();
    case 847:
      if (lookahead == '0') ADVANCE(1121);
      if (lookahead == '1') ADVANCE(1121);
      if (lookahead == '2') ADVANCE(1121);
      if (lookahead == '3') ADVANCE(1121);
      if (lookahead == '4') ADVANCE(1121);
      END_STATE();
    case 848:
      if (lookahead == '0') ADVANCE(963);
      END_STATE();
    case 849:
      if (lookahead == '0') ADVANCE(912);
      if (lookahead == '2') ADVANCE(917);
      if (lookahead == '7') ADVANCE(1104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1121);
      END_STATE();
    case 850:
      if (lookahead == '0') ADVANCE(1128);
      END_STATE();
    case 851:
      if (lookahead == '0') ADVANCE(1129);
      END_STATE();
    case 852:
      if (lookahead == '0') ADVANCE(1132);
      if (lookahead == '1') ADVANCE(1136);
      if (lookahead == '2') ADVANCE(1137);
      if (lookahead == '3') ADVANCE(1138);
      if (lookahead == '4') ADVANCE(1139);
      END_STATE();
    case 853:
      if (lookahead == '0') ADVANCE(1158);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '2') ADVANCE(1158);
      END_STATE();
    case 854:
      if (lookahead == '0') ADVANCE(1158);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '2') ADVANCE(1158);
      if (lookahead == '3') ADVANCE(1158);
      if (lookahead == '4') ADVANCE(1158);
      END_STATE();
    case 855:
      if (lookahead == '0') ADVANCE(1137);
      if (lookahead == '1') ADVANCE(1138);
      if (lookahead == '2') ADVANCE(1139);
      END_STATE();
    case 856:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1145);
      END_STATE();
    case 857:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == '2') ADVANCE(1145);
      END_STATE();
    case 858:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '4') ADVANCE(1145);
      END_STATE();
    case 859:
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '3') ADVANCE(1145);
      END_STATE();
    case 860:
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '2') ADVANCE(1144);
      END_STATE();
    case 861:
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '2') ADVANCE(1144);
      if (lookahead == '3') ADVANCE(1144);
      if (lookahead == '4') ADVANCE(1144);
      END_STATE();
    case 862:
      if (lookahead == '0') ADVANCE(1154);
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1153);
      END_STATE();
    case 863:
      if (lookahead == '0') ADVANCE(1151);
      END_STATE();
    case 864:
      if (lookahead == '0') ADVANCE(1150);
      if (lookahead == '1') ADVANCE(1150);
      if (lookahead == '2') ADVANCE(1150);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(1150);
      if (lookahead == '1') ADVANCE(1150);
      if (lookahead == '2') ADVANCE(1150);
      if (lookahead == '3') ADVANCE(1150);
      if (lookahead == '4') ADVANCE(1150);
      END_STATE();
    case 866:
      if (lookahead == '0') ADVANCE(1152);
      END_STATE();
    case 867:
      if (lookahead == '0') ADVANCE(1157);
      if (lookahead == '1') ADVANCE(1157);
      if (lookahead == '2') ADVANCE(1157);
      END_STATE();
    case 868:
      if (lookahead == '0') ADVANCE(1157);
      if (lookahead == '1') ADVANCE(1157);
      if (lookahead == '2') ADVANCE(1157);
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '4') ADVANCE(1157);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(837);
      if (lookahead == '6') ADVANCE(1041);
      if (lookahead == '8') ADVANCE(1106);
      END_STATE();
    case 870:
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '1') ADVANCE(846);
      END_STATE();
    case 871:
      if (lookahead == '0') ADVANCE(937);
      END_STATE();
    case 872:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(855);
      if (lookahead == '6') ADVANCE(850);
      if (lookahead == '7') ADVANCE(851);
      END_STATE();
    case 873:
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(853);
      END_STATE();
    case 874:
      if (lookahead == '0') ADVANCE(1053);
      if (lookahead == '3') ADVANCE(1004);
      END_STATE();
    case 875:
      if (lookahead == '0') ADVANCE(1093);
      if (lookahead == '1') ADVANCE(860);
      if (lookahead == '5') ADVANCE(973);
      if (lookahead == '6') ADVANCE(1007);
      if (lookahead == '7') ADVANCE(851);
      END_STATE();
    case 876:
      if (lookahead == '0') ADVANCE(1036);
      if (lookahead == '6') ADVANCE(977);
      END_STATE();
    case 877:
      if (lookahead == '0') ADVANCE(1092);
      if (lookahead == '1') ADVANCE(857);
      END_STATE();
    case 878:
      if (lookahead == '0') ADVANCE(1092);
      if (lookahead == '1') ADVANCE(857);
      if (lookahead == '6') ADVANCE(863);
      END_STATE();
    case 879:
      if (lookahead == '0') ADVANCE(1095);
      if (lookahead == '1') ADVANCE(864);
      if (lookahead == '6') ADVANCE(866);
      END_STATE();
    case 880:
      if (lookahead == '0') ADVANCE(1097);
      if (lookahead == '1') ADVANCE(867);
      if (lookahead == '5') ADVANCE(973);
      if (lookahead == '6') ADVANCE(1007);
      if (lookahead == '7') ADVANCE(851);
      END_STATE();
    case 881:
      ADVANCE_MAP(
        '0', 919,
        '2', 915,
        '7', 1000,
        '9', 1448,
        'A', 1122,
        'a', 1122,
        'D', 1126,
        'd', 1126,
        'F', 1124,
        'f', 1124,
      );
      END_STATE();
    case 882:
      ADVANCE_MAP(
        '0', 932,
        '1', 1105,
        '2', 835,
        '3', 921,
        '5', 897,
        '6', 1043,
        '7', 926,
        'A', 840,
        'a', 840,
        'B', 896,
        'b', 896,
        'D', 1157,
        'd', 1157,
      );
      END_STATE();
    case 883:
      ADVANCE_MAP(
        '0', 931,
        '2', 913,
        '7', 1114,
        '9', 1451,
        'B', 1145,
        'b', 1145,
        'D', 1150,
        'd', 1150,
        'F', 1152,
        'f', 1152,
      );
      END_STATE();
    case 884:
      if (lookahead == '0') ADVANCE(938);
      END_STATE();
    case 885:
      if (lookahead == '0') ADVANCE(922);
      if (lookahead == '2') ADVANCE(920);
      if (lookahead == '7') ADVANCE(1112);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1158);
      END_STATE();
    case 886:
      if (lookahead == '0') ADVANCE(941);
      END_STATE();
    case 887:
      if (lookahead == '0') ADVANCE(929);
      if (lookahead == '2') ADVANCE(923);
      if (lookahead == '7') ADVANCE(1115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 888:
      if (lookahead == '0') ADVANCE(829);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1041);
      if (lookahead == '7') ADVANCE(1080);
      if (lookahead == '8') ADVANCE(1106);
      END_STATE();
    case 889:
      if (lookahead == '0') ADVANCE(939);
      END_STATE();
    case 890:
      if (lookahead == '0') ADVANCE(830);
      if (lookahead == '1') ADVANCE(848);
      if (lookahead == '6') ADVANCE(1041);
      if (lookahead == '7') ADVANCE(1080);
      if (lookahead == '8') ADVANCE(1106);
      END_STATE();
    case 891:
      if (lookahead == '1') ADVANCE(824);
      if (lookahead == '4') ADVANCE(951);
      if (lookahead == '5') ADVANCE(1086);
      if (lookahead == '8') ADVANCE(956);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(899);
      END_STATE();
    case 892:
      if (lookahead == '1') ADVANCE(844);
      if (lookahead == '4') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(957);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(958);
      END_STATE();
    case 893:
      if (lookahead == '1') ADVANCE(843);
      if (lookahead == '4') ADVANCE(1032);
      END_STATE();
    case 894:
      ADVANCE_MAP(
        '1', 827,
        '3', 1010,
        '4', 952,
        '5', 1099,
        '6', 862,
        '8', 960,
        '9', 1030,
        'X', 940,
        'x', 940,
      );
      END_STATE();
    case 895:
      if (lookahead == '1') ADVANCE(973);
      if (lookahead == ';') ADVANCE(814);
      END_STATE();
    case 896:
      if (lookahead == '1') ADVANCE(973);
      if (lookahead == ';') ADVANCE(1542);
      END_STATE();
    case 897:
      if (lookahead == '1') ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(908);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1430);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1428);
      END_STATE();
    case 898:
      if (lookahead == '1') ADVANCE(974);
      END_STATE();
    case 899:
      if (lookahead == '1') ADVANCE(1060);
      if (lookahead == '2') ADVANCE(826);
      if (lookahead == '6') ADVANCE(1067);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1436);
      END_STATE();
    case 900:
      if (lookahead == '1') ADVANCE(966);
      END_STATE();
    case 901:
      if (lookahead == '1') ADVANCE(856);
      if (lookahead == '2') ADVANCE(978);
      if (lookahead == '3') ADVANCE(1036);
      END_STATE();
    case 902:
      if (lookahead == '1') ADVANCE(856);
      if (lookahead == '2') ADVANCE(981);
      if (lookahead == '3') ADVANCE(1036);
      END_STATE();
    case 903:
      if (lookahead == '1') ADVANCE(1015);
      END_STATE();
    case 904:
      if (lookahead == '1') ADVANCE(968);
      END_STATE();
    case 905:
      if (lookahead == '1') ADVANCE(833);
      if (lookahead == '4') ADVANCE(1056);
      if (lookahead == '8') ADVANCE(961);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 906:
      if (lookahead == '1') ADVANCE(841);
      if (lookahead == '4') ADVANCE(1009);
      if (lookahead == '5') ADVANCE(1100);
      if (lookahead == '8') ADVANCE(994);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(942);
      END_STATE();
    case 907:
      if (lookahead == '1') ADVANCE(1133);
      END_STATE();
    case 908:
      if (lookahead == '1') ADVANCE(1145);
      END_STATE();
    case 909:
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == '2') ADVANCE(1145);
      END_STATE();
    case 910:
      if (lookahead == '1') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1125);
      END_STATE();
    case 911:
      if (lookahead == '1') ADVANCE(845);
      if (lookahead == '4') ADVANCE(1001);
      if (lookahead == '5') ADVANCE(1098);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(935);
      END_STATE();
    case 912:
      if (lookahead == '1') ADVANCE(847);
      END_STATE();
    case 913:
      if (lookahead == '1') ADVANCE(980);
      END_STATE();
    case 914:
      if (lookahead == '1') ADVANCE(996);
      END_STATE();
    case 915:
      if (lookahead == '1') ADVANCE(971);
      END_STATE();
    case 916:
      if (lookahead == '1') ADVANCE(1025);
      if (lookahead == '7') ADVANCE(1044);
      END_STATE();
    case 917:
      if (lookahead == '1') ADVANCE(969);
      END_STATE();
    case 918:
      if (lookahead == '1') ADVANCE(871);
      if (lookahead == '4') ADVANCE(1005);
      if (lookahead == '5') ADVANCE(1100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 919:
      if (lookahead == '1') ADVANCE(852);
      if (lookahead == '4') ADVANCE(1032);
      END_STATE();
    case 920:
      if (lookahead == '1') ADVANCE(970);
      END_STATE();
    case 921:
      if (lookahead == '1') ADVANCE(1005);
      END_STATE();
    case 922:
      if (lookahead == '1') ADVANCE(854);
      END_STATE();
    case 923:
      if (lookahead == '1') ADVANCE(972);
      END_STATE();
    case 924:
      if (lookahead == '1') ADVANCE(1053);
      if (lookahead == '3') ADVANCE(907);
      if (lookahead == '9') ADVANCE(1057);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1005);
      END_STATE();
    case 925:
      if (lookahead == '1') ADVANCE(1053);
      if (lookahead == '3') ADVANCE(907);
      if (lookahead == '9') ADVANCE(1058);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1005);
      END_STATE();
    case 926:
      if (lookahead == '1') ADVANCE(1053);
      if (lookahead == '3') ADVANCE(907);
      if (lookahead == '9') ADVANCE(1059);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1005);
      END_STATE();
    case 927:
      if (lookahead == '1') ADVANCE(861);
      if (lookahead == '3') ADVANCE(1433);
      if (lookahead == '4') ADVANCE(1081);
      END_STATE();
    case 928:
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead == '2') ADVANCE(1080);
      END_STATE();
    case 929:
      if (lookahead == '1') ADVANCE(858);
      END_STATE();
    case 930:
      if (lookahead == '1') ADVANCE(858);
      if (lookahead == '4') ADVANCE(1039);
      END_STATE();
    case 931:
      if (lookahead == '1') ADVANCE(865);
      if (lookahead == '4') ADVANCE(1040);
      END_STATE();
    case 932:
      if (lookahead == '1') ADVANCE(868);
      if (lookahead == '3') ADVANCE(1433);
      if (lookahead == '4') ADVANCE(1081);
      END_STATE();
    case 933:
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '4') ADVANCE(955);
      if (lookahead == '8') ADVANCE(991);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(959);
      END_STATE();
    case 934:
      if (lookahead == '1') ADVANCE(1021);
      if (lookahead == '7') ADVANCE(1045);
      END_STATE();
    case 935:
      if (lookahead == '1') ADVANCE(1074);
      if (lookahead == '2') ADVANCE(1078);
      END_STATE();
    case 936:
      if (lookahead == '1') ADVANCE(1074);
      if (lookahead == '2') ADVANCE(839);
      END_STATE();
    case 937:
      if (lookahead == '1') ADVANCE(1018);
      END_STATE();
    case 938:
      if (lookahead == '1') ADVANCE(1022);
      END_STATE();
    case 939:
      if (lookahead == '1') ADVANCE(1027);
      if (lookahead == '7') ADVANCE(1044);
      END_STATE();
    case 940:
      if (lookahead == '1') ADVANCE(1075);
      if (lookahead == '2') ADVANCE(831);
      if (lookahead == '3') ADVANCE(1434);
      if (lookahead == '6') ADVANCE(1067);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(910);
      END_STATE();
    case 941:
      if (lookahead == '1') ADVANCE(1024);
      END_STATE();
    case 942:
      if (lookahead == '1') ADVANCE(1076);
      if (lookahead == '2') ADVANCE(883);
      END_STATE();
    case 943:
      if (lookahead == '1') ADVANCE(1076);
      if (lookahead == '2') ADVANCE(1085);
      END_STATE();
    case 944:
      if (lookahead == '1') ADVANCE(1077);
      if (lookahead == '2') ADVANCE(832);
      if (lookahead == '3') ADVANCE(1434);
      if (lookahead == '6') ADVANCE(1067);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(910);
      END_STATE();
    case 945:
      if (lookahead == '1') ADVANCE(1077);
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == '3') ADVANCE(1434);
      if (lookahead == '6') ADVANCE(1067);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(910);
      END_STATE();
    case 946:
      if (lookahead == '1') ADVANCE(884);
      if (lookahead == '4') ADVANCE(1052);
      if (lookahead == '8') ADVANCE(992);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(983);
      END_STATE();
    case 947:
      if (lookahead == '1') ADVANCE(889);
      if (lookahead == '4') ADVANCE(1003);
      if (lookahead == '5') ADVANCE(1098);
      if (lookahead == '8') ADVANCE(961);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(936);
      END_STATE();
    case 948:
      if (lookahead == '1') ADVANCE(886);
      if (lookahead == '4') ADVANCE(1053);
      if (lookahead == '8') ADVANCE(995);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(988);
      END_STATE();
    case 949:
      ADVANCE_MAP(
        '1', 888,
        '3', 1010,
        '4', 953,
        '5', 1101,
        '6', 862,
        '8', 960,
        '9', 1030,
        'X', 944,
        'x', 944,
      );
      END_STATE();
    case 950:
      ADVANCE_MAP(
        '1', 890,
        '3', 1010,
        '4', 954,
        '5', 1101,
        '6', 862,
        '8', 993,
        '9', 1030,
        'X', 945,
        'x', 945,
      );
      END_STATE();
    case 951:
      if (lookahead == '2') ADVANCE(1122);
      if (lookahead == '3') ADVANCE(1120);
      if (lookahead == '5') ADVANCE(1123);
      if (lookahead == '7') ADVANCE(1124);
      END_STATE();
    case 952:
      if (lookahead == '2') ADVANCE(1122);
      if (lookahead == '3') ADVANCE(1142);
      if (lookahead == '5') ADVANCE(1144);
      END_STATE();
    case 953:
      if (lookahead == '2') ADVANCE(1122);
      if (lookahead == '3') ADVANCE(1155);
      if (lookahead == '5') ADVANCE(1144);
      END_STATE();
    case 954:
      if (lookahead == '2') ADVANCE(1122);
      if (lookahead == '3') ADVANCE(1155);
      if (lookahead == '5') ADVANCE(1157);
      END_STATE();
    case 955:
      if (lookahead == '2') ADVANCE(1122);
      if (lookahead == '5') ADVANCE(1126);
      if (lookahead == '7') ADVANCE(1124);
      END_STATE();
    case 956:
      if (lookahead == '2') ADVANCE(825);
      if (lookahead == '7') ADVANCE(965);
      END_STATE();
    case 957:
      if (lookahead == '2') ADVANCE(870);
      if (lookahead == '7') ADVANCE(986);
      END_STATE();
    case 958:
      if (lookahead == '2') ADVANCE(849);
      END_STATE();
    case 959:
      if (lookahead == '2') ADVANCE(881);
      if (lookahead == '6') ADVANCE(1067);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1436);
      END_STATE();
    case 960:
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == '5') ADVANCE(1111);
      if (lookahead == '6') ADVANCE(1042);
      if (lookahead == '7') ADVANCE(901);
      if (lookahead == '8') ADVANCE(876);
      if (lookahead == '9') ADVANCE(1084);
      END_STATE();
    case 961:
      if (lookahead == '2') ADVANCE(878);
      if (lookahead == '7') ADVANCE(964);
      END_STATE();
    case 962:
      if (lookahead == '2') ADVANCE(838);
      END_STATE();
    case 963:
      if (lookahead == '2') ADVANCE(1065);
      END_STATE();
    case 964:
      if (lookahead == '2') ADVANCE(974);
      END_STATE();
    case 965:
      if (lookahead == '2') ADVANCE(966);
      END_STATE();
    case 966:
      if (lookahead == '2') ADVANCE(1123);
      if (lookahead == '5') ADVANCE(1130);
      if (lookahead == '7') ADVANCE(1131);
      END_STATE();
    case 967:
      if (lookahead == '2') ADVANCE(976);
      if (lookahead == '9') ADVANCE(1036);
      END_STATE();
    case 968:
      if (lookahead == '2') ADVANCE(1125);
      END_STATE();
    case 969:
      if (lookahead == '2') ADVANCE(1121);
      END_STATE();
    case 970:
      if (lookahead == '2') ADVANCE(1158);
      END_STATE();
    case 971:
      if (lookahead == '2') ADVANCE(1140);
      if (lookahead == '5') ADVANCE(1130);
      if (lookahead == '7') ADVANCE(1131);
      END_STATE();
    case 972:
      if (lookahead == '2') ADVANCE(1145);
      END_STATE();
    case 973:
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '3') ADVANCE(1145);
      END_STATE();
    case 974:
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '5') ADVANCE(1151);
      END_STATE();
    case 975:
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '6') ADVANCE(1145);
      END_STATE();
    case 976:
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1145);
      END_STATE();
    case 977:
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '9') ADVANCE(1145);
      END_STATE();
    case 978:
      if (lookahead == '2') ADVANCE(1144);
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1131);
      END_STATE();
    case 979:
      if (lookahead == '2') ADVANCE(1144);
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 980:
      if (lookahead == '2') ADVANCE(1150);
      if (lookahead == '5') ADVANCE(1152);
      END_STATE();
    case 981:
      if (lookahead == '2') ADVANCE(1157);
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1131);
      END_STATE();
    case 982:
      if (lookahead == '2') ADVANCE(1157);
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 983:
      if (lookahead == '2') ADVANCE(885);
      END_STATE();
    case 984:
      if (lookahead == '2') ADVANCE(980);
      END_STATE();
    case 985:
      if (lookahead == '2') ADVANCE(971);
      END_STATE();
    case 986:
      if (lookahead == '2') ADVANCE(969);
      END_STATE();
    case 987:
      if (lookahead == '2') ADVANCE(908);
      if (lookahead == '3') ADVANCE(1449);
      END_STATE();
    case 988:
      if (lookahead == '2') ADVANCE(887);
      END_STATE();
    case 989:
      if (lookahead == '2') ADVANCE(970);
      END_STATE();
    case 990:
      if (lookahead == '2') ADVANCE(972);
      END_STATE();
    case 991:
      if (lookahead == '2') ADVANCE(872);
      if (lookahead == '7') ADVANCE(985);
      END_STATE();
    case 992:
      if (lookahead == '2') ADVANCE(873);
      if (lookahead == '7') ADVANCE(989);
      END_STATE();
    case 993:
      if (lookahead == '2') ADVANCE(880);
      if (lookahead == '5') ADVANCE(1111);
      if (lookahead == '6') ADVANCE(1042);
      if (lookahead == '7') ADVANCE(902);
      if (lookahead == '8') ADVANCE(876);
      if (lookahead == '9') ADVANCE(1084);
      END_STATE();
    case 994:
      if (lookahead == '2') ADVANCE(879);
      if (lookahead == '7') ADVANCE(984);
      END_STATE();
    case 995:
      if (lookahead == '2') ADVANCE(877);
      if (lookahead == '7') ADVANCE(990);
      END_STATE();
    case 996:
      if (lookahead == '3') ADVANCE(1001);
      END_STATE();
    case 997:
      if (lookahead == '3') ADVANCE(998);
      if (lookahead == '8') ADVANCE(1079);
      END_STATE();
    case 998:
      if (lookahead == '3') ADVANCE(1120);
      if (lookahead == '4') ADVANCE(1123);
      END_STATE();
    case 999:
      if (lookahead == '3') ADVANCE(907);
      if (lookahead == '9') ADVANCE(1047);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1429);
      END_STATE();
    case 1000:
      if (lookahead == '3') ADVANCE(907);
      if (lookahead == '9') ADVANCE(1063);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1429);
      END_STATE();
    case 1001:
      if (lookahead == '3') ADVANCE(1119);
      END_STATE();
    case 1002:
      if (lookahead == '3') ADVANCE(1119);
      if (lookahead == '4') ADVANCE(1145);
      END_STATE();
    case 1003:
      if (lookahead == '3') ADVANCE(1119);
      if (lookahead == '5') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1151);
      END_STATE();
    case 1004:
      if (lookahead == '3') ADVANCE(1133);
      END_STATE();
    case 1005:
      if (lookahead == '3') ADVANCE(1145);
      END_STATE();
    case 1006:
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '4') ADVANCE(1145);
      END_STATE();
    case 1007:
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '4') ADVANCE(1145);
      if (lookahead == '5') ADVANCE(1145);
      END_STATE();
    case 1008:
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '4') ADVANCE(1150);
      END_STATE();
    case 1009:
      if (lookahead == '3') ADVANCE(1145);
      if (lookahead == '5') ADVANCE(1150);
      if (lookahead == '7') ADVANCE(1152);
      END_STATE();
    case 1010:
      if (lookahead == '3') ADVANCE(1153);
      END_STATE();
    case 1011:
      if (lookahead == '3') ADVANCE(1142);
      if (lookahead == '4') ADVANCE(1144);
      END_STATE();
    case 1012:
      if (lookahead == '3') ADVANCE(1155);
      if (lookahead == '4') ADVANCE(1144);
      END_STATE();
    case 1013:
      if (lookahead == '3') ADVANCE(1155);
      if (lookahead == '4') ADVANCE(1157);
      END_STATE();
    case 1014:
      if (lookahead == '3') ADVANCE(1004);
      END_STATE();
    case 1015:
      if (lookahead == '3') ADVANCE(1031);
      END_STATE();
    case 1016:
      if (lookahead == '3') ADVANCE(1011);
      END_STATE();
    case 1017:
      if (lookahead == '3') ADVANCE(1035);
      if (lookahead == '8') ADVANCE(1079);
      END_STATE();
    case 1018:
      if (lookahead == '3') ADVANCE(1005);
      END_STATE();
    case 1019:
      if (lookahead == '3') ADVANCE(1005);
      if (lookahead == '6') ADVANCE(1005);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(987);
      END_STATE();
    case 1020:
      if (lookahead == '3') ADVANCE(1005);
      if (lookahead == '7') ADVANCE(1053);
      END_STATE();
    case 1021:
      if (lookahead == '3') ADVANCE(1008);
      if (lookahead == '8') ADVANCE(1083);
      END_STATE();
    case 1022:
      if (lookahead == '3') ADVANCE(1034);
      END_STATE();
    case 1023:
      if (lookahead == '3') ADVANCE(1012);
      END_STATE();
    case 1024:
      if (lookahead == '3') ADVANCE(1036);
      END_STATE();
    case 1025:
      if (lookahead == '3') ADVANCE(1036);
      if (lookahead == '8') ADVANCE(1082);
      END_STATE();
    case 1026:
      if (lookahead == '3') ADVANCE(1439);
      END_STATE();
    case 1027:
      if (lookahead == '3') ADVANCE(1002);
      if (lookahead == '8') ADVANCE(1082);
      END_STATE();
    case 1028:
      if (lookahead == '3') ADVANCE(1013);
      END_STATE();
    case 1029:
      if (lookahead == '4') ADVANCE(1033);
      END_STATE();
    case 1030:
      if (lookahead == '4') ADVANCE(1102);
      if (lookahead == '6') ADVANCE(1020);
      if (lookahead == '7') ADVANCE(967);
      END_STATE();
    case 1031:
      if (lookahead == '4') ADVANCE(1121);
      END_STATE();
    case 1032:
      if (lookahead == '4') ADVANCE(1128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 1033:
      if (lookahead == '4') ADVANCE(1135);
      END_STATE();
    case 1034:
      if (lookahead == '4') ADVANCE(1158);
      END_STATE();
    case 1035:
      if (lookahead == '4') ADVANCE(1141);
      END_STATE();
    case 1036:
      if (lookahead == '4') ADVANCE(1145);
      END_STATE();
    case 1037:
      if (lookahead == '4') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1145);
      END_STATE();
    case 1038:
      if (lookahead == '4') ADVANCE(1145);
      if (lookahead == '8') ADVANCE(1145);
      END_STATE();
    case 1039:
      if (lookahead == '4') ADVANCE(1151);
      END_STATE();
    case 1040:
      if (lookahead == '4') ADVANCE(1152);
      END_STATE();
    case 1041:
      if (lookahead == '4') ADVANCE(1051);
      END_STATE();
    case 1042:
      if (lookahead == '4') ADVANCE(1064);
      if (lookahead == '6') ADVANCE(859);
      END_STATE();
    case 1043:
      if (lookahead == '4') ADVANCE(972);
      END_STATE();
    case 1044:
      if (lookahead == '4') ADVANCE(1039);
      END_STATE();
    case 1045:
      if (lookahead == '4') ADVANCE(1040);
      END_STATE();
    case 1046:
      if (lookahead == '5') ADVANCE(973);
      END_STATE();
    case 1047:
      if (lookahead == '5') ADVANCE(1120);
      if (lookahead == '6') ADVANCE(1123);
      END_STATE();
    case 1048:
      if (lookahead == '5') ADVANCE(1121);
      END_STATE();
    case 1049:
      if (lookahead == '5') ADVANCE(1119);
      END_STATE();
    case 1050:
      if (lookahead == '5') ADVANCE(1119);
      if (lookahead == '6') ADVANCE(1145);
      END_STATE();
    case 1051:
      if (lookahead == '5') ADVANCE(1127);
      END_STATE();
    case 1052:
      if (lookahead == '5') ADVANCE(1158);
      END_STATE();
    case 1053:
      if (lookahead == '5') ADVANCE(1145);
      END_STATE();
    case 1054:
      if (lookahead == '5') ADVANCE(1145);
      if (lookahead == '6') ADVANCE(1145);
      END_STATE();
    case 1055:
      if (lookahead == '5') ADVANCE(1145);
      if (lookahead == '6') ADVANCE(1150);
      END_STATE();
    case 1056:
      if (lookahead == '5') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1151);
      END_STATE();
    case 1057:
      if (lookahead == '5') ADVANCE(1142);
      if (lookahead == '6') ADVANCE(1144);
      END_STATE();
    case 1058:
      if (lookahead == '5') ADVANCE(1155);
      if (lookahead == '6') ADVANCE(1144);
      END_STATE();
    case 1059:
      if (lookahead == '5') ADVANCE(1155);
      if (lookahead == '6') ADVANCE(1157);
      END_STATE();
    case 1060:
      if (lookahead == '6') ADVANCE(1443);
      END_STATE();
    case 1061:
      if (lookahead == '6') ADVANCE(1121);
      END_STATE();
    case 1062:
      if (lookahead == '6') ADVANCE(1158);
      END_STATE();
    case 1063:
      if (lookahead == '6') ADVANCE(1141);
      END_STATE();
    case 1064:
      if (lookahead == '6') ADVANCE(1145);
      END_STATE();
    case 1065:
      if (lookahead == '6') ADVANCE(1145);
      if (lookahead == '7') ADVANCE(1145);
      END_STATE();
    case 1066:
      if (lookahead == '6') ADVANCE(1103);
      END_STATE();
    case 1067:
      if (lookahead == '6') ADVANCE(1438);
      END_STATE();
    case 1068:
      if (lookahead == '6') ADVANCE(1054);
      END_STATE();
    case 1069:
      if (lookahead == '6') ADVANCE(908);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1026);
      END_STATE();
    case 1070:
      if (lookahead == '6') ADVANCE(1107);
      END_STATE();
    case 1071:
      if (lookahead == '6') ADVANCE(1109);
      END_STATE();
    case 1072:
      if (lookahead == '6') ADVANCE(1108);
      END_STATE();
    case 1073:
      if (lookahead == '6') ADVANCE(1110);
      END_STATE();
    case 1074:
      if (lookahead == '6') ADVANCE(1444);
      END_STATE();
    case 1075:
      if (lookahead == '6') ADVANCE(1445);
      END_STATE();
    case 1076:
      if (lookahead == '6') ADVANCE(1446);
      END_STATE();
    case 1077:
      if (lookahead == '6') ADVANCE(1447);
      END_STATE();
    case 1078:
      if (lookahead == '7') ADVANCE(1113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1119);
      END_STATE();
    case 1079:
      if (lookahead == '7') ADVANCE(1134);
      END_STATE();
    case 1080:
      if (lookahead == '7') ADVANCE(1145);
      END_STATE();
    case 1081:
      if (lookahead == '7') ADVANCE(1145);
      if (lookahead == '8') ADVANCE(1145);
      if (lookahead == '9') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 1082:
      if (lookahead == '7') ADVANCE(1151);
      END_STATE();
    case 1083:
      if (lookahead == '7') ADVANCE(1152);
      END_STATE();
    case 1084:
      if (lookahead == '7') ADVANCE(1108);
      END_STATE();
    case 1085:
      if (lookahead == '7') ADVANCE(1117);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1145);
      END_STATE();
    case 1086:
      if (lookahead == '8') ADVANCE(1066);
      END_STATE();
    case 1087:
      if (lookahead == '8') ADVANCE(1123);
      if (lookahead == '9') ADVANCE(1123);
      END_STATE();
    case 1088:
      if (lookahead == '8') ADVANCE(1121);
      if (lookahead == '9') ADVANCE(1121);
      END_STATE();
    case 1089:
      if (lookahead == '8') ADVANCE(1132);
      if (lookahead == '9') ADVANCE(1136);
      END_STATE();
    case 1090:
      if (lookahead == '8') ADVANCE(1135);
      END_STATE();
    case 1091:
      if (lookahead == '8') ADVANCE(1158);
      if (lookahead == '9') ADVANCE(1158);
      END_STATE();
    case 1092:
      if (lookahead == '8') ADVANCE(1145);
      if (lookahead == '9') ADVANCE(1145);
      END_STATE();
    case 1093:
      if (lookahead == '8') ADVANCE(1144);
      if (lookahead == '9') ADVANCE(1144);
      END_STATE();
    case 1094:
      if (lookahead == '8') ADVANCE(1151);
      END_STATE();
    case 1095:
      if (lookahead == '8') ADVANCE(1150);
      if (lookahead == '9') ADVANCE(1150);
      END_STATE();
    case 1096:
      if (lookahead == '8') ADVANCE(1152);
      END_STATE();
    case 1097:
      if (lookahead == '8') ADVANCE(1157);
      if (lookahead == '9') ADVANCE(1157);
      END_STATE();
    case 1098:
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 1099:
      if (lookahead == '8') ADVANCE(1071);
      END_STATE();
    case 1100:
      if (lookahead == '8') ADVANCE(1072);
      END_STATE();
    case 1101:
      if (lookahead == '8') ADVANCE(1073);
      END_STATE();
    case 1102:
      if (lookahead == '9') ADVANCE(975);
      END_STATE();
    case 1103:
      if (lookahead == '9') ADVANCE(1120);
      END_STATE();
    case 1104:
      if (lookahead == '9') ADVANCE(1061);
      END_STATE();
    case 1105:
      if (lookahead == '9') ADVANCE(909);
      if (lookahead == ';') ADVANCE(1554);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1064);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1037);
      END_STATE();
    case 1106:
      if (lookahead == '9') ADVANCE(1125);
      END_STATE();
    case 1107:
      if (lookahead == '9') ADVANCE(1119);
      END_STATE();
    case 1108:
      if (lookahead == '9') ADVANCE(1145);
      END_STATE();
    case 1109:
      if (lookahead == '9') ADVANCE(1142);
      END_STATE();
    case 1110:
      if (lookahead == '9') ADVANCE(1155);
      END_STATE();
    case 1111:
      if (lookahead == '9') ADVANCE(1006);
      END_STATE();
    case 1112:
      if (lookahead == '9') ADVANCE(1062);
      END_STATE();
    case 1113:
      if (lookahead == '9') ADVANCE(1049);
      END_STATE();
    case 1114:
      if (lookahead == '9') ADVANCE(1055);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1432);
      END_STATE();
    case 1115:
      if (lookahead == '9') ADVANCE(1064);
      END_STATE();
    case 1116:
      if (lookahead == '9') ADVANCE(1064);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1431);
      END_STATE();
    case 1117:
      if (lookahead == '9') ADVANCE(1053);
      END_STATE();
    case 1118:
      if (lookahead == '9') ADVANCE(1050);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1431);
      END_STATE();
    case 1119:
      if (lookahead == ';') ADVANCE(1538);
      END_STATE();
    case 1120:
      if (lookahead == ';') ADVANCE(1541);
      END_STATE();
    case 1121:
      if (lookahead == ';') ADVANCE(1454);
      END_STATE();
    case 1122:
      if (lookahead == ';') ADVANCE(1606);
      END_STATE();
    case 1123:
      if (lookahead == ';') ADVANCE(1528);
      END_STATE();
    case 1124:
      if (lookahead == ';') ADVANCE(1590);
      END_STATE();
    case 1125:
      if (lookahead == ';') ADVANCE(1602);
      END_STATE();
    case 1126:
      if (lookahead == ';') ADVANCE(1564);
      END_STATE();
    case 1127:
      if (lookahead == ';') ADVANCE(1622);
      END_STATE();
    case 1128:
      if (lookahead == ';') ADVANCE(1594);
      END_STATE();
    case 1129:
      if (lookahead == ';') ADVANCE(1618);
      END_STATE();
    case 1130:
      if (lookahead == ';') ADVANCE(1592);
      END_STATE();
    case 1131:
      if (lookahead == ';') ADVANCE(1610);
      END_STATE();
    case 1132:
      if (lookahead == ';') ADVANCE(1568);
      END_STATE();
    case 1133:
      if (lookahead == ';') ADVANCE(1614);
      END_STATE();
    case 1134:
      if (lookahead == ';') ADVANCE(1596);
      END_STATE();
    case 1135:
      if (lookahead == ';') ADVANCE(1598);
      END_STATE();
    case 1136:
      if (lookahead == ';') ADVANCE(1570);
      END_STATE();
    case 1137:
      if (lookahead == ';') ADVANCE(1572);
      END_STATE();
    case 1138:
      if (lookahead == ';') ADVANCE(1574);
      END_STATE();
    case 1139:
      if (lookahead == ';') ADVANCE(1576);
      END_STATE();
    case 1140:
      if (lookahead == ';') ADVANCE(1566);
      END_STATE();
    case 1141:
      if (lookahead == ';') ADVANCE(1578);
      END_STATE();
    case 1142:
      if (lookahead == ';') ADVANCE(814);
      END_STATE();
    case 1143:
      if (lookahead == ';') ADVANCE(814);
      if (lookahead == 'b') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(1307);
      END_STATE();
    case 1144:
      if (lookahead == ';') ADVANCE(1553);
      END_STATE();
    case 1145:
      if (lookahead == ';') ADVANCE(1543);
      END_STATE();
    case 1146:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 'a') ADVANCE(1349);
      END_STATE();
    case 1147:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 'f') ADVANCE(1388);
      if (lookahead == 'q') ADVANCE(1145);
      END_STATE();
    case 1148:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 'o') ADVANCE(1419);
      END_STATE();
    case 1149:
      if (lookahead == ';') ADVANCE(1543);
      if (lookahead == 't') ADVANCE(1318);
      END_STATE();
    case 1150:
      if (lookahead == ';') ADVANCE(1535);
      END_STATE();
    case 1151:
      if (lookahead == ';') ADVANCE(817);
      END_STATE();
    case 1152:
      if (lookahead == ';') ADVANCE(816);
      END_STATE();
    case 1153:
      if (lookahead == ';') ADVANCE(1554);
      END_STATE();
    case 1154:
      if (lookahead == ';') ADVANCE(815);
      END_STATE();
    case 1155:
      if (lookahead == ';') ADVANCE(1542);
      END_STATE();
    case 1156:
      if (lookahead == ';') ADVANCE(1542);
      if (lookahead == 'b') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(1307);
      END_STATE();
    case 1157:
      if (lookahead == ';') ADVANCE(1530);
      END_STATE();
    case 1158:
      if (lookahead == ';') ADVANCE(1455);
      END_STATE();
    case 1159:
      if (lookahead == ';') ADVANCE(1555);
      END_STATE();
    case 1160:
      if (lookahead == '=') ADVANCE(1543);
      END_STATE();
    case 1161:
      if (lookahead == '@') ADVANCE(1526);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1162);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1503);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      END_STATE();
    case 1162:
      if (lookahead == '@') ADVANCE(1526);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1162);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      END_STATE();
    case 1163:
      if (lookahead == 'A') ADVANCE(1350);
      END_STATE();
    case 1164:
      if (lookahead == 'A') ADVANCE(1350);
      if (lookahead == 'R') ADVANCE(1274);
      END_STATE();
    case 1165:
      if (lookahead == 'A') ADVANCE(1350);
      if (lookahead == 'T') ADVANCE(1229);
      if (lookahead == 'p') ADVANCE(1230);
      END_STATE();
    case 1166:
      if (lookahead == 'L') ADVANCE(1232);
      if (lookahead == 'R') ADVANCE(1274);
      if (lookahead == 'U') ADVANCE(1330);
      END_STATE();
    case 1167:
      if (lookahead == 'M') ADVANCE(1281);
      END_STATE();
    case 1168:
      if (lookahead == 'N') ADVANCE(1543);
      END_STATE();
    case 1169:
      if (lookahead == 'P') ADVANCE(1299);
      END_STATE();
    case 1170:
      if (lookahead == 'R') ADVANCE(1274);
      END_STATE();
    case 1171:
      if (lookahead == 'a') ADVANCE(1355);
      END_STATE();
    case 1172:
      if (lookahead == 'a') ADVANCE(1205);
      END_STATE();
    case 1173:
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == 'y') ADVANCE(1337);
      END_STATE();
    case 1174:
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == 'y') ADVANCE(1340);
      END_STATE();
    case 1175:
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'd') ADVANCE(1198);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == 'v') ADVANCE(1294);
      END_STATE();
    case 1176:
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == 'v') ADVANCE(1294);
      END_STATE();
    case 1177:
      if (lookahead == 'a') ADVANCE(1356);
      END_STATE();
    case 1178:
      if (lookahead == 'a') ADVANCE(1283);
      if (lookahead == 'y') ADVANCE(1328);
      END_STATE();
    case 1179:
      if (lookahead == 'a') ADVANCE(1283);
      if (lookahead == 'y') ADVANCE(1332);
      END_STATE();
    case 1180:
      if (lookahead == 'a') ADVANCE(1345);
      END_STATE();
    case 1181:
      if (lookahead == 'a') ADVANCE(1345);
      if (lookahead == 'i') ADVANCE(1252);
      END_STATE();
    case 1182:
      if (lookahead == 'a') ADVANCE(1345);
      if (lookahead == 'p') ADVANCE(1187);
      END_STATE();
    case 1183:
      if (lookahead == 'a') ADVANCE(1288);
      if (lookahead == 'd') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 'n') ADVANCE(1333);
      if (lookahead == 'p') ADVANCE(1145);
      END_STATE();
    case 1184:
      if (lookahead == 'a') ADVANCE(1288);
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'i') ADVANCE(1216);
      if (lookahead == 'n') ADVANCE(1333);
      if (lookahead == 'p') ADVANCE(1145);
      END_STATE();
    case 1185:
      if (lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'e') ADVANCE(1243);
      END_STATE();
    case 1186:
      if (lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1187:
      if (lookahead == 'a') ADVANCE(1350);
      END_STATE();
    case 1188:
      if (lookahead == 'a') ADVANCE(1350);
      if (lookahead == 'r') ADVANCE(1279);
      END_STATE();
    case 1189:
      if (lookahead == 'a') ADVANCE(1298);
      END_STATE();
    case 1190:
      if (lookahead == 'a') ADVANCE(1349);
      END_STATE();
    case 1191:
      if (lookahead == 'a') ADVANCE(1145);
      END_STATE();
    case 1192:
      if (lookahead == 'a') ADVANCE(1374);
      END_STATE();
    case 1193:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 1194:
      if (lookahead == 'a') ADVANCE(1375);
      END_STATE();
    case 1195:
      if (lookahead == 'a') ADVANCE(1377);
      END_STATE();
    case 1196:
      if (lookahead == 'a') ADVANCE(1379);
      END_STATE();
    case 1197:
      if (lookahead == 'a') ADVANCE(1380);
      END_STATE();
    case 1198:
      if (lookahead == 'a') ADVANCE(1381);
      END_STATE();
    case 1199:
      if (lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 1200:
      if (lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 1201:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 1202:
      if (lookahead == 'a') ADVANCE(1373);
      END_STATE();
    case 1203:
      if (lookahead == 'a') ADVANCE(1296);
      END_STATE();
    case 1204:
      if (lookahead == 'b') ADVANCE(1287);
      END_STATE();
    case 1205:
      if (lookahead == 'c') ADVANCE(904);
      END_STATE();
    case 1206:
      if (lookahead == 'c') ADVANCE(1289);
      END_STATE();
    case 1207:
      if (lookahead == 'c') ADVANCE(1291);
      END_STATE();
    case 1208:
      if (lookahead == 'd') ADVANCE(1177);
      END_STATE();
    case 1209:
      if (lookahead == 'd') ADVANCE(1177);
      if (lookahead == 'i') ADVANCE(1213);
      END_STATE();
    case 1210:
      if (lookahead == 'd') ADVANCE(1324);
      if (lookahead == 'p') ADVANCE(1299);
      END_STATE();
    case 1211:
      if (lookahead == 'd') ADVANCE(1192);
      END_STATE();
    case 1212:
      if (lookahead == 'd') ADVANCE(1192);
      if (lookahead == 'i') ADVANCE(1311);
      END_STATE();
    case 1213:
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'n') ADVANCE(1400);
      END_STATE();
    case 1214:
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 1215:
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 1216:
      if (lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'n') ADVANCE(1415);
      END_STATE();
    case 1217:
      if (lookahead == 'd') ADVANCE(1195);
      if (lookahead == 'i') ADVANCE(1214);
      END_STATE();
    case 1218:
      if (lookahead == 'd') ADVANCE(1196);
      END_STATE();
    case 1219:
      if (lookahead == 'd') ADVANCE(1197);
      END_STATE();
    case 1220:
      if (lookahead == 'd') ADVANCE(1197);
      if (lookahead == 'i') ADVANCE(1312);
      END_STATE();
    case 1221:
      if (lookahead == 'd') ADVANCE(1199);
      END_STATE();
    case 1222:
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 1223:
      if (lookahead == 'd') ADVANCE(1200);
      END_STATE();
    case 1224:
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'i') ADVANCE(1315);
      END_STATE();
    case 1225:
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 'l') ADVANCE(1391);
      if (lookahead == 'o') ADVANCE(1418);
      if (lookahead == 'r') ADVANCE(1180);
      END_STATE();
    case 1226:
      if (lookahead == 'e') ADVANCE(1301);
      END_STATE();
    case 1227:
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead == 'l') ADVANCE(1404);
      if (lookahead == 'm') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1321);
      END_STATE();
    case 1228:
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead == 'l') ADVANCE(1406);
      if (lookahead == 'm') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1321);
      END_STATE();
    case 1229:
      if (lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 1230:
      if (lookahead == 'e') ADVANCE(1342);
      END_STATE();
    case 1231:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(1304);
      END_STATE();
    case 1234:
      if (lookahead == 'e') ADVANCE(1289);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(1305);
      END_STATE();
    case 1236:
      if (lookahead == 'e') ADVANCE(1306);
      END_STATE();
    case 1237:
      if (lookahead == 'e') ADVANCE(1307);
      END_STATE();
    case 1238:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 1239:
      if (lookahead == 'e') ADVANCE(1309);
      END_STATE();
    case 1240:
      if (lookahead == 'e') ADVANCE(1310);
      END_STATE();
    case 1241:
      if (lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 1242:
      if (lookahead == 'e') ADVANCE(1378);
      END_STATE();
    case 1243:
      if (lookahead == 'f') ADVANCE(1387);
      END_STATE();
    case 1244:
      if (lookahead == 'f') ADVANCE(1278);
      END_STATE();
    case 1245:
      if (lookahead == 'f') ADVANCE(1389);
      END_STATE();
    case 1246:
      if (lookahead == 'f') ADVANCE(1125);
      END_STATE();
    case 1247:
      if (lookahead == 'f') ADVANCE(1363);
      END_STATE();
    case 1248:
      if (lookahead == 'f') ADVANCE(1145);
      END_STATE();
    case 1249:
      if (lookahead == 'g') ADVANCE(1317);
      END_STATE();
    case 1250:
      if (lookahead == 'g') ADVANCE(1256);
      END_STATE();
    case 1251:
      if (lookahead == 'g') ADVANCE(1145);
      END_STATE();
    case 1252:
      if (lookahead == 'g') ADVANCE(1258);
      END_STATE();
    case 1253:
      if (lookahead == 'h') ADVANCE(1226);
      END_STATE();
    case 1254:
      if (lookahead == 'h') ADVANCE(1123);
      END_STATE();
    case 1255:
      if (lookahead == 'h') ADVANCE(1322);
      if (lookahead == 'q') ADVANCE(1410);
      END_STATE();
    case 1256:
      if (lookahead == 'h') ADVANCE(1389);
      END_STATE();
    case 1257:
      if (lookahead == 'h') ADVANCE(1121);
      END_STATE();
    case 1258:
      if (lookahead == 'h') ADVANCE(1396);
      END_STATE();
    case 1259:
      if (lookahead == 'h') ADVANCE(1132);
      END_STATE();
    case 1260:
      if (lookahead == 'h') ADVANCE(1158);
      END_STATE();
    case 1261:
      if (lookahead == 'h') ADVANCE(1138);
      END_STATE();
    case 1262:
      if (lookahead == 'h') ADVANCE(1139);
      END_STATE();
    case 1263:
      if (lookahead == 'h') ADVANCE(1145);
      END_STATE();
    case 1264:
      if (lookahead == 'h') ADVANCE(1144);
      END_STATE();
    case 1265:
      if (lookahead == 'h') ADVANCE(1150);
      END_STATE();
    case 1266:
      if (lookahead == 'h') ADVANCE(1157);
      END_STATE();
    case 1267:
      if (lookahead == 'h') ADVANCE(1233);
      END_STATE();
    case 1268:
      if (lookahead == 'h') ADVANCE(1235);
      END_STATE();
    case 1269:
      if (lookahead == 'h') ADVANCE(1236);
      END_STATE();
    case 1270:
      if (lookahead == 'h') ADVANCE(1238);
      END_STATE();
    case 1271:
      if (lookahead == 'h') ADVANCE(1237);
      END_STATE();
    case 1272:
      if (lookahead == 'h') ADVANCE(1239);
      END_STATE();
    case 1273:
      if (lookahead == 'h') ADVANCE(1240);
      END_STATE();
    case 1274:
      if (lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1275:
      if (lookahead == 'i') ADVANCE(1352);
      END_STATE();
    case 1276:
      if (lookahead == 'i') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1386);
      END_STATE();
    case 1277:
      if (lookahead == 'i') ADVANCE(1145);
      END_STATE();
    case 1278:
      if (lookahead == 'i') ADVANCE(1307);
      END_STATE();
    case 1279:
      if (lookahead == 'i') ADVANCE(1252);
      END_STATE();
    case 1280:
      if (lookahead == 'i') ADVANCE(1313);
      END_STATE();
    case 1281:
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 1282:
      if (lookahead == 'l') ADVANCE(1398);
      END_STATE();
    case 1283:
      if (lookahead == 'l') ADVANCE(1246);
      END_STATE();
    case 1284:
      if (lookahead == 'l') ADVANCE(1246);
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 1285:
      if (lookahead == 'l') ADVANCE(1180);
      if (lookahead == 'q') ADVANCE(1397);
      if (lookahead == 'r') ADVANCE(1180);
      END_STATE();
    case 1286:
      if (lookahead == 'l') ADVANCE(1124);
      END_STATE();
    case 1287:
      if (lookahead == 'l') ADVANCE(1191);
      END_STATE();
    case 1288:
      if (lookahead == 'l') ADVANCE(1231);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1291:
      if (lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1292:
      if (lookahead == 'l') ADVANCE(1151);
      END_STATE();
    case 1293:
      if (lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 1294:
      if (lookahead == 'l') ADVANCE(1395);
      END_STATE();
    case 1295:
      if (lookahead == 'l') ADVANCE(1401);
      END_STATE();
    case 1296:
      if (lookahead == 'l') ADVANCE(1368);
      END_STATE();
    case 1297:
      if (lookahead == 'l') ADVANCE(1403);
      END_STATE();
    case 1298:
      if (lookahead == 'l') ADVANCE(1370);
      END_STATE();
    case 1299:
      if (lookahead == 'l') ADVANCE(1412);
      END_STATE();
    case 1300:
      if (lookahead == 'm') ADVANCE(1145);
      END_STATE();
    case 1301:
      if (lookahead == 'n') ADVANCE(1123);
      END_STATE();
    case 1302:
      if (lookahead == 'n') ADVANCE(1244);
      END_STATE();
    case 1303:
      if (lookahead == 'n') ADVANCE(1251);
      END_STATE();
    case 1304:
      if (lookahead == 'n') ADVANCE(1121);
      END_STATE();
    case 1305:
      if (lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 1306:
      if (lookahead == 'n') ADVANCE(1158);
      END_STATE();
    case 1307:
      if (lookahead == 'n') ADVANCE(1145);
      END_STATE();
    case 1308:
      if (lookahead == 'n') ADVANCE(1144);
      END_STATE();
    case 1309:
      if (lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 1310:
      if (lookahead == 'n') ADVANCE(1157);
      END_STATE();
    case 1311:
      if (lookahead == 'n') ADVANCE(1408);
      END_STATE();
    case 1312:
      if (lookahead == 'n') ADVANCE(1411);
      END_STATE();
    case 1313:
      if (lookahead == 'n') ADVANCE(1405);
      END_STATE();
    case 1314:
      if (lookahead == 'n') ADVANCE(1412);
      END_STATE();
    case 1315:
      if (lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 1316:
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 1317:
      if (lookahead == 'o') ADVANCE(1210);
      END_STATE();
    case 1318:
      if (lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 1319:
      if (lookahead == 'o') ADVANCE(1419);
      END_STATE();
    case 1320:
      if (lookahead == 'o') ADVANCE(1286);
      END_STATE();
    case 1321:
      if (lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 1322:
      if (lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 1323:
      if (lookahead == 'o') ADVANCE(1292);
      END_STATE();
    case 1324:
      if (lookahead == 'o') ADVANCE(1393);
      END_STATE();
    case 1325:
      if (lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 1326:
      if (lookahead == 'p') ADVANCE(1165);
      END_STATE();
    case 1327:
      if (lookahead == 'p') ADVANCE(823);
      END_STATE();
    case 1328:
      if (lookahead == 'p') ADVANCE(1253);
      END_STATE();
    case 1329:
      if (lookahead == 'p') ADVANCE(1145);
      END_STATE();
    case 1330:
      if (lookahead == 'p') ADVANCE(1187);
      END_STATE();
    case 1331:
      if (lookahead == 'p') ADVANCE(1267);
      END_STATE();
    case 1332:
      if (lookahead == 'p') ADVANCE(1268);
      END_STATE();
    case 1333:
      if (lookahead == 'p') ADVANCE(1299);
      END_STATE();
    case 1334:
      if (lookahead == 'p') ADVANCE(1299);
      if (lookahead == 'q') ADVANCE(1402);
      if (lookahead == 'x') ADVANCE(1207);
      END_STATE();
    case 1335:
      if (lookahead == 'p') ADVANCE(1299);
      if (lookahead == 'u') ADVANCE(1290);
      END_STATE();
    case 1336:
      if (lookahead == 'p') ADVANCE(1269);
      END_STATE();
    case 1337:
      if (lookahead == 'p') ADVANCE(1270);
      END_STATE();
    case 1338:
      if (lookahead == 'p') ADVANCE(1271);
      END_STATE();
    case 1339:
      if (lookahead == 'p') ADVANCE(1272);
      END_STATE();
    case 1340:
      if (lookahead == 'p') ADVANCE(1273);
      END_STATE();
    case 1341:
      if (lookahead == 'q') ADVANCE(1417);
      END_STATE();
    case 1342:
      if (lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 1343:
      if (lookahead == 'r') ADVANCE(1148);
      END_STATE();
    case 1344:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 1345:
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 1346:
      if (lookahead == 'r') ADVANCE(1277);
      END_STATE();
    case 1347:
      if (lookahead == 'r') ADVANCE(1329);
      END_STATE();
    case 1348:
      if (lookahead == 'r') ADVANCE(1390);
      END_STATE();
    case 1349:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 1350:
      if (lookahead == 'r') ADVANCE(1353);
      END_STATE();
    case 1351:
      if (lookahead == 'r') ADVANCE(1343);
      END_STATE();
    case 1352:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(1319);
      END_STATE();
    case 1354:
      if (lookahead == 'r') ADVANCE(1248);
      END_STATE();
    case 1355:
      if (lookahead == 's') ADVANCE(1385);
      END_STATE();
    case 1356:
      if (lookahead == 's') ADVANCE(1254);
      END_STATE();
    case 1357:
      if (lookahead == 's') ADVANCE(1167);
      END_STATE();
    case 1358:
      if (lookahead == 's') ADVANCE(1143);
      END_STATE();
    case 1359:
      if (lookahead == 's') ADVANCE(1169);
      END_STATE();
    case 1360:
      if (lookahead == 's') ADVANCE(1120);
      END_STATE();
    case 1361:
      if (lookahead == 's') ADVANCE(1156);
      END_STATE();
    case 1362:
      if (lookahead == 's') ADVANCE(1123);
      END_STATE();
    case 1363:
      if (lookahead == 's') ADVANCE(1407);
      END_STATE();
    case 1364:
      if (lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 1365:
      if (lookahead == 's') ADVANCE(1119);
      END_STATE();
    case 1366:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 1367:
      if (lookahead == 's') ADVANCE(1140);
      END_STATE();
    case 1368:
      if (lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 1369:
      if (lookahead == 's') ADVANCE(1144);
      END_STATE();
    case 1370:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1371:
      if (lookahead == 's') ADVANCE(1150);
      END_STATE();
    case 1372:
      if (lookahead == 's') ADVANCE(1157);
      END_STATE();
    case 1373:
      if (lookahead == 's') ADVANCE(1392);
      END_STATE();
    case 1374:
      if (lookahead == 's') ADVANCE(1257);
      END_STATE();
    case 1375:
      if (lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 1376:
      if (lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 1377:
      if (lookahead == 's') ADVANCE(1262);
      END_STATE();
    case 1378:
      if (lookahead == 's') ADVANCE(1393);
      END_STATE();
    case 1379:
      if (lookahead == 's') ADVANCE(1261);
      END_STATE();
    case 1380:
      if (lookahead == 's') ADVANCE(1260);
      END_STATE();
    case 1381:
      if (lookahead == 's') ADVANCE(1264);
      END_STATE();
    case 1382:
      if (lookahead == 's') ADVANCE(1263);
      END_STATE();
    case 1383:
      if (lookahead == 's') ADVANCE(1265);
      END_STATE();
    case 1384:
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 1385:
      if (lookahead == 't') ADVANCE(1122);
      END_STATE();
    case 1386:
      if (lookahead == 't') ADVANCE(1149);
      if (lookahead == 'x') ADVANCE(1335);
      END_STATE();
    case 1387:
      if (lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 1388:
      if (lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1389:
      if (lookahead == 't') ADVANCE(1163);
      END_STATE();
    case 1390:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1391:
      if (lookahead == 't') ADVANCE(1346);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1393:
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 1394:
      if (lookahead == 't') ADVANCE(1153);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1397:
      if (lookahead == 'u') ADVANCE(1146);
      END_STATE();
    case 1398:
      if (lookahead == 'u') ADVANCE(1360);
      END_STATE();
    case 1399:
      if (lookahead == 'u') ADVANCE(1241);
      END_STATE();
    case 1400:
      if (lookahead == 'u') ADVANCE(1362);
      END_STATE();
    case 1401:
      if (lookahead == 'u') ADVANCE(1365);
      END_STATE();
    case 1402:
      if (lookahead == 'u') ADVANCE(1189);
      END_STATE();
    case 1403:
      if (lookahead == 'u') ADVANCE(1357);
      END_STATE();
    case 1404:
      if (lookahead == 'u') ADVANCE(1358);
      END_STATE();
    case 1405:
      if (lookahead == 'u') ADVANCE(1359);
      END_STATE();
    case 1406:
      if (lookahead == 'u') ADVANCE(1361);
      END_STATE();
    case 1407:
      if (lookahead == 'u') ADVANCE(1354);
      END_STATE();
    case 1408:
      if (lookahead == 'u') ADVANCE(1364);
      END_STATE();
    case 1409:
      if (lookahead == 'u') ADVANCE(1367);
      END_STATE();
    case 1410:
      if (lookahead == 'u') ADVANCE(1190);
      END_STATE();
    case 1411:
      if (lookahead == 'u') ADVANCE(1366);
      END_STATE();
    case 1412:
      if (lookahead == 'u') ADVANCE(1368);
      END_STATE();
    case 1413:
      if (lookahead == 'u') ADVANCE(1369);
      END_STATE();
    case 1414:
      if (lookahead == 'u') ADVANCE(1371);
      END_STATE();
    case 1415:
      if (lookahead == 'u') ADVANCE(1372);
      END_STATE();
    case 1416:
      if (lookahead == 'u') ADVANCE(1242);
      END_STATE();
    case 1417:
      if (lookahead == 'u') ADVANCE(1203);
      END_STATE();
    case 1418:
      if (lookahead == 'w') ADVANCE(1202);
      END_STATE();
    case 1419:
      if (lookahead == 'w') ADVANCE(1145);
      END_STATE();
    case 1420:
      if (lookahead == 'x') ADVANCE(1206);
      END_STATE();
    case 1421:
      if (lookahead == 'y') ADVANCE(1331);
      END_STATE();
    case 1422:
      if (lookahead == 'y') ADVANCE(1336);
      END_STATE();
    case 1423:
      if (lookahead == 'y') ADVANCE(1338);
      END_STATE();
    case 1424:
      if (lookahead == 'y') ADVANCE(1339);
      END_STATE();
    case 1425:
      if (lookahead == 0xfe0e) ADVANCE(1524);
      END_STATE();
    case 1426:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1453);
      END_STATE();
    case 1427:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1145);
      END_STATE();
    case 1428:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1145);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1145);
      END_STATE();
    case 1429:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1134);
      END_STATE();
    case 1430:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1145);
      END_STATE();
    case 1431:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1151);
      END_STATE();
    case 1432:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1152);
      END_STATE();
    case 1433:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 1434:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1154);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1159);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1153);
      END_STATE();
    case 1435:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1120);
      END_STATE();
    case 1436:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1125);
      END_STATE();
    case 1437:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1119);
      END_STATE();
    case 1438:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 1439:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 1440:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1142);
      END_STATE();
    case 1441:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1155);
      END_STATE();
    case 1442:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 1443:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1435);
      END_STATE();
    case 1444:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 1445:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 1446:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 1447:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 1448:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1090);
      END_STATE();
    case 1449:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1145);
      END_STATE();
    case 1450:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1094);
      END_STATE();
    case 1451:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1096);
      END_STATE();
    case 1452:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      END_STATE();
    case 1453:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1452);
      END_STATE();
    case 1454:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1534);
      END_STATE();
    case 1455:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1456:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1535);
      END_STATE();
    case 1457:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1458);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1458:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1458);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      END_STATE();
    case 1459:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1460:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '\n', 1472,
        '\r', 781,
        '!', 1550,
        '$', 534,
        '&', 11,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        'Z', 531,
        'z', 531,
        '+', 14,
        0x16ed, 14,
        0x2795, 14,
        '\t', 781,
        0x0b, 781,
        '\f', 781,
        ' ', 781,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1461:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1550,
        '#', 1540,
        '$', 534,
        '&', 2,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1549,
        '?', 1550,
        '@', 1527,
        'O', 1580,
        'P', 1520,
        'R', 1509,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        '\n', 789,
        '\r', 789,
        'Z', 531,
        'z', 531,
        '+', 1539,
        0x16ed, 1539,
        0x2795, 1539,
        ':', 1515,
        'X', 1515,
        'x', 1515,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1510);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1462:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1550,
        '#', 1540,
        '$', 534,
        '&', 2,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1517,
        '?', 1550,
        '@', 1527,
        'O', 1580,
        'P', 1520,
        'R', 1505,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        '\n', 789,
        '\r', 789,
        'Z', 531,
        'z', 531,
        '+', 1539,
        0x16ed, 1539,
        0x2795, 1539,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1548);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1506);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1463:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1550,
        '#', 1540,
        '$', 534,
        '&', 13,
        '(', 1489,
        '*', 1605,
        '0', 1583,
        '1', 1561,
        ';', 1470,
        '<', 283,
        '=', 1517,
        '?', 1550,
        '@', 1527,
        'O', 1580,
        'P', 1520,
        'R', 1505,
        'T', 289,
        '[', 1479,
        'e', 1500,
        'o', 1587,
        'p', 508,
        '{', 1492,
        0xbd, 1601,
        0x66d, 1621,
        0x204e, 1617,
        0x2217, 1609,
        0x2659, 1523,
        0x265f, 507,
        0x2731, 1613,
        '\n', 789,
        '\r', 789,
        'Z', 531,
        'z', 531,
        '+', 1539,
        0x16ed, 1539,
        0x2795, 1539,
        ':', 1515,
        'X', 1515,
        'x', 1515,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1501);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1529);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1506);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1464:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1558,
        '#', 1538,
        '$', 1459,
        '&', 810,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '0', 1584,
        '1', 1562,
        ';', 1469,
        '<', 1160,
        '=', 1557,
        '?', 1558,
        '@', 1526,
        'O', 1581,
        'P', 1521,
        'R', 1512,
        'T', 1168,
        '[', 1478,
        'e', 1502,
        'o', 1588,
        'p', 1426,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        'Z', 1456,
        'z', 1456,
        '+', 1542,
        0x16ed, 1542,
        0x2795, 1542,
        ':', 1514,
        'X', 1514,
        'x', 1514,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1553);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1543);
      END_STATE();
    case 1465:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '"', 1482,
        '%', 1471,
        '&', 805,
        '(', 1488,
        ')', 1490,
        '*', 1604,
        '-', 1563,
        '/', 1589,
        '0', 1585,
        '1', 1560,
        '2', 1599,
        ';', 1469,
        '@', 1526,
        'O', 1581,
        'P', 1519,
        '[', 1478,
        ']', 1480,
        'o', 1588,
        '{', 1491,
        '}', 1493,
        0xbd, 1600,
        0x66d, 1620,
        0x2010, 1567,
        0x2011, 1569,
        0x2012, 1571,
        0x2013, 1573,
        0x2014, 1575,
        0x2044, 1593,
        0x204e, 1616,
        0x2212, 1565,
        0x2215, 1591,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 1425,
        0x2731, 1612,
        0x2796, 1577,
        0x27cb, 1595,
        0x29f8, 1597,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1465);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1499);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1508);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1467);
      if (lookahead == '\r') ADVANCE(779);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(777);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1468);
      if (lookahead == '\r') ADVANCE(786);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(782);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1472);
      if (lookahead == '\r') ADVANCE(781);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(781);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1473);
      if (lookahead == '\r') ADVANCE(784);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(784);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1468);
      if (lookahead == '\r') ADVANCE(786);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(782);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1475);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(1487);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(1483);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1484);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1484);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ']') ADVANCE(1481);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1487);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1487);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(1487);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1494);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1497);
      if (lookahead == '\r') ADVANCE(1496);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1495);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1497);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(820);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1327);
      if (lookahead == 'p') ADVANCE(1543);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1543);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1556);
      if (lookahead == '\r') ADVANCE(1544);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1543);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1543);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1543);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1453);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 10,
        '+', 1552,
        0x16ed, 1552,
        0x2795, 1552,
        '/', 15,
        0x2044, 15,
        0x2215, 15,
        0x27cb, 15,
        0x29f8, 15,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 804,
        '+', 1543,
        0x16ed, 1543,
        0x2795, 1543,
        '/', 816,
        0x2044, 816,
        0x2215, 816,
        0x27cb, 816,
        0x29f8, 816,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1535);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(533);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(808);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1455);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 4,
        '+', 1540,
        0x16ed, 1540,
        0x2795, 1540,
        '/', 17,
        0x2044, 17,
        0x2215, 17,
        0x27cb, 17,
        0x29f8, 17,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(1538);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 807,
        '+', 1538,
        0x16ed, 1538,
        0x2795, 1538,
        '/', 817,
        0x2044, 817,
        0x2215, 817,
        0x27cb, 817,
        0x29f8, 817,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1543);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 10,
        '-', 1536,
        '+', 1552,
        0x16ed, 1552,
        0x2795, 1552,
        '/', 15,
        0x2044, 15,
        0x2215, 15,
        0x27cb, 15,
        0x29f8, 15,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 10,
        '+', 1552,
        0x16ed, 1552,
        0x2795, 1552,
        '/', 15,
        0x2044, 15,
        0x2215, 15,
        0x27cb, 15,
        0x29f8, 15,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1552);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 804,
        '+', 1543,
        0x16ed, 1543,
        0x2795, 1543,
        '/', 816,
        0x2044, 816,
        0x2215, 816,
        0x27cb, 816,
        0x29f8, 816,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1535);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(802);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1543);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1543);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1559);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(537);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1458);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1454);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 822,
        '\r', 538,
        '&', 3,
        '\t', 537,
        0x0b, 537,
        '\f', 537,
        ' ', 537,
        'A', 537,
        'B', 537,
        'a', 537,
        'b', 537,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(532);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1458);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1458);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1454);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1457);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1454);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1454);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1461, .external_lex_state = 1},
  [2] = {.lex_state = 1461, .external_lex_state = 1},
  [3] = {.lex_state = 778, .external_lex_state = 1},
  [4] = {.lex_state = 1461, .external_lex_state = 1},
  [5] = {.lex_state = 1464, .external_lex_state = 1},
  [6] = {.lex_state = 1464, .external_lex_state = 1},
  [7] = {.lex_state = 1464, .external_lex_state = 1},
  [8] = {.lex_state = 1463, .external_lex_state = 1},
  [9] = {.lex_state = 1461, .external_lex_state = 1},
  [10] = {.lex_state = 1461, .external_lex_state = 1},
  [11] = {.lex_state = 1462, .external_lex_state = 1},
  [12] = {.lex_state = 1463, .external_lex_state = 1},
  [13] = {.lex_state = 791, .external_lex_state = 1},
  [14] = {.lex_state = 1462, .external_lex_state = 1},
  [15] = {.lex_state = 1462, .external_lex_state = 1},
  [16] = {.lex_state = 778, .external_lex_state = 1},
  [17] = {.lex_state = 790, .external_lex_state = 1},
  [18] = {.lex_state = 778, .external_lex_state = 1},
  [19] = {.lex_state = 791, .external_lex_state = 1},
  [20] = {.lex_state = 778, .external_lex_state = 1},
  [21] = {.lex_state = 790, .external_lex_state = 1},
  [22] = {.lex_state = 1461, .external_lex_state = 1},
  [23] = {.lex_state = 1464, .external_lex_state = 1},
  [24] = {.lex_state = 1464, .external_lex_state = 1},
  [25] = {.lex_state = 1461, .external_lex_state = 1},
  [26] = {.lex_state = 1461, .external_lex_state = 1},
  [27] = {.lex_state = 1461, .external_lex_state = 1},
  [28] = {.lex_state = 1464, .external_lex_state = 1},
  [29] = {.lex_state = 1461, .external_lex_state = 1},
  [30] = {.lex_state = 790, .external_lex_state = 1},
  [31] = {.lex_state = 1461, .external_lex_state = 1},
  [32] = {.lex_state = 1464, .external_lex_state = 1},
  [33] = {.lex_state = 1461, .external_lex_state = 1},
  [34] = {.lex_state = 1461, .external_lex_state = 1},
  [35] = {.lex_state = 1461, .external_lex_state = 1},
  [36] = {.lex_state = 1461, .external_lex_state = 1},
  [37] = {.lex_state = 1461, .external_lex_state = 1},
  [38] = {.lex_state = 1461, .external_lex_state = 1},
  [39] = {.lex_state = 1460, .external_lex_state = 1},
  [40] = {.lex_state = 1461, .external_lex_state = 1},
  [41] = {.lex_state = 1461, .external_lex_state = 1},
  [42] = {.lex_state = 1461, .external_lex_state = 1},
  [43] = {.lex_state = 1461, .external_lex_state = 1},
  [44] = {.lex_state = 1461, .external_lex_state = 1},
  [45] = {.lex_state = 783, .external_lex_state = 1},
  [46] = {.lex_state = 1461, .external_lex_state = 1},
  [47] = {.lex_state = 1461, .external_lex_state = 1},
  [48] = {.lex_state = 1461, .external_lex_state = 1},
  [49] = {.lex_state = 1461, .external_lex_state = 1},
  [50] = {.lex_state = 1460, .external_lex_state = 1},
  [51] = {.lex_state = 1461, .external_lex_state = 1},
  [52] = {.lex_state = 1461, .external_lex_state = 1},
  [53] = {.lex_state = 1461, .external_lex_state = 1},
  [54] = {.lex_state = 1461, .external_lex_state = 1},
  [55] = {.lex_state = 1461, .external_lex_state = 1},
  [56] = {.lex_state = 1461, .external_lex_state = 1},
  [57] = {.lex_state = 1461, .external_lex_state = 1},
  [58] = {.lex_state = 1461, .external_lex_state = 1},
  [59] = {.lex_state = 1461, .external_lex_state = 1},
  [60] = {.lex_state = 1464, .external_lex_state = 1},
  [61] = {.lex_state = 1464, .external_lex_state = 1},
  [62] = {.lex_state = 785, .external_lex_state = 1},
  [63] = {.lex_state = 1464, .external_lex_state = 1},
  [64] = {.lex_state = 1461, .external_lex_state = 1},
  [65] = {.lex_state = 1461, .external_lex_state = 1},
  [66] = {.lex_state = 778, .external_lex_state = 1},
  [67] = {.lex_state = 778, .external_lex_state = 1},
  [68] = {.lex_state = 1464, .external_lex_state = 1},
  [69] = {.lex_state = 1464, .external_lex_state = 1},
  [70] = {.lex_state = 1464, .external_lex_state = 1},
  [71] = {.lex_state = 1464, .external_lex_state = 1},
  [72] = {.lex_state = 1464, .external_lex_state = 1},
  [73] = {.lex_state = 1464, .external_lex_state = 1},
  [74] = {.lex_state = 778, .external_lex_state = 1},
  [75] = {.lex_state = 1464, .external_lex_state = 1},
  [76] = {.lex_state = 1464, .external_lex_state = 1},
  [77] = {.lex_state = 778, .external_lex_state = 1},
  [78] = {.lex_state = 1464, .external_lex_state = 1},
  [79] = {.lex_state = 1464, .external_lex_state = 1},
  [80] = {.lex_state = 1464, .external_lex_state = 1},
  [81] = {.lex_state = 1464, .external_lex_state = 1},
  [82] = {.lex_state = 1464, .external_lex_state = 1},
  [83] = {.lex_state = 1464, .external_lex_state = 1},
  [84] = {.lex_state = 1464, .external_lex_state = 1},
  [85] = {.lex_state = 1464, .external_lex_state = 1},
  [86] = {.lex_state = 1464, .external_lex_state = 1},
  [87] = {.lex_state = 1464, .external_lex_state = 1},
  [88] = {.lex_state = 1464, .external_lex_state = 1},
  [89] = {.lex_state = 1464, .external_lex_state = 1},
  [90] = {.lex_state = 1464, .external_lex_state = 1},
  [91] = {.lex_state = 1464, .external_lex_state = 1},
  [92] = {.lex_state = 1464, .external_lex_state = 1},
  [93] = {.lex_state = 1464, .external_lex_state = 1},
  [94] = {.lex_state = 1464, .external_lex_state = 1},
  [95] = {.lex_state = 1464, .external_lex_state = 1},
  [96] = {.lex_state = 1464, .external_lex_state = 1},
  [97] = {.lex_state = 1464, .external_lex_state = 1},
  [98] = {.lex_state = 813},
  [99] = {.lex_state = 1461, .external_lex_state = 1},
  [100] = {.lex_state = 1461, .external_lex_state = 1},
  [101] = {.lex_state = 1461, .external_lex_state = 1},
  [102] = {.lex_state = 1461, .external_lex_state = 1},
  [103] = {.lex_state = 1461, .external_lex_state = 1},
  [104] = {.lex_state = 1461, .external_lex_state = 1},
  [105] = {.lex_state = 1461, .external_lex_state = 1},
  [106] = {.lex_state = 1461, .external_lex_state = 1},
  [107] = {.lex_state = 1461, .external_lex_state = 1},
  [108] = {.lex_state = 1461, .external_lex_state = 1},
  [109] = {.lex_state = 1461, .external_lex_state = 1},
  [110] = {.lex_state = 1461, .external_lex_state = 1},
  [111] = {.lex_state = 1461, .external_lex_state = 1},
  [112] = {.lex_state = 1461, .external_lex_state = 1},
  [113] = {.lex_state = 813},
  [114] = {.lex_state = 813},
  [115] = {.lex_state = 813},
  [116] = {.lex_state = 813},
  [117] = {.lex_state = 1464, .external_lex_state = 1},
  [118] = {.lex_state = 1464, .external_lex_state = 1},
  [119] = {.lex_state = 1464, .external_lex_state = 1},
  [120] = {.lex_state = 1464, .external_lex_state = 1},
  [121] = {.lex_state = 1464, .external_lex_state = 1},
  [122] = {.lex_state = 1464, .external_lex_state = 1},
  [123] = {.lex_state = 1464, .external_lex_state = 1},
  [124] = {.lex_state = 1464, .external_lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1161},
  [127] = {.lex_state = 796},
  [128] = {.lex_state = 1161},
  [129] = {.lex_state = 1161},
  [130] = {.lex_state = 1161},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 796},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 796},
  [136] = {.lex_state = 813},
  [137] = {.lex_state = 795},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 796},
  [151] = {.lex_state = 1161},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1161},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1475},
  [162] = {.lex_state = 1475},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 813},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1494},
  [168] = {.lex_state = 1161},
  [169] = {.lex_state = 787},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1475},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 813},
  [175] = {.lex_state = 1475},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 813},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1161},
  [181] = {.lex_state = 813},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1475},
  [186] = {.lex_state = 1161},
  [187] = {.lex_state = 1475},
  [188] = {.lex_state = 1161},
  [189] = {.lex_state = 1494},
  [190] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_tagpair_delimiter_open] = ACTIONS(1),
    [sym_tagpair_delimiter_close] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_variation_delimiter_open] = ACTIONS(1),
    [sym_variation_delimiter_close] = ACTIONS(1),
    [sym_inline_comment_delimiter_open] = ACTIONS(1),
    [sym_inline_comment_delimiter_close] = ACTIONS(1),
    [sym__san_file] = ACTIONS(1),
    [sym__san_rank] = ACTIONS(1),
    [sym__san_promotable_piece] = ACTIONS(1),
    [sym__san_major_or_minor_piece] = ACTIONS(1),
    [sym__san_capture_symbol] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_u2659] = ACTIONS(1),
    [anon_sym_u265fufe0e] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__lan_move_by_coordinates_token1] = ACTIONS(1),
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_result_code_token1] = ACTIONS(1),
    [anon_sym_u2212] = ACTIONS(1),
    [aux_sym_result_code_token2] = ACTIONS(1),
    [anon_sym_u2010] = ACTIONS(1),
    [aux_sym_result_code_token3] = ACTIONS(1),
    [anon_sym_u2011] = ACTIONS(1),
    [aux_sym_result_code_token4] = ACTIONS(1),
    [anon_sym_u2012] = ACTIONS(1),
    [aux_sym_result_code_token5] = ACTIONS(1),
    [anon_sym_u2013] = ACTIONS(1),
    [aux_sym_result_code_token6] = ACTIONS(1),
    [anon_sym_u2014] = ACTIONS(1),
    [aux_sym_result_code_token7] = ACTIONS(1),
    [anon_sym_u2796] = ACTIONS(1),
    [aux_sym_result_code_token8] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_result_code_token9] = ACTIONS(1),
    [anon_sym_u2215] = ACTIONS(1),
    [aux_sym_result_code_token10] = ACTIONS(1),
    [anon_sym_u2044] = ACTIONS(1),
    [aux_sym_result_code_token11] = ACTIONS(1),
    [anon_sym_u27cb] = ACTIONS(1),
    [aux_sym_result_code_token12] = ACTIONS(1),
    [anon_sym_u29f8] = ACTIONS(1),
    [aux_sym_result_code_token13] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_u00bd] = ACTIONS(1),
    [aux_sym_result_code_token14] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_result_code_token15] = ACTIONS(1),
    [anon_sym_u2217] = ACTIONS(1),
    [aux_sym_result_code_token16] = ACTIONS(1),
    [anon_sym_u2731] = ACTIONS(1),
    [aux_sym_result_code_token17] = ACTIONS(1),
    [anon_sym_u204e] = ACTIONS(1),
    [aux_sym_result_code_token18] = ACTIONS(1),
    [anon_sym_u066d] = ACTIONS(1),
    [aux_sym_result_code_token19] = ACTIONS(1),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(163),
    [sym_game] = STATE(105),
    [sym_freestanding_comment] = STATE(24),
    [sym_rest_of_line_comment_delimiter_open] = STATE(162),
    [sym_rest_of_line_comment] = STATE(57),
    [sym_header] = STATE(3),
    [sym_tagpair] = STATE(20),
    [sym_movetext] = STATE(113),
    [sym__movetext_element] = STATE(91),
    [sym_variation] = STATE(91),
    [sym_inline_comment] = STATE(90),
    [sym_san_move] = STATE(96),
    [sym__san_move_piece] = STATE(79),
    [sym_lan_move] = STATE(95),
    [sym__san_square] = STATE(13),
    [sym__san_move_pawn] = STATE(79),
    [sym__san_drop_pawn] = STATE(79),
    [sym__san_move_major_or_minor_piece] = STATE(79),
    [sym__san_drop_major_or_minor_piece] = STATE(79),
    [sym__lan_move_by_coordinates] = STATE(76),
    [aux_sym_series_of_games_repeat1] = STATE(9),
    [aux_sym_freestanding_comment_repeat1] = STATE(100),
    [aux_sym_movetext_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [sym_tagpair_delimiter_open] = ACTIONS(9),
    [sym_variation_delimiter_open] = ACTIONS(11),
    [sym_inline_comment_delimiter_open] = ACTIONS(13),
    [sym_move_number] = ACTIONS(15),
    [sym__san_file] = ACTIONS(17),
    [sym__san_major_or_minor_piece] = ACTIONS(19),
    [anon_sym_P] = ACTIONS(21),
    [anon_sym_u2659] = ACTIONS(21),
    [anon_sym_u265fufe0e] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [sym__san_move_castle] = ACTIONS(25),
    [sym__san_null_move] = ACTIONS(25),
    [sym_annotation] = ACTIONS(27),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      sym_variation_delimiter_open,
    ACTIONS(41), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(44), 1,
      sym_move_number,
    ACTIONS(47), 1,
      sym__san_file,
    ACTIONS(50), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_annotation,
    ACTIONS(65), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(35), 1,
      sym__lan_move_by_coordinates,
    STATE(51), 1,
      sym_lan_move,
    STATE(52), 1,
      sym_san_move,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(59), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(53), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(54), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(53), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(36), 17,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [93] = 27,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(68), 1,
      sym__empty_line,
    ACTIONS(70), 1,
      sym_variation_delimiter_open,
    ACTIONS(72), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_annotation,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(35), 1,
      sym__lan_move_by_coordinates,
    STATE(42), 1,
      sym_movetext,
    STATE(51), 1,
      sym_lan_move,
    STATE(52), 1,
      sym_san_move,
    STATE(111), 1,
      sym_result_code,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(84), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(53), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(54), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(80), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(94), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [196] = 22,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(70), 1,
      sym_variation_delimiter_open,
    ACTIONS(72), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(35), 1,
      sym__lan_move_by_coordinates,
    STATE(51), 1,
      sym_lan_move,
    STATE(52), 1,
      sym_san_move,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(84), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    STATE(53), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(54), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(80), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(98), 17,
      sym_tagpair_delimiter_open,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [289] = 27,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(80), 1,
      anon_sym_P,
    ACTIONS(86), 1,
      sym_annotation,
    ACTIONS(88), 1,
      anon_sym_1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_variation_delimiter_open,
    ACTIONS(104), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(106), 1,
      sym_move_number,
    ACTIONS(110), 1,
      anon_sym_AT,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(29), 1,
      sym_movetext,
    STATE(35), 1,
      sym__lan_move_by_coordinates,
    STATE(51), 1,
      sym_lan_move,
    STATE(52), 1,
      sym_san_move,
    STATE(112), 1,
      sym_result_code,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(108), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(112), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(114), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(53), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(54), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(25), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(116), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [391] = 23,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      sym_variation_delimiter_open,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(122), 1,
      sym_move_number,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(90), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(98), 4,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(96), 12,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [483] = 23,
    ACTIONS(65), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(136), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(139), 1,
      sym_move_number,
    ACTIONS(142), 1,
      sym__san_file,
    ACTIONS(145), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(148), 1,
      anon_sym_P,
    ACTIONS(154), 1,
      anon_sym_AT,
    ACTIONS(160), 1,
      sym_annotation,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(157), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(90), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(36), 4,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(31), 12,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [575] = 7,
    ACTIONS(167), 1,
      sym__san_promotable_piece,
    ACTIONS(171), 1,
      anon_sym_EQ,
    STATE(27), 1,
      sym__san_promotion,
    STATE(182), 1,
      sym__san_promotion_symbol,
    ACTIONS(169), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(163), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(165), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [630] = 31,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(11), 1,
      sym_variation_delimiter_open,
    ACTIONS(13), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(15), 1,
      sym_move_number,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      aux_sym_series_of_games_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(23), 1,
      sym_freestanding_comment,
    STATE(57), 1,
      sym_rest_of_line_comment,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_inline_comment,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(100), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(105), 1,
      sym_game,
    STATE(113), 1,
      sym_movetext,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [732] = 31,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(183), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(186), 1,
      sym_variation_delimiter_open,
    ACTIONS(189), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(192), 1,
      sym_move_number,
    ACTIONS(195), 1,
      sym__san_file,
    ACTIONS(198), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(204), 1,
      anon_sym_AT,
    ACTIONS(210), 1,
      sym_annotation,
    ACTIONS(213), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(3), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      aux_sym_series_of_games_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(32), 1,
      sym_freestanding_comment,
    STATE(65), 1,
      sym_rest_of_line_comment,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(90), 1,
      sym_inline_comment,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(101), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(105), 1,
      sym_game,
    STATE(113), 1,
      sym_movetext,
    STATE(187), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(207), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(201), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [834] = 6,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(220), 1,
      sym__san_promotable_piece,
    STATE(43), 1,
      sym__san_promotion,
    STATE(182), 1,
      sym__san_promotion_symbol,
    ACTIONS(216), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(218), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [885] = 2,
    ACTIONS(222), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(224), 35,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_capture_symbol,
      anon_sym_EQ,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      aux_sym__lan_move_by_coordinates_token1,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [928] = 8,
    ACTIONS(226), 1,
      sym__san_promotable_piece,
    ACTIONS(228), 1,
      sym__san_capture_symbol,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(232), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(72), 1,
      sym__san_promotion,
    STATE(170), 1,
      sym__san_promotion_symbol,
    ACTIONS(165), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(163), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [983] = 6,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      sym__san_promotable_piece,
    STATE(36), 1,
      sym__san_promotion,
    STATE(182), 1,
      sym__san_promotion_symbol,
    ACTIONS(234), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(236), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1034] = 2,
    ACTIONS(222), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(224), 33,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1075] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(240), 1,
      sym__empty_line,
    STATE(18), 1,
      aux_sym_header_repeat1,
    STATE(66), 1,
      sym_rest_of_line_comment,
    STATE(67), 1,
      sym_tagpair,
    STATE(185), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(242), 28,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1130] = 6,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(244), 1,
      sym__san_promotable_piece,
    STATE(70), 1,
      sym__san_promotion,
    STATE(170), 1,
      sym__san_promotion_symbol,
    ACTIONS(218), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(216), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1179] = 9,
    ACTIONS(246), 1,
      sym__empty_line,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(257), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(18), 1,
      aux_sym_header_repeat1,
    STATE(66), 1,
      sym_rest_of_line_comment,
    STATE(67), 1,
      sym_tagpair,
    STATE(185), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(255), 28,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1234] = 2,
    ACTIONS(224), 12,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(222), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1275] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(260), 1,
      sym__empty_line,
    STATE(16), 1,
      aux_sym_header_repeat1,
    STATE(66), 1,
      sym_rest_of_line_comment,
    STATE(67), 1,
      sym_tagpair,
    STATE(185), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(262), 28,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1330] = 6,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      sym__san_promotable_piece,
    STATE(73), 1,
      sym__san_promotion,
    STATE(170), 1,
      sym__san_promotion_symbol,
    ACTIONS(236), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(234), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1379] = 4,
    ACTIONS(266), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
    ACTIONS(222), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(224), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1424] = 27,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      sym_variation_delimiter_open,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(122), 1,
      sym_move_number,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      sym_tagpair_delimiter_open,
    STATE(3), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(106), 1,
      sym_game,
    STATE(113), 1,
      sym_movetext,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(90), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1514] = 27,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      sym_variation_delimiter_open,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(122), 1,
      sym_move_number,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(270), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(106), 1,
      sym_game,
    STATE(113), 1,
      sym_movetext,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(90), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1604] = 3,
    ACTIONS(278), 1,
      sym_check_or_mate_condition,
    ACTIONS(274), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(276), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1645] = 2,
    ACTIONS(280), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(282), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1684] = 2,
    ACTIONS(284), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(286), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1723] = 4,
    ACTIONS(288), 1,
      sym__san_capture_symbol,
    STATE(71), 1,
      sym__san_square,
    ACTIONS(224), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(222), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1766] = 7,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(103), 1,
      sym_result_code,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(290), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(94), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
    ACTIONS(292), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1815] = 2,
    ACTIONS(224), 11,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(222), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1854] = 2,
    ACTIONS(294), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(296), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [1893] = 26,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      sym_variation_delimiter_open,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(122), 1,
      sym_move_number,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(270), 1,
      sym_tagpair_delimiter_open,
    STATE(3), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(95), 1,
      sym_lan_move,
    STATE(96), 1,
      sym_san_move,
    STATE(106), 1,
      sym_game,
    STATE(113), 1,
      sym_movetext,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(90), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(91), 2,
      sym__movetext_element,
      sym_variation,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1980] = 2,
    ACTIONS(298), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(300), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2019] = 2,
    ACTIONS(302), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(304), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2058] = 3,
    ACTIONS(310), 1,
      sym_check_or_mate_condition,
    ACTIONS(306), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(308), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2099] = 2,
    ACTIONS(312), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(314), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2138] = 2,
    ACTIONS(316), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(318), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2177] = 2,
    ACTIONS(320), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(322), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2216] = 3,
    ACTIONS(328), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(324), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(326), 31,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2257] = 2,
    ACTIONS(222), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(224), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2296] = 2,
    ACTIONS(330), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(332), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2335] = 7,
    ACTIONS(88), 1,
      anon_sym_1,
    STATE(110), 1,
      sym_result_code,
    ACTIONS(92), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(90), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(334), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(94), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
    ACTIONS(336), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [2384] = 2,
    ACTIONS(338), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(340), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2423] = 2,
    ACTIONS(342), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(344), 31,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2462] = 3,
    ACTIONS(324), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(346), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(326), 31,
      sym__empty_line,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2502] = 2,
    ACTIONS(348), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(350), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2540] = 2,
    ACTIONS(352), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(354), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2578] = 2,
    ACTIONS(356), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(358), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2616] = 2,
    ACTIONS(360), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(362), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2654] = 3,
    ACTIONS(324), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(364), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(326), 31,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2694] = 2,
    ACTIONS(366), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(368), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2732] = 2,
    ACTIONS(370), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(372), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2770] = 2,
    ACTIONS(374), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(376), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2808] = 2,
    ACTIONS(378), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(380), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2846] = 2,
    ACTIONS(382), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(384), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2884] = 2,
    ACTIONS(386), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2922] = 5,
    ACTIONS(395), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(397), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(392), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(376), 16,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [2966] = 2,
    ACTIONS(400), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(402), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3004] = 2,
    ACTIONS(404), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(406), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3042] = 2,
    ACTIONS(296), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(294), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3079] = 2,
    ACTIONS(332), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(330), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3116] = 3,
    ACTIONS(324), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(408), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(326), 30,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3155] = 2,
    ACTIONS(224), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(222), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3192] = 2,
    ACTIONS(400), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(402), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3229] = 5,
    ACTIONS(390), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(395), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(397), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(392), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(376), 16,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3272] = 2,
    ACTIONS(410), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(412), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3309] = 2,
    ACTIONS(414), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(416), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3346] = 2,
    ACTIONS(344), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(342), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3383] = 2,
    ACTIONS(322), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(320), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3420] = 2,
    ACTIONS(340), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(338), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3457] = 2,
    ACTIONS(304), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(302), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3494] = 2,
    ACTIONS(286), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(284), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3531] = 2,
    ACTIONS(314), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(312), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3568] = 2,
    ACTIONS(418), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(420), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3605] = 2,
    ACTIONS(318), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(316), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3642] = 3,
    ACTIONS(422), 1,
      sym_check_or_mate_condition,
    ACTIONS(308), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(306), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3681] = 2,
    ACTIONS(400), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(402), 30,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3718] = 2,
    ACTIONS(300), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(298), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3755] = 3,
    ACTIONS(424), 1,
      sym_check_or_mate_condition,
    ACTIONS(276), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(274), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3794] = 2,
    ACTIONS(282), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(280), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3831] = 23,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(428), 1,
      sym_variation_delimiter_close,
    ACTIONS(430), 1,
      sym_move_number,
    ACTIONS(432), 1,
      sym_annotation,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(118), 1,
      sym_san_move,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(176), 1,
      sym_variation_movetext,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(122), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3909] = 2,
    ACTIONS(406), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(404), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [3945] = 23,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(430), 1,
      sym_move_number,
    ACTIONS(432), 1,
      sym_annotation,
    ACTIONS(434), 1,
      sym_variation_delimiter_close,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(118), 1,
      sym_san_move,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(172), 1,
      sym_variation_movetext,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(122), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4023] = 23,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(430), 1,
      sym_move_number,
    ACTIONS(432), 1,
      sym_annotation,
    ACTIONS(436), 1,
      sym_variation_delimiter_close,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(92), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(118), 1,
      sym_san_move,
    STATE(159), 1,
      sym_variation_movetext,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(122), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4101] = 2,
    ACTIONS(402), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(400), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4137] = 2,
    ACTIONS(358), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(356), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4173] = 2,
    ACTIONS(354), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(352), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4209] = 2,
    ACTIONS(350), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(348), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4244] = 22,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      sym_variation_delimiter_open,
    ACTIONS(444), 1,
      sym_variation_delimiter_close,
    ACTIONS(446), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(449), 1,
      sym_move_number,
    ACTIONS(452), 1,
      sym__san_file,
    ACTIONS(455), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(458), 1,
      anon_sym_P,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      sym_annotation,
    ACTIONS(473), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(89), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(118), 1,
      sym_san_move,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(461), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(467), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(122), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4319] = 2,
    ACTIONS(376), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(374), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4354] = 2,
    ACTIONS(380), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(378), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4389] = 22,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(430), 1,
      sym_move_number,
    ACTIONS(432), 1,
      sym_annotation,
    ACTIONS(476), 1,
      sym_variation_delimiter_close,
    STATE(13), 1,
      sym__san_square,
    STATE(76), 1,
      sym__lan_move_by_coordinates,
    STATE(89), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(118), 1,
      sym_san_move,
    STATE(171), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(124), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(128), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(122), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(79), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4464] = 2,
    ACTIONS(362), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(360), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4499] = 2,
    ACTIONS(384), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(382), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4534] = 2,
    ACTIONS(368), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(366), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4569] = 2,
    ACTIONS(372), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(370), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4604] = 2,
    ACTIONS(388), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(386), 22,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [4639] = 2,
    ACTIONS(480), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_u2215,
      aux_sym_result_code_token10,
      anon_sym_u2044,
      aux_sym_result_code_token11,
      anon_sym_u27cb,
      aux_sym_result_code_token12,
      anon_sym_u29f8,
      aux_sym_result_code_token13,
    ACTIONS(478), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [4670] = 7,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(487), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(492), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(99), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(490), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4705] = 7,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 1,
      sym_old_style_twic_section_comment,
    STATE(162), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(99), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(499), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4740] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(501), 1,
      sym_old_style_twic_section_comment,
    STATE(187), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(102), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(499), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4772] = 6,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(492), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(503), 1,
      sym_old_style_twic_section_comment,
    STATE(187), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(102), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(490), 13,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4804] = 2,
    ACTIONS(506), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(508), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4826] = 2,
    ACTIONS(510), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(512), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4848] = 2,
    ACTIONS(514), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(516), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4870] = 2,
    ACTIONS(518), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(520), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4892] = 2,
    ACTIONS(522), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(524), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4914] = 2,
    ACTIONS(526), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(528), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4936] = 2,
    ACTIONS(530), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(532), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4958] = 2,
    ACTIONS(534), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(536), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [4980] = 2,
    ACTIONS(538), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(540), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [5002] = 2,
    ACTIONS(542), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(544), 14,
      anon_sym_SEMI,
      sym_tagpair_delimiter_open,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [5024] = 5,
    ACTIONS(546), 1,
      anon_sym_1,
    STATE(109), 1,
      sym_result_code,
    ACTIONS(114), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(548), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(116), 10,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
  [5052] = 1,
    ACTIONS(550), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [5071] = 1,
    ACTIONS(552), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [5090] = 1,
    ACTIONS(554), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [5109] = 2,
    ACTIONS(558), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(556), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5129] = 2,
    ACTIONS(562), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(560), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5149] = 2,
    ACTIONS(566), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(564), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5169] = 2,
    ACTIONS(570), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(568), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5189] = 2,
    ACTIONS(574), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(572), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5209] = 2,
    ACTIONS(578), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(576), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5229] = 2,
    ACTIONS(582), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(580), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5249] = 2,
    ACTIONS(586), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(584), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5269] = 1,
    ACTIONS(588), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_u2215,
      aux_sym_result_code_token10,
      anon_sym_u2044,
      aux_sym_result_code_token11,
      anon_sym_u27cb,
      aux_sym_result_code_token12,
      anon_sym_u29f8,
      aux_sym_result_code_token13,
  [5282] = 5,
    ACTIONS(590), 1,
      sym__san_file,
    ACTIONS(592), 1,
      sym__san_rank,
    ACTIONS(594), 1,
      sym__san_capture_symbol,
    ACTIONS(596), 1,
      anon_sym_AT,
    STATE(61), 1,
      sym__san_square,
  [5298] = 5,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(132), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(139), 1,
      sym_tagpair_value_contents,
    STATE(184), 1,
      sym_double_quote,
  [5314] = 5,
    ACTIONS(602), 1,
      sym__san_file,
    ACTIONS(604), 1,
      sym__san_rank,
    ACTIONS(606), 1,
      sym__san_capture_symbol,
    ACTIONS(608), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__san_square,
  [5330] = 4,
    ACTIONS(610), 1,
      sym__san_file,
    ACTIONS(612), 1,
      sym__san_rank,
    ACTIONS(614), 1,
      sym__san_capture_symbol,
    STATE(80), 1,
      sym__san_square,
  [5343] = 4,
    ACTIONS(616), 1,
      sym__san_file,
    ACTIONS(618), 1,
      sym__san_rank,
    ACTIONS(620), 1,
      sym__san_capture_symbol,
    STATE(26), 1,
      sym__san_square,
  [5356] = 3,
    ACTIONS(610), 1,
      sym__san_file,
    ACTIONS(614), 1,
      sym__san_capture_symbol,
    STATE(80), 1,
      sym__san_square,
  [5366] = 3,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(135), 1,
      aux_sym_tagpair_value_contents_repeat1,
  [5376] = 3,
    ACTIONS(616), 1,
      sym__san_file,
    ACTIONS(620), 1,
      sym__san_capture_symbol,
    STATE(26), 1,
      sym__san_square,
  [5386] = 3,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_double_quote,
    STATE(160), 1,
      sym__tagpair_value,
  [5396] = 3,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(135), 1,
      aux_sym_tagpair_value_contents_repeat1,
  [5406] = 1,
    ACTIONS(635), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [5412] = 2,
    ACTIONS(637), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(639), 2,
      anon_sym_DQUOTE,
      aux_sym_tagpair_value_contents_token1,
  [5420] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(31), 1,
      sym__san_square,
  [5427] = 2,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_double_quote,
  [5434] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(38), 1,
      sym__san_square,
  [5441] = 2,
    ACTIONS(643), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_square,
  [5448] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(34), 1,
      sym__san_square,
  [5455] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(33), 1,
      sym__san_square,
  [5462] = 2,
    ACTIONS(610), 1,
      sym__san_file,
    STATE(69), 1,
      sym__san_square,
  [5469] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(26), 1,
      sym__san_square,
  [5476] = 1,
    ACTIONS(635), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [5481] = 2,
    ACTIONS(610), 1,
      sym__san_file,
    STATE(71), 1,
      sym__san_square,
  [5488] = 2,
    ACTIONS(643), 1,
      sym__san_file,
    STATE(14), 1,
      sym__san_square,
  [5495] = 2,
    ACTIONS(616), 1,
      sym__san_file,
    STATE(44), 1,
      sym__san_square,
  [5502] = 2,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      aux_sym_tagpair_value_contents_token1,
  [5509] = 2,
    ACTIONS(647), 1,
      sym__san_rank,
    ACTIONS(649), 1,
      sym__san_capture_symbol,
  [5516] = 2,
    ACTIONS(651), 1,
      sym__san_file,
    STATE(17), 1,
      sym__san_square,
  [5523] = 2,
    ACTIONS(653), 1,
      sym__san_rank,
    ACTIONS(655), 1,
      sym__san_capture_symbol,
  [5530] = 2,
    ACTIONS(610), 1,
      sym__san_file,
    STATE(78), 1,
      sym__san_square,
  [5537] = 2,
    ACTIONS(610), 1,
      sym__san_file,
    STATE(60), 1,
      sym__san_square,
  [5544] = 2,
    ACTIONS(610), 1,
      sym__san_file,
    STATE(80), 1,
      sym__san_square,
  [5551] = 2,
    ACTIONS(651), 1,
      sym__san_file,
    STATE(21), 1,
      sym__san_square,
  [5558] = 2,
    ACTIONS(610), 1,
      sym__san_file,
    STATE(68), 1,
      sym__san_square,
  [5565] = 1,
    ACTIONS(657), 1,
      sym_variation_delimiter_close,
  [5569] = 1,
    ACTIONS(659), 1,
      sym_tagpair_delimiter_close,
  [5573] = 1,
    ACTIONS(661), 1,
      sym_rest_of_line_comment_text,
  [5577] = 1,
    ACTIONS(663), 1,
      sym_rest_of_line_comment_text,
  [5581] = 1,
    ACTIONS(665), 1,
      ts_builtin_sym_end,
  [5585] = 1,
    ACTIONS(667), 1,
      anon_sym_2,
  [5589] = 1,
    ACTIONS(669), 1,
      anon_sym_AT,
  [5593] = 1,
    ACTIONS(671), 1,
      sym_inline_comment_delimiter_close,
  [5597] = 1,
    ACTIONS(673), 1,
      sym_inline_comment_text,
  [5601] = 1,
    ACTIONS(675), 1,
      sym__san_rank,
  [5605] = 1,
    ACTIONS(677), 1,
      sym_tagpair_key,
  [5609] = 1,
    ACTIONS(679), 1,
      sym__san_promotable_piece,
  [5613] = 1,
    ACTIONS(681), 1,
      sym_rest_of_line_comment_text,
  [5617] = 1,
    ACTIONS(683), 1,
      sym_variation_delimiter_close,
  [5621] = 1,
    ACTIONS(685), 1,
      sym_inline_comment_delimiter_close,
  [5625] = 1,
    ACTIONS(635), 1,
      anon_sym_1,
  [5629] = 1,
    ACTIONS(687), 1,
      sym_rest_of_line_comment_text,
  [5633] = 1,
    ACTIONS(689), 1,
      sym_variation_delimiter_close,
  [5637] = 1,
    ACTIONS(691), 1,
      anon_sym_PERCENT,
  [5641] = 1,
    ACTIONS(693), 1,
      anon_sym_1,
  [5645] = 1,
    ACTIONS(645), 1,
      sym_tagpair_delimiter_close,
  [5649] = 1,
    ACTIONS(695), 1,
      sym__san_rank,
  [5653] = 1,
    ACTIONS(697), 1,
      anon_sym_2,
  [5657] = 1,
    ACTIONS(699), 1,
      sym__san_promotable_piece,
  [5661] = 1,
    ACTIONS(701), 1,
      sym_tagpair_delimiter_close,
  [5665] = 1,
    ACTIONS(703), 1,
      sym_tagpair_delimiter_close,
  [5669] = 1,
    ACTIONS(705), 1,
      sym_rest_of_line_comment_text,
  [5673] = 1,
    ACTIONS(707), 1,
      sym__san_rank,
  [5677] = 1,
    ACTIONS(709), 1,
      sym_rest_of_line_comment_text,
  [5681] = 1,
    ACTIONS(711), 1,
      sym__san_rank,
  [5685] = 1,
    ACTIONS(713), 1,
      sym_inline_comment_text,
  [5689] = 1,
    ACTIONS(715), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 289,
  [SMALL_STATE(6)] = 391,
  [SMALL_STATE(7)] = 483,
  [SMALL_STATE(8)] = 575,
  [SMALL_STATE(9)] = 630,
  [SMALL_STATE(10)] = 732,
  [SMALL_STATE(11)] = 834,
  [SMALL_STATE(12)] = 885,
  [SMALL_STATE(13)] = 928,
  [SMALL_STATE(14)] = 983,
  [SMALL_STATE(15)] = 1034,
  [SMALL_STATE(16)] = 1075,
  [SMALL_STATE(17)] = 1130,
  [SMALL_STATE(18)] = 1179,
  [SMALL_STATE(19)] = 1234,
  [SMALL_STATE(20)] = 1275,
  [SMALL_STATE(21)] = 1330,
  [SMALL_STATE(22)] = 1379,
  [SMALL_STATE(23)] = 1424,
  [SMALL_STATE(24)] = 1514,
  [SMALL_STATE(25)] = 1604,
  [SMALL_STATE(26)] = 1645,
  [SMALL_STATE(27)] = 1684,
  [SMALL_STATE(28)] = 1723,
  [SMALL_STATE(29)] = 1766,
  [SMALL_STATE(30)] = 1815,
  [SMALL_STATE(31)] = 1854,
  [SMALL_STATE(32)] = 1893,
  [SMALL_STATE(33)] = 1980,
  [SMALL_STATE(34)] = 2019,
  [SMALL_STATE(35)] = 2058,
  [SMALL_STATE(36)] = 2099,
  [SMALL_STATE(37)] = 2138,
  [SMALL_STATE(38)] = 2177,
  [SMALL_STATE(39)] = 2216,
  [SMALL_STATE(40)] = 2257,
  [SMALL_STATE(41)] = 2296,
  [SMALL_STATE(42)] = 2335,
  [SMALL_STATE(43)] = 2384,
  [SMALL_STATE(44)] = 2423,
  [SMALL_STATE(45)] = 2462,
  [SMALL_STATE(46)] = 2502,
  [SMALL_STATE(47)] = 2540,
  [SMALL_STATE(48)] = 2578,
  [SMALL_STATE(49)] = 2616,
  [SMALL_STATE(50)] = 2654,
  [SMALL_STATE(51)] = 2694,
  [SMALL_STATE(52)] = 2732,
  [SMALL_STATE(53)] = 2770,
  [SMALL_STATE(54)] = 2808,
  [SMALL_STATE(55)] = 2846,
  [SMALL_STATE(56)] = 2884,
  [SMALL_STATE(57)] = 2922,
  [SMALL_STATE(58)] = 2966,
  [SMALL_STATE(59)] = 3004,
  [SMALL_STATE(60)] = 3042,
  [SMALL_STATE(61)] = 3079,
  [SMALL_STATE(62)] = 3116,
  [SMALL_STATE(63)] = 3155,
  [SMALL_STATE(64)] = 3192,
  [SMALL_STATE(65)] = 3229,
  [SMALL_STATE(66)] = 3272,
  [SMALL_STATE(67)] = 3309,
  [SMALL_STATE(68)] = 3346,
  [SMALL_STATE(69)] = 3383,
  [SMALL_STATE(70)] = 3420,
  [SMALL_STATE(71)] = 3457,
  [SMALL_STATE(72)] = 3494,
  [SMALL_STATE(73)] = 3531,
  [SMALL_STATE(74)] = 3568,
  [SMALL_STATE(75)] = 3605,
  [SMALL_STATE(76)] = 3642,
  [SMALL_STATE(77)] = 3681,
  [SMALL_STATE(78)] = 3718,
  [SMALL_STATE(79)] = 3755,
  [SMALL_STATE(80)] = 3794,
  [SMALL_STATE(81)] = 3831,
  [SMALL_STATE(82)] = 3909,
  [SMALL_STATE(83)] = 3945,
  [SMALL_STATE(84)] = 4023,
  [SMALL_STATE(85)] = 4101,
  [SMALL_STATE(86)] = 4137,
  [SMALL_STATE(87)] = 4173,
  [SMALL_STATE(88)] = 4209,
  [SMALL_STATE(89)] = 4244,
  [SMALL_STATE(90)] = 4319,
  [SMALL_STATE(91)] = 4354,
  [SMALL_STATE(92)] = 4389,
  [SMALL_STATE(93)] = 4464,
  [SMALL_STATE(94)] = 4499,
  [SMALL_STATE(95)] = 4534,
  [SMALL_STATE(96)] = 4569,
  [SMALL_STATE(97)] = 4604,
  [SMALL_STATE(98)] = 4639,
  [SMALL_STATE(99)] = 4670,
  [SMALL_STATE(100)] = 4705,
  [SMALL_STATE(101)] = 4740,
  [SMALL_STATE(102)] = 4772,
  [SMALL_STATE(103)] = 4804,
  [SMALL_STATE(104)] = 4826,
  [SMALL_STATE(105)] = 4848,
  [SMALL_STATE(106)] = 4870,
  [SMALL_STATE(107)] = 4892,
  [SMALL_STATE(108)] = 4914,
  [SMALL_STATE(109)] = 4936,
  [SMALL_STATE(110)] = 4958,
  [SMALL_STATE(111)] = 4980,
  [SMALL_STATE(112)] = 5002,
  [SMALL_STATE(113)] = 5024,
  [SMALL_STATE(114)] = 5052,
  [SMALL_STATE(115)] = 5071,
  [SMALL_STATE(116)] = 5090,
  [SMALL_STATE(117)] = 5109,
  [SMALL_STATE(118)] = 5129,
  [SMALL_STATE(119)] = 5149,
  [SMALL_STATE(120)] = 5169,
  [SMALL_STATE(121)] = 5189,
  [SMALL_STATE(122)] = 5209,
  [SMALL_STATE(123)] = 5229,
  [SMALL_STATE(124)] = 5249,
  [SMALL_STATE(125)] = 5269,
  [SMALL_STATE(126)] = 5282,
  [SMALL_STATE(127)] = 5298,
  [SMALL_STATE(128)] = 5314,
  [SMALL_STATE(129)] = 5330,
  [SMALL_STATE(130)] = 5343,
  [SMALL_STATE(131)] = 5356,
  [SMALL_STATE(132)] = 5366,
  [SMALL_STATE(133)] = 5376,
  [SMALL_STATE(134)] = 5386,
  [SMALL_STATE(135)] = 5396,
  [SMALL_STATE(136)] = 5406,
  [SMALL_STATE(137)] = 5412,
  [SMALL_STATE(138)] = 5420,
  [SMALL_STATE(139)] = 5427,
  [SMALL_STATE(140)] = 5434,
  [SMALL_STATE(141)] = 5441,
  [SMALL_STATE(142)] = 5448,
  [SMALL_STATE(143)] = 5455,
  [SMALL_STATE(144)] = 5462,
  [SMALL_STATE(145)] = 5469,
  [SMALL_STATE(146)] = 5476,
  [SMALL_STATE(147)] = 5481,
  [SMALL_STATE(148)] = 5488,
  [SMALL_STATE(149)] = 5495,
  [SMALL_STATE(150)] = 5502,
  [SMALL_STATE(151)] = 5509,
  [SMALL_STATE(152)] = 5516,
  [SMALL_STATE(153)] = 5523,
  [SMALL_STATE(154)] = 5530,
  [SMALL_STATE(155)] = 5537,
  [SMALL_STATE(156)] = 5544,
  [SMALL_STATE(157)] = 5551,
  [SMALL_STATE(158)] = 5558,
  [SMALL_STATE(159)] = 5565,
  [SMALL_STATE(160)] = 5569,
  [SMALL_STATE(161)] = 5573,
  [SMALL_STATE(162)] = 5577,
  [SMALL_STATE(163)] = 5581,
  [SMALL_STATE(164)] = 5585,
  [SMALL_STATE(165)] = 5589,
  [SMALL_STATE(166)] = 5593,
  [SMALL_STATE(167)] = 5597,
  [SMALL_STATE(168)] = 5601,
  [SMALL_STATE(169)] = 5605,
  [SMALL_STATE(170)] = 5609,
  [SMALL_STATE(171)] = 5613,
  [SMALL_STATE(172)] = 5617,
  [SMALL_STATE(173)] = 5621,
  [SMALL_STATE(174)] = 5625,
  [SMALL_STATE(175)] = 5629,
  [SMALL_STATE(176)] = 5633,
  [SMALL_STATE(177)] = 5637,
  [SMALL_STATE(178)] = 5641,
  [SMALL_STATE(179)] = 5645,
  [SMALL_STATE(180)] = 5649,
  [SMALL_STATE(181)] = 5653,
  [SMALL_STATE(182)] = 5657,
  [SMALL_STATE(183)] = 5661,
  [SMALL_STATE(184)] = 5665,
  [SMALL_STATE(185)] = 5669,
  [SMALL_STATE(186)] = 5673,
  [SMALL_STATE(187)] = 5677,
  [SMALL_STATE(188)] = 5681,
  [SMALL_STATE(189)] = 5685,
  [SMALL_STATE(190)] = 5689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(175),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(83),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(189),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(56),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(151),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(128),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(190),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(149),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(25),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(177),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(175),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(84),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(167),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(97),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(153),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(126),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(165),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(165),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(158),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(79),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(94),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 10),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(175),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(101),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(169),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(84),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(167),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(97),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(153),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(126),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(165),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(158),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(79),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(94),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(177),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 22),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(18),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(175),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(169),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(177),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 24),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 31),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 31),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 19),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 19),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 20),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 20),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 28),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 28),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 11),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 11),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 19),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 19),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 30),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 30),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 36),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 36),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(175),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(81),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(167),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(123),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(153),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(126),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(165),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(165),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(158),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(79),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(124),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(177),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 15),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 38),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 38),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 18),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 18),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 23),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 23),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 33),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 33),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 21),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 21),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 32),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 32),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 27),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 27),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 15),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 15),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 12),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 12),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(135),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [665] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 1, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 39),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 35),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__full_line_comment_delimiter_bol_assertion = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__full_line_comment_delimiter_bol_assertion] = sym__full_line_comment_delimiter_bol_assertion,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__full_line_comment_delimiter_bol_assertion] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pgn_external_scanner_create(void);
void tree_sitter_pgn_external_scanner_destroy(void *);
bool tree_sitter_pgn_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pgn_external_scanner_serialize(void *, char *);
void tree_sitter_pgn_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pgn(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pgn_external_scanner_create,
      tree_sitter_pgn_external_scanner_destroy,
      tree_sitter_pgn_external_scanner_scan,
      tree_sitter_pgn_external_scanner_serialize,
      tree_sitter_pgn_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
