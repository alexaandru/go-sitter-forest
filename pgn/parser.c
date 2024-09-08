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
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
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
  aux_sym_result_code_token20 = 76,
  aux_sym_result_code_token21 = 77,
  aux_sym_result_code_token22 = 78,
  aux_sym_result_code_token23 = 79,
  sym__full_line_comment_delimiter_bol_assertion = 80,
  sym_series_of_games = 81,
  sym_game = 82,
  sym_freestanding_comment = 83,
  sym_rest_of_line_comment_delimiter_open = 84,
  sym_rest_of_line_comment = 85,
  sym_header = 86,
  sym_double_quote = 87,
  sym_tagpair = 88,
  sym__tagpair_value = 89,
  sym_tagpair_value_contents = 90,
  sym_movetext = 91,
  sym_variation_movetext = 92,
  sym__movetext_element = 93,
  sym__variation_movetext_element = 94,
  sym_variation = 95,
  sym_recursive_variation = 96,
  sym_inline_comment = 97,
  sym_san_move = 98,
  sym__san_move_piece = 99,
  sym_lan_move = 100,
  sym__san_promotion_symbol = 101,
  sym__san_square = 102,
  sym__san_promotion = 103,
  sym__san_move_pawn = 104,
  sym__san_drop_pawn = 105,
  sym__san_move_major_or_minor_piece = 106,
  sym__san_drop_major_or_minor_piece = 107,
  sym__lan_move_by_coordinates = 108,
  sym_result_code = 109,
  aux_sym_series_of_games_repeat1 = 110,
  aux_sym_freestanding_comment_repeat1 = 111,
  aux_sym_header_repeat1 = 112,
  aux_sym_tagpair_value_contents_repeat1 = 113,
  aux_sym_movetext_repeat1 = 114,
  aux_sym_variation_movetext_repeat1 = 115,
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
  [aux_sym_result_code_token20] = "result_code_token20",
  [aux_sym_result_code_token21] = "result_code_token21",
  [aux_sym_result_code_token22] = "result_code_token22",
  [aux_sym_result_code_token23] = "result_code_token23",
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
  [aux_sym_result_code_token20] = aux_sym_result_code_token20,
  [aux_sym_result_code_token21] = aux_sym_result_code_token21,
  [aux_sym_result_code_token22] = aux_sym_result_code_token22,
  [aux_sym_result_code_token23] = aux_sym_result_code_token23,
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
  [aux_sym_result_code_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token23] = {
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
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 9,
  [22] = 22,
  [23] = 12,
  [24] = 10,
  [25] = 25,
  [26] = 26,
  [27] = 10,
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
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 10,
  [56] = 56,
  [57] = 57,
  [58] = 18,
  [59] = 59,
  [60] = 43,
  [61] = 43,
  [62] = 62,
  [63] = 52,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 34,
  [68] = 30,
  [69] = 36,
  [70] = 37,
  [71] = 26,
  [72] = 40,
  [73] = 73,
  [74] = 41,
  [75] = 33,
  [76] = 42,
  [77] = 25,
  [78] = 38,
  [79] = 10,
  [80] = 31,
  [81] = 29,
  [82] = 32,
  [83] = 35,
  [84] = 84,
  [85] = 56,
  [86] = 57,
  [87] = 53,
  [88] = 43,
  [89] = 50,
  [90] = 51,
  [91] = 46,
  [92] = 54,
  [93] = 48,
  [94] = 45,
  [95] = 47,
  [96] = 59,
  [97] = 97,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 8,
  [104] = 104,
  [105] = 11,
  [106] = 10,
  [107] = 9,
  [108] = 108,
  [109] = 109,
  [110] = 12,
  [111] = 108,
  [112] = 109,
  [113] = 38,
  [114] = 10,
  [115] = 18,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 43,
  [123] = 123,
  [124] = 38,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 30,
  [129] = 32,
  [130] = 130,
  [131] = 29,
  [132] = 132,
  [133] = 133,
  [134] = 36,
  [135] = 37,
  [136] = 40,
  [137] = 41,
  [138] = 43,
  [139] = 33,
  [140] = 25,
  [141] = 38,
  [142] = 42,
  [143] = 26,
  [144] = 31,
  [145] = 34,
  [146] = 35,
  [147] = 10,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 54,
  [156] = 43,
  [157] = 157,
  [158] = 56,
  [159] = 53,
  [160] = 160,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 165,
  [168] = 166,
  [169] = 165,
  [170] = 166,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 172,
  [175] = 175,
  [176] = 172,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 179,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 185,
  [188] = 186,
  [189] = 189,
  [190] = 184,
  [191] = 180,
  [192] = 192,
  [193] = 192,
  [194] = 182,
  [195] = 195,
  [196] = 189,
  [197] = 197,
  [198] = 182,
  [199] = 179,
  [200] = 184,
  [201] = 185,
  [202] = 186,
  [203] = 189,
  [204] = 204,
  [205] = 192,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 195,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 211,
  [224] = 208,
  [225] = 209,
  [226] = 217,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 211,
  [231] = 231,
  [232] = 232,
  [233] = 217,
  [234] = 208,
  [235] = 227,
  [236] = 211,
  [237] = 209,
  [238] = 211,
  [239] = 209,
  [240] = 211,
  [241] = 209,
  [242] = 211,
  [243] = 218,
  [244] = 222,
  [245] = 218,
  [246] = 222,
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
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '"', 1994,
        '#', 2058,
        '%', 1981,
        '&', 1042,
        '(', 2000,
        ')', 2002,
        '*', 2130,
        '-', 2084,
        '/', 2113,
        '0', 2107,
        '1', 2080,
        '2', 2123,
        ';', 1979,
        '=', 2036,
        '@', 2046,
        'O', 2103,
        'P', 2039,
        '[', 1990,
        ']', 1992,
        'o', 2112,
        '{', 2003,
        '}', 2005,
        0xbd, 2126,
        0x66d, 2146,
        0x2010, 2088,
        0x2011, 2090,
        0x2012, 2092,
        0x2013, 2094,
        0x2014, 2096,
        0x2044, 2117,
        0x204e, 2142,
        0x2212, 2086,
        0x2215, 2115,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        0x2796, 2098,
        0x27cb, 2119,
        0x29f8, 2121,
        '+', 2061,
        0x16ed, 2061,
        0x2795, 2061,
        ':', 2034,
        'X', 2034,
        'x', 2034,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1975);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(2023);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2024);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1084);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 125,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'b', 560,
        'c', 558,
        'd', 443,
        'e', 630,
        'h', 451,
        'i', 585,
        'l', 503,
        'm', 457,
        'n', 445,
        'p', 506,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(716);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 173,
        'd', 471,
        'h', 718,
        'm', 490,
        'n', 491,
        'p', 581,
        's', 613,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'q') ADVANCE(712);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 139,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'a', 669,
        'b', 560,
        'c', 558,
        'd', 443,
        'e', 630,
        'f', 642,
        'h', 454,
        'i', 585,
        'l', 502,
        'm', 456,
        'n', 445,
        'p', 507,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 151,
        'd', 465,
        'h', 717,
        'm', 484,
        'n', 485,
        's', 611,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 180,
        'd', 474,
        'h', 721,
        'm', 496,
        'n', 497,
        's', 614,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 177,
        'd', 465,
        'h', 717,
        'm', 484,
        'n', 485,
        'p', 582,
        's', 611,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 197,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'a', 669,
        'b', 560,
        'c', 558,
        'd', 443,
        'e', 630,
        'f', 642,
        'h', 454,
        'i', 585,
        'l', 502,
        'm', 456,
        'n', 445,
        'p', 506,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '#', 202,
        'D', 505,
        'L', 447,
        'M', 561,
        'P', 568,
        'R', 448,
        'S', 535,
        'U', 616,
        'a', 669,
        'b', 560,
        'c', 558,
        'd', 477,
        'e', 630,
        'f', 642,
        'h', 455,
        'i', 585,
        'l', 502,
        'm', 458,
        'n', 446,
        'p', 507,
        'q', 692,
        'r', 449,
        's', 567,
        'u', 450,
        'x', 606,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'h') ADVANCE(719);
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'h') ADVANCE(722);
      if (lookahead == 'm') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'h') ADVANCE(723);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '&', 18,
        '/', 35,
        0x2044, 35,
        0x2215, 35,
        0x27cb, 35,
        0x29f8, 35,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == 0xbd) ADVANCE(2157);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '&', 20,
        '/', 7,
        0x2044, 7,
        0x2215, 7,
        0x27cb, 7,
        0x29f8, 7,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(8);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(363);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(88);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(363);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead == ';') ADVANCE(2133);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == '6') ADVANCE(207);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 134,
        '1', 389,
        '2', 53,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 155,
        'A', 49,
        'a', 49,
        'B', 129,
        'b', 129,
        'D', 403,
        'd', 403,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 332,
        '1', 227,
        '6', 296,
        '9', 743,
        'A', 318,
        'a', 318,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 54:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 332,
        '1', 225,
        '6', 296,
        '9', 743,
        'A', 318,
        'a', 318,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 332,
        '1', 246,
        '6', 296,
        '9', 743,
        'A', 318,
        'a', 318,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 145,
        '2', 138,
        '7', 387,
        '9', 749,
        'D', 408,
        'd', 408,
        'F', 425,
        'f', 425,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 145,
        '2', 138,
        '7', 390,
        '9', 749,
        'B', 413,
        'b', 413,
        'D', 408,
        'd', 408,
        'F', 425,
        'f', 425,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(311);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(361);
      if (lookahead == '1') ADVANCE(42);
      if (lookahead == '6') ADVANCE(80);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(361);
      if (lookahead == '1') ADVANCE(42);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(287);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 64:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 135,
        '1', 389,
        '2', 54,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 153,
        'A', 48,
        'a', 48,
        'B', 130,
        'b', 130,
        'D', 403,
        'd', 403,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 135,
        '1', 389,
        '2', 54,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 152,
        'A', 48,
        'a', 48,
        'B', 129,
        'b', 129,
        'D', 403,
        'd', 403,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 67:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 175,
        '2', 148,
        '7', 386,
        '9', 750,
        'B', 408,
        'b', 408,
        'D', 409,
        'd', 409,
        'F', 410,
        'f', 410,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(318);
      if (lookahead == '3') ADVANCE(283);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(318);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '1') ADVANCE(403);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(403);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '1') ADVANCE(403);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '7') ADVANCE(319);
      if (lookahead == '8') ADVANCE(336);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '7') ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(412);
      if (lookahead == '1') ADVANCE(427);
      if (lookahead == '3') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(426);
      if (lookahead == '2') ADVANCE(426);
      if (lookahead == '3') ADVANCE(426);
      if (lookahead == '4') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(426);
      if (lookahead == '2') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '2') ADVANCE(409);
      if (lookahead == '3') ADVANCE(409);
      if (lookahead == '4') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '2') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead == '7') ADVANCE(388);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '1') ADVANCE(429);
      if (lookahead == '2') ADVANCE(429);
      if (lookahead == '3') ADVANCE(429);
      if (lookahead == '4') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(429);
      if (lookahead == '1') ADVANCE(429);
      if (lookahead == '2') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(421);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(416);
      if (lookahead == '1') ADVANCE(416);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead == '3') ADVANCE(416);
      if (lookahead == '4') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(416);
      if (lookahead == '1') ADVANCE(416);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(430);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead == '3') ADVANCE(430);
      if (lookahead == '4') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(430);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '1') ADVANCE(431);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead == '3') ADVANCE(431);
      if (lookahead == '4') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(431);
      if (lookahead == '1') ADVANCE(431);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(424);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(424);
      if (lookahead == '4') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(424);
      if (lookahead == '1') ADVANCE(424);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(147);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 100:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 189,
        '1', 389,
        '2', 55,
        '3', 166,
        '5', 136,
        '6', 300,
        '7', 154,
        'A', 48,
        'a', 48,
        'B', 130,
        'b', 130,
        'D', 424,
        'd', 424,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(432);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead == '2') ADVANCE(432);
      if (lookahead == '3') ADVANCE(432);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(432);
      if (lookahead == '1') ADVANCE(432);
      if (lookahead == '2') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(366);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == '1') ADVANCE(87);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(369);
      if (lookahead == '1') ADVANCE(90);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(370);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(372);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(375);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(373);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead == '6') ADVANCE(264);
      if (lookahead == '7') ADVANCE(88);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(311);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 114:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 184,
        '2', 172,
        '7', 398,
        '9', 751,
        'D', 430,
        'd', 430,
        'F', 428,
        'f', 428,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '7') ADVANCE(396);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '7') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 120:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '0', 314,
        '2', 186,
        '7', 736,
        '9', 752,
        'F', 433,
        'f', 433,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == '7') ADVANCE(399);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(196);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(188);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '7') ADVANCE(400);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(311);
      if (lookahead == '7') ADVANCE(354);
      if (lookahead == '8') ADVANCE(393);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 125:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 45,
        '3', 271,
        '4', 275,
        '5', 362,
        '6', 76,
        '8', 209,
        '9', 297,
        'X', 142,
        'x', 142,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == ';') ADVANCE(2059);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(247);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(734);
      if (lookahead == '4') ADVANCE(353);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(734);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 136:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 295,
        'A', 128,
        'a', 128,
        'C', 728,
        'c', 728,
        'F', 727,
        'f', 727,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '7') ADVANCE(308);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(204);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 139:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 58,
        '3', 271,
        '4', 239,
        '5', 377,
        '6', 76,
        '8', 216,
        '9', 297,
        'X', 190,
        'x', 190,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2153);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '4') ADVANCE(321);
      if (lookahead == '8') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(211);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(335);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '3') ADVANCE(735);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(128);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 335,
        '2', 65,
        '3', 735,
        '6', 345,
        'B', 127,
        'b', 127,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(354);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '4') ADVANCE(301);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(276);
      if (lookahead == '7') ADVANCE(312);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(278);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(380);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(733);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '4') ADVANCE(317);
      if (lookahead == '8') ADVANCE(212);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(213);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 152:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 318,
        '3', 165,
        '9', 320,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 318,
        '3', 165,
        '9', 323,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 318,
        '3', 165,
        '9', 324,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 318,
        '9', 320,
        'E', 726,
        'e', 726,
        'F', 268,
        'f', 268,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(291);
      if (lookahead == '7') ADVANCE(313);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(270);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(379);
      if (lookahead == '7') ADVANCE(314);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '4') ADVANCE(360);
      if (lookahead == '8') ADVANCE(232);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(218);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(208);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(237);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(423);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(268);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '4') ADVANCE(318);
      if (lookahead == '8') ADVANCE(224);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(344);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(344);
      if (lookahead == '2') ADVANCE(356);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead == '7') ADVANCE(308);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 173:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 99,
        '4', 267,
        '5', 374,
        '8', 221,
        'X', 169,
        'x', 169,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(241);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '4') ADVANCE(302);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead == '5') ADVANCE(374);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 105,
        '4', 282,
        '5', 378,
        '8', 212,
        'X', 193,
        'x', 193,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(242);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '4') ADVANCE(328);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(222);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(244);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '4') ADVANCE(306);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(251);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(101);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(96);
      if (lookahead == '3') ADVANCE(734);
      if (lookahead == '4') ADVANCE(352);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 350,
        '2', 64,
        '3', 735,
        '6', 345,
        'B', 127,
        'b', 127,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 191:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 350,
        '2', 100,
        '3', 735,
        '6', 345,
        'B', 127,
        'b', 127,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(289);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(351);
      if (lookahead == '2') ADVANCE(57);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(290);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(292);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 113,
        '3', 271,
        '4', 238,
        '5', 362,
        '6', 76,
        '8', 216,
        '9', 297,
        'X', 143,
        'x', 143,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(115);
      if (lookahead == '4') ADVANCE(322);
      if (lookahead == '8') ADVANCE(259);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '4') ADVANCE(327);
      if (lookahead == '8') ADVANCE(261);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(252);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(119);
      if (lookahead == '4') ADVANCE(329);
      if (lookahead == '8') ADVANCE(262);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '4') ADVANCE(330);
      if (lookahead == '8') ADVANCE(263);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 202:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '1', 124,
        '3', 271,
        '4', 240,
        '5', 377,
        '6', 76,
        '8', 249,
        '9', 297,
        'X', 191,
        'x', 191,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '5') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 209:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '2', 47,
        '5', 382,
        '6', 298,
        '7', 132,
        '8', 50,
        '9', 355,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '3') ADVANCE(748);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(59);
      if (lookahead == '7') ADVANCE(215);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(332);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 216:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '2', 46,
        '5', 382,
        '6', 298,
        '7', 131,
        '8', 50,
        '9', 355,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2155);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(120);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '7') ADVANCE(234);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '7') ADVANCE(223);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(235);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '7') ADVANCE(233);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '9') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(349);
      if (lookahead == '7') ADVANCE(258);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(231);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(409);
      if (lookahead == '5') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(237);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == '3') ADVANCE(402);
      if (lookahead == '5') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '5') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '5') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead == '5') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '7') ADVANCE(422);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(116);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 249:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '2', 112,
        '5', 382,
        '6', 298,
        '7', 133,
        '8', 50,
        '9', 355,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(243);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(242);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(121);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(251);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(331);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(106);
      if (lookahead == '7') ADVANCE(236);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '7') ADVANCE(250);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(108);
      if (lookahead == '7') ADVANCE(253);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(110);
      if (lookahead == '7') ADVANCE(255);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '7') ADVANCE(257);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '4') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '5') ADVANCE(409);
      if (lookahead == '7') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead == '8') ADVANCE(357);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(296);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(274);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(737);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(402);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(402);
      if (lookahead == '5') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(266);
      if (lookahead == '8') ADVANCE(358);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(281);
      if (lookahead == '8') ADVANCE(357);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(415);
      if (lookahead == '4') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(413);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(413);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '7') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(423);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead == '6') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(210);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead == '7') ADVANCE(318);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(268);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(303);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(304);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(305);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(307);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(309);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(383);
      if (lookahead == '6') ADVANCE(285);
      if (lookahead == '7') ADVANCE(229);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(333);
      if (lookahead == '6') ADVANCE(44);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(301);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(326);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(302);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(306);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(310);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '6') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead == '7') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(203);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(402);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(415);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(415);
      if (lookahead == '6') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(413);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(420);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(430);
      if (lookahead == '7') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(128);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(273);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(744);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(315);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(384);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(381);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(745);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(741);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(392);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 347:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(394);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(103);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(746);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(747);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(381);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(385);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(337);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(403);
      if (lookahead == '9') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(426);
      if (lookahead == '9') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(409);
      if (lookahead == '9') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(429);
      if (lookahead == '9') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(416);
      if (lookahead == '9') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(430);
      if (lookahead == '9') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(431);
      if (lookahead == '9') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(424);
      if (lookahead == '9') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(338);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(432);
      if (lookahead == '9') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(346);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(348);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(360);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(395);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(265);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(205);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(402);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(318);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(316);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(333);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(333);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 389:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '9', 126,
        ';', 2067,
        'C', 333,
        'c', 333,
        'D', 294,
        'd', 294,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(325);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(339);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(415);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(413);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(340);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(341);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(342);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(731);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(343);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(347);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2066);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2072);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2072);
      if (lookahead == 'f') ADVANCE(682);
      if (lookahead == 'q') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2072);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2072);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2057);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2067);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2060);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2059);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2059);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2133);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2157);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2128);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2149);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2145);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2137);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2141);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2049);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(757);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(645);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(645);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(645);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead == 'U') ADVANCE(621);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(564);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'v') ADVANCE(571);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'y') ADVANCE(619);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'y') ADVANCE(619);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'y') ADVANCE(629);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 463:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(570);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(612);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'n') ADVANCE(711);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(600);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(714);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(681);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(562);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(542);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(610);
      if (lookahead == 'q') ADVANCE(708);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(683);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(690);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(516);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(519);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'o') ADVANCE(680);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'q') ADVANCE(691);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(701);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(541);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(551);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == 'q') ADVANCE(694);
      if (lookahead == 'x') ADVANCE(480);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(565);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(705);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(684);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(679);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(631);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(412);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(638);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(509);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(650);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(651);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(654);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(659);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(661);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(662);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(663);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(664);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(666);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(670);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(667);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(515);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(468);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(479);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(620);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(622);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(623);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(624);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(625);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(626);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(627);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(628);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(2045);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(425);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(428);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(433);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(742);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 735:
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        'C', 412,
        'c', 412,
        'D', 427,
        'd', 427,
        'F', 411,
        'f', 411,
      );
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(413);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(408);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(365);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(371);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2057);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2057);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2052);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2151);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2071);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 761:
      ADVANCE_MAP(
        '\n', 2015,
        '\r', 2010,
        '&', 11,
        '\t', 2009,
        0x0b, 2009,
        '\f', 2009,
        ' ', 2009,
        'A', 763,
        'B', 763,
        'a', 763,
        'b', 763,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(2015);
      if (lookahead == '\r') ADVANCE(2010);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2009);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(763);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(2015);
      if (lookahead == '\r') ADVANCE(2010);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2009);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 764:
      ADVANCE_MAP(
        '\n', 1026,
        '\r', 1027,
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 765:
      ADVANCE_MAP(
        '\n', 1026,
        '\r', 764,
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1988);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(767);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(768);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(769);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(770);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(771);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(772);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(773);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(774);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(775);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(776);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(777);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(779);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(780);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(781);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(782);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(783);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(784);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(785);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(786);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(787);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(788);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(789);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(790);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(791);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(792);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(793);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(794);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(795);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(796);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(797);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(798);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(799);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(800);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(801);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(802);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(803);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(804);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(805);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(806);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(807);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(808);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(809);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(810);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(811);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(812);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(813);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(814);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(815);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(816);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(817);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(818);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(819);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(821);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(822);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(823);
      END_STATE();
    case 825:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(824);
      END_STATE();
    case 826:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(825);
      END_STATE();
    case 827:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(826);
      END_STATE();
    case 828:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(827);
      END_STATE();
    case 829:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(828);
      END_STATE();
    case 830:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(829);
      END_STATE();
    case 831:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(830);
      END_STATE();
    case 832:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(831);
      END_STATE();
    case 833:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(832);
      END_STATE();
    case 834:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(833);
      END_STATE();
    case 835:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(834);
      END_STATE();
    case 836:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(835);
      END_STATE();
    case 837:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(836);
      END_STATE();
    case 838:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(837);
      END_STATE();
    case 839:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(838);
      END_STATE();
    case 840:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(839);
      END_STATE();
    case 841:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(840);
      END_STATE();
    case 842:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(841);
      END_STATE();
    case 843:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(842);
      END_STATE();
    case 844:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(843);
      END_STATE();
    case 845:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(844);
      END_STATE();
    case 846:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(845);
      END_STATE();
    case 847:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(846);
      END_STATE();
    case 848:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(847);
      END_STATE();
    case 849:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 850:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(849);
      END_STATE();
    case 851:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(850);
      END_STATE();
    case 852:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(851);
      END_STATE();
    case 853:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 854:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(853);
      END_STATE();
    case 855:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 856:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(855);
      END_STATE();
    case 857:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(856);
      END_STATE();
    case 858:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(857);
      END_STATE();
    case 859:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(858);
      END_STATE();
    case 860:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 861:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 862:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(861);
      END_STATE();
    case 863:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 864:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(864);
      END_STATE();
    case 866:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 867:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(866);
      END_STATE();
    case 868:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(867);
      END_STATE();
    case 869:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(868);
      END_STATE();
    case 870:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 871:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(870);
      END_STATE();
    case 872:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 873:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 874:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 875:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 876:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(875);
      END_STATE();
    case 877:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(876);
      END_STATE();
    case 878:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 879:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 880:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 881:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 883:
      if (lookahead == '\n') ADVANCE(1988);
      if (lookahead == '\r') ADVANCE(766);
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 884:
      if (lookahead == '\n') ADVANCE(1989);
      END_STATE();
    case 885:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 886:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(885);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 887:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(886);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 888:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 889:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(888);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 890:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(889);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 891:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 892:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 893:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 894:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(893);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 895:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(894);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 896:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(895);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 897:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(896);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 898:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(897);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 899:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(898);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 900:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(899);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 901:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(900);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 902:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(901);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 903:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(902);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 904:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(903);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 905:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(904);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 906:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(905);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 907:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(906);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 908:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(907);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 909:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(908);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 910:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(909);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 911:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(910);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 912:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(911);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 913:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 914:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(913);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 915:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(914);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 916:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(915);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 917:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 918:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 919:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(918);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 920:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(919);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 921:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(920);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 922:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(921);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 923:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(922);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 924:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(923);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 925:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(924);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 926:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(925);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 927:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(926);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 928:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(927);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 929:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 930:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(929);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 931:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(930);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 932:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 933:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(932);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 934:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(933);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 935:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(934);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 936:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(935);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 937:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(936);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 938:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(937);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 939:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 940:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 941:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(940);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 942:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(941);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 943:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(942);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 944:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(943);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 945:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(944);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 946:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(945);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 947:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(946);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 948:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(947);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 949:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(948);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 950:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(949);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 951:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 952:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(951);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 953:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(952);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 954:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(953);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 955:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(954);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 956:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(955);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 957:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 958:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(957);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 959:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(958);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 960:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 961:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(960);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 962:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(961);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 963:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(962);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 964:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(963);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 965:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 966:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(965);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 967:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 968:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(967);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 969:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 970:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(969);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 971:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 972:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 973:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 974:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 975:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 976:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(975);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 977:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 978:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 979:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 980:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(979);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 981:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 982:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(981);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 983:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(982);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 984:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(983);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 985:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 986:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 987:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(986);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 988:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(987);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 989:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 990:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 991:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 992:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 993:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 994:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 995:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 996:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 997:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 998:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(997);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 999:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1000:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1001:
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '\r') ADVANCE(884);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1002:
      ADVANCE_MAP(
        '\n', 1005,
        '\r', 1002,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1002,
        0x0b, 1002,
        '\f', 1002,
        ' ', 1002,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1003:
      ADVANCE_MAP(
        '\n', 1005,
        '\r', 1002,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1002,
        0x0b, 1002,
        '\f', 1002,
        ' ', 1002,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1004:
      ADVANCE_MAP(
        '\n', 1977,
        '\r', 1002,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1002,
        0x0b, 1002,
        '\f', 1002,
        ' ', 1002,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1005:
      ADVANCE_MAP(
        '\n', 1977,
        '\r', 1004,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1002,
        0x0b, 1002,
        '\f', 1002,
        ' ', 1002,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1006:
      ADVANCE_MAP(
        '\n', 1028,
        '\r', 1029,
        '!', 2070,
        '$', 759,
        '&', 23,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1007:
      ADVANCE_MAP(
        '\n', 1028,
        '\r', 1006,
        '!', 2070,
        '$', 759,
        '&', 23,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1008:
      ADVANCE_MAP(
        '\n', 1982,
        '\r', 1008,
        '!', 2070,
        '$', 759,
        '&', 23,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1008,
        0x0b, 1008,
        '\f', 1008,
        ' ', 1008,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1009:
      ADVANCE_MAP(
        '\n', 1986,
        '\r', 1009,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1009,
        0x0b, 1009,
        '\f', 1009,
        ' ', 1009,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1010:
      ADVANCE_MAP(
        '\n', 1986,
        '\r', 1009,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1009,
        0x0b, 1009,
        '\f', 1009,
        ' ', 1009,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1011:
      ADVANCE_MAP(
        '\n', 1983,
        '\r', 1011,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1011,
        0x0b, 1011,
        '\f', 1011,
        ' ', 1011,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1012:
      ADVANCE_MAP(
        '\n', 1983,
        '\r', 1011,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1011,
        0x0b, 1011,
        '\f', 1011,
        ' ', 1011,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1013:
      ADVANCE_MAP(
        '\n', 1984,
        '\r', 1013,
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1013,
        0x0b, 1013,
        '\f', 1013,
        ' ', 1013,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1014:
      ADVANCE_MAP(
        '\n', 1985,
        '\r', 1014,
        '!', 2078,
        '$', 1967,
        '&', 1055,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1014,
        0x0b, 1014,
        '\f', 1014,
        ' ', 1014,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1015:
      ADVANCE_MAP(
        '\n', 1985,
        '\r', 1014,
        '!', 2078,
        '$', 1967,
        '&', 1055,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1014,
        0x0b, 1014,
        '\f', 1014,
        ' ', 1014,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1016:
      ADVANCE_MAP(
        '\n', 1978,
        '\r', 1009,
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
        '\t', 1009,
        0x0b, 1009,
        '\f', 1009,
        ' ', 1009,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1017:
      if (lookahead == ' ') ADVANCE(1199);
      END_STATE();
    case 1018:
      if (lookahead == ' ') ADVANCE(1071);
      END_STATE();
    case 1019:
      if (lookahead == ' ') ADVANCE(1074);
      END_STATE();
    case 1020:
      if (lookahead == ' ') SKIP(1020);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(1995);
      if (lookahead != 0) ADVANCE(1996);
      END_STATE();
    case 1021:
      if (lookahead == ' ') ADVANCE(1964);
      END_STATE();
    case 1022:
      if (lookahead == ' ') ADVANCE(1319);
      END_STATE();
    case 1023:
      if (lookahead == ' ') ADVANCE(1313);
      END_STATE();
    case 1024:
      if (lookahead == ' ') ADVANCE(1220);
      END_STATE();
    case 1025:
      if (lookahead == ' ') ADVANCE(1080);
      END_STATE();
    case 1026:
      ADVANCE_MAP(
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '-', 2065,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        '\n', 1027,
        '\r', 1027,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1027:
      ADVANCE_MAP(
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        '\n', 1027,
        '\r', 1027,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1028:
      ADVANCE_MAP(
        '!', 2070,
        '$', 759,
        '&', 23,
        '(', 2001,
        '*', 2131,
        '-', 2065,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1029:
      ADVANCE_MAP(
        '!', 2070,
        '$', 759,
        '&', 23,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'N', 2031,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1030:
      ADVANCE_MAP(
        '!', 2078,
        '#', 2058,
        '$', 1967,
        '&', 1053,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2038,
        '?', 2078,
        '@', 2046,
        'P', 2041,
        'R', 2027,
        'T', 1593,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 2062,
        0x16ed, 2062,
        0x2795, 2062,
        ':', 2034,
        'X', 2034,
        'x', 2034,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2050);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2024);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1031:
      ADVANCE_MAP(
        '!', 2078,
        '#', 2058,
        '$', 1967,
        '&', 1059,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2038,
        '?', 2078,
        '@', 2046,
        'P', 2041,
        'R', 2027,
        'T', 1593,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 2062,
        0x16ed, 2062,
        0x2795, 2062,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2024);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1032:
      ADVANCE_MAP(
        '!', 2078,
        '#', 2058,
        '$', 1967,
        '&', 1062,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 2062,
        0x16ed, 2062,
        0x2795, 2062,
        ':', 2034,
        'X', 2034,
        'x', 2034,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1033:
      ADVANCE_MAP(
        '!', 2078,
        '#', 2058,
        '$', 1967,
        '&', 1062,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2038,
        '?', 2078,
        '@', 2046,
        'O', 2103,
        'P', 2041,
        'R', 2027,
        'T', 1593,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 2062,
        0x16ed, 2062,
        0x2795, 2062,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2024);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1034:
      ADVANCE_MAP(
        '!', 2078,
        '#', 2058,
        '$', 1967,
        '&', 1064,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2038,
        '?', 2078,
        '@', 2046,
        'O', 2103,
        'P', 2041,
        'R', 2027,
        'T', 1593,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 2062,
        0x16ed, 2062,
        0x2795, 2062,
        ':', 2034,
        'X', 2034,
        'x', 2034,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2050);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2024);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1035:
      ADVANCE_MAP(
        '!', 2078,
        '$', 1967,
        '&', 1046,
        '(', 2000,
        '*', 2130,
        '0', 2108,
        '1', 2082,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'O', 2103,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'o', 2112,
        'p', 1926,
        '{', 2003,
        0xbd, 2126,
        0x66d, 2146,
        0x204e, 2142,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1035);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1036:
      ADVANCE_MAP(
        '!', 2078,
        '$', 1967,
        '&', 1055,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1036);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1037:
      ADVANCE_MAP(
        '!', 2078,
        '$', 1967,
        '&', 1057,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'N', 2033,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0xbd, 2124,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 1072,
        0x16ed, 1072,
        0x2795, 1072,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1037);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1038:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == ']') ADVANCE(1992);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1038);
      END_STATE();
    case 1039:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == ']') ADVANCE(1993);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1038);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1997);
      if (lookahead != 0) ADVANCE(1999);
      END_STATE();
    case 1040:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1041);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1998);
      if (lookahead != 0) ADVANCE(1999);
      END_STATE();
    case 1041:
      if (lookahead == '"') ADVANCE(1994);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1041);
      END_STATE();
    case 1042:
      ADVANCE_MAP(
        '#', 1197,
        'a', 1839,
        'd', 1602,
        'f', 1826,
        'h', 1603,
        'l', 1792,
        'm', 1648,
        'n', 1647,
        'p', 1744,
        's', 1796,
      );
      END_STATE();
    case 1043:
      if (lookahead == '#') ADVANCE(1198);
      if (lookahead == 'd') ADVANCE(1622);
      if (lookahead == 'h') ADVANCE(1917);
      if (lookahead == 'm') ADVANCE(1651);
      if (lookahead == 'n') ADVANCE(1650);
      END_STATE();
    case 1044:
      if (lookahead == '#') ADVANCE(1227);
      if (lookahead == 'p') ADVANCE(1760);
      END_STATE();
    case 1045:
      if (lookahead == '#') ADVANCE(1214);
      if (lookahead == 'f') ADVANCE(1837);
      if (lookahead == 'h') ADVANCE(1623);
      END_STATE();
    case 1046:
      ADVANCE_MAP(
        '#', 1201,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'a', 1839,
        'b', 1738,
        'c', 1737,
        'd', 1631,
        'e', 1812,
        'f', 1826,
        'h', 1598,
        'i', 1768,
        'l', 1672,
        'm', 1610,
        'n', 1600,
        'p', 1675,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1047:
      if (lookahead == '#') ADVANCE(1399);
      if (lookahead == 'e') ADVANCE(1916);
      if (lookahead == 'q') ADVANCE(1912);
      END_STATE();
    case 1048:
      if (lookahead == '#') ADVANCE(1469);
      if (lookahead == 'e') ADVANCE(1823);
      END_STATE();
    case 1049:
      if (lookahead == '#') ADVANCE(1219);
      if (lookahead == 'd') ADVANCE(1633);
      if (lookahead == 'h') ADVANCE(1922);
      if (lookahead == 'm') ADVANCE(1667);
      if (lookahead == 'n') ADVANCE(1666);
      if (lookahead == 'p') ADVANCE(1765);
      if (lookahead == 's') ADVANCE(1801);
      END_STATE();
    case 1050:
      ADVANCE_MAP(
        '#', 1265,
        'a', 1839,
        'd', 1625,
        'f', 1826,
        'h', 1604,
        'l', 1792,
        'm', 1660,
        'n', 1661,
        's', 1796,
      );
      END_STATE();
    case 1051:
      ADVANCE_MAP(
        '#', 1206,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'b', 1738,
        'c', 1737,
        'd', 1631,
        'e', 1812,
        'f', 1838,
        'h', 1621,
        'i', 1768,
        'l', 1673,
        'm', 1611,
        'n', 1600,
        'p', 1676,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1052:
      if (lookahead == '#') ADVANCE(1218);
      if (lookahead == 'd') ADVANCE(1632);
      if (lookahead == 'h') ADVANCE(1921);
      if (lookahead == 'm') ADVANCE(1665);
      if (lookahead == 'n') ADVANCE(1664);
      if (lookahead == 's') ADVANCE(1799);
      END_STATE();
    case 1053:
      ADVANCE_MAP(
        '#', 1207,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'b', 1738,
        'c', 1737,
        'd', 1636,
        'e', 1812,
        'h', 1609,
        'i', 1768,
        'l', 1673,
        'm', 1613,
        'n', 1601,
        'p', 1676,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1054:
      if (lookahead == '#') ADVANCE(1221);
      if (lookahead == 's') ADVANCE(1803);
      END_STATE();
    case 1055:
      ADVANCE_MAP(
        '#', 1296,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'b', 1738,
        'c', 1737,
        'd', 1631,
        'e', 1812,
        'h', 1608,
        'i', 1768,
        'l', 1673,
        'm', 1611,
        'n', 1600,
        'p', 1675,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1056:
      if (lookahead == '#') ADVANCE(1289);
      if (lookahead == 'd') ADVANCE(1632);
      if (lookahead == 'h') ADVANCE(1921);
      if (lookahead == 'm') ADVANCE(1665);
      if (lookahead == 'n') ADVANCE(1664);
      if (lookahead == 'p') ADVANCE(1760);
      if (lookahead == 's') ADVANCE(1799);
      END_STATE();
    case 1057:
      ADVANCE_MAP(
        '#', 1295,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'b', 1738,
        'c', 1737,
        'd', 1631,
        'e', 1812,
        'f', 1838,
        'h', 1621,
        'i', 1768,
        'l', 1673,
        'm', 1611,
        'n', 1600,
        'p', 1675,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1058:
      if (lookahead == '#') ADVANCE(1288);
      if (lookahead == 'd') ADVANCE(1634);
      if (lookahead == 'h') ADVANCE(1923);
      if (lookahead == 'm') ADVANCE(1669);
      if (lookahead == 'n') ADVANCE(1668);
      if (lookahead == 's') ADVANCE(1802);
      END_STATE();
    case 1059:
      ADVANCE_MAP(
        '#', 1298,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'b', 1738,
        'c', 1737,
        'd', 1631,
        'e', 1812,
        'h', 1608,
        'i', 1768,
        'l', 1673,
        'm', 1611,
        'n', 1600,
        'p', 1676,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1060:
      if (lookahead == '#') ADVANCE(1287);
      if (lookahead == 'd') ADVANCE(1626);
      if (lookahead == 'h') ADVANCE(1918);
      if (lookahead == 'm') ADVANCE(1657);
      if (lookahead == 'n') ADVANCE(1656);
      END_STATE();
    case 1061:
      if (lookahead == '#') ADVANCE(1234);
      if (lookahead == 'p') ADVANCE(1765);
      END_STATE();
    case 1062:
      ADVANCE_MAP(
        '#', 1294,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'a', 1839,
        'b', 1738,
        'c', 1737,
        'd', 1631,
        'e', 1812,
        'f', 1826,
        'h', 1598,
        'i', 1768,
        'l', 1672,
        'm', 1610,
        'n', 1600,
        'p', 1676,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1063:
      if (lookahead == '#') ADVANCE(1290);
      if (lookahead == 'd') ADVANCE(1627);
      if (lookahead == 'h') ADVANCE(1919);
      if (lookahead == 'm') ADVANCE(1659);
      if (lookahead == 'n') ADVANCE(1658);
      END_STATE();
    case 1064:
      ADVANCE_MAP(
        '#', 1297,
        'D', 1682,
        'L', 1614,
        'M', 1742,
        'P', 1763,
        'R', 1615,
        'S', 1709,
        'U', 1804,
        'a', 1839,
        'b', 1738,
        'c', 1737,
        'd', 1636,
        'e', 1812,
        'f', 1826,
        'h', 1599,
        'i', 1768,
        'l', 1672,
        'm', 1612,
        'n', 1601,
        'p', 1676,
        'q', 1891,
        'r', 1606,
        's', 1748,
        'u', 1607,
        'x', 1793,
      );
      END_STATE();
    case 1065:
      if (lookahead == '#') ADVANCE(1291);
      if (lookahead == 'd') ADVANCE(1630);
      if (lookahead == 'h') ADVANCE(1920);
      if (lookahead == 'm') ADVANCE(1663);
      if (lookahead == 'n') ADVANCE(1662);
      END_STATE();
    case 1066:
      if (lookahead == '#') ADVANCE(1292);
      if (lookahead == 'd') ADVANCE(1632);
      if (lookahead == 'h') ADVANCE(1921);
      if (lookahead == 'm') ADVANCE(1665);
      if (lookahead == 'n') ADVANCE(1664);
      END_STATE();
    case 1067:
      if (lookahead == '#') ADVANCE(1293);
      if (lookahead == 'd') ADVANCE(1635);
      if (lookahead == 'h') ADVANCE(1924);
      if (lookahead == 'm') ADVANCE(1671);
      if (lookahead == 'n') ADVANCE(1670);
      END_STATE();
    case 1068:
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1966);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1961);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      END_STATE();
    case 1069:
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1961);
      END_STATE();
    case 1070:
      ADVANCE_MAP(
        '&', 1050,
        '*', 2130,
        '-', 2084,
        '/', 2113,
        '0', 2106,
        '1', 2083,
        '2', 2123,
        'O', 2102,
        'o', 2111,
        0xbd, 2126,
        0x66d, 2146,
        0x2010, 2088,
        0x2011, 2090,
        0x2012, 2092,
        0x2013, 2094,
        0x2014, 2096,
        0x2044, 2117,
        0x204e, 2142,
        0x2212, 2086,
        0x2215, 2115,
        0x2217, 2134,
        0x2731, 2138,
        0x2796, 2098,
        0x27cb, 2119,
        0x29f8, 2121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1070);
      END_STATE();
    case 1071:
      if (lookahead == '&') ADVANCE(1045);
      if (lookahead == 0xbd) ADVANCE(2156);
      END_STATE();
    case 1072:
      if (lookahead == '&') ADVANCE(1052);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1079);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2063);
      END_STATE();
    case 1073:
      if (lookahead == '&') ADVANCE(1048);
      END_STATE();
    case 1074:
      if (lookahead == '&') ADVANCE(1054);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1023);
      END_STATE();
    case 1075:
      if (lookahead == '&') ADVANCE(1058);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1022);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1021);
      END_STATE();
    case 1076:
      if (lookahead == '&') ADVANCE(1060);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1017);
      END_STATE();
    case 1077:
      if (lookahead == '&') ADVANCE(1061);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2063);
      END_STATE();
    case 1078:
      if (lookahead == '&') ADVANCE(1063);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1018);
      END_STATE();
    case 1079:
      if (lookahead == '&') ADVANCE(1066);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2063);
      END_STATE();
    case 1080:
      if (lookahead == '&') ADVANCE(1067);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1024);
      END_STATE();
    case 1081:
      if (lookahead == '-') ADVANCE(883);
      END_STATE();
    case 1082:
      if (lookahead == '-') ADVANCE(1081);
      END_STATE();
    case 1083:
      if (lookahead == '-') ADVANCE(1082);
      END_STATE();
    case 1084:
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 1085:
      if (lookahead == '.') ADVANCE(2063);
      END_STATE();
    case 1086:
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '6') ADVANCE(1429);
      if (lookahead == '8') ADVANCE(1519);
      END_STATE();
    case 1087:
      if (lookahead == '0') ADVANCE(1492);
      if (lookahead == '1') ADVANCE(1113);
      if (lookahead == '6') ADVANCE(1125);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 1088:
      ADVANCE_MAP(
        '0', 1200,
        '2', 1209,
        '7', 1376,
        '9', 1953,
        'A', 1542,
        'a', 1542,
        'B', 1539,
        'b', 1539,
        'D', 1543,
        'd', 1543,
        'F', 1544,
        'f', 1544,
      );
      END_STATE();
    case 1089:
      if (lookahead == '0') ADVANCE(1090);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '6') ADVANCE(1429);
      if (lookahead == '7') ADVANCE(1482);
      if (lookahead == '8') ADVANCE(1519);
      END_STATE();
    case 1090:
      if (lookahead == '0') ADVANCE(1162);
      if (lookahead == '1') ADVANCE(1396);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1438);
      if (lookahead == '8') ADVANCE(1468);
      END_STATE();
    case 1091:
      if (lookahead == '0') ADVANCE(1162);
      if (lookahead == '1') ADVANCE(1403);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1438);
      if (lookahead == '8') ADVANCE(1468);
      END_STATE();
    case 1092:
      if (lookahead == '0') ADVANCE(1162);
      if (lookahead == '1') ADVANCE(1408);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1438);
      if (lookahead == '8') ADVANCE(1468);
      END_STATE();
    case 1093:
      ADVANCE_MAP(
        '0', 1251,
        '1', 1518,
        '2', 1096,
        '3', 1238,
        '5', 1204,
        '6', 1433,
        '7', 1245,
        'A', 1107,
        'a', 1107,
        'B', 1202,
        'b', 1202,
        'D', 1565,
        'd', 1565,
      );
      END_STATE();
    case 1094:
      ADVANCE_MAP(
        '0', 1251,
        '1', 1518,
        '2', 1096,
        '3', 1238,
        '5', 1204,
        '6', 1433,
        '7', 1246,
        'A', 1107,
        'a', 1107,
        'B', 1203,
        'b', 1203,
        'D', 1565,
        'd', 1565,
      );
      END_STATE();
    case 1095:
      if (lookahead == '0') ADVANCE(1232);
      END_STATE();
    case 1096:
      if (lookahead == '0') ADVANCE(1464);
      if (lookahead == '1') ADVANCE(1336);
      if (lookahead == '6') ADVANCE(1422);
      if (lookahead == '9') ADVANCE(1947);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1447);
      END_STATE();
    case 1097:
      if (lookahead == '0') ADVANCE(1464);
      if (lookahead == '1') ADVANCE(1337);
      if (lookahead == '6') ADVANCE(1422);
      if (lookahead == '9') ADVANCE(1947);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1447);
      END_STATE();
    case 1098:
      if (lookahead == '0') ADVANCE(1464);
      if (lookahead == '1') ADVANCE(1342);
      if (lookahead == '6') ADVANCE(1422);
      if (lookahead == '9') ADVANCE(1947);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1447);
      END_STATE();
    case 1099:
      if (lookahead == '0') ADVANCE(1464);
      if (lookahead == '1') ADVANCE(1343);
      if (lookahead == '6') ADVANCE(1422);
      if (lookahead == '9') ADVANCE(1947);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1447);
      END_STATE();
    case 1100:
      if (lookahead == '0') ADVANCE(2104);
      if (lookahead == '@') ADVANCE(2046);
      if (lookahead == 'O') ADVANCE(2100);
      if (lookahead == 'o') ADVANCE(2109);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2034);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1101);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(2023);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      END_STATE();
    case 1101:
      if (lookahead == '0') ADVANCE(2104);
      if (lookahead == '@') ADVANCE(2046);
      if (lookahead == 'O') ADVANCE(2100);
      if (lookahead == 'o') ADVANCE(2109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1101);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      END_STATE();
    case 1102:
      if (lookahead == '0') ADVANCE(1394);
      if (lookahead == '1') ADVANCE(1374);
      if (lookahead == '7') ADVANCE(1413);
      END_STATE();
    case 1103:
      if (lookahead == '0') ADVANCE(1394);
      if (lookahead == '1') ADVANCE(1397);
      if (lookahead == '7') ADVANCE(1413);
      END_STATE();
    case 1104:
      ADVANCE_MAP(
        '0', 1256,
        '2', 1205,
        '7', 1534,
        '9', 1955,
        'D', 1566,
        'd', 1566,
        'F', 1579,
        'f', 1579,
      );
      END_STATE();
    case 1105:
      ADVANCE_MAP(
        '0', 1256,
        '2', 1205,
        '7', 1532,
        '9', 1955,
        'B', 1538,
        'b', 1538,
        'D', 1566,
        'd', 1566,
        'F', 1579,
        'f', 1579,
      );
      END_STATE();
    case 1106:
      if (lookahead == '0') ADVANCE(1135);
      if (lookahead == '7') ADVANCE(1224);
      END_STATE();
    case 1107:
      if (lookahead == '0') ADVANCE(1135);
      if (lookahead == '7') ADVANCE(1224);
      if (lookahead == ';') ADVANCE(2132);
      END_STATE();
    case 1108:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1482);
      END_STATE();
    case 1109:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1482);
      if (lookahead == '8') ADVANCE(1525);
      END_STATE();
    case 1110:
      ADVANCE_MAP(
        '0', 1252,
        '1', 1518,
        '2', 1097,
        '3', 1238,
        '5', 1204,
        '6', 1433,
        '7', 1249,
        'A', 1106,
        'a', 1106,
        'B', 1203,
        'b', 1203,
        'D', 1565,
        'd', 1565,
      );
      END_STATE();
    case 1111:
      ADVANCE_MAP(
        '0', 1252,
        '1', 1518,
        '2', 1097,
        '3', 1238,
        '5', 1204,
        '6', 1433,
        '7', 1248,
        'A', 1106,
        'a', 1106,
        'B', 1202,
        'b', 1202,
        'D', 1565,
        'd', 1565,
      );
      END_STATE();
    case 1112:
      if (lookahead == '0') ADVANCE(1266);
      END_STATE();
    case 1113:
      if (lookahead == '0') ADVANCE(1543);
      if (lookahead == '1') ADVANCE(1543);
      if (lookahead == '2') ADVANCE(1543);
      END_STATE();
    case 1114:
      if (lookahead == '0') ADVANCE(1543);
      if (lookahead == '1') ADVANCE(1543);
      if (lookahead == '2') ADVANCE(1543);
      if (lookahead == '3') ADVANCE(1543);
      if (lookahead == '4') ADVANCE(1543);
      END_STATE();
    case 1115:
      if (lookahead == '0') ADVANCE(1216);
      END_STATE();
    case 1116:
      if (lookahead == '0') ADVANCE(1215);
      END_STATE();
    case 1117:
      if (lookahead == '0') ADVANCE(1230);
      END_STATE();
    case 1118:
      if (lookahead == '0') ADVANCE(1540);
      if (lookahead == '1') ADVANCE(1540);
      if (lookahead == '2') ADVANCE(1540);
      END_STATE();
    case 1119:
      if (lookahead == '0') ADVANCE(1540);
      if (lookahead == '1') ADVANCE(1540);
      if (lookahead == '2') ADVANCE(1540);
      if (lookahead == '3') ADVANCE(1540);
      if (lookahead == '4') ADVANCE(1540);
      END_STATE();
    case 1120:
      if (lookahead == '0') ADVANCE(1311);
      END_STATE();
    case 1121:
      if (lookahead == '0') ADVANCE(1228);
      if (lookahead == '2') ADVANCE(1233);
      if (lookahead == '7') ADVANCE(1517);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1540);
      END_STATE();
    case 1122:
      if (lookahead == '0') ADVANCE(1161);
      if (lookahead == '1') ADVANCE(1396);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1438);
      if (lookahead == '8') ADVANCE(1468);
      END_STATE();
    case 1123:
      if (lookahead == '0') ADVANCE(1161);
      if (lookahead == '1') ADVANCE(1403);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1438);
      if (lookahead == '8') ADVANCE(1468);
      END_STATE();
    case 1124:
      if (lookahead == '0') ADVANCE(1161);
      if (lookahead == '1') ADVANCE(1408);
      if (lookahead == '2') ADVANCE(1254);
      if (lookahead == '7') ADVANCE(1438);
      if (lookahead == '8') ADVANCE(1468);
      END_STATE();
    case 1125:
      if (lookahead == '0') ADVANCE(1549);
      END_STATE();
    case 1126:
      if (lookahead == '0') ADVANCE(1550);
      END_STATE();
    case 1127:
      if (lookahead == '0') ADVANCE(1541);
      if (lookahead == '1') ADVANCE(1541);
      if (lookahead == '2') ADVANCE(1541);
      END_STATE();
    case 1128:
      if (lookahead == '0') ADVANCE(1541);
      if (lookahead == '1') ADVANCE(1541);
      if (lookahead == '2') ADVANCE(1541);
      if (lookahead == '3') ADVANCE(1541);
      if (lookahead == '4') ADVANCE(1541);
      END_STATE();
    case 1129:
      if (lookahead == '0') ADVANCE(1581);
      if (lookahead == '1') ADVANCE(1581);
      if (lookahead == '2') ADVANCE(1581);
      END_STATE();
    case 1130:
      if (lookahead == '0') ADVANCE(1581);
      if (lookahead == '1') ADVANCE(1581);
      if (lookahead == '2') ADVANCE(1581);
      if (lookahead == '3') ADVANCE(1581);
      if (lookahead == '4') ADVANCE(1581);
      END_STATE();
    case 1131:
      if (lookahead == '0') ADVANCE(1553);
      if (lookahead == '1') ADVANCE(1557);
      if (lookahead == '2') ADVANCE(1558);
      if (lookahead == '3') ADVANCE(1559);
      if (lookahead == '4') ADVANCE(1560);
      END_STATE();
    case 1132:
      if (lookahead == '0') ADVANCE(1580);
      if (lookahead == '1') ADVANCE(1580);
      if (lookahead == '2') ADVANCE(1580);
      END_STATE();
    case 1133:
      if (lookahead == '0') ADVANCE(1580);
      if (lookahead == '1') ADVANCE(1580);
      if (lookahead == '2') ADVANCE(1580);
      if (lookahead == '3') ADVANCE(1580);
      if (lookahead == '4') ADVANCE(1580);
      END_STATE();
    case 1134:
      if (lookahead == '0') ADVANCE(1558);
      if (lookahead == '1') ADVANCE(1559);
      if (lookahead == '2') ADVANCE(1560);
      END_STATE();
    case 1135:
      if (lookahead == '0') ADVANCE(1566);
      if (lookahead == '1') ADVANCE(1566);
      END_STATE();
    case 1136:
      if (lookahead == '0') ADVANCE(1566);
      if (lookahead == '1') ADVANCE(1566);
      if (lookahead == '2') ADVANCE(1566);
      END_STATE();
    case 1137:
      if (lookahead == '0') ADVANCE(1566);
      if (lookahead == '1') ADVANCE(1566);
      if (lookahead == '2') ADVANCE(1566);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '4') ADVANCE(1566);
      END_STATE();
    case 1138:
      if (lookahead == '0') ADVANCE(1566);
      if (lookahead == '3') ADVANCE(1566);
      END_STATE();
    case 1139:
      if (lookahead == '0') ADVANCE(1565);
      if (lookahead == '1') ADVANCE(1565);
      if (lookahead == '2') ADVANCE(1565);
      END_STATE();
    case 1140:
      if (lookahead == '0') ADVANCE(1565);
      if (lookahead == '1') ADVANCE(1565);
      if (lookahead == '2') ADVANCE(1565);
      if (lookahead == '3') ADVANCE(1565);
      if (lookahead == '4') ADVANCE(1565);
      END_STATE();
    case 1141:
      if (lookahead == '0') ADVANCE(1574);
      if (lookahead == '1') ADVANCE(1582);
      if (lookahead == '3') ADVANCE(1573);
      END_STATE();
    case 1142:
      if (lookahead == '0') ADVANCE(1579);
      END_STATE();
    case 1143:
      if (lookahead == '0') ADVANCE(1571);
      if (lookahead == '1') ADVANCE(1571);
      if (lookahead == '2') ADVANCE(1571);
      END_STATE();
    case 1144:
      if (lookahead == '0') ADVANCE(1571);
      if (lookahead == '1') ADVANCE(1571);
      if (lookahead == '2') ADVANCE(1571);
      if (lookahead == '3') ADVANCE(1571);
      if (lookahead == '4') ADVANCE(1571);
      END_STATE();
    case 1145:
      if (lookahead == '0') ADVANCE(1572);
      END_STATE();
    case 1146:
      if (lookahead == '0') ADVANCE(1584);
      if (lookahead == '1') ADVANCE(1584);
      if (lookahead == '2') ADVANCE(1584);
      END_STATE();
    case 1147:
      if (lookahead == '0') ADVANCE(1584);
      if (lookahead == '1') ADVANCE(1584);
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '3') ADVANCE(1584);
      if (lookahead == '4') ADVANCE(1584);
      END_STATE();
    case 1148:
      if (lookahead == '0') ADVANCE(1583);
      END_STATE();
    case 1149:
      if (lookahead == '0') ADVANCE(1577);
      if (lookahead == '1') ADVANCE(1577);
      if (lookahead == '2') ADVANCE(1577);
      END_STATE();
    case 1150:
      if (lookahead == '0') ADVANCE(1577);
      if (lookahead == '1') ADVANCE(1577);
      if (lookahead == '2') ADVANCE(1577);
      if (lookahead == '3') ADVANCE(1577);
      if (lookahead == '4') ADVANCE(1577);
      END_STATE();
    case 1151:
      if (lookahead == '0') ADVANCE(1103);
      if (lookahead == '6') ADVANCE(1429);
      if (lookahead == '8') ADVANCE(1519);
      END_STATE();
    case 1152:
      if (lookahead == '0') ADVANCE(1493);
      if (lookahead == '1') ADVANCE(1118);
      END_STATE();
    case 1153:
      if (lookahead == '0') ADVANCE(1269);
      END_STATE();
    case 1154:
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1585);
      if (lookahead == '2') ADVANCE(1585);
      END_STATE();
    case 1155:
      if (lookahead == '0') ADVANCE(1585);
      if (lookahead == '1') ADVANCE(1585);
      if (lookahead == '2') ADVANCE(1585);
      if (lookahead == '3') ADVANCE(1585);
      if (lookahead == '4') ADVANCE(1585);
      END_STATE();
    case 1156:
      if (lookahead == '0') ADVANCE(1586);
      END_STATE();
    case 1157:
      if (lookahead == '0') ADVANCE(1496);
      if (lookahead == '1') ADVANCE(1134);
      if (lookahead == '6') ADVANCE(1125);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 1158:
      if (lookahead == '0') ADVANCE(1494);
      if (lookahead == '1') ADVANCE(1127);
      END_STATE();
    case 1159:
      if (lookahead == '0') ADVANCE(1495);
      if (lookahead == '1') ADVANCE(1129);
      END_STATE();
    case 1160:
      if (lookahead == '0') ADVANCE(1498);
      if (lookahead == '1') ADVANCE(1132);
      END_STATE();
    case 1161:
      if (lookahead == '0') ADVANCE(1447);
      END_STATE();
    case 1162:
      if (lookahead == '0') ADVANCE(1447);
      if (lookahead == '3') ADVANCE(1381);
      END_STATE();
    case 1163:
      if (lookahead == '0') ADVANCE(1500);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '5') ADVANCE(1329);
      if (lookahead == '6') ADVANCE(1384);
      END_STATE();
    case 1164:
      if (lookahead == '0') ADVANCE(1500);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '5') ADVANCE(1329);
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 1165:
      if (lookahead == '0') ADVANCE(1422);
      if (lookahead == '6') ADVANCE(1333);
      END_STATE();
    case 1166:
      if (lookahead == '0') ADVANCE(1499);
      if (lookahead == '1') ADVANCE(1136);
      END_STATE();
    case 1167:
      if (lookahead == '0') ADVANCE(1499);
      if (lookahead == '1') ADVANCE(1136);
      if (lookahead == '6') ADVANCE(1142);
      END_STATE();
    case 1168:
      if (lookahead == '0') ADVANCE(1502);
      if (lookahead == '1') ADVANCE(1143);
      if (lookahead == '6') ADVANCE(1145);
      END_STATE();
    case 1169:
      if (lookahead == '0') ADVANCE(1504);
      if (lookahead == '1') ADVANCE(1146);
      if (lookahead == '6') ADVANCE(1148);
      END_STATE();
    case 1170:
      if (lookahead == '0') ADVANCE(1507);
      if (lookahead == '1') ADVANCE(1154);
      END_STATE();
    case 1171:
      if (lookahead == '0') ADVANCE(1506);
      if (lookahead == '1') ADVANCE(1149);
      if (lookahead == '5') ADVANCE(1329);
      if (lookahead == '6') ADVANCE(1384);
      END_STATE();
    case 1172:
      if (lookahead == '0') ADVANCE(1506);
      if (lookahead == '1') ADVANCE(1149);
      if (lookahead == '5') ADVANCE(1329);
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 1173:
      ADVANCE_MAP(
        '0', 1235,
        '2', 1231,
        '7', 1377,
        '9', 1953,
        'A', 1542,
        'a', 1542,
        'D', 1547,
        'd', 1547,
        'F', 1544,
        'f', 1544,
      );
      END_STATE();
    case 1174:
      ADVANCE_MAP(
        '0', 1263,
        '1', 1518,
        '2', 1098,
        '3', 1238,
        '5', 1204,
        '6', 1433,
        '7', 1247,
        'A', 1107,
        'a', 1107,
        'B', 1203,
        'b', 1203,
        'D', 1577,
        'd', 1577,
      );
      END_STATE();
    case 1175:
      ADVANCE_MAP(
        '0', 1259,
        '2', 1229,
        '7', 1528,
        '9', 1956,
        'B', 1566,
        'b', 1566,
        'D', 1571,
        'd', 1571,
        'F', 1572,
        'f', 1572,
      );
      END_STATE();
    case 1176:
      ADVANCE_MAP(
        '0', 1264,
        '1', 1518,
        '2', 1099,
        '3', 1238,
        '5', 1204,
        '6', 1433,
        '7', 1250,
        'A', 1106,
        'a', 1106,
        'B', 1203,
        'b', 1203,
        'D', 1577,
        'd', 1577,
      );
      END_STATE();
    case 1177:
      if (lookahead == '0') ADVANCE(1270);
      END_STATE();
    case 1178:
      if (lookahead == '0') ADVANCE(1239);
      if (lookahead == '2') ADVANCE(1237);
      if (lookahead == '7') ADVANCE(1527);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1541);
      END_STATE();
    case 1179:
      ADVANCE_MAP(
        '0', 1261,
        '2', 1236,
        '7', 1536,
        '9', 1957,
        'D', 1584,
        'd', 1584,
        'F', 1583,
        'f', 1583,
      );
      END_STATE();
    case 1180:
      if (lookahead == '0') ADVANCE(1276);
      END_STATE();
    case 1181:
      if (lookahead == '0') ADVANCE(1241);
      if (lookahead == '2') ADVANCE(1240);
      if (lookahead == '7') ADVANCE(1529);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1581);
      END_STATE();
    case 1182:
      if (lookahead == '0') ADVANCE(1279);
      END_STATE();
    case 1183:
      if (lookahead == '0') ADVANCE(1243);
      if (lookahead == '2') ADVANCE(1242);
      if (lookahead == '7') ADVANCE(1530);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1580);
      END_STATE();
    case 1184:
      if (lookahead == '0') ADVANCE(1437);
      if (lookahead == '2') ADVANCE(1258);
      if (lookahead == '7') ADVANCE(1938);
      if (lookahead == '9') ADVANCE(1958);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1586);
      END_STATE();
    case 1185:
      if (lookahead == '0') ADVANCE(1285);
      END_STATE();
    case 1186:
      if (lookahead == '0') ADVANCE(1255);
      if (lookahead == '2') ADVANCE(1253);
      if (lookahead == '7') ADVANCE(1533);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1566);
      END_STATE();
    case 1187:
      if (lookahead == '0') ADVANCE(1286);
      END_STATE();
    case 1188:
      if (lookahead == '0') ADVANCE(1262);
      if (lookahead == '2') ADVANCE(1257);
      if (lookahead == '7') ADVANCE(1537);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1585);
      END_STATE();
    case 1189:
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '6') ADVANCE(1429);
      if (lookahead == '7') ADVANCE(1482);
      if (lookahead == '8') ADVANCE(1519);
      END_STATE();
    case 1190:
      if (lookahead == '0') ADVANCE(1271);
      END_STATE();
    case 1191:
      if (lookahead == '0') ADVANCE(1122);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1482);
      END_STATE();
    case 1192:
      if (lookahead == '0') ADVANCE(1122);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1482);
      if (lookahead == '8') ADVANCE(1525);
      END_STATE();
    case 1193:
      if (lookahead == '0') ADVANCE(1272);
      END_STATE();
    case 1194:
      if (lookahead == '0') ADVANCE(1092);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '6') ADVANCE(1429);
      if (lookahead == '7') ADVANCE(1482);
      if (lookahead == '8') ADVANCE(1519);
      END_STATE();
    case 1195:
      if (lookahead == '0') ADVANCE(1124);
      if (lookahead == '1') ADVANCE(1120);
      if (lookahead == '7') ADVANCE(1482);
      END_STATE();
    case 1196:
      if (lookahead == '1') ADVANCE(2080);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1196);
      END_STATE();
    case 1197:
      if (lookahead == '1') ADVANCE(1086);
      if (lookahead == '4') ADVANCE(1299);
      if (lookahead == '5') ADVANCE(1491);
      if (lookahead == '8') ADVANCE(1304);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1208);
      END_STATE();
    case 1198:
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '4') ADVANCE(1440);
      if (lookahead == '8') ADVANCE(1305);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1306);
      END_STATE();
    case 1199:
      if (lookahead == '1') ADVANCE(2152);
      END_STATE();
    case 1200:
      if (lookahead == '1') ADVANCE(1114);
      if (lookahead == '4') ADVANCE(1416);
      END_STATE();
    case 1201:
      ADVANCE_MAP(
        '1', 1089,
        '3', 1387,
        '4', 1300,
        '5', 1512,
        '6', 1141,
        '8', 1308,
        '9', 1414,
        'X', 1273,
        'x', 1273,
      );
      END_STATE();
    case 1202:
      if (lookahead == '1') ADVANCE(1329);
      if (lookahead == ';') ADVANCE(1072);
      END_STATE();
    case 1203:
      if (lookahead == '1') ADVANCE(1329);
      if (lookahead == ';') ADVANCE(2062);
      END_STATE();
    case 1204:
      if (lookahead == '1') ADVANCE(1424);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1223);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1930);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1928);
      END_STATE();
    case 1205:
      if (lookahead == '1') ADVANCE(1330);
      END_STATE();
    case 1206:
      ADVANCE_MAP(
        '1', 1109,
        '3', 1387,
        '4', 1392,
        '5', 1514,
        '6', 1141,
        '8', 1315,
        '9', 1414,
        'X', 1280,
        'x', 1280,
      );
      END_STATE();
    case 1207:
      ADVANCE_MAP(
        '1', 1195,
        '3', 1387,
        '4', 1393,
        '5', 1514,
        '6', 1141,
        '8', 1367,
        '9', 1414,
        'X', 1283,
        'x', 1283,
      );
      END_STATE();
    case 1208:
      if (lookahead == '1') ADVANCE(1457);
      if (lookahead == '2') ADVANCE(1088);
      if (lookahead == '6') ADVANCE(1467);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1940);
      END_STATE();
    case 1209:
      if (lookahead == '1') ADVANCE(1317);
      END_STATE();
    case 1210:
      if (lookahead == '1') ADVANCE(1135);
      if (lookahead == '2') ADVANCE(1335);
      if (lookahead == '3') ADVANCE(1422);
      END_STATE();
    case 1211:
      if (lookahead == '1') ADVANCE(1135);
      if (lookahead == '2') ADVANCE(1334);
      if (lookahead == '3') ADVANCE(1422);
      END_STATE();
    case 1212:
      if (lookahead == '1') ADVANCE(1135);
      if (lookahead == '2') ADVANCE(1341);
      if (lookahead == '3') ADVANCE(1422);
      END_STATE();
    case 1213:
      if (lookahead == '1') ADVANCE(1135);
      if (lookahead == '2') ADVANCE(1340);
      if (lookahead == '3') ADVANCE(1422);
      END_STATE();
    case 1214:
      if (lookahead == '1') ADVANCE(1509);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1935);
      END_STATE();
    case 1215:
      if (lookahead == '1') ADVANCE(1395);
      END_STATE();
    case 1216:
      if (lookahead == '1') ADVANCE(1510);
      if (lookahead == '7') ADVANCE(1437);
      END_STATE();
    case 1217:
      if (lookahead == '1') ADVANCE(1320);
      END_STATE();
    case 1218:
      if (lookahead == '1') ADVANCE(1095);
      if (lookahead == '4') ADVANCE(1450);
      if (lookahead == '8') ADVANCE(1309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1310);
      END_STATE();
    case 1219:
      if (lookahead == '1') ADVANCE(1112);
      if (lookahead == '4') ADVANCE(1386);
      if (lookahead == '5') ADVANCE(1513);
      if (lookahead == '8') ADVANCE(1366);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1277);
      END_STATE();
    case 1220:
      if (lookahead == '1') ADVANCE(1019);
      END_STATE();
    case 1221:
      if (lookahead == '1') ADVANCE(1115);
      if (lookahead == '4') ADVANCE(1488);
      if (lookahead == '8') ADVANCE(1322);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1314);
      END_STATE();
    case 1222:
      if (lookahead == '1') ADVANCE(1554);
      END_STATE();
    case 1223:
      if (lookahead == '1') ADVANCE(1566);
      END_STATE();
    case 1224:
      if (lookahead == '1') ADVANCE(1566);
      if (lookahead == '2') ADVANCE(1566);
      END_STATE();
    case 1225:
      if (lookahead == '1') ADVANCE(1566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1546);
      END_STATE();
    case 1226:
      if (lookahead == '1') ADVANCE(1566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1578);
      END_STATE();
    case 1227:
      if (lookahead == '1') ADVANCE(1117);
      if (lookahead == '4') ADVANCE(1378);
      if (lookahead == '5') ADVANCE(1511);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1267);
      END_STATE();
    case 1228:
      if (lookahead == '1') ADVANCE(1119);
      END_STATE();
    case 1229:
      if (lookahead == '1') ADVANCE(1338);
      END_STATE();
    case 1230:
      if (lookahead == '1') ADVANCE(1373);
      END_STATE();
    case 1231:
      if (lookahead == '1') ADVANCE(1326);
      END_STATE();
    case 1232:
      if (lookahead == '1') ADVANCE(1410);
      if (lookahead == '7') ADVANCE(1434);
      END_STATE();
    case 1233:
      if (lookahead == '1') ADVANCE(1321);
      END_STATE();
    case 1234:
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '4') ADVANCE(1382);
      if (lookahead == '5') ADVANCE(1513);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1278);
      END_STATE();
    case 1235:
      if (lookahead == '1') ADVANCE(1131);
      if (lookahead == '4') ADVANCE(1416);
      END_STATE();
    case 1236:
      if (lookahead == '1') ADVANCE(1339);
      END_STATE();
    case 1237:
      if (lookahead == '1') ADVANCE(1323);
      END_STATE();
    case 1238:
      if (lookahead == '1') ADVANCE(1382);
      END_STATE();
    case 1239:
      if (lookahead == '1') ADVANCE(1128);
      END_STATE();
    case 1240:
      if (lookahead == '1') ADVANCE(1324);
      END_STATE();
    case 1241:
      if (lookahead == '1') ADVANCE(1130);
      END_STATE();
    case 1242:
      if (lookahead == '1') ADVANCE(1325);
      END_STATE();
    case 1243:
      if (lookahead == '1') ADVANCE(1133);
      END_STATE();
    case 1244:
      if (lookahead == '1') ADVANCE(1327);
      END_STATE();
    case 1245:
      if (lookahead == '1') ADVANCE(1447);
      if (lookahead == '3') ADVANCE(1222);
      if (lookahead == '9') ADVANCE(1451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1382);
      END_STATE();
    case 1246:
      if (lookahead == '1') ADVANCE(1447);
      if (lookahead == '3') ADVANCE(1222);
      if (lookahead == '9') ADVANCE(1453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1382);
      END_STATE();
    case 1247:
      if (lookahead == '1') ADVANCE(1447);
      if (lookahead == '3') ADVANCE(1222);
      if (lookahead == '9') ADVANCE(1454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1382);
      END_STATE();
    case 1248:
      if (lookahead == '1') ADVANCE(1447);
      if (lookahead == '9') ADVANCE(1451);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1382);
      END_STATE();
    case 1249:
      if (lookahead == '1') ADVANCE(1447);
      if (lookahead == '9') ADVANCE(1453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1382);
      END_STATE();
    case 1250:
      if (lookahead == '1') ADVANCE(1447);
      if (lookahead == '9') ADVANCE(1454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1382);
      END_STATE();
    case 1251:
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '3') ADVANCE(1936);
      if (lookahead == '4') ADVANCE(1484);
      END_STATE();
    case 1252:
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '3') ADVANCE(1936);
      if (lookahead == '4') ADVANCE(1483);
      END_STATE();
    case 1253:
      if (lookahead == '1') ADVANCE(1328);
      END_STATE();
    case 1254:
      if (lookahead == '1') ADVANCE(1499);
      if (lookahead == '2') ADVANCE(1482);
      END_STATE();
    case 1255:
      if (lookahead == '1') ADVANCE(1137);
      END_STATE();
    case 1256:
      if (lookahead == '1') ADVANCE(1137);
      if (lookahead == '4') ADVANCE(1425);
      END_STATE();
    case 1257:
      if (lookahead == '1') ADVANCE(1351);
      END_STATE();
    case 1258:
      if (lookahead == '1') ADVANCE(1456);
      END_STATE();
    case 1259:
      if (lookahead == '1') ADVANCE(1144);
      if (lookahead == '4') ADVANCE(1426);
      END_STATE();
    case 1260:
      if (lookahead == '1') ADVANCE(1344);
      END_STATE();
    case 1261:
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1428);
      END_STATE();
    case 1262:
      if (lookahead == '1') ADVANCE(1155);
      END_STATE();
    case 1263:
      if (lookahead == '1') ADVANCE(1150);
      if (lookahead == '3') ADVANCE(1936);
      if (lookahead == '4') ADVANCE(1484);
      END_STATE();
    case 1264:
      if (lookahead == '1') ADVANCE(1150);
      if (lookahead == '3') ADVANCE(1936);
      if (lookahead == '4') ADVANCE(1483);
      END_STATE();
    case 1265:
      if (lookahead == '1') ADVANCE(1151);
      if (lookahead == '4') ADVANCE(1303);
      if (lookahead == '8') ADVANCE(1363);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1307);
      END_STATE();
    case 1266:
      if (lookahead == '1') ADVANCE(1401);
      if (lookahead == '7') ADVANCE(1435);
      END_STATE();
    case 1267:
      if (lookahead == '1') ADVANCE(1476);
      if (lookahead == '2') ADVANCE(1480);
      END_STATE();
    case 1268:
      if (lookahead == '1') ADVANCE(1476);
      if (lookahead == '2') ADVANCE(1105);
      END_STATE();
    case 1269:
      if (lookahead == '1') ADVANCE(1398);
      END_STATE();
    case 1270:
      if (lookahead == '1') ADVANCE(1402);
      END_STATE();
    case 1271:
      if (lookahead == '1') ADVANCE(1411);
      if (lookahead == '7') ADVANCE(1436);
      END_STATE();
    case 1272:
      if (lookahead == '1') ADVANCE(1405);
      if (lookahead == '7') ADVANCE(1434);
      END_STATE();
    case 1273:
      if (lookahead == '1') ADVANCE(1477);
      if (lookahead == '2') ADVANCE(1093);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == '6') ADVANCE(1467);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1225);
      END_STATE();
    case 1274:
      if (lookahead == '1') ADVANCE(1477);
      if (lookahead == '2') ADVANCE(1111);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1226);
      END_STATE();
    case 1275:
      if (lookahead == '1') ADVANCE(1477);
      if (lookahead == '2') ADVANCE(1111);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1223);
      END_STATE();
    case 1276:
      if (lookahead == '1') ADVANCE(1404);
      END_STATE();
    case 1277:
      if (lookahead == '1') ADVANCE(1478);
      if (lookahead == '2') ADVANCE(1175);
      END_STATE();
    case 1278:
      if (lookahead == '1') ADVANCE(1478);
      if (lookahead == '2') ADVANCE(1490);
      END_STATE();
    case 1279:
      if (lookahead == '1') ADVANCE(1406);
      END_STATE();
    case 1280:
      if (lookahead == '1') ADVANCE(1479);
      if (lookahead == '2') ADVANCE(1110);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1226);
      END_STATE();
    case 1281:
      if (lookahead == '1') ADVANCE(1479);
      if (lookahead == '2') ADVANCE(1110);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1223);
      END_STATE();
    case 1282:
      if (lookahead == '1') ADVANCE(1479);
      if (lookahead == '2') ADVANCE(1094);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == '6') ADVANCE(1467);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1225);
      END_STATE();
    case 1283:
      if (lookahead == '1') ADVANCE(1479);
      if (lookahead == '2') ADVANCE(1176);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1223);
      END_STATE();
    case 1284:
      if (lookahead == '1') ADVANCE(1479);
      if (lookahead == '2') ADVANCE(1174);
      if (lookahead == '3') ADVANCE(1937);
      if (lookahead == '6') ADVANCE(1467);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1225);
      END_STATE();
    case 1285:
      if (lookahead == '1') ADVANCE(1409);
      END_STATE();
    case 1286:
      if (lookahead == '1') ADVANCE(1412);
      END_STATE();
    case 1287:
      if (lookahead == '1') ADVANCE(1177);
      if (lookahead == '4') ADVANCE(1444);
      if (lookahead == '8') ADVANCE(1364);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1345);
      END_STATE();
    case 1288:
      if (lookahead == '1') ADVANCE(1190);
      if (lookahead == '4') ADVANCE(1452);
      if (lookahead == '8') ADVANCE(1369);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1346);
      END_STATE();
    case 1289:
      if (lookahead == '1') ADVANCE(1193);
      if (lookahead == '4') ADVANCE(1380);
      if (lookahead == '5') ADVANCE(1511);
      if (lookahead == '8') ADVANCE(1309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1268);
      END_STATE();
    case 1290:
      if (lookahead == '1') ADVANCE(1180);
      if (lookahead == '4') ADVANCE(1445);
      if (lookahead == '8') ADVANCE(1368);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1352);
      END_STATE();
    case 1291:
      if (lookahead == '1') ADVANCE(1182);
      if (lookahead == '4') ADVANCE(1446);
      if (lookahead == '8') ADVANCE(1370);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1355);
      END_STATE();
    case 1292:
      if (lookahead == '1') ADVANCE(1185);
      if (lookahead == '4') ADVANCE(1447);
      if (lookahead == '8') ADVANCE(1371);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1357);
      END_STATE();
    case 1293:
      if (lookahead == '1') ADVANCE(1187);
      if (lookahead == '4') ADVANCE(1455);
      if (lookahead == '8') ADVANCE(1372);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1359);
      END_STATE();
    case 1294:
      ADVANCE_MAP(
        '1', 1189,
        '3', 1387,
        '4', 1301,
        '5', 1514,
        '6', 1141,
        '8', 1308,
        '9', 1414,
        'X', 1282,
        'x', 1282,
      );
      END_STATE();
    case 1295:
      ADVANCE_MAP(
        '1', 1192,
        '3', 1387,
        '4', 1389,
        '5', 1512,
        '6', 1141,
        '8', 1315,
        '9', 1414,
        'X', 1274,
        'x', 1274,
      );
      END_STATE();
    case 1296:
      ADVANCE_MAP(
        '1', 1191,
        '3', 1387,
        '4', 1389,
        '5', 1512,
        '6', 1141,
        '8', 1315,
        '9', 1414,
        'X', 1275,
        'x', 1275,
      );
      END_STATE();
    case 1297:
      ADVANCE_MAP(
        '1', 1194,
        '3', 1387,
        '4', 1302,
        '5', 1514,
        '6', 1141,
        '8', 1365,
        '9', 1414,
        'X', 1284,
        'x', 1284,
      );
      END_STATE();
    case 1298:
      ADVANCE_MAP(
        '1', 1108,
        '3', 1387,
        '4', 1392,
        '5', 1514,
        '6', 1141,
        '8', 1315,
        '9', 1414,
        'X', 1281,
        'x', 1281,
      );
      END_STATE();
    case 1299:
      if (lookahead == '2') ADVANCE(1542);
      if (lookahead == '3') ADVANCE(1539);
      if (lookahead == '5') ADVANCE(1543);
      if (lookahead == '7') ADVANCE(1544);
      END_STATE();
    case 1300:
      if (lookahead == '2') ADVANCE(1542);
      if (lookahead == '3') ADVANCE(1563);
      if (lookahead == '5') ADVANCE(1565);
      END_STATE();
    case 1301:
      if (lookahead == '2') ADVANCE(1542);
      if (lookahead == '3') ADVANCE(1575);
      if (lookahead == '5') ADVANCE(1565);
      END_STATE();
    case 1302:
      if (lookahead == '2') ADVANCE(1542);
      if (lookahead == '3') ADVANCE(1575);
      if (lookahead == '5') ADVANCE(1577);
      END_STATE();
    case 1303:
      if (lookahead == '2') ADVANCE(1542);
      if (lookahead == '5') ADVANCE(1547);
      if (lookahead == '7') ADVANCE(1544);
      END_STATE();
    case 1304:
      if (lookahead == '2') ADVANCE(1087);
      if (lookahead == '7') ADVANCE(1316);
      END_STATE();
    case 1305:
      if (lookahead == '2') ADVANCE(1152);
      if (lookahead == '7') ADVANCE(1349);
      END_STATE();
    case 1306:
      if (lookahead == '2') ADVANCE(1121);
      END_STATE();
    case 1307:
      if (lookahead == '2') ADVANCE(1173);
      if (lookahead == '6') ADVANCE(1467);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1940);
      END_STATE();
    case 1308:
      if (lookahead == '2') ADVANCE(1164);
      if (lookahead == '5') ADVANCE(1526);
      if (lookahead == '6') ADVANCE(1432);
      if (lookahead == '7') ADVANCE(1210);
      if (lookahead == '8') ADVANCE(1165);
      if (lookahead == '9') ADVANCE(1489);
      END_STATE();
    case 1309:
      if (lookahead == '2') ADVANCE(1167);
      if (lookahead == '7') ADVANCE(1312);
      END_STATE();
    case 1310:
      if (lookahead == '2') ADVANCE(1104);
      END_STATE();
    case 1311:
      if (lookahead == '2') ADVANCE(1464);
      END_STATE();
    case 1312:
      if (lookahead == '2') ADVANCE(1330);
      END_STATE();
    case 1313:
      if (lookahead == '2') ADVANCE(2154);
      END_STATE();
    case 1314:
      if (lookahead == '2') ADVANCE(1184);
      END_STATE();
    case 1315:
      if (lookahead == '2') ADVANCE(1163);
      if (lookahead == '5') ADVANCE(1526);
      if (lookahead == '6') ADVANCE(1432);
      if (lookahead == '7') ADVANCE(1211);
      if (lookahead == '8') ADVANCE(1165);
      if (lookahead == '9') ADVANCE(1489);
      END_STATE();
    case 1316:
      if (lookahead == '2') ADVANCE(1317);
      END_STATE();
    case 1317:
      if (lookahead == '2') ADVANCE(1543);
      if (lookahead == '5') ADVANCE(1551);
      if (lookahead == '7') ADVANCE(1552);
      END_STATE();
    case 1318:
      if (lookahead == '2') ADVANCE(1332);
      if (lookahead == '9') ADVANCE(1422);
      END_STATE();
    case 1319:
      if (lookahead == '2') ADVANCE(1025);
      END_STATE();
    case 1320:
      if (lookahead == '2') ADVANCE(1546);
      END_STATE();
    case 1321:
      if (lookahead == '2') ADVANCE(1540);
      END_STATE();
    case 1322:
      if (lookahead == '2') ADVANCE(1474);
      if (lookahead == '7') ADVANCE(1362);
      END_STATE();
    case 1323:
      if (lookahead == '2') ADVANCE(1541);
      END_STATE();
    case 1324:
      if (lookahead == '2') ADVANCE(1581);
      END_STATE();
    case 1325:
      if (lookahead == '2') ADVANCE(1580);
      END_STATE();
    case 1326:
      if (lookahead == '2') ADVANCE(1561);
      if (lookahead == '5') ADVANCE(1551);
      if (lookahead == '7') ADVANCE(1552);
      END_STATE();
    case 1327:
      if (lookahead == '2') ADVANCE(1545);
      END_STATE();
    case 1328:
      if (lookahead == '2') ADVANCE(1566);
      END_STATE();
    case 1329:
      if (lookahead == '2') ADVANCE(1566);
      if (lookahead == '3') ADVANCE(1566);
      END_STATE();
    case 1330:
      if (lookahead == '2') ADVANCE(1566);
      if (lookahead == '5') ADVANCE(1579);
      END_STATE();
    case 1331:
      if (lookahead == '2') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1566);
      END_STATE();
    case 1332:
      if (lookahead == '2') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1566);
      END_STATE();
    case 1333:
      if (lookahead == '2') ADVANCE(1566);
      if (lookahead == '9') ADVANCE(1566);
      END_STATE();
    case 1334:
      if (lookahead == '2') ADVANCE(1565);
      if (lookahead == '3') ADVANCE(1566);
      END_STATE();
    case 1335:
      if (lookahead == '2') ADVANCE(1565);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1552);
      END_STATE();
    case 1336:
      if (lookahead == '2') ADVANCE(1565);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1552);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1337:
      if (lookahead == '2') ADVANCE(1565);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1338:
      if (lookahead == '2') ADVANCE(1571);
      if (lookahead == '5') ADVANCE(1572);
      END_STATE();
    case 1339:
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '5') ADVANCE(1583);
      END_STATE();
    case 1340:
      if (lookahead == '2') ADVANCE(1577);
      if (lookahead == '3') ADVANCE(1566);
      END_STATE();
    case 1341:
      if (lookahead == '2') ADVANCE(1577);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1552);
      END_STATE();
    case 1342:
      if (lookahead == '2') ADVANCE(1577);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1552);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1343:
      if (lookahead == '2') ADVANCE(1577);
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1344:
      if (lookahead == '2') ADVANCE(1578);
      END_STATE();
    case 1345:
      if (lookahead == '2') ADVANCE(1178);
      END_STATE();
    case 1346:
      if (lookahead == '2') ADVANCE(1179);
      END_STATE();
    case 1347:
      if (lookahead == '2') ADVANCE(1338);
      END_STATE();
    case 1348:
      if (lookahead == '2') ADVANCE(1326);
      END_STATE();
    case 1349:
      if (lookahead == '2') ADVANCE(1321);
      END_STATE();
    case 1350:
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1954);
      END_STATE();
    case 1351:
      if (lookahead == '2') ADVANCE(1585);
      END_STATE();
    case 1352:
      if (lookahead == '2') ADVANCE(1181);
      END_STATE();
    case 1353:
      if (lookahead == '2') ADVANCE(1339);
      END_STATE();
    case 1354:
      if (lookahead == '2') ADVANCE(1323);
      END_STATE();
    case 1355:
      if (lookahead == '2') ADVANCE(1183);
      END_STATE();
    case 1356:
      if (lookahead == '2') ADVANCE(1324);
      END_STATE();
    case 1357:
      if (lookahead == '2') ADVANCE(1186);
      END_STATE();
    case 1358:
      if (lookahead == '2') ADVANCE(1325);
      END_STATE();
    case 1359:
      if (lookahead == '2') ADVANCE(1188);
      END_STATE();
    case 1360:
      if (lookahead == '2') ADVANCE(1328);
      END_STATE();
    case 1361:
      if (lookahead == '2') ADVANCE(1351);
      END_STATE();
    case 1362:
      if (lookahead == '2') ADVANCE(1456);
      END_STATE();
    case 1363:
      if (lookahead == '2') ADVANCE(1157);
      if (lookahead == '7') ADVANCE(1348);
      END_STATE();
    case 1364:
      if (lookahead == '2') ADVANCE(1158);
      if (lookahead == '7') ADVANCE(1354);
      END_STATE();
    case 1365:
      if (lookahead == '2') ADVANCE(1172);
      if (lookahead == '5') ADVANCE(1526);
      if (lookahead == '6') ADVANCE(1432);
      if (lookahead == '7') ADVANCE(1212);
      if (lookahead == '8') ADVANCE(1165);
      if (lookahead == '9') ADVANCE(1489);
      END_STATE();
    case 1366:
      if (lookahead == '2') ADVANCE(1168);
      if (lookahead == '7') ADVANCE(1347);
      END_STATE();
    case 1367:
      if (lookahead == '2') ADVANCE(1171);
      if (lookahead == '5') ADVANCE(1526);
      if (lookahead == '6') ADVANCE(1432);
      if (lookahead == '7') ADVANCE(1213);
      if (lookahead == '8') ADVANCE(1165);
      if (lookahead == '9') ADVANCE(1489);
      END_STATE();
    case 1368:
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '7') ADVANCE(1356);
      END_STATE();
    case 1369:
      if (lookahead == '2') ADVANCE(1169);
      if (lookahead == '7') ADVANCE(1353);
      END_STATE();
    case 1370:
      if (lookahead == '2') ADVANCE(1160);
      if (lookahead == '7') ADVANCE(1358);
      END_STATE();
    case 1371:
      if (lookahead == '2') ADVANCE(1166);
      if (lookahead == '7') ADVANCE(1360);
      END_STATE();
    case 1372:
      if (lookahead == '2') ADVANCE(1170);
      if (lookahead == '7') ADVANCE(1361);
      END_STATE();
    case 1373:
      if (lookahead == '3') ADVANCE(1378);
      END_STATE();
    case 1374:
      if (lookahead == '3') ADVANCE(1375);
      if (lookahead == '8') ADVANCE(1481);
      END_STATE();
    case 1375:
      if (lookahead == '3') ADVANCE(1539);
      if (lookahead == '4') ADVANCE(1543);
      END_STATE();
    case 1376:
      if (lookahead == '3') ADVANCE(1222);
      if (lookahead == '9') ADVANCE(1439);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1929);
      END_STATE();
    case 1377:
      if (lookahead == '3') ADVANCE(1222);
      if (lookahead == '9') ADVANCE(1462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1929);
      END_STATE();
    case 1378:
      if (lookahead == '3') ADVANCE(1538);
      END_STATE();
    case 1379:
      if (lookahead == '3') ADVANCE(1538);
      if (lookahead == '4') ADVANCE(1566);
      END_STATE();
    case 1380:
      if (lookahead == '3') ADVANCE(1538);
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1579);
      END_STATE();
    case 1381:
      if (lookahead == '3') ADVANCE(1554);
      END_STATE();
    case 1382:
      if (lookahead == '3') ADVANCE(1566);
      END_STATE();
    case 1383:
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '4') ADVANCE(1566);
      END_STATE();
    case 1384:
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '4') ADVANCE(1566);
      if (lookahead == '5') ADVANCE(1566);
      END_STATE();
    case 1385:
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '4') ADVANCE(1571);
      END_STATE();
    case 1386:
      if (lookahead == '3') ADVANCE(1566);
      if (lookahead == '5') ADVANCE(1571);
      if (lookahead == '7') ADVANCE(1572);
      END_STATE();
    case 1387:
      if (lookahead == '3') ADVANCE(1573);
      END_STATE();
    case 1388:
      if (lookahead == '3') ADVANCE(1563);
      if (lookahead == '4') ADVANCE(1565);
      END_STATE();
    case 1389:
      if (lookahead == '3') ADVANCE(1563);
      if (lookahead == '5') ADVANCE(1565);
      END_STATE();
    case 1390:
      if (lookahead == '3') ADVANCE(1575);
      if (lookahead == '4') ADVANCE(1565);
      END_STATE();
    case 1391:
      if (lookahead == '3') ADVANCE(1575);
      if (lookahead == '4') ADVANCE(1577);
      END_STATE();
    case 1392:
      if (lookahead == '3') ADVANCE(1575);
      if (lookahead == '5') ADVANCE(1565);
      END_STATE();
    case 1393:
      if (lookahead == '3') ADVANCE(1575);
      if (lookahead == '5') ADVANCE(1577);
      END_STATE();
    case 1394:
      if (lookahead == '3') ADVANCE(1381);
      END_STATE();
    case 1395:
      if (lookahead == '3') ADVANCE(1415);
      END_STATE();
    case 1396:
      if (lookahead == '3') ADVANCE(1388);
      END_STATE();
    case 1397:
      if (lookahead == '3') ADVANCE(1421);
      if (lookahead == '8') ADVANCE(1481);
      END_STATE();
    case 1398:
      if (lookahead == '3') ADVANCE(1382);
      END_STATE();
    case 1399:
      if (lookahead == '3') ADVANCE(1382);
      if (lookahead == '6') ADVANCE(1382);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1350);
      END_STATE();
    case 1400:
      if (lookahead == '3') ADVANCE(1382);
      if (lookahead == '7') ADVANCE(1447);
      END_STATE();
    case 1401:
      if (lookahead == '3') ADVANCE(1385);
      if (lookahead == '8') ADVANCE(1486);
      END_STATE();
    case 1402:
      if (lookahead == '3') ADVANCE(1417);
      END_STATE();
    case 1403:
      if (lookahead == '3') ADVANCE(1390);
      END_STATE();
    case 1404:
      if (lookahead == '3') ADVANCE(1418);
      END_STATE();
    case 1405:
      if (lookahead == '3') ADVANCE(1379);
      if (lookahead == '8') ADVANCE(1485);
      END_STATE();
    case 1406:
      if (lookahead == '3') ADVANCE(1420);
      END_STATE();
    case 1407:
      if (lookahead == '3') ADVANCE(1944);
      END_STATE();
    case 1408:
      if (lookahead == '3') ADVANCE(1391);
      END_STATE();
    case 1409:
      if (lookahead == '3') ADVANCE(1422);
      END_STATE();
    case 1410:
      if (lookahead == '3') ADVANCE(1422);
      if (lookahead == '8') ADVANCE(1485);
      END_STATE();
    case 1411:
      if (lookahead == '3') ADVANCE(1427);
      if (lookahead == '8') ADVANCE(1487);
      END_STATE();
    case 1412:
      if (lookahead == '3') ADVANCE(1430);
      END_STATE();
    case 1413:
      if (lookahead == '4') ADVANCE(1419);
      END_STATE();
    case 1414:
      if (lookahead == '4') ADVANCE(1515);
      if (lookahead == '6') ADVANCE(1400);
      if (lookahead == '7') ADVANCE(1318);
      END_STATE();
    case 1415:
      if (lookahead == '4') ADVANCE(1540);
      END_STATE();
    case 1416:
      if (lookahead == '4') ADVANCE(1549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 1417:
      if (lookahead == '4') ADVANCE(1541);
      END_STATE();
    case 1418:
      if (lookahead == '4') ADVANCE(1581);
      END_STATE();
    case 1419:
      if (lookahead == '4') ADVANCE(1556);
      END_STATE();
    case 1420:
      if (lookahead == '4') ADVANCE(1580);
      END_STATE();
    case 1421:
      if (lookahead == '4') ADVANCE(1562);
      END_STATE();
    case 1422:
      if (lookahead == '4') ADVANCE(1566);
      END_STATE();
    case 1423:
      if (lookahead == '4') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1566);
      END_STATE();
    case 1424:
      if (lookahead == '4') ADVANCE(1566);
      if (lookahead == '8') ADVANCE(1566);
      END_STATE();
    case 1425:
      if (lookahead == '4') ADVANCE(1579);
      END_STATE();
    case 1426:
      if (lookahead == '4') ADVANCE(1572);
      END_STATE();
    case 1427:
      if (lookahead == '4') ADVANCE(1584);
      END_STATE();
    case 1428:
      if (lookahead == '4') ADVANCE(1583);
      END_STATE();
    case 1429:
      if (lookahead == '4') ADVANCE(1443);
      END_STATE();
    case 1430:
      if (lookahead == '4') ADVANCE(1585);
      END_STATE();
    case 1431:
      if (lookahead == '4') ADVANCE(1586);
      END_STATE();
    case 1432:
      if (lookahead == '4') ADVANCE(1463);
      if (lookahead == '6') ADVANCE(1138);
      END_STATE();
    case 1433:
      if (lookahead == '4') ADVANCE(1328);
      END_STATE();
    case 1434:
      if (lookahead == '4') ADVANCE(1425);
      END_STATE();
    case 1435:
      if (lookahead == '4') ADVANCE(1426);
      END_STATE();
    case 1436:
      if (lookahead == '4') ADVANCE(1428);
      END_STATE();
    case 1437:
      if (lookahead == '4') ADVANCE(1431);
      END_STATE();
    case 1438:
      if (lookahead == '5') ADVANCE(1329);
      END_STATE();
    case 1439:
      if (lookahead == '5') ADVANCE(1539);
      if (lookahead == '6') ADVANCE(1543);
      END_STATE();
    case 1440:
      if (lookahead == '5') ADVANCE(1540);
      END_STATE();
    case 1441:
      if (lookahead == '5') ADVANCE(1538);
      END_STATE();
    case 1442:
      if (lookahead == '5') ADVANCE(1538);
      if (lookahead == '6') ADVANCE(1566);
      END_STATE();
    case 1443:
      if (lookahead == '5') ADVANCE(1548);
      END_STATE();
    case 1444:
      if (lookahead == '5') ADVANCE(1541);
      END_STATE();
    case 1445:
      if (lookahead == '5') ADVANCE(1581);
      END_STATE();
    case 1446:
      if (lookahead == '5') ADVANCE(1580);
      END_STATE();
    case 1447:
      if (lookahead == '5') ADVANCE(1566);
      END_STATE();
    case 1448:
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1566);
      END_STATE();
    case 1449:
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '6') ADVANCE(1571);
      END_STATE();
    case 1450:
      if (lookahead == '5') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1579);
      END_STATE();
    case 1451:
      if (lookahead == '5') ADVANCE(1563);
      if (lookahead == '6') ADVANCE(1565);
      END_STATE();
    case 1452:
      if (lookahead == '5') ADVANCE(1584);
      if (lookahead == '7') ADVANCE(1583);
      END_STATE();
    case 1453:
      if (lookahead == '5') ADVANCE(1575);
      if (lookahead == '6') ADVANCE(1565);
      END_STATE();
    case 1454:
      if (lookahead == '5') ADVANCE(1575);
      if (lookahead == '6') ADVANCE(1577);
      END_STATE();
    case 1455:
      if (lookahead == '5') ADVANCE(1585);
      END_STATE();
    case 1456:
      if (lookahead == '5') ADVANCE(1586);
      END_STATE();
    case 1457:
      if (lookahead == '6') ADVANCE(1948);
      END_STATE();
    case 1458:
      if (lookahead == '6') ADVANCE(1540);
      END_STATE();
    case 1459:
      if (lookahead == '6') ADVANCE(1541);
      END_STATE();
    case 1460:
      if (lookahead == '6') ADVANCE(1581);
      END_STATE();
    case 1461:
      if (lookahead == '6') ADVANCE(1580);
      END_STATE();
    case 1462:
      if (lookahead == '6') ADVANCE(1562);
      END_STATE();
    case 1463:
      if (lookahead == '6') ADVANCE(1566);
      END_STATE();
    case 1464:
      if (lookahead == '6') ADVANCE(1566);
      if (lookahead == '7') ADVANCE(1566);
      END_STATE();
    case 1465:
      if (lookahead == '6') ADVANCE(1584);
      END_STATE();
    case 1466:
      if (lookahead == '6') ADVANCE(1516);
      END_STATE();
    case 1467:
      if (lookahead == '6') ADVANCE(1942);
      END_STATE();
    case 1468:
      if (lookahead == '6') ADVANCE(1448);
      END_STATE();
    case 1469:
      if (lookahead == '6') ADVANCE(1223);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1407);
      END_STATE();
    case 1470:
      if (lookahead == '6') ADVANCE(1585);
      END_STATE();
    case 1471:
      if (lookahead == '6') ADVANCE(1520);
      END_STATE();
    case 1472:
      if (lookahead == '6') ADVANCE(1523);
      END_STATE();
    case 1473:
      if (lookahead == '6') ADVANCE(1522);
      END_STATE();
    case 1474:
      if (lookahead == '6') ADVANCE(1156);
      END_STATE();
    case 1475:
      if (lookahead == '6') ADVANCE(1524);
      END_STATE();
    case 1476:
      if (lookahead == '6') ADVANCE(1949);
      END_STATE();
    case 1477:
      if (lookahead == '6') ADVANCE(1950);
      END_STATE();
    case 1478:
      if (lookahead == '6') ADVANCE(1951);
      END_STATE();
    case 1479:
      if (lookahead == '6') ADVANCE(1952);
      END_STATE();
    case 1480:
      if (lookahead == '7') ADVANCE(1531);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1538);
      END_STATE();
    case 1481:
      if (lookahead == '7') ADVANCE(1555);
      END_STATE();
    case 1482:
      if (lookahead == '7') ADVANCE(1566);
      END_STATE();
    case 1483:
      if (lookahead == '7') ADVANCE(1566);
      if (lookahead == '8') ADVANCE(1566);
      if (lookahead == '9') ADVANCE(1566);
      END_STATE();
    case 1484:
      if (lookahead == '7') ADVANCE(1566);
      if (lookahead == '8') ADVANCE(1566);
      if (lookahead == '9') ADVANCE(1566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 1485:
      if (lookahead == '7') ADVANCE(1579);
      END_STATE();
    case 1486:
      if (lookahead == '7') ADVANCE(1572);
      END_STATE();
    case 1487:
      if (lookahead == '7') ADVANCE(1583);
      END_STATE();
    case 1488:
      if (lookahead == '7') ADVANCE(1586);
      END_STATE();
    case 1489:
      if (lookahead == '7') ADVANCE(1522);
      END_STATE();
    case 1490:
      if (lookahead == '7') ADVANCE(1535);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1566);
      END_STATE();
    case 1491:
      if (lookahead == '8') ADVANCE(1466);
      END_STATE();
    case 1492:
      if (lookahead == '8') ADVANCE(1543);
      if (lookahead == '9') ADVANCE(1543);
      END_STATE();
    case 1493:
      if (lookahead == '8') ADVANCE(1540);
      if (lookahead == '9') ADVANCE(1540);
      END_STATE();
    case 1494:
      if (lookahead == '8') ADVANCE(1541);
      if (lookahead == '9') ADVANCE(1541);
      END_STATE();
    case 1495:
      if (lookahead == '8') ADVANCE(1581);
      if (lookahead == '9') ADVANCE(1581);
      END_STATE();
    case 1496:
      if (lookahead == '8') ADVANCE(1553);
      if (lookahead == '9') ADVANCE(1557);
      END_STATE();
    case 1497:
      if (lookahead == '8') ADVANCE(1556);
      END_STATE();
    case 1498:
      if (lookahead == '8') ADVANCE(1580);
      if (lookahead == '9') ADVANCE(1580);
      END_STATE();
    case 1499:
      if (lookahead == '8') ADVANCE(1566);
      if (lookahead == '9') ADVANCE(1566);
      END_STATE();
    case 1500:
      if (lookahead == '8') ADVANCE(1565);
      if (lookahead == '9') ADVANCE(1565);
      END_STATE();
    case 1501:
      if (lookahead == '8') ADVANCE(1579);
      END_STATE();
    case 1502:
      if (lookahead == '8') ADVANCE(1571);
      if (lookahead == '9') ADVANCE(1571);
      END_STATE();
    case 1503:
      if (lookahead == '8') ADVANCE(1572);
      END_STATE();
    case 1504:
      if (lookahead == '8') ADVANCE(1584);
      if (lookahead == '9') ADVANCE(1584);
      END_STATE();
    case 1505:
      if (lookahead == '8') ADVANCE(1583);
      END_STATE();
    case 1506:
      if (lookahead == '8') ADVANCE(1577);
      if (lookahead == '9') ADVANCE(1577);
      END_STATE();
    case 1507:
      if (lookahead == '8') ADVANCE(1585);
      if (lookahead == '9') ADVANCE(1585);
      END_STATE();
    case 1508:
      if (lookahead == '8') ADVANCE(1586);
      END_STATE();
    case 1509:
      if (lookahead == '8') ADVANCE(1521);
      END_STATE();
    case 1510:
      if (lookahead == '8') ADVANCE(1488);
      END_STATE();
    case 1511:
      if (lookahead == '8') ADVANCE(1471);
      END_STATE();
    case 1512:
      if (lookahead == '8') ADVANCE(1472);
      END_STATE();
    case 1513:
      if (lookahead == '8') ADVANCE(1473);
      END_STATE();
    case 1514:
      if (lookahead == '8') ADVANCE(1475);
      END_STATE();
    case 1515:
      if (lookahead == '9') ADVANCE(1331);
      END_STATE();
    case 1516:
      if (lookahead == '9') ADVANCE(1539);
      END_STATE();
    case 1517:
      if (lookahead == '9') ADVANCE(1458);
      END_STATE();
    case 1518:
      if (lookahead == '9') ADVANCE(1224);
      if (lookahead == ';') ADVANCE(2074);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1463);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1423);
      END_STATE();
    case 1519:
      if (lookahead == '9') ADVANCE(1546);
      END_STATE();
    case 1520:
      if (lookahead == '9') ADVANCE(1538);
      END_STATE();
    case 1521:
      if (lookahead == '9') ADVANCE(1545);
      END_STATE();
    case 1522:
      if (lookahead == '9') ADVANCE(1566);
      END_STATE();
    case 1523:
      if (lookahead == '9') ADVANCE(1563);
      END_STATE();
    case 1524:
      if (lookahead == '9') ADVANCE(1575);
      END_STATE();
    case 1525:
      if (lookahead == '9') ADVANCE(1578);
      END_STATE();
    case 1526:
      if (lookahead == '9') ADVANCE(1383);
      END_STATE();
    case 1527:
      if (lookahead == '9') ADVANCE(1459);
      END_STATE();
    case 1528:
      if (lookahead == '9') ADVANCE(1449);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1932);
      END_STATE();
    case 1529:
      if (lookahead == '9') ADVANCE(1460);
      END_STATE();
    case 1530:
      if (lookahead == '9') ADVANCE(1461);
      END_STATE();
    case 1531:
      if (lookahead == '9') ADVANCE(1441);
      END_STATE();
    case 1532:
      if (lookahead == '9') ADVANCE(1442);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1931);
      END_STATE();
    case 1533:
      if (lookahead == '9') ADVANCE(1463);
      END_STATE();
    case 1534:
      if (lookahead == '9') ADVANCE(1463);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1931);
      END_STATE();
    case 1535:
      if (lookahead == '9') ADVANCE(1447);
      END_STATE();
    case 1536:
      if (lookahead == '9') ADVANCE(1465);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1933);
      END_STATE();
    case 1537:
      if (lookahead == '9') ADVANCE(1470);
      END_STATE();
    case 1538:
      if (lookahead == ';') ADVANCE(2058);
      END_STATE();
    case 1539:
      if (lookahead == ';') ADVANCE(2061);
      END_STATE();
    case 1540:
      if (lookahead == ';') ADVANCE(1961);
      END_STATE();
    case 1541:
      if (lookahead == ';') ADVANCE(1017);
      END_STATE();
    case 1542:
      if (lookahead == ';') ADVANCE(2132);
      END_STATE();
    case 1543:
      if (lookahead == ';') ADVANCE(2048);
      END_STATE();
    case 1544:
      if (lookahead == ';') ADVANCE(2114);
      END_STATE();
    case 1545:
      if (lookahead == ';') ADVANCE(2156);
      END_STATE();
    case 1546:
      if (lookahead == ';') ADVANCE(2129);
      END_STATE();
    case 1547:
      if (lookahead == ';') ADVANCE(2085);
      END_STATE();
    case 1548:
      if (lookahead == ';') ADVANCE(2148);
      END_STATE();
    case 1549:
      if (lookahead == ';') ADVANCE(2118);
      END_STATE();
    case 1550:
      if (lookahead == ';') ADVANCE(2144);
      END_STATE();
    case 1551:
      if (lookahead == ';') ADVANCE(2116);
      END_STATE();
    case 1552:
      if (lookahead == ';') ADVANCE(2136);
      END_STATE();
    case 1553:
      if (lookahead == ';') ADVANCE(2089);
      END_STATE();
    case 1554:
      if (lookahead == ';') ADVANCE(2140);
      END_STATE();
    case 1555:
      if (lookahead == ';') ADVANCE(2120);
      END_STATE();
    case 1556:
      if (lookahead == ';') ADVANCE(2122);
      END_STATE();
    case 1557:
      if (lookahead == ';') ADVANCE(2091);
      END_STATE();
    case 1558:
      if (lookahead == ';') ADVANCE(2093);
      END_STATE();
    case 1559:
      if (lookahead == ';') ADVANCE(2095);
      END_STATE();
    case 1560:
      if (lookahead == ';') ADVANCE(2097);
      END_STATE();
    case 1561:
      if (lookahead == ';') ADVANCE(2087);
      END_STATE();
    case 1562:
      if (lookahead == ';') ADVANCE(2099);
      END_STATE();
    case 1563:
      if (lookahead == ';') ADVANCE(1072);
      END_STATE();
    case 1564:
      if (lookahead == ';') ADVANCE(1072);
      if (lookahead == 'b') ADVANCE(1566);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == 'm') ADVANCE(1775);
      END_STATE();
    case 1565:
      if (lookahead == ';') ADVANCE(2073);
      END_STATE();
    case 1566:
      if (lookahead == ';') ADVANCE(2063);
      END_STATE();
    case 1567:
      if (lookahead == ';') ADVANCE(2063);
      if (lookahead == 'a') ADVANCE(1831);
      END_STATE();
    case 1568:
      if (lookahead == ';') ADVANCE(2063);
      if (lookahead == 'f') ADVANCE(1880);
      if (lookahead == 'q') ADVANCE(1566);
      END_STATE();
    case 1569:
      if (lookahead == ';') ADVANCE(2063);
      if (lookahead == 'o') ADVANCE(1915);
      END_STATE();
    case 1570:
      if (lookahead == ';') ADVANCE(2063);
      if (lookahead == 't') ADVANCE(1794);
      END_STATE();
    case 1571:
      if (lookahead == ';') ADVANCE(2055);
      END_STATE();
    case 1572:
      if (lookahead == ';') ADVANCE(1077);
      END_STATE();
    case 1573:
      if (lookahead == ';') ADVANCE(2074);
      END_STATE();
    case 1574:
      if (lookahead == ';') ADVANCE(1073);
      END_STATE();
    case 1575:
      if (lookahead == ';') ADVANCE(2062);
      END_STATE();
    case 1576:
      if (lookahead == ';') ADVANCE(2062);
      if (lookahead == 'b') ADVANCE(1566);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == 'm') ADVANCE(1775);
      END_STATE();
    case 1577:
      if (lookahead == ';') ADVANCE(2050);
      END_STATE();
    case 1578:
      if (lookahead == ';') ADVANCE(2127);
      END_STATE();
    case 1579:
      if (lookahead == ';') ADVANCE(1079);
      END_STATE();
    case 1580:
      if (lookahead == ';') ADVANCE(1962);
      END_STATE();
    case 1581:
      if (lookahead == ';') ADVANCE(1018);
      END_STATE();
    case 1582:
      if (lookahead == ';') ADVANCE(2075);
      END_STATE();
    case 1583:
      if (lookahead == ';') ADVANCE(1022);
      END_STATE();
    case 1584:
      if (lookahead == ';') ADVANCE(1021);
      END_STATE();
    case 1585:
      if (lookahead == ';') ADVANCE(1024);
      END_STATE();
    case 1586:
      if (lookahead == ';') ADVANCE(1023);
      END_STATE();
    case 1587:
      if (lookahead == '=') ADVANCE(2063);
      END_STATE();
    case 1588:
      if (lookahead == 'A') ADVANCE(1832);
      END_STATE();
    case 1589:
      if (lookahead == 'A') ADVANCE(1832);
      if (lookahead == 'R') ADVANCE(1736);
      END_STATE();
    case 1590:
      if (lookahead == 'A') ADVANCE(1832);
      if (lookahead == 'T') ADVANCE(1677);
      if (lookahead == 'p') ADVANCE(1678);
      END_STATE();
    case 1591:
      if (lookahead == 'L') ADVANCE(1680);
      if (lookahead == 'R') ADVANCE(1736);
      if (lookahead == 'U') ADVANCE(1809);
      END_STATE();
    case 1592:
      if (lookahead == 'M') ADVANCE(1743);
      END_STATE();
    case 1593:
      if (lookahead == 'N') ADVANCE(2063);
      END_STATE();
    case 1594:
      if (lookahead == 'P') ADVANCE(1765);
      END_STATE();
    case 1595:
      if (lookahead == 'R') ADVANCE(1736);
      END_STATE();
    case 1596:
      if (lookahead == 'a') ADVANCE(1839);
      END_STATE();
    case 1597:
      if (lookahead == 'a') ADVANCE(1642);
      END_STATE();
    case 1598:
      if (lookahead == 'a') ADVANCE(1746);
      if (lookahead == 'y') ADVANCE(1817);
      END_STATE();
    case 1599:
      if (lookahead == 'a') ADVANCE(1746);
      if (lookahead == 'y') ADVANCE(1822);
      END_STATE();
    case 1600:
      if (lookahead == 'a') ADVANCE(1641);
      if (lookahead == 'd') ADVANCE(1631);
      if (lookahead == 'e') ADVANCE(1624);
      if (lookahead == 'v') ADVANCE(1759);
      END_STATE();
    case 1601:
      if (lookahead == 'a') ADVANCE(1641);
      if (lookahead == 'd') ADVANCE(1636);
      if (lookahead == 'e') ADVANCE(1624);
      if (lookahead == 'v') ADVANCE(1759);
      END_STATE();
    case 1602:
      if (lookahead == 'a') ADVANCE(1840);
      END_STATE();
    case 1603:
      if (lookahead == 'a') ADVANCE(1745);
      if (lookahead == 'y') ADVANCE(1806);
      END_STATE();
    case 1604:
      if (lookahead == 'a') ADVANCE(1745);
      if (lookahead == 'y') ADVANCE(1810);
      END_STATE();
    case 1605:
      if (lookahead == 'a') ADVANCE(1827);
      END_STATE();
    case 1606:
      if (lookahead == 'a') ADVANCE(1827);
      if (lookahead == 'i') ADVANCE(1706);
      END_STATE();
    case 1607:
      if (lookahead == 'a') ADVANCE(1827);
      if (lookahead == 'p') ADVANCE(1616);
      END_STATE();
    case 1608:
      if (lookahead == 'a') ADVANCE(1827);
      if (lookahead == 'y') ADVANCE(1817);
      END_STATE();
    case 1609:
      if (lookahead == 'a') ADVANCE(1827);
      if (lookahead == 'y') ADVANCE(1822);
      END_STATE();
    case 1610:
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead == 'd') ADVANCE(1631);
      if (lookahead == 'i') ADVANCE(1654);
      if (lookahead == 'n') ADVANCE(1811);
      if (lookahead == 'p') ADVANCE(1566);
      END_STATE();
    case 1611:
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead == 'd') ADVANCE(1631);
      if (lookahead == 'i') ADVANCE(1787);
      if (lookahead == 'n') ADVANCE(1811);
      if (lookahead == 'p') ADVANCE(1566);
      END_STATE();
    case 1612:
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead == 'd') ADVANCE(1636);
      if (lookahead == 'i') ADVANCE(1655);
      if (lookahead == 'n') ADVANCE(1811);
      if (lookahead == 'p') ADVANCE(1566);
      END_STATE();
    case 1613:
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead == 'd') ADVANCE(1636);
      if (lookahead == 'i') ADVANCE(1791);
      if (lookahead == 'n') ADVANCE(1811);
      if (lookahead == 'p') ADVANCE(1566);
      END_STATE();
    case 1614:
      if (lookahead == 'a') ADVANCE(1769);
      if (lookahead == 'e') ADVANCE(1695);
      END_STATE();
    case 1615:
      if (lookahead == 'a') ADVANCE(1769);
      if (lookahead == 'i') ADVANCE(1704);
      END_STATE();
    case 1616:
      if (lookahead == 'a') ADVANCE(1832);
      END_STATE();
    case 1617:
      if (lookahead == 'a') ADVANCE(1832);
      if (lookahead == 'r') ADVANCE(1741);
      END_STATE();
    case 1618:
      if (lookahead == 'a') ADVANCE(1764);
      END_STATE();
    case 1619:
      if (lookahead == 'a') ADVANCE(1831);
      END_STATE();
    case 1620:
      if (lookahead == 'a') ADVANCE(1566);
      END_STATE();
    case 1621:
      if (lookahead == 'a') ADVANCE(1761);
      if (lookahead == 'y') ADVANCE(1817);
      END_STATE();
    case 1622:
      if (lookahead == 'a') ADVANCE(1861);
      END_STATE();
    case 1623:
      if (lookahead == 'a') ADVANCE(1757);
      END_STATE();
    case 1624:
      if (lookahead == 'a') ADVANCE(1833);
      END_STATE();
    case 1625:
      if (lookahead == 'a') ADVANCE(1863);
      END_STATE();
    case 1626:
      if (lookahead == 'a') ADVANCE(1865);
      END_STATE();
    case 1627:
      if (lookahead == 'a') ADVANCE(1867);
      END_STATE();
    case 1628:
      if (lookahead == 'a') ADVANCE(1868);
      END_STATE();
    case 1629:
      if (lookahead == 'a') ADVANCE(1869);
      END_STATE();
    case 1630:
      if (lookahead == 'a') ADVANCE(1870);
      END_STATE();
    case 1631:
      if (lookahead == 'a') ADVANCE(1871);
      END_STATE();
    case 1632:
      if (lookahead == 'a') ADVANCE(1872);
      END_STATE();
    case 1633:
      if (lookahead == 'a') ADVANCE(1873);
      END_STATE();
    case 1634:
      if (lookahead == 'a') ADVANCE(1874);
      END_STATE();
    case 1635:
      if (lookahead == 'a') ADVANCE(1875);
      END_STATE();
    case 1636:
      if (lookahead == 'a') ADVANCE(1876);
      END_STATE();
    case 1637:
      if (lookahead == 'a') ADVANCE(1860);
      END_STATE();
    case 1638:
      if (lookahead == 'a') ADVANCE(1762);
      END_STATE();
    case 1639:
      if (lookahead == 'a') ADVANCE(1645);
      END_STATE();
    case 1640:
      if (lookahead == 'a') ADVANCE(1646);
      END_STATE();
    case 1641:
      if (lookahead == 'b') ADVANCE(1750);
      END_STATE();
    case 1642:
      if (lookahead == 'c') ADVANCE(1217);
      END_STATE();
    case 1643:
      if (lookahead == 'c') ADVANCE(1751);
      END_STATE();
    case 1644:
      if (lookahead == 'c') ADVANCE(1753);
      END_STATE();
    case 1645:
      if (lookahead == 'c') ADVANCE(1244);
      END_STATE();
    case 1646:
      if (lookahead == 'c') ADVANCE(1260);
      END_STATE();
    case 1647:
      if (lookahead == 'd') ADVANCE(1602);
      END_STATE();
    case 1648:
      if (lookahead == 'd') ADVANCE(1602);
      if (lookahead == 'i') ADVANCE(1652);
      END_STATE();
    case 1649:
      if (lookahead == 'd') ADVANCE(1800);
      if (lookahead == 'p') ADVANCE(1765);
      END_STATE();
    case 1650:
      if (lookahead == 'd') ADVANCE(1622);
      END_STATE();
    case 1651:
      if (lookahead == 'd') ADVANCE(1622);
      if (lookahead == 'i') ADVANCE(1781);
      END_STATE();
    case 1652:
      if (lookahead == 'd') ADVANCE(1596);
      if (lookahead == 'n') ADVANCE(1892);
      END_STATE();
    case 1653:
      if (lookahead == 'd') ADVANCE(1596);
      if (lookahead == 'n') ADVANCE(1902);
      END_STATE();
    case 1654:
      if (lookahead == 'd') ADVANCE(1596);
      if (lookahead == 'n') ADVANCE(1907);
      END_STATE();
    case 1655:
      if (lookahead == 'd') ADVANCE(1596);
      if (lookahead == 'n') ADVANCE(1911);
      END_STATE();
    case 1656:
      if (lookahead == 'd') ADVANCE(1626);
      END_STATE();
    case 1657:
      if (lookahead == 'd') ADVANCE(1626);
      if (lookahead == 'i') ADVANCE(1782);
      END_STATE();
    case 1658:
      if (lookahead == 'd') ADVANCE(1627);
      END_STATE();
    case 1659:
      if (lookahead == 'd') ADVANCE(1627);
      if (lookahead == 'i') ADVANCE(1783);
      END_STATE();
    case 1660:
      if (lookahead == 'd') ADVANCE(1628);
      if (lookahead == 'i') ADVANCE(1653);
      END_STATE();
    case 1661:
      if (lookahead == 'd') ADVANCE(1629);
      END_STATE();
    case 1662:
      if (lookahead == 'd') ADVANCE(1630);
      END_STATE();
    case 1663:
      if (lookahead == 'd') ADVANCE(1630);
      if (lookahead == 'i') ADVANCE(1784);
      END_STATE();
    case 1664:
      if (lookahead == 'd') ADVANCE(1632);
      END_STATE();
    case 1665:
      if (lookahead == 'd') ADVANCE(1632);
      if (lookahead == 'i') ADVANCE(1786);
      END_STATE();
    case 1666:
      if (lookahead == 'd') ADVANCE(1633);
      END_STATE();
    case 1667:
      if (lookahead == 'd') ADVANCE(1633);
      if (lookahead == 'i') ADVANCE(1788);
      END_STATE();
    case 1668:
      if (lookahead == 'd') ADVANCE(1634);
      END_STATE();
    case 1669:
      if (lookahead == 'd') ADVANCE(1634);
      if (lookahead == 'i') ADVANCE(1789);
      END_STATE();
    case 1670:
      if (lookahead == 'd') ADVANCE(1635);
      END_STATE();
    case 1671:
      if (lookahead == 'd') ADVANCE(1635);
      if (lookahead == 'i') ADVANCE(1790);
      END_STATE();
    case 1672:
      if (lookahead == 'e') ADVANCE(1568);
      if (lookahead == 'l') ADVANCE(1883);
      if (lookahead == 'o') ADVANCE(1914);
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 1673:
      if (lookahead == 'e') ADVANCE(1568);
      if (lookahead == 'l') ADVANCE(1883);
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 1674:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 1675:
      if (lookahead == 'e') ADVANCE(1829);
      if (lookahead == 'l') ADVANCE(1895);
      if (lookahead == 'm') ADVANCE(1566);
      if (lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1676:
      if (lookahead == 'e') ADVANCE(1829);
      if (lookahead == 'l') ADVANCE(1898);
      if (lookahead == 'm') ADVANCE(1566);
      if (lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1677:
      if (lookahead == 'e') ADVANCE(1679);
      END_STATE();
    case 1678:
      if (lookahead == 'e') ADVANCE(1824);
      END_STATE();
    case 1679:
      if (lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1680:
      if (lookahead == 'e') ADVANCE(1697);
      END_STATE();
    case 1681:
      if (lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 1682:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 1683:
      if (lookahead == 'e') ADVANCE(1773);
      END_STATE();
    case 1684:
      if (lookahead == 'e') ADVANCE(1771);
      END_STATE();
    case 1685:
      if (lookahead == 'e') ADVANCE(1772);
      END_STATE();
    case 1686:
      if (lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1687:
      if (lookahead == 'e') ADVANCE(1775);
      END_STATE();
    case 1688:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 1689:
      if (lookahead == 'e') ADVANCE(1777);
      END_STATE();
    case 1690:
      if (lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 1691:
      if (lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 1692:
      if (lookahead == 'e') ADVANCE(1779);
      END_STATE();
    case 1693:
      if (lookahead == 'e') ADVANCE(1864);
      END_STATE();
    case 1694:
      if (lookahead == 'e') ADVANCE(1866);
      END_STATE();
    case 1695:
      if (lookahead == 'f') ADVANCE(1879);
      END_STATE();
    case 1696:
      if (lookahead == 'f') ADVANCE(1740);
      END_STATE();
    case 1697:
      if (lookahead == 'f') ADVANCE(1881);
      END_STATE();
    case 1698:
      if (lookahead == 'f') ADVANCE(1546);
      END_STATE();
    case 1699:
      if (lookahead == 'f') ADVANCE(1847);
      END_STATE();
    case 1700:
      if (lookahead == 'f') ADVANCE(1545);
      END_STATE();
    case 1701:
      if (lookahead == 'f') ADVANCE(1566);
      END_STATE();
    case 1702:
      if (lookahead == 'f') ADVANCE(1578);
      END_STATE();
    case 1703:
      if (lookahead == 'g') ADVANCE(1793);
      END_STATE();
    case 1704:
      if (lookahead == 'g') ADVANCE(1710);
      END_STATE();
    case 1705:
      if (lookahead == 'g') ADVANCE(1566);
      END_STATE();
    case 1706:
      if (lookahead == 'g') ADVANCE(1712);
      END_STATE();
    case 1707:
      if (lookahead == 'h') ADVANCE(1674);
      END_STATE();
    case 1708:
      if (lookahead == 'h') ADVANCE(1543);
      END_STATE();
    case 1709:
      if (lookahead == 'h') ADVANCE(1798);
      if (lookahead == 'q') ADVANCE(1901);
      END_STATE();
    case 1710:
      if (lookahead == 'h') ADVANCE(1881);
      END_STATE();
    case 1711:
      if (lookahead == 'h') ADVANCE(1540);
      END_STATE();
    case 1712:
      if (lookahead == 'h') ADVANCE(1888);
      END_STATE();
    case 1713:
      if (lookahead == 'h') ADVANCE(1541);
      END_STATE();
    case 1714:
      if (lookahead == 'h') ADVANCE(1581);
      END_STATE();
    case 1715:
      if (lookahead == 'h') ADVANCE(1553);
      END_STATE();
    case 1716:
      if (lookahead == 'h') ADVANCE(1580);
      END_STATE();
    case 1717:
      if (lookahead == 'h') ADVANCE(1559);
      END_STATE();
    case 1718:
      if (lookahead == 'h') ADVANCE(1560);
      END_STATE();
    case 1719:
      if (lookahead == 'h') ADVANCE(1566);
      END_STATE();
    case 1720:
      if (lookahead == 'h') ADVANCE(1565);
      END_STATE();
    case 1721:
      if (lookahead == 'h') ADVANCE(1571);
      END_STATE();
    case 1722:
      if (lookahead == 'h') ADVANCE(1584);
      END_STATE();
    case 1723:
      if (lookahead == 'h') ADVANCE(1577);
      END_STATE();
    case 1724:
      if (lookahead == 'h') ADVANCE(1585);
      END_STATE();
    case 1725:
      if (lookahead == 'h') ADVANCE(1681);
      END_STATE();
    case 1726:
      if (lookahead == 'h') ADVANCE(1683);
      END_STATE();
    case 1727:
      if (lookahead == 'h') ADVANCE(1684);
      END_STATE();
    case 1728:
      if (lookahead == 'h') ADVANCE(1685);
      END_STATE();
    case 1729:
      if (lookahead == 'h') ADVANCE(1686);
      END_STATE();
    case 1730:
      if (lookahead == 'h') ADVANCE(1688);
      END_STATE();
    case 1731:
      if (lookahead == 'h') ADVANCE(1687);
      END_STATE();
    case 1732:
      if (lookahead == 'h') ADVANCE(1689);
      END_STATE();
    case 1733:
      if (lookahead == 'h') ADVANCE(1690);
      END_STATE();
    case 1734:
      if (lookahead == 'h') ADVANCE(1691);
      END_STATE();
    case 1735:
      if (lookahead == 'h') ADVANCE(1692);
      END_STATE();
    case 1736:
      if (lookahead == 'i') ADVANCE(1704);
      END_STATE();
    case 1737:
      if (lookahead == 'i') ADVANCE(1834);
      END_STATE();
    case 1738:
      if (lookahead == 'i') ADVANCE(1703);
      if (lookahead == 'o') ADVANCE(1878);
      END_STATE();
    case 1739:
      if (lookahead == 'i') ADVANCE(1566);
      END_STATE();
    case 1740:
      if (lookahead == 'i') ADVANCE(1775);
      END_STATE();
    case 1741:
      if (lookahead == 'i') ADVANCE(1706);
      END_STATE();
    case 1742:
      if (lookahead == 'i') ADVANCE(1785);
      END_STATE();
    case 1743:
      if (lookahead == 'i') ADVANCE(1786);
      END_STATE();
    case 1744:
      if (lookahead == 'l') ADVANCE(1890);
      END_STATE();
    case 1745:
      if (lookahead == 'l') ADVANCE(1698);
      END_STATE();
    case 1746:
      if (lookahead == 'l') ADVANCE(1698);
      if (lookahead == 'r') ADVANCE(1834);
      END_STATE();
    case 1747:
      if (lookahead == 'l') ADVANCE(1544);
      END_STATE();
    case 1748:
      if (lookahead == 'l') ADVANCE(1605);
      if (lookahead == 'q') ADVANCE(1889);
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 1749:
      if (lookahead == 'l') ADVANCE(1679);
      END_STATE();
    case 1750:
      if (lookahead == 'l') ADVANCE(1620);
      END_STATE();
    case 1751:
      if (lookahead == 'l') ADVANCE(1566);
      END_STATE();
    case 1752:
      if (lookahead == 'l') ADVANCE(1566);
      if (lookahead == 'r') ADVANCE(1566);
      END_STATE();
    case 1753:
      if (lookahead == 'l') ADVANCE(1573);
      END_STATE();
    case 1754:
      if (lookahead == 'l') ADVANCE(1579);
      END_STATE();
    case 1755:
      if (lookahead == 'l') ADVANCE(1572);
      END_STATE();
    case 1756:
      if (lookahead == 'l') ADVANCE(1583);
      END_STATE();
    case 1757:
      if (lookahead == 'l') ADVANCE(1700);
      END_STATE();
    case 1758:
      if (lookahead == 'l') ADVANCE(1586);
      END_STATE();
    case 1759:
      if (lookahead == 'l') ADVANCE(1887);
      END_STATE();
    case 1760:
      if (lookahead == 'l') ADVANCE(1893);
      END_STATE();
    case 1761:
      if (lookahead == 'l') ADVANCE(1702);
      if (lookahead == 'r') ADVANCE(1834);
      END_STATE();
    case 1762:
      if (lookahead == 'l') ADVANCE(1854);
      END_STATE();
    case 1763:
      if (lookahead == 'l') ADVANCE(1894);
      END_STATE();
    case 1764:
      if (lookahead == 'l') ADVANCE(1856);
      END_STATE();
    case 1765:
      if (lookahead == 'l') ADVANCE(1906);
      END_STATE();
    case 1766:
      if (lookahead == 'm') ADVANCE(1566);
      END_STATE();
    case 1767:
      if (lookahead == 'n') ADVANCE(1543);
      END_STATE();
    case 1768:
      if (lookahead == 'n') ADVANCE(1696);
      END_STATE();
    case 1769:
      if (lookahead == 'n') ADVANCE(1705);
      END_STATE();
    case 1770:
      if (lookahead == 'n') ADVANCE(1540);
      END_STATE();
    case 1771:
      if (lookahead == 'n') ADVANCE(1541);
      END_STATE();
    case 1772:
      if (lookahead == 'n') ADVANCE(1581);
      END_STATE();
    case 1773:
      if (lookahead == 'n') ADVANCE(1553);
      END_STATE();
    case 1774:
      if (lookahead == 'n') ADVANCE(1580);
      END_STATE();
    case 1775:
      if (lookahead == 'n') ADVANCE(1566);
      END_STATE();
    case 1776:
      if (lookahead == 'n') ADVANCE(1565);
      END_STATE();
    case 1777:
      if (lookahead == 'n') ADVANCE(1571);
      END_STATE();
    case 1778:
      if (lookahead == 'n') ADVANCE(1584);
      END_STATE();
    case 1779:
      if (lookahead == 'n') ADVANCE(1577);
      END_STATE();
    case 1780:
      if (lookahead == 'n') ADVANCE(1585);
      END_STATE();
    case 1781:
      if (lookahead == 'n') ADVANCE(1900);
      END_STATE();
    case 1782:
      if (lookahead == 'n') ADVANCE(1903);
      END_STATE();
    case 1783:
      if (lookahead == 'n') ADVANCE(1904);
      END_STATE();
    case 1784:
      if (lookahead == 'n') ADVANCE(1905);
      END_STATE();
    case 1785:
      if (lookahead == 'n') ADVANCE(1897);
      END_STATE();
    case 1786:
      if (lookahead == 'n') ADVANCE(1906);
      END_STATE();
    case 1787:
      if (lookahead == 'n') ADVANCE(1907);
      END_STATE();
    case 1788:
      if (lookahead == 'n') ADVANCE(1908);
      END_STATE();
    case 1789:
      if (lookahead == 'n') ADVANCE(1909);
      END_STATE();
    case 1790:
      if (lookahead == 'n') ADVANCE(1910);
      END_STATE();
    case 1791:
      if (lookahead == 'n') ADVANCE(1911);
      END_STATE();
    case 1792:
      if (lookahead == 'o') ADVANCE(1914);
      END_STATE();
    case 1793:
      if (lookahead == 'o') ADVANCE(1649);
      END_STATE();
    case 1794:
      if (lookahead == 'o') ADVANCE(1766);
      END_STATE();
    case 1795:
      if (lookahead == 'o') ADVANCE(1915);
      END_STATE();
    case 1796:
      if (lookahead == 'o') ADVANCE(1747);
      END_STATE();
    case 1797:
      if (lookahead == 'o') ADVANCE(1699);
      END_STATE();
    case 1798:
      if (lookahead == 'o') ADVANCE(1830);
      END_STATE();
    case 1799:
      if (lookahead == 'o') ADVANCE(1754);
      END_STATE();
    case 1800:
      if (lookahead == 'o') ADVANCE(1885);
      END_STATE();
    case 1801:
      if (lookahead == 'o') ADVANCE(1755);
      END_STATE();
    case 1802:
      if (lookahead == 'o') ADVANCE(1756);
      END_STATE();
    case 1803:
      if (lookahead == 'o') ADVANCE(1758);
      END_STATE();
    case 1804:
      if (lookahead == 'p') ADVANCE(1590);
      END_STATE();
    case 1805:
      if (lookahead == 'p') ADVANCE(1085);
      END_STATE();
    case 1806:
      if (lookahead == 'p') ADVANCE(1707);
      END_STATE();
    case 1807:
      if (lookahead == 'p') ADVANCE(1566);
      END_STATE();
    case 1808:
      if (lookahead == 'p') ADVANCE(1725);
      END_STATE();
    case 1809:
      if (lookahead == 'p') ADVANCE(1616);
      END_STATE();
    case 1810:
      if (lookahead == 'p') ADVANCE(1726);
      END_STATE();
    case 1811:
      if (lookahead == 'p') ADVANCE(1765);
      END_STATE();
    case 1812:
      if (lookahead == 'p') ADVANCE(1765);
      if (lookahead == 'q') ADVANCE(1896);
      if (lookahead == 'x') ADVANCE(1644);
      END_STATE();
    case 1813:
      if (lookahead == 'p') ADVANCE(1765);
      if (lookahead == 'u') ADVANCE(1752);
      END_STATE();
    case 1814:
      if (lookahead == 'p') ADVANCE(1727);
      END_STATE();
    case 1815:
      if (lookahead == 'p') ADVANCE(1728);
      END_STATE();
    case 1816:
      if (lookahead == 'p') ADVANCE(1729);
      END_STATE();
    case 1817:
      if (lookahead == 'p') ADVANCE(1730);
      END_STATE();
    case 1818:
      if (lookahead == 'p') ADVANCE(1731);
      END_STATE();
    case 1819:
      if (lookahead == 'p') ADVANCE(1732);
      END_STATE();
    case 1820:
      if (lookahead == 'p') ADVANCE(1733);
      END_STATE();
    case 1821:
      if (lookahead == 'p') ADVANCE(1734);
      END_STATE();
    case 1822:
      if (lookahead == 'p') ADVANCE(1735);
      END_STATE();
    case 1823:
      if (lookahead == 'q') ADVANCE(1913);
      END_STATE();
    case 1824:
      if (lookahead == 'r') ADVANCE(1595);
      END_STATE();
    case 1825:
      if (lookahead == 'r') ADVANCE(1569);
      END_STATE();
    case 1826:
      if (lookahead == 'r') ADVANCE(1597);
      END_STATE();
    case 1827:
      if (lookahead == 'r') ADVANCE(1834);
      END_STATE();
    case 1828:
      if (lookahead == 'r') ADVANCE(1739);
      END_STATE();
    case 1829:
      if (lookahead == 'r') ADVANCE(1807);
      END_STATE();
    case 1830:
      if (lookahead == 'r') ADVANCE(1882);
      END_STATE();
    case 1831:
      if (lookahead == 'r') ADVANCE(1679);
      END_STATE();
    case 1832:
      if (lookahead == 'r') ADVANCE(1835);
      END_STATE();
    case 1833:
      if (lookahead == 'r') ADVANCE(1825);
      END_STATE();
    case 1834:
      if (lookahead == 'r') ADVANCE(1566);
      END_STATE();
    case 1835:
      if (lookahead == 'r') ADVANCE(1795);
      END_STATE();
    case 1836:
      if (lookahead == 'r') ADVANCE(1701);
      END_STATE();
    case 1837:
      if (lookahead == 'r') ADVANCE(1639);
      END_STATE();
    case 1838:
      if (lookahead == 'r') ADVANCE(1640);
      END_STATE();
    case 1839:
      if (lookahead == 's') ADVANCE(1877);
      END_STATE();
    case 1840:
      if (lookahead == 's') ADVANCE(1708);
      END_STATE();
    case 1841:
      if (lookahead == 's') ADVANCE(1592);
      END_STATE();
    case 1842:
      if (lookahead == 's') ADVANCE(1564);
      END_STATE();
    case 1843:
      if (lookahead == 's') ADVANCE(1594);
      END_STATE();
    case 1844:
      if (lookahead == 's') ADVANCE(1539);
      END_STATE();
    case 1845:
      if (lookahead == 's') ADVANCE(1576);
      END_STATE();
    case 1846:
      if (lookahead == 's') ADVANCE(1543);
      END_STATE();
    case 1847:
      if (lookahead == 's') ADVANCE(1899);
      END_STATE();
    case 1848:
      if (lookahead == 's') ADVANCE(1540);
      END_STATE();
    case 1849:
      if (lookahead == 's') ADVANCE(1538);
      END_STATE();
    case 1850:
      if (lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 1851:
      if (lookahead == 's') ADVANCE(1581);
      END_STATE();
    case 1852:
      if (lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1853:
      if (lookahead == 's') ADVANCE(1561);
      END_STATE();
    case 1854:
      if (lookahead == 's') ADVANCE(1566);
      END_STATE();
    case 1855:
      if (lookahead == 's') ADVANCE(1565);
      END_STATE();
    case 1856:
      if (lookahead == 's') ADVANCE(1582);
      END_STATE();
    case 1857:
      if (lookahead == 's') ADVANCE(1571);
      END_STATE();
    case 1858:
      if (lookahead == 's') ADVANCE(1584);
      END_STATE();
    case 1859:
      if (lookahead == 's') ADVANCE(1577);
      END_STATE();
    case 1860:
      if (lookahead == 's') ADVANCE(1884);
      END_STATE();
    case 1861:
      if (lookahead == 's') ADVANCE(1711);
      END_STATE();
    case 1862:
      if (lookahead == 's') ADVANCE(1585);
      END_STATE();
    case 1863:
      if (lookahead == 's') ADVANCE(1715);
      END_STATE();
    case 1864:
      if (lookahead == 's') ADVANCE(1886);
      END_STATE();
    case 1865:
      if (lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 1866:
      if (lookahead == 's') ADVANCE(1885);
      END_STATE();
    case 1867:
      if (lookahead == 's') ADVANCE(1714);
      END_STATE();
    case 1868:
      if (lookahead == 's') ADVANCE(1718);
      END_STATE();
    case 1869:
      if (lookahead == 's') ADVANCE(1717);
      END_STATE();
    case 1870:
      if (lookahead == 's') ADVANCE(1716);
      END_STATE();
    case 1871:
      if (lookahead == 's') ADVANCE(1720);
      END_STATE();
    case 1872:
      if (lookahead == 's') ADVANCE(1719);
      END_STATE();
    case 1873:
      if (lookahead == 's') ADVANCE(1721);
      END_STATE();
    case 1874:
      if (lookahead == 's') ADVANCE(1722);
      END_STATE();
    case 1875:
      if (lookahead == 's') ADVANCE(1724);
      END_STATE();
    case 1876:
      if (lookahead == 's') ADVANCE(1723);
      END_STATE();
    case 1877:
      if (lookahead == 't') ADVANCE(1542);
      END_STATE();
    case 1878:
      if (lookahead == 't') ADVANCE(1570);
      if (lookahead == 'x') ADVANCE(1813);
      END_STATE();
    case 1879:
      if (lookahead == 't') ADVANCE(1589);
      END_STATE();
    case 1880:
      if (lookahead == 't') ADVANCE(1617);
      END_STATE();
    case 1881:
      if (lookahead == 't') ADVANCE(1588);
      END_STATE();
    case 1882:
      if (lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 1883:
      if (lookahead == 't') ADVANCE(1828);
      END_STATE();
    case 1884:
      if (lookahead == 't') ADVANCE(1552);
      END_STATE();
    case 1885:
      if (lookahead == 't') ADVANCE(1566);
      END_STATE();
    case 1886:
      if (lookahead == 't') ADVANCE(1573);
      END_STATE();
    case 1887:
      if (lookahead == 't') ADVANCE(1574);
      END_STATE();
    case 1888:
      if (lookahead == 't') ADVANCE(1616);
      END_STATE();
    case 1889:
      if (lookahead == 'u') ADVANCE(1567);
      END_STATE();
    case 1890:
      if (lookahead == 'u') ADVANCE(1844);
      END_STATE();
    case 1891:
      if (lookahead == 'u') ADVANCE(1693);
      END_STATE();
    case 1892:
      if (lookahead == 'u') ADVANCE(1846);
      END_STATE();
    case 1893:
      if (lookahead == 'u') ADVANCE(1849);
      END_STATE();
    case 1894:
      if (lookahead == 'u') ADVANCE(1841);
      END_STATE();
    case 1895:
      if (lookahead == 'u') ADVANCE(1842);
      END_STATE();
    case 1896:
      if (lookahead == 'u') ADVANCE(1618);
      END_STATE();
    case 1897:
      if (lookahead == 'u') ADVANCE(1843);
      END_STATE();
    case 1898:
      if (lookahead == 'u') ADVANCE(1845);
      END_STATE();
    case 1899:
      if (lookahead == 'u') ADVANCE(1836);
      END_STATE();
    case 1900:
      if (lookahead == 'u') ADVANCE(1848);
      END_STATE();
    case 1901:
      if (lookahead == 'u') ADVANCE(1619);
      END_STATE();
    case 1902:
      if (lookahead == 'u') ADVANCE(1853);
      END_STATE();
    case 1903:
      if (lookahead == 'u') ADVANCE(1850);
      END_STATE();
    case 1904:
      if (lookahead == 'u') ADVANCE(1851);
      END_STATE();
    case 1905:
      if (lookahead == 'u') ADVANCE(1852);
      END_STATE();
    case 1906:
      if (lookahead == 'u') ADVANCE(1854);
      END_STATE();
    case 1907:
      if (lookahead == 'u') ADVANCE(1855);
      END_STATE();
    case 1908:
      if (lookahead == 'u') ADVANCE(1857);
      END_STATE();
    case 1909:
      if (lookahead == 'u') ADVANCE(1858);
      END_STATE();
    case 1910:
      if (lookahead == 'u') ADVANCE(1862);
      END_STATE();
    case 1911:
      if (lookahead == 'u') ADVANCE(1859);
      END_STATE();
    case 1912:
      if (lookahead == 'u') ADVANCE(1694);
      END_STATE();
    case 1913:
      if (lookahead == 'u') ADVANCE(1638);
      END_STATE();
    case 1914:
      if (lookahead == 'w') ADVANCE(1637);
      END_STATE();
    case 1915:
      if (lookahead == 'w') ADVANCE(1566);
      END_STATE();
    case 1916:
      if (lookahead == 'x') ADVANCE(1643);
      END_STATE();
    case 1917:
      if (lookahead == 'y') ADVANCE(1808);
      END_STATE();
    case 1918:
      if (lookahead == 'y') ADVANCE(1814);
      END_STATE();
    case 1919:
      if (lookahead == 'y') ADVANCE(1815);
      END_STATE();
    case 1920:
      if (lookahead == 'y') ADVANCE(1816);
      END_STATE();
    case 1921:
      if (lookahead == 'y') ADVANCE(1818);
      END_STATE();
    case 1922:
      if (lookahead == 'y') ADVANCE(1819);
      END_STATE();
    case 1923:
      if (lookahead == 'y') ADVANCE(1820);
      END_STATE();
    case 1924:
      if (lookahead == 'y') ADVANCE(1821);
      END_STATE();
    case 1925:
      if (lookahead == 0xfe0e) ADVANCE(2044);
      END_STATE();
    case 1926:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1960);
      END_STATE();
    case 1927:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1566);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1566);
      END_STATE();
    case 1928:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1566);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      END_STATE();
    case 1929:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1555);
      END_STATE();
    case 1930:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1566);
      END_STATE();
    case 1931:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1579);
      END_STATE();
    case 1932:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1572);
      END_STATE();
    case 1933:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1583);
      END_STATE();
    case 1934:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1586);
      END_STATE();
    case 1935:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1943);
      END_STATE();
    case 1936:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1566);
      END_STATE();
    case 1937:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1574);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1582);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1573);
      END_STATE();
    case 1938:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1934);
      END_STATE();
    case 1939:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1539);
      END_STATE();
    case 1940:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1546);
      END_STATE();
    case 1941:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1538);
      END_STATE();
    case 1942:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1548);
      END_STATE();
    case 1943:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1545);
      END_STATE();
    case 1944:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1566);
      END_STATE();
    case 1945:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1563);
      END_STATE();
    case 1946:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1575);
      END_STATE();
    case 1947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1939);
      END_STATE();
    case 1949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1941);
      END_STATE();
    case 1950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1945);
      END_STATE();
    case 1951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1944);
      END_STATE();
    case 1952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1946);
      END_STATE();
    case 1953:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1497);
      END_STATE();
    case 1954:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1566);
      END_STATE();
    case 1955:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1501);
      END_STATE();
    case 1956:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1503);
      END_STATE();
    case 1957:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1505);
      END_STATE();
    case 1958:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1508);
      END_STATE();
    case 1959:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2055);
      END_STATE();
    case 1960:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1959);
      END_STATE();
    case 1961:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2054);
      END_STATE();
    case 1962:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2051);
      END_STATE();
    case 1963:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2055);
      END_STATE();
    case 1964:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2150);
      END_STATE();
    case 1965:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1966);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      END_STATE();
    case 1966:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 1967:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2079);
      END_STATE();
    case 1968:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '\n', 1982,
        '\r', 1008,
        '!', 2070,
        '$', 759,
        '&', 23,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1008,
        0x0b, 1008,
        '\f', 1008,
        ' ', 1008,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1969:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '\n', 1984,
        '\r', 1013,
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 1013,
        0x0b, 1013,
        '\f', 1013,
        ' ', 1013,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1970:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '!', 2070,
        '#', 2060,
        '$', 759,
        '&', 17,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'O', 2101,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 2059,
        0x16ed, 2059,
        0x2795, 2059,
        ':', 2035,
        'X', 2035,
        'x', 2035,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1971:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '!', 2070,
        '#', 2060,
        '$', 759,
        '&', 17,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2037,
        '?', 2070,
        '@', 2047,
        'O', 2101,
        'P', 2040,
        'R', 2025,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 2059,
        0x16ed, 2059,
        0x2795, 2059,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2026);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1972:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '!', 2070,
        '#', 2060,
        '$', 759,
        '&', 24,
        '(', 2001,
        '*', 2131,
        '0', 2105,
        '1', 2081,
        ';', 1980,
        '<', 434,
        '=', 2037,
        '?', 2070,
        '@', 2047,
        'O', 2101,
        'P', 2040,
        'R', 2025,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'o', 2110,
        'p', 725,
        '{', 2004,
        0xbd, 2125,
        0x66d, 2147,
        0x204e, 2143,
        0x2217, 2135,
        0x2659, 2043,
        0x265f, 724,
        0x2731, 2139,
        '\n', 1029,
        '\r', 1029,
        'Z', 755,
        'z', 755,
        '+', 2059,
        0x16ed, 2059,
        0x2795, 2059,
        ':', 2035,
        'X', 2035,
        'x', 2035,
        '\t', 1007,
        0x0b, 1007,
        '\f', 1007,
        ' ', 1007,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2049);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2026);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1973:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '!', 2070,
        '$', 759,
        '&', 10,
        '(', 2001,
        '0', 761,
        ';', 1980,
        '<', 434,
        '=', 2069,
        '?', 2070,
        '@', 2047,
        'P', 2040,
        'R', 2029,
        'T', 440,
        '[', 1991,
        'e', 2020,
        'p', 725,
        '{', 2004,
        0x2659, 2043,
        0x265f, 724,
        '\n', 1027,
        '\r', 1027,
        'O', 29,
        'o', 29,
        'Z', 755,
        'z', 755,
        '+', 30,
        0x16ed, 30,
        0x2795, 30,
        '\t', 765,
        0x0b, 765,
        '\f', 765,
        ' ', 765,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2021);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2066);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2030);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1974:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '!', 2078,
        '#', 2058,
        '$', 1967,
        '&', 1051,
        '(', 2000,
        ')', 2002,
        '0', 1068,
        ';', 1979,
        '<', 1587,
        '=', 2077,
        '?', 2078,
        '@', 2046,
        'P', 2041,
        'R', 2032,
        'T', 1593,
        '[', 1990,
        'e', 2022,
        'p', 1926,
        '{', 2003,
        0xbd, 2124,
        0x2659, 2042,
        0x265f, 1925,
        'O', 1069,
        'o', 1069,
        'Z', 1963,
        'z', 1963,
        '+', 2062,
        0x16ed, 2062,
        0x2795, 2062,
        ':', 2034,
        'X', 2034,
        'x', 2034,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1037);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2073);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(2063);
      END_STATE();
    case 1975:
      if (eof) ADVANCE(1976);
      ADVANCE_MAP(
        '"', 1994,
        '%', 1981,
        '&', 1050,
        '(', 2000,
        ')', 2002,
        '*', 2130,
        '-', 2084,
        '/', 2113,
        '0', 2107,
        '1', 2080,
        '2', 2123,
        ';', 1979,
        '@', 2046,
        'O', 2103,
        'P', 2039,
        '[', 1990,
        ']', 1992,
        'o', 2112,
        '{', 2003,
        '}', 2005,
        0xbd, 2126,
        0x66d, 2146,
        0x2010, 2088,
        0x2011, 2090,
        0x2012, 2092,
        0x2013, 2094,
        0x2014, 2096,
        0x2044, 2117,
        0x204e, 2142,
        0x2212, 2086,
        0x2215, 2115,
        0x2217, 2134,
        0x2659, 2042,
        0x265f, 1925,
        0x2731, 2138,
        0x2796, 2098,
        0x27cb, 2119,
        0x29f8, 2121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1975);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2019);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2028);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1977);
      if (lookahead == '\r') ADVANCE(1004);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1002);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(1978);
      if (lookahead == '\r') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1009);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1982);
      if (lookahead == '\r') ADVANCE(1008);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1008);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1983);
      if (lookahead == '\r') ADVANCE(1011);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1011);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1984);
      if (lookahead == '\r') ADVANCE(1013);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1013);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1985);
      if (lookahead == '\r') ADVANCE(1014);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1014);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1978);
      if (lookahead == '\r') ADVANCE(1016);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1009);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1987);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(1999);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1996);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1996);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ']') ADVANCE(1993);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1997);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1999);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1998);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1999);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(1999);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2006);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_move_number);
      ADVANCE_MAP(
        '\n', 2015,
        '\r', 2010,
        '&', 19,
        '\t', 2009,
        0x0b, 2009,
        '\f', 2009,
        ' ', 2009,
        '/', 5,
        0x2044, 5,
        0x2215, 5,
        0x27cb, 5,
        0x29f8, 5,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(4);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2015);
      if (lookahead == '\r') ADVANCE(2010);
      if (lookahead == '&') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2009);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2015);
      if (lookahead == '\r') ADVANCE(2010);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2009);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2015);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2016);
      if (lookahead == '\r') ADVANCE(2012);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2016);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1058);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1022);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1021);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1060);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1083);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(618);
      if (lookahead == 'p') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1805);
      if (lookahead == 'p') ADVANCE(2063);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(2063);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(2076);
      if (lookahead == '\r') ADVANCE(2064);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(2063);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2063);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(2063);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1960);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '&', 12,
        '+', 2072,
        0x16ed, 2072,
        0x2795, 2072,
        '/', 31,
        0x2044, 31,
        0x2215, 31,
        0x27cb, 31,
        0x29f8, 31,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2057);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 1049,
        '+', 2063,
        0x16ed, 2063,
        0x2795, 2063,
        '/', 1077,
        0x2044, 1077,
        0x2215, 1077,
        0x27cb, 1077,
        0x29f8, 1077,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2055);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(757);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(1065);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1962);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '&', 22,
        '+', 2060,
        0x16ed, 2060,
        0x2795, 2060,
        '/', 35,
        0x2044, 35,
        0x2215, 35,
        0x27cb, 35,
        0x29f8, 35,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(1044);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2058);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 1056,
        '+', 2058,
        0x16ed, 2058,
        0x2795, 2058,
        '/', 1079,
        0x2044, 1079,
        0x2215, 1079,
        0x27cb, 1079,
        0x29f8, 1079,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2063);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '&', 12,
        '-', 2056,
        '+', 2072,
        0x16ed, 2072,
        0x2795, 2072,
        '/', 31,
        0x2044, 31,
        0x2215, 31,
        0x27cb, 31,
        0x29f8, 31,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2057);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1084,
        '\r', 1,
        '&', 12,
        '+', 2072,
        0x16ed, 2072,
        0x2795, 2072,
        '/', 31,
        0x2044, 31,
        0x2215, 31,
        0x27cb, 31,
        0x29f8, 31,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2057);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2072);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2071);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1049,
        '+', 2063,
        0x16ed, 2063,
        0x2795, 2063,
        '/', 1077,
        0x2044, 1077,
        0x2215, 1077,
        0x27cb, 1077,
        0x29f8, 1077,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2055);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1047);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1048);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(2063);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2063);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2079);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(2015);
      if (lookahead == '\r') ADVANCE(2010);
      if (lookahead == ' ') ADVANCE(2007);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2009);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(763);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(2013);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1966);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2017);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(1075);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1076);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1076);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1961);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 2015,
        '\r', 2010,
        ' ', 2008,
        '&', 11,
        '\t', 2009,
        0x0b, 2009,
        '\f', 2009,
        'A', 763,
        'B', 763,
        'a', 763,
        'b', 763,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1076);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1076);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1961);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(2014);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(1966);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2017);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1961);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1965);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(756);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1076);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1076);
      if (lookahead == '&') ADVANCE(1043);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1961);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == ' ') ADVANCE(1078);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == ' ') ADVANCE(1078);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      if (lookahead == '\n') ADVANCE(1084);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(760);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1973, .external_lex_state = 1},
  [2] = {.lex_state = 1003, .external_lex_state = 1},
  [3] = {.lex_state = 1970, .external_lex_state = 1},
  [4] = {.lex_state = 1970, .external_lex_state = 1},
  [5] = {.lex_state = 1032, .external_lex_state = 1},
  [6] = {.lex_state = 1032, .external_lex_state = 1},
  [7] = {.lex_state = 1032, .external_lex_state = 1},
  [8] = {.lex_state = 1972, .external_lex_state = 1},
  [9] = {.lex_state = 1971, .external_lex_state = 1},
  [10] = {.lex_state = 1972, .external_lex_state = 1},
  [11] = {.lex_state = 1971, .external_lex_state = 1},
  [12] = {.lex_state = 1971, .external_lex_state = 1},
  [13] = {.lex_state = 1034, .external_lex_state = 1},
  [14] = {.lex_state = 1003, .external_lex_state = 1},
  [15] = {.lex_state = 1003, .external_lex_state = 1},
  [16] = {.lex_state = 1971, .external_lex_state = 1},
  [17] = {.lex_state = 1003, .external_lex_state = 1},
  [18] = {.lex_state = 1970, .external_lex_state = 1},
  [19] = {.lex_state = 1033, .external_lex_state = 1},
  [20] = {.lex_state = 1973, .external_lex_state = 1},
  [21] = {.lex_state = 1033, .external_lex_state = 1},
  [22] = {.lex_state = 1973, .external_lex_state = 1},
  [23] = {.lex_state = 1033, .external_lex_state = 1},
  [24] = {.lex_state = 1034, .external_lex_state = 1},
  [25] = {.lex_state = 1970, .external_lex_state = 1},
  [26] = {.lex_state = 1970, .external_lex_state = 1},
  [27] = {.lex_state = 1970, .external_lex_state = 1},
  [28] = {.lex_state = 1970, .external_lex_state = 1},
  [29] = {.lex_state = 1970, .external_lex_state = 1},
  [30] = {.lex_state = 1970, .external_lex_state = 1},
  [31] = {.lex_state = 1970, .external_lex_state = 1},
  [32] = {.lex_state = 1970, .external_lex_state = 1},
  [33] = {.lex_state = 1970, .external_lex_state = 1},
  [34] = {.lex_state = 1970, .external_lex_state = 1},
  [35] = {.lex_state = 1970, .external_lex_state = 1},
  [36] = {.lex_state = 1970, .external_lex_state = 1},
  [37] = {.lex_state = 1970, .external_lex_state = 1},
  [38] = {.lex_state = 1968, .external_lex_state = 1},
  [39] = {.lex_state = 1970, .external_lex_state = 1},
  [40] = {.lex_state = 1970, .external_lex_state = 1},
  [41] = {.lex_state = 1970, .external_lex_state = 1},
  [42] = {.lex_state = 1970, .external_lex_state = 1},
  [43] = {.lex_state = 1970, .external_lex_state = 1},
  [44] = {.lex_state = 1968, .external_lex_state = 1},
  [45] = {.lex_state = 1970, .external_lex_state = 1},
  [46] = {.lex_state = 1970, .external_lex_state = 1},
  [47] = {.lex_state = 1970, .external_lex_state = 1},
  [48] = {.lex_state = 1970, .external_lex_state = 1},
  [49] = {.lex_state = 1010, .external_lex_state = 1},
  [50] = {.lex_state = 1970, .external_lex_state = 1},
  [51] = {.lex_state = 1970, .external_lex_state = 1},
  [52] = {.lex_state = 1970, .external_lex_state = 1},
  [53] = {.lex_state = 1970, .external_lex_state = 1},
  [54] = {.lex_state = 1970, .external_lex_state = 1},
  [55] = {.lex_state = 1033, .external_lex_state = 1},
  [56] = {.lex_state = 1970, .external_lex_state = 1},
  [57] = {.lex_state = 1970, .external_lex_state = 1},
  [58] = {.lex_state = 1032, .external_lex_state = 1},
  [59] = {.lex_state = 1970, .external_lex_state = 1},
  [60] = {.lex_state = 1003, .external_lex_state = 1},
  [61] = {.lex_state = 1970, .external_lex_state = 1},
  [62] = {.lex_state = 1003, .external_lex_state = 1},
  [63] = {.lex_state = 1970, .external_lex_state = 1},
  [64] = {.lex_state = 1003, .external_lex_state = 1},
  [65] = {.lex_state = 1003, .external_lex_state = 1},
  [66] = {.lex_state = 1974, .external_lex_state = 1},
  [67] = {.lex_state = 1032, .external_lex_state = 1},
  [68] = {.lex_state = 1032, .external_lex_state = 1},
  [69] = {.lex_state = 1032, .external_lex_state = 1},
  [70] = {.lex_state = 1032, .external_lex_state = 1},
  [71] = {.lex_state = 1032, .external_lex_state = 1},
  [72] = {.lex_state = 1032, .external_lex_state = 1},
  [73] = {.lex_state = 1974, .external_lex_state = 1},
  [74] = {.lex_state = 1032, .external_lex_state = 1},
  [75] = {.lex_state = 1032, .external_lex_state = 1},
  [76] = {.lex_state = 1032, .external_lex_state = 1},
  [77] = {.lex_state = 1032, .external_lex_state = 1},
  [78] = {.lex_state = 1012, .external_lex_state = 1},
  [79] = {.lex_state = 1032, .external_lex_state = 1},
  [80] = {.lex_state = 1032, .external_lex_state = 1},
  [81] = {.lex_state = 1032, .external_lex_state = 1},
  [82] = {.lex_state = 1032, .external_lex_state = 1},
  [83] = {.lex_state = 1032, .external_lex_state = 1},
  [84] = {.lex_state = 1974, .external_lex_state = 1},
  [85] = {.lex_state = 1032, .external_lex_state = 1},
  [86] = {.lex_state = 1032, .external_lex_state = 1},
  [87] = {.lex_state = 1032, .external_lex_state = 1},
  [88] = {.lex_state = 1032, .external_lex_state = 1},
  [89] = {.lex_state = 1032, .external_lex_state = 1},
  [90] = {.lex_state = 1032, .external_lex_state = 1},
  [91] = {.lex_state = 1032, .external_lex_state = 1},
  [92] = {.lex_state = 1032, .external_lex_state = 1},
  [93] = {.lex_state = 1032, .external_lex_state = 1},
  [94] = {.lex_state = 1032, .external_lex_state = 1},
  [95] = {.lex_state = 1032, .external_lex_state = 1},
  [96] = {.lex_state = 1032, .external_lex_state = 1},
  [97] = {.lex_state = 1974, .external_lex_state = 1},
  [98] = {.lex_state = 1974, .external_lex_state = 1},
  [99] = {.lex_state = 1974, .external_lex_state = 1},
  [100] = {.lex_state = 1974, .external_lex_state = 1},
  [101] = {.lex_state = 1974, .external_lex_state = 1},
  [102] = {.lex_state = 1070},
  [103] = {.lex_state = 1030, .external_lex_state = 1},
  [104] = {.lex_state = 1070},
  [105] = {.lex_state = 1031, .external_lex_state = 1},
  [106] = {.lex_state = 1030, .external_lex_state = 1},
  [107] = {.lex_state = 1031, .external_lex_state = 1},
  [108] = {.lex_state = 1973, .external_lex_state = 1},
  [109] = {.lex_state = 1973, .external_lex_state = 1},
  [110] = {.lex_state = 1031, .external_lex_state = 1},
  [111] = {.lex_state = 1973, .external_lex_state = 1},
  [112] = {.lex_state = 1973, .external_lex_state = 1},
  [113] = {.lex_state = 1969, .external_lex_state = 1},
  [114] = {.lex_state = 1031, .external_lex_state = 1},
  [115] = {.lex_state = 1974, .external_lex_state = 1},
  [116] = {.lex_state = 1973, .external_lex_state = 1},
  [117] = {.lex_state = 1973, .external_lex_state = 1},
  [118] = {.lex_state = 1973, .external_lex_state = 1},
  [119] = {.lex_state = 1973, .external_lex_state = 1},
  [120] = {.lex_state = 1973, .external_lex_state = 1},
  [121] = {.lex_state = 1973, .external_lex_state = 1},
  [122] = {.lex_state = 1973, .external_lex_state = 1},
  [123] = {.lex_state = 1973, .external_lex_state = 1},
  [124] = {.lex_state = 1969, .external_lex_state = 1},
  [125] = {.lex_state = 1973, .external_lex_state = 1},
  [126] = {.lex_state = 1973, .external_lex_state = 1},
  [127] = {.lex_state = 1973, .external_lex_state = 1},
  [128] = {.lex_state = 1974, .external_lex_state = 1},
  [129] = {.lex_state = 1974, .external_lex_state = 1},
  [130] = {.lex_state = 1070},
  [131] = {.lex_state = 1974, .external_lex_state = 1},
  [132] = {.lex_state = 1070},
  [133] = {.lex_state = 1070},
  [134] = {.lex_state = 1974, .external_lex_state = 1},
  [135] = {.lex_state = 1974, .external_lex_state = 1},
  [136] = {.lex_state = 1974, .external_lex_state = 1},
  [137] = {.lex_state = 1974, .external_lex_state = 1},
  [138] = {.lex_state = 1973, .external_lex_state = 1},
  [139] = {.lex_state = 1974, .external_lex_state = 1},
  [140] = {.lex_state = 1974, .external_lex_state = 1},
  [141] = {.lex_state = 1015, .external_lex_state = 1},
  [142] = {.lex_state = 1974, .external_lex_state = 1},
  [143] = {.lex_state = 1974, .external_lex_state = 1},
  [144] = {.lex_state = 1974, .external_lex_state = 1},
  [145] = {.lex_state = 1974, .external_lex_state = 1},
  [146] = {.lex_state = 1974, .external_lex_state = 1},
  [147] = {.lex_state = 1974, .external_lex_state = 1},
  [148] = {.lex_state = 1974, .external_lex_state = 1},
  [149] = {.lex_state = 1974, .external_lex_state = 1},
  [150] = {.lex_state = 1974, .external_lex_state = 1},
  [151] = {.lex_state = 1974, .external_lex_state = 1},
  [152] = {.lex_state = 1974, .external_lex_state = 1},
  [153] = {.lex_state = 1974, .external_lex_state = 1},
  [154] = {.lex_state = 1974, .external_lex_state = 1},
  [155] = {.lex_state = 1974, .external_lex_state = 1},
  [156] = {.lex_state = 1974, .external_lex_state = 1},
  [157] = {.lex_state = 1974, .external_lex_state = 1},
  [158] = {.lex_state = 1974, .external_lex_state = 1},
  [159] = {.lex_state = 1974, .external_lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1100},
  [162] = {.lex_state = 1100},
  [163] = {.lex_state = 1040},
  [164] = {.lex_state = 1100},
  [165] = {.lex_state = 1100},
  [166] = {.lex_state = 1100},
  [167] = {.lex_state = 1100},
  [168] = {.lex_state = 1100},
  [169] = {.lex_state = 1100},
  [170] = {.lex_state = 1100},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1040},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1039},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1100},
  [178] = {.lex_state = 1040},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1040},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1974},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1100},
  [210] = {.lex_state = 1100},
  [211] = {.lex_state = 1987},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1196},
  [214] = {.lex_state = 1070},
  [215] = {.lex_state = 1987},
  [216] = {.lex_state = 1020},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2006},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1987},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1100},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1070},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1987},
  [231] = {.lex_state = 1987},
  [232] = {.lex_state = 1196},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1987},
  [237] = {.lex_state = 1100},
  [238] = {.lex_state = 1987},
  [239] = {.lex_state = 1100},
  [240] = {.lex_state = 1987},
  [241] = {.lex_state = 1100},
  [242] = {.lex_state = 1987},
  [243] = {.lex_state = 2006},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 2006},
  [246] = {.lex_state = 0},
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
    [aux_sym_result_code_token21] = ACTIONS(1),
    [aux_sym_result_code_token23] = ACTIONS(1),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(229),
    [sym_game] = STATE(121),
    [sym_freestanding_comment] = STATE(66),
    [sym_rest_of_line_comment_delimiter_open] = STATE(230),
    [sym_rest_of_line_comment] = STATE(52),
    [sym_header] = STATE(2),
    [sym_tagpair] = STATE(17),
    [sym_movetext] = STATE(104),
    [sym__movetext_element] = STATE(93),
    [sym_variation] = STATE(93),
    [sym_inline_comment] = STATE(95),
    [sym_san_move] = STATE(91),
    [sym__san_move_piece] = STATE(81),
    [sym_lan_move] = STATE(94),
    [sym__san_square] = STATE(13),
    [sym__san_move_pawn] = STATE(81),
    [sym__san_drop_pawn] = STATE(81),
    [sym__san_move_major_or_minor_piece] = STATE(81),
    [sym__san_drop_major_or_minor_piece] = STATE(81),
    [sym__lan_move_by_coordinates] = STATE(68),
    [aux_sym_series_of_games_repeat1] = STATE(22),
    [aux_sym_freestanding_comment_repeat1] = STATE(108),
    [aux_sym_movetext_repeat1] = STATE(7),
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
  [0] = 27,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(31), 1,
      sym__empty_line,
    ACTIONS(33), 1,
      sym_variation_delimiter_open,
    ACTIONS(35), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(37), 1,
      sym_move_number,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      sym_annotation,
    ACTIONS(51), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(39), 1,
      sym_movetext,
    STATE(45), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(119), 1,
      sym_result_code,
    STATE(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(47), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(55), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(47), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(48), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(43), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(53), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(57), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [107] = 22,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(33), 1,
      sym_variation_delimiter_open,
    ACTIONS(35), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(37), 1,
      sym_move_number,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      sym_annotation,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(45), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(47), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    STATE(47), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(48), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(43), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(61), 21,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [204] = 22,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym_variation_delimiter_open,
    ACTIONS(73), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(76), 1,
      sym_move_number,
    ACTIONS(79), 1,
      sym__san_file,
    ACTIONS(82), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(88), 1,
      anon_sym_AT,
    ACTIONS(94), 1,
      sym_annotation,
    ACTIONS(97), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(4), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(45), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(91), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(47), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(48), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(85), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(68), 21,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [301] = 27,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(37), 1,
      sym_move_number,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(43), 1,
      anon_sym_P,
    ACTIONS(49), 1,
      sym_annotation,
    ACTIONS(51), 1,
      anon_sym_1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_variation_delimiter_open,
    ACTIONS(104), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(108), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(28), 1,
      sym_movetext,
    STATE(30), 1,
      sym__lan_move_by_coordinates,
    STATE(45), 1,
      sym_lan_move,
    STATE(46), 1,
      sym_san_move,
    STATE(125), 1,
      sym_result_code,
    STATE(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(55), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(106), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(110), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(47), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(48), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(53), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(29), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(112), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [407] = 23,
    ACTIONS(97), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      sym_variation_delimiter_open,
    ACTIONS(120), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(123), 1,
      sym_move_number,
    ACTIONS(126), 1,
      sym__san_file,
    ACTIONS(129), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(132), 1,
      anon_sym_P,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      sym_annotation,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(223), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(135), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(68), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(63), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [503] = 23,
    ACTIONS(15), 1,
      sym_move_number,
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
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(223), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(61), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(59), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [599] = 7,
    ACTIONS(161), 1,
      sym__san_promotable_piece,
    ACTIONS(165), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym__san_promotion,
    STATE(233), 1,
      sym__san_promotion_symbol,
    ACTIONS(163), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(157), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(159), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [658] = 6,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(171), 1,
      sym__san_promotable_piece,
    STATE(35), 1,
      sym__san_promotion,
    STATE(233), 1,
      sym__san_promotion_symbol,
    ACTIONS(167), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(169), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [713] = 2,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 39,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [760] = 6,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      sym__san_promotable_piece,
    STATE(37), 1,
      sym__san_promotion,
    STATE(233), 1,
      sym__san_promotion_symbol,
    ACTIONS(177), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(179), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [815] = 6,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      sym__san_promotable_piece,
    STATE(41), 1,
      sym__san_promotion,
    STATE(233), 1,
      sym__san_promotion_symbol,
    ACTIONS(183), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(185), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [870] = 8,
    ACTIONS(189), 1,
      sym__san_promotable_piece,
    ACTIONS(191), 1,
      sym__san_capture_symbol,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(195), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(71), 1,
      sym__san_promotion,
    STATE(226), 1,
      sym__san_promotion_symbol,
    ACTIONS(159), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(157), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [928] = 9,
    ACTIONS(197), 1,
      sym__empty_line,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(208), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(14), 1,
      aux_sym_header_repeat1,
    STATE(64), 1,
      sym_rest_of_line_comment,
    STATE(65), 1,
      sym_tagpair,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(206), 32,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [987] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(211), 1,
      sym__empty_line,
    STATE(14), 1,
      aux_sym_header_repeat1,
    STATE(64), 1,
      sym_rest_of_line_comment,
    STATE(65), 1,
      sym_tagpair,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(213), 32,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1046] = 2,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 37,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1091] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(215), 1,
      sym__empty_line,
    STATE(15), 1,
      aux_sym_header_repeat1,
    STATE(64), 1,
      sym_rest_of_line_comment,
    STATE(65), 1,
      sym_tagpair,
    STATE(236), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(217), 32,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1150] = 4,
    ACTIONS(219), 1,
      sym__san_capture_symbol,
    STATE(40), 1,
      sym__san_square,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1199] = 6,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(221), 1,
      sym__san_promotable_piece,
    STATE(70), 1,
      sym__san_promotion,
    STATE(226), 1,
      sym__san_promotion_symbol,
    ACTIONS(179), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(177), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1251] = 31,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(231), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(234), 1,
      sym_variation_delimiter_open,
    ACTIONS(237), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(240), 1,
      sym_move_number,
    ACTIONS(243), 1,
      sym__san_file,
    ACTIONS(246), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(252), 1,
      anon_sym_AT,
    ACTIONS(258), 1,
      sym_annotation,
    ACTIONS(261), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(17), 1,
      sym_tagpair,
    STATE(20), 1,
      aux_sym_series_of_games_repeat1,
    STATE(63), 1,
      sym_rest_of_line_comment,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(84), 1,
      sym_freestanding_comment,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym_movetext,
    STATE(111), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(121), 1,
      sym_game,
    STATE(240), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(255), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(249), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1353] = 6,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      sym__san_promotable_piece,
    STATE(83), 1,
      sym__san_promotion,
    STATE(226), 1,
      sym__san_promotion_symbol,
    ACTIONS(169), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(167), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1405] = 31,
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
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(17), 1,
      sym_tagpair,
    STATE(20), 1,
      aux_sym_series_of_games_repeat1,
    STATE(52), 1,
      sym_rest_of_line_comment,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(73), 1,
      sym_freestanding_comment,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_inline_comment,
    STATE(104), 1,
      sym_movetext,
    STATE(108), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(121), 1,
      sym_game,
    STATE(230), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1507] = 6,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      sym__san_promotable_piece,
    STATE(74), 1,
      sym__san_promotion,
    STATE(226), 1,
      sym__san_promotion_symbol,
    ACTIONS(185), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(183), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1559] = 2,
    ACTIONS(175), 15,
      sym_move_number,
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
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(173), 24,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1603] = 2,
    ACTIONS(270), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(272), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1646] = 2,
    ACTIONS(167), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(169), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1689] = 2,
    ACTIONS(173), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(175), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1732] = 7,
    ACTIONS(51), 1,
      anon_sym_1,
    STATE(117), 1,
      sym_result_code,
    ACTIONS(55), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(53), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(274), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(57), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
    ACTIONS(276), 14,
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
  [1785] = 3,
    ACTIONS(282), 1,
      sym_check_or_mate_condition,
    ACTIONS(278), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(280), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1830] = 3,
    ACTIONS(288), 1,
      sym_check_or_mate_condition,
    ACTIONS(284), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(286), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1875] = 2,
    ACTIONS(290), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(292), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1918] = 2,
    ACTIONS(294), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(296), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1961] = 2,
    ACTIONS(298), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(300), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2004] = 2,
    ACTIONS(302), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(304), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2047] = 2,
    ACTIONS(183), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(185), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2090] = 2,
    ACTIONS(306), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(308), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2133] = 2,
    ACTIONS(310), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(312), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2176] = 3,
    ACTIONS(318), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(314), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(316), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2221] = 7,
    ACTIONS(51), 1,
      anon_sym_1,
    STATE(127), 1,
      sym_result_code,
    ACTIONS(55), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(53), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(320), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(57), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
    ACTIONS(322), 14,
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
  [2274] = 2,
    ACTIONS(324), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(326), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2317] = 2,
    ACTIONS(328), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(330), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2360] = 2,
    ACTIONS(332), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(334), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2403] = 2,
    ACTIONS(336), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(338), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2445] = 3,
    ACTIONS(314), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(340), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(316), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2489] = 2,
    ACTIONS(342), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(344), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2531] = 2,
    ACTIONS(346), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(348), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2573] = 2,
    ACTIONS(350), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(352), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2615] = 2,
    ACTIONS(354), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(356), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2657] = 3,
    ACTIONS(314), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(358), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(316), 35,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2701] = 2,
    ACTIONS(360), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(362), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2743] = 2,
    ACTIONS(364), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(366), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2785] = 5,
    ACTIONS(373), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(375), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(370), 13,
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
    ACTIONS(352), 20,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2833] = 2,
    ACTIONS(378), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(380), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2875] = 2,
    ACTIONS(382), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(384), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2917] = 2,
    ACTIONS(175), 14,
      sym_move_number,
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
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(173), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2959] = 2,
    ACTIONS(386), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(388), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3001] = 2,
    ACTIONS(390), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(392), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3043] = 4,
    ACTIONS(394), 1,
      sym__san_capture_symbol,
    STATE(72), 1,
      sym__san_square,
    ACTIONS(175), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(173), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3089] = 2,
    ACTIONS(396), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(398), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3131] = 2,
    ACTIONS(336), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(338), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3172] = 2,
    ACTIONS(336), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(338), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3213] = 2,
    ACTIONS(400), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(402), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3254] = 5,
    ACTIONS(368), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(373), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(375), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(370), 13,
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
    ACTIONS(352), 20,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3301] = 2,
    ACTIONS(404), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(406), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3342] = 2,
    ACTIONS(408), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(410), 34,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3383] = 27,
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
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(416), 1,
      sym_move_number,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(17), 1,
      sym_tagpair,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(104), 1,
      sym_movetext,
    STATE(118), 1,
      sym_game,
    STATE(223), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3473] = 2,
    ACTIONS(304), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(302), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3513] = 3,
    ACTIONS(418), 1,
      sym_check_or_mate_condition,
    ACTIONS(286), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(284), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3555] = 2,
    ACTIONS(308), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(306), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3595] = 2,
    ACTIONS(312), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(310), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3635] = 2,
    ACTIONS(169), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(167), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3675] = 2,
    ACTIONS(326), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(324), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3715] = 27,
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
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(414), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(416), 1,
      sym_move_number,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(17), 1,
      sym_tagpair,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(104), 1,
      sym_movetext,
    STATE(118), 1,
      sym_game,
    STATE(223), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3805] = 2,
    ACTIONS(330), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(328), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3845] = 2,
    ACTIONS(300), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(298), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3885] = 2,
    ACTIONS(334), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(332), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3925] = 2,
    ACTIONS(272), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(270), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3965] = 3,
    ACTIONS(314), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(422), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(316), 33,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4007] = 2,
    ACTIONS(175), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(173), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4047] = 2,
    ACTIONS(292), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(290), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4087] = 3,
    ACTIONS(424), 1,
      sym_check_or_mate_condition,
    ACTIONS(280), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(278), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4129] = 2,
    ACTIONS(296), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(294), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4169] = 2,
    ACTIONS(185), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(183), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4209] = 26,
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
    ACTIONS(147), 1,
      sym_variation_delimiter_open,
    ACTIONS(149), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(153), 1,
      anon_sym_AT,
    ACTIONS(414), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(416), 1,
      sym_move_number,
    STATE(2), 1,
      sym_header,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(13), 1,
      sym__san_square,
    STATE(17), 1,
      sym_tagpair,
    STATE(68), 1,
      sym__lan_move_by_coordinates,
    STATE(91), 1,
      sym_san_move,
    STATE(94), 1,
      sym_lan_move,
    STATE(104), 1,
      sym_movetext,
    STATE(118), 1,
      sym_game,
    STATE(223), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(151), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(155), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(93), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(81), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4296] = 2,
    ACTIONS(388), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(386), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4335] = 2,
    ACTIONS(392), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(390), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4374] = 2,
    ACTIONS(380), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(378), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4413] = 2,
    ACTIONS(338), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(336), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4452] = 2,
    ACTIONS(362), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(360), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4491] = 2,
    ACTIONS(366), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(364), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4530] = 2,
    ACTIONS(348), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(346), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4569] = 2,
    ACTIONS(384), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(382), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4608] = 2,
    ACTIONS(356), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(354), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4647] = 2,
    ACTIONS(344), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(342), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4686] = 2,
    ACTIONS(352), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(350), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4725] = 2,
    ACTIONS(398), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(396), 23,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      sym_inline_comment_delimiter_open,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4764] = 23,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(428), 1,
      sym_variation_delimiter_close,
    ACTIONS(430), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(432), 1,
      sym_move_number,
    ACTIONS(434), 1,
      sym__san_file,
    ACTIONS(436), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(438), 1,
      anon_sym_P,
    ACTIONS(442), 1,
      anon_sym_AT,
    ACTIONS(446), 1,
      sym_annotation,
    STATE(100), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(103), 1,
      sym__san_square,
    STATE(128), 1,
      sym__lan_move_by_coordinates,
    STATE(151), 1,
      sym_san_move,
    STATE(153), 1,
      sym_lan_move,
    STATE(211), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(221), 1,
      sym_variation_movetext,
    ACTIONS(440), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(444), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(148), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(150), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(131), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4842] = 23,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(430), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(432), 1,
      sym_move_number,
    ACTIONS(434), 1,
      sym__san_file,
    ACTIONS(436), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(438), 1,
      anon_sym_P,
    ACTIONS(442), 1,
      anon_sym_AT,
    ACTIONS(446), 1,
      sym_annotation,
    ACTIONS(448), 1,
      sym_variation_delimiter_close,
    STATE(100), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(103), 1,
      sym__san_square,
    STATE(128), 1,
      sym__lan_move_by_coordinates,
    STATE(151), 1,
      sym_san_move,
    STATE(153), 1,
      sym_lan_move,
    STATE(211), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(235), 1,
      sym_variation_movetext,
    ACTIONS(440), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(444), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(148), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(150), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(131), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4920] = 23,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(430), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(432), 1,
      sym_move_number,
    ACTIONS(434), 1,
      sym__san_file,
    ACTIONS(436), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(438), 1,
      anon_sym_P,
    ACTIONS(442), 1,
      anon_sym_AT,
    ACTIONS(446), 1,
      sym_annotation,
    ACTIONS(450), 1,
      sym_variation_delimiter_close,
    STATE(100), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(103), 1,
      sym__san_square,
    STATE(128), 1,
      sym__lan_move_by_coordinates,
    STATE(151), 1,
      sym_san_move,
    STATE(153), 1,
      sym_lan_move,
    STATE(211), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(227), 1,
      sym_variation_movetext,
    ACTIONS(440), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(444), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(148), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(150), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(131), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4998] = 22,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      sym_variation_delimiter_open,
    ACTIONS(430), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(432), 1,
      sym_move_number,
    ACTIONS(434), 1,
      sym__san_file,
    ACTIONS(436), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(438), 1,
      anon_sym_P,
    ACTIONS(442), 1,
      anon_sym_AT,
    ACTIONS(446), 1,
      sym_annotation,
    ACTIONS(452), 1,
      sym_variation_delimiter_close,
    STATE(101), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(103), 1,
      sym__san_square,
    STATE(128), 1,
      sym__lan_move_by_coordinates,
    STATE(151), 1,
      sym_san_move,
    STATE(153), 1,
      sym_lan_move,
    STATE(211), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(440), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(444), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(148), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(150), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(131), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5073] = 22,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(457), 1,
      sym_variation_delimiter_open,
    ACTIONS(460), 1,
      sym_variation_delimiter_close,
    ACTIONS(462), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(465), 1,
      sym_move_number,
    ACTIONS(468), 1,
      sym__san_file,
    ACTIONS(471), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(474), 1,
      anon_sym_P,
    ACTIONS(480), 1,
      anon_sym_AT,
    ACTIONS(486), 1,
      sym_annotation,
    ACTIONS(489), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(101), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(103), 1,
      sym__san_square,
    STATE(128), 1,
      sym__lan_move_by_coordinates,
    STATE(151), 1,
      sym_san_move,
    STATE(153), 1,
      sym_lan_move,
    STATE(211), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(477), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(483), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(148), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(150), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(131), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5148] = 2,
    ACTIONS(494), 10,
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
    ACTIONS(492), 16,
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
  [5179] = 8,
    ACTIONS(496), 1,
      sym__san_promotable_piece,
    ACTIONS(498), 1,
      sym__san_capture_symbol,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(502), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(143), 1,
      sym__san_promotion,
    STATE(217), 1,
      sym__san_promotion_symbol,
    ACTIONS(159), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(157), 11,
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
  [5218] = 5,
    ACTIONS(51), 1,
      anon_sym_1,
    STATE(120), 1,
      sym_result_code,
    ACTIONS(55), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(53), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(112), 14,
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
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5250] = 6,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      sym__san_promotable_piece,
    STATE(135), 1,
      sym__san_promotion,
    STATE(217), 1,
      sym__san_promotion_symbol,
    ACTIONS(179), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(177), 11,
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
  [5283] = 2,
    ACTIONS(175), 8,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 12,
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
  [5308] = 6,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(506), 1,
      sym__san_promotable_piece,
    STATE(146), 1,
      sym__san_promotion,
    STATE(217), 1,
      sym__san_promotion_symbol,
    ACTIONS(169), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(167), 11,
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
  [5341] = 7,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 1,
      sym_old_style_twic_section_comment,
    STATE(238), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(109), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(512), 13,
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
  [5376] = 7,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    ACTIONS(519), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(524), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(238), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(109), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(522), 13,
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
  [5411] = 6,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      sym__san_promotable_piece,
    STATE(137), 1,
      sym__san_promotion,
    STATE(217), 1,
      sym__san_promotion_symbol,
    ACTIONS(185), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(183), 11,
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
  [5444] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(529), 1,
      sym_old_style_twic_section_comment,
    STATE(242), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(112), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(512), 13,
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
  [5476] = 6,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    ACTIONS(524), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(531), 1,
      sym_old_style_twic_section_comment,
    STATE(242), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(112), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(522), 13,
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
  [5508] = 3,
    ACTIONS(534), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(314), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(316), 15,
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
  [5533] = 2,
    ACTIONS(175), 7,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      anon_sym_EQ,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 11,
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
  [5556] = 4,
    ACTIONS(536), 1,
      sym__san_capture_symbol,
    STATE(136), 1,
      sym__san_square,
    ACTIONS(175), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 11,
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
  [5583] = 2,
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
  [5605] = 2,
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
  [5627] = 2,
    ACTIONS(546), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(548), 14,
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
  [5649] = 2,
    ACTIONS(550), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(552), 14,
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
  [5671] = 2,
    ACTIONS(554), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(556), 14,
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
  [5693] = 2,
    ACTIONS(558), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(560), 14,
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
  [5715] = 2,
    ACTIONS(336), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(338), 14,
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
  [5737] = 2,
    ACTIONS(562), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(564), 14,
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
  [5759] = 3,
    ACTIONS(314), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(566), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(316), 15,
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
  [5783] = 2,
    ACTIONS(568), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(570), 14,
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
  [5805] = 2,
    ACTIONS(572), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(574), 14,
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
  [5827] = 2,
    ACTIONS(576), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(578), 14,
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
  [5849] = 3,
    ACTIONS(580), 1,
      sym_check_or_mate_condition,
    ACTIONS(286), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(284), 11,
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
  [5872] = 2,
    ACTIONS(296), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(294), 11,
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
  [5893] = 1,
    ACTIONS(582), 16,
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
  [5912] = 3,
    ACTIONS(584), 1,
      sym_check_or_mate_condition,
    ACTIONS(280), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(278), 11,
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
  [5935] = 1,
    ACTIONS(586), 16,
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
  [5954] = 1,
    ACTIONS(588), 16,
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
  [5973] = 2,
    ACTIONS(308), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(306), 11,
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
  [5994] = 2,
    ACTIONS(312), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(310), 11,
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
  [6015] = 2,
    ACTIONS(326), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(324), 11,
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
  [6036] = 2,
    ACTIONS(330), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(328), 11,
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
  [6057] = 2,
    ACTIONS(336), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(338), 14,
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
  [6078] = 2,
    ACTIONS(300), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(298), 11,
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
  [6099] = 2,
    ACTIONS(272), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(270), 11,
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
  [6120] = 3,
    ACTIONS(314), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(590), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(316), 14,
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
  [6143] = 2,
    ACTIONS(334), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(332), 11,
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
  [6164] = 2,
    ACTIONS(169), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(167), 11,
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
  [6185] = 2,
    ACTIONS(292), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(290), 11,
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
  [6206] = 2,
    ACTIONS(304), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(302), 11,
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
  [6227] = 2,
    ACTIONS(185), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(183), 11,
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
  [6248] = 2,
    ACTIONS(175), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(173), 11,
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
  [6269] = 2,
    ACTIONS(594), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(592), 11,
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
  [6289] = 2,
    ACTIONS(598), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(596), 11,
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
  [6309] = 2,
    ACTIONS(602), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(600), 11,
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
  [6329] = 2,
    ACTIONS(606), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(604), 11,
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
  [6349] = 2,
    ACTIONS(610), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(608), 11,
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
  [6369] = 2,
    ACTIONS(614), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(612), 11,
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
  [6389] = 2,
    ACTIONS(618), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(616), 11,
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
  [6409] = 2,
    ACTIONS(384), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(382), 11,
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
  [6429] = 2,
    ACTIONS(338), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(336), 11,
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
  [6449] = 2,
    ACTIONS(622), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(620), 11,
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
  [6469] = 2,
    ACTIONS(388), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(386), 11,
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
  [6489] = 2,
    ACTIONS(380), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(378), 11,
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
  [6509] = 1,
    ACTIONS(624), 10,
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
  [6522] = 5,
    ACTIONS(626), 1,
      sym__san_file,
    ACTIONS(628), 1,
      sym__san_rank,
    ACTIONS(630), 1,
      sym__san_capture_symbol,
    ACTIONS(632), 1,
      anon_sym_AT,
    STATE(139), 1,
      sym__san_square,
  [6538] = 5,
    ACTIONS(634), 1,
      sym__san_file,
    ACTIONS(636), 1,
      sym__san_rank,
    ACTIONS(638), 1,
      sym__san_capture_symbol,
    ACTIONS(640), 1,
      anon_sym_AT,
    STATE(33), 1,
      sym__san_square,
  [6554] = 5,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(173), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(197), 1,
      sym_tagpair_value_contents,
    STATE(207), 1,
      sym_double_quote,
  [6570] = 5,
    ACTIONS(646), 1,
      sym__san_file,
    ACTIONS(648), 1,
      sym__san_rank,
    ACTIONS(650), 1,
      sym__san_capture_symbol,
    ACTIONS(652), 1,
      anon_sym_AT,
    STATE(75), 1,
      sym__san_square,
  [6586] = 4,
    ACTIONS(654), 1,
      sym__san_file,
    ACTIONS(656), 1,
      sym__san_rank,
    ACTIONS(658), 1,
      sym__san_capture_symbol,
    STATE(145), 1,
      sym__san_square,
  [6599] = 4,
    ACTIONS(660), 1,
      sym__san_file,
    ACTIONS(662), 1,
      sym__san_rank,
    ACTIONS(664), 1,
      sym__san_capture_symbol,
    STATE(107), 1,
      sym__san_square,
  [6612] = 4,
    ACTIONS(666), 1,
      sym__san_file,
    ACTIONS(668), 1,
      sym__san_rank,
    ACTIONS(670), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
  [6625] = 4,
    ACTIONS(672), 1,
      sym__san_file,
    ACTIONS(674), 1,
      sym__san_rank,
    ACTIONS(676), 1,
      sym__san_capture_symbol,
    STATE(9), 1,
      sym__san_square,
  [6638] = 4,
    ACTIONS(678), 1,
      sym__san_file,
    ACTIONS(680), 1,
      sym__san_rank,
    ACTIONS(682), 1,
      sym__san_capture_symbol,
    STATE(67), 1,
      sym__san_square,
  [6651] = 4,
    ACTIONS(684), 1,
      sym__san_file,
    ACTIONS(686), 1,
      sym__san_rank,
    ACTIONS(688), 1,
      sym__san_capture_symbol,
    STATE(21), 1,
      sym__san_square,
  [6664] = 3,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      sym_double_quote,
    STATE(206), 1,
      sym__tagpair_value,
  [6674] = 3,
    ACTIONS(666), 1,
      sym__san_file,
    ACTIONS(670), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
  [6684] = 3,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(178), 1,
      aux_sym_tagpair_value_contents_repeat1,
  [6694] = 3,
    ACTIONS(654), 1,
      sym__san_file,
    ACTIONS(658), 1,
      sym__san_capture_symbol,
    STATE(145), 1,
      sym__san_square,
  [6704] = 2,
    ACTIONS(697), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(699), 2,
      anon_sym_DQUOTE,
      aux_sym_tagpair_value_contents_token1,
  [6712] = 3,
    ACTIONS(678), 1,
      sym__san_file,
    ACTIONS(682), 1,
      sym__san_capture_symbol,
    STATE(67), 1,
      sym__san_square,
  [6722] = 1,
    ACTIONS(701), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [6728] = 3,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(178), 1,
      aux_sym_tagpair_value_contents_repeat1,
  [6738] = 2,
    ACTIONS(678), 1,
      sym__san_file,
    STATE(72), 1,
      sym__san_square,
  [6745] = 2,
    ACTIONS(660), 1,
      sym__san_file,
    STATE(110), 1,
      sym__san_square,
  [6752] = 2,
    ACTIONS(684), 1,
      sym__san_file,
    STATE(23), 1,
      sym__san_square,
  [6759] = 2,
    ACTIONS(666), 1,
      sym__san_file,
    STATE(36), 1,
      sym__san_square,
  [6766] = 2,
    ACTIONS(666), 1,
      sym__san_file,
    STATE(40), 1,
      sym__san_square,
  [6773] = 2,
    ACTIONS(672), 1,
      sym__san_file,
    STATE(11), 1,
      sym__san_square,
  [6780] = 2,
    ACTIONS(666), 1,
      sym__san_file,
    STATE(31), 1,
      sym__san_square,
  [6787] = 2,
    ACTIONS(678), 1,
      sym__san_file,
    STATE(82), 1,
      sym__san_square,
  [6794] = 2,
    ACTIONS(678), 1,
      sym__san_file,
    STATE(80), 1,
      sym__san_square,
  [6801] = 2,
    ACTIONS(666), 1,
      sym__san_file,
    STATE(32), 1,
      sym__san_square,
  [6808] = 2,
    ACTIONS(666), 1,
      sym__san_file,
    STATE(34), 1,
      sym__san_square,
  [6815] = 2,
    ACTIONS(684), 1,
      sym__san_file,
    STATE(19), 1,
      sym__san_square,
  [6822] = 2,
    ACTIONS(672), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_square,
  [6829] = 2,
    ACTIONS(678), 1,
      sym__san_file,
    STATE(77), 1,
      sym__san_square,
  [6836] = 2,
    ACTIONS(666), 1,
      sym__san_file,
    STATE(25), 1,
      sym__san_square,
  [6843] = 2,
    ACTIONS(678), 1,
      sym__san_file,
    STATE(69), 1,
      sym__san_square,
  [6850] = 2,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      aux_sym_tagpair_value_contents_token1,
  [6857] = 2,
    ACTIONS(678), 1,
      sym__san_file,
    STATE(67), 1,
      sym__san_square,
  [6864] = 2,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      sym_double_quote,
  [6871] = 2,
    ACTIONS(654), 1,
      sym__san_file,
    STATE(134), 1,
      sym__san_square,
  [6878] = 2,
    ACTIONS(654), 1,
      sym__san_file,
    STATE(136), 1,
      sym__san_square,
  [6885] = 2,
    ACTIONS(660), 1,
      sym__san_file,
    STATE(105), 1,
      sym__san_square,
  [6892] = 2,
    ACTIONS(654), 1,
      sym__san_file,
    STATE(144), 1,
      sym__san_square,
  [6899] = 2,
    ACTIONS(654), 1,
      sym__san_file,
    STATE(129), 1,
      sym__san_square,
  [6906] = 2,
    ACTIONS(654), 1,
      sym__san_file,
    STATE(145), 1,
      sym__san_square,
  [6913] = 1,
    ACTIONS(701), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [6918] = 2,
    ACTIONS(654), 1,
      sym__san_file,
    STATE(140), 1,
      sym__san_square,
  [6925] = 1,
    ACTIONS(713), 1,
      sym_tagpair_delimiter_close,
  [6929] = 1,
    ACTIONS(715), 1,
      sym_tagpair_delimiter_close,
  [6933] = 1,
    ACTIONS(717), 1,
      sym_inline_comment_delimiter_close,
  [6937] = 1,
    ACTIONS(719), 1,
      sym__san_rank,
  [6941] = 1,
    ACTIONS(721), 1,
      sym__san_rank,
  [6945] = 1,
    ACTIONS(723), 1,
      sym_rest_of_line_comment_text,
  [6949] = 1,
    ACTIONS(725), 1,
      anon_sym_PERCENT,
  [6953] = 1,
    ACTIONS(701), 1,
      anon_sym_1,
  [6957] = 1,
    ACTIONS(727), 1,
      anon_sym_2,
  [6961] = 1,
    ACTIONS(729), 1,
      sym_rest_of_line_comment_text,
  [6965] = 1,
    ACTIONS(731), 1,
      sym_tagpair_key,
  [6969] = 1,
    ACTIONS(733), 1,
      sym__san_promotable_piece,
  [6973] = 1,
    ACTIONS(735), 1,
      sym_inline_comment_text,
  [6977] = 1,
    ACTIONS(709), 1,
      sym_tagpair_delimiter_close,
  [6981] = 1,
    ACTIONS(737), 1,
      sym_tagpair_delimiter_close,
  [6985] = 1,
    ACTIONS(739), 1,
      sym_variation_delimiter_close,
  [6989] = 1,
    ACTIONS(741), 1,
      anon_sym_AT,
  [6993] = 1,
    ACTIONS(743), 1,
      sym_rest_of_line_comment_text,
  [6997] = 1,
    ACTIONS(745), 1,
      sym_inline_comment_delimiter_close,
  [7001] = 1,
    ACTIONS(747), 1,
      sym__san_rank,
  [7005] = 1,
    ACTIONS(749), 1,
      sym__san_promotable_piece,
  [7009] = 1,
    ACTIONS(751), 1,
      sym_variation_delimiter_close,
  [7013] = 1,
    ACTIONS(753), 1,
      anon_sym_2,
  [7017] = 1,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
  [7021] = 1,
    ACTIONS(757), 1,
      sym_rest_of_line_comment_text,
  [7025] = 1,
    ACTIONS(759), 1,
      sym_rest_of_line_comment_text,
  [7029] = 1,
    ACTIONS(761), 1,
      anon_sym_1,
  [7033] = 1,
    ACTIONS(763), 1,
      sym__san_promotable_piece,
  [7037] = 1,
    ACTIONS(765), 1,
      sym_inline_comment_delimiter_close,
  [7041] = 1,
    ACTIONS(767), 1,
      sym_variation_delimiter_close,
  [7045] = 1,
    ACTIONS(769), 1,
      sym_rest_of_line_comment_text,
  [7049] = 1,
    ACTIONS(771), 1,
      sym__san_rank,
  [7053] = 1,
    ACTIONS(773), 1,
      sym_rest_of_line_comment_text,
  [7057] = 1,
    ACTIONS(775), 1,
      sym__san_rank,
  [7061] = 1,
    ACTIONS(777), 1,
      sym_rest_of_line_comment_text,
  [7065] = 1,
    ACTIONS(779), 1,
      sym__san_rank,
  [7069] = 1,
    ACTIONS(781), 1,
      sym_rest_of_line_comment_text,
  [7073] = 1,
    ACTIONS(783), 1,
      sym_inline_comment_text,
  [7077] = 1,
    ACTIONS(785), 1,
      anon_sym_AT,
  [7081] = 1,
    ACTIONS(787), 1,
      sym_inline_comment_text,
  [7085] = 1,
    ACTIONS(789), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 204,
  [SMALL_STATE(5)] = 301,
  [SMALL_STATE(6)] = 407,
  [SMALL_STATE(7)] = 503,
  [SMALL_STATE(8)] = 599,
  [SMALL_STATE(9)] = 658,
  [SMALL_STATE(10)] = 713,
  [SMALL_STATE(11)] = 760,
  [SMALL_STATE(12)] = 815,
  [SMALL_STATE(13)] = 870,
  [SMALL_STATE(14)] = 928,
  [SMALL_STATE(15)] = 987,
  [SMALL_STATE(16)] = 1046,
  [SMALL_STATE(17)] = 1091,
  [SMALL_STATE(18)] = 1150,
  [SMALL_STATE(19)] = 1199,
  [SMALL_STATE(20)] = 1251,
  [SMALL_STATE(21)] = 1353,
  [SMALL_STATE(22)] = 1405,
  [SMALL_STATE(23)] = 1507,
  [SMALL_STATE(24)] = 1559,
  [SMALL_STATE(25)] = 1603,
  [SMALL_STATE(26)] = 1646,
  [SMALL_STATE(27)] = 1689,
  [SMALL_STATE(28)] = 1732,
  [SMALL_STATE(29)] = 1785,
  [SMALL_STATE(30)] = 1830,
  [SMALL_STATE(31)] = 1875,
  [SMALL_STATE(32)] = 1918,
  [SMALL_STATE(33)] = 1961,
  [SMALL_STATE(34)] = 2004,
  [SMALL_STATE(35)] = 2047,
  [SMALL_STATE(36)] = 2090,
  [SMALL_STATE(37)] = 2133,
  [SMALL_STATE(38)] = 2176,
  [SMALL_STATE(39)] = 2221,
  [SMALL_STATE(40)] = 2274,
  [SMALL_STATE(41)] = 2317,
  [SMALL_STATE(42)] = 2360,
  [SMALL_STATE(43)] = 2403,
  [SMALL_STATE(44)] = 2445,
  [SMALL_STATE(45)] = 2489,
  [SMALL_STATE(46)] = 2531,
  [SMALL_STATE(47)] = 2573,
  [SMALL_STATE(48)] = 2615,
  [SMALL_STATE(49)] = 2657,
  [SMALL_STATE(50)] = 2701,
  [SMALL_STATE(51)] = 2743,
  [SMALL_STATE(52)] = 2785,
  [SMALL_STATE(53)] = 2833,
  [SMALL_STATE(54)] = 2875,
  [SMALL_STATE(55)] = 2917,
  [SMALL_STATE(56)] = 2959,
  [SMALL_STATE(57)] = 3001,
  [SMALL_STATE(58)] = 3043,
  [SMALL_STATE(59)] = 3089,
  [SMALL_STATE(60)] = 3131,
  [SMALL_STATE(61)] = 3172,
  [SMALL_STATE(62)] = 3213,
  [SMALL_STATE(63)] = 3254,
  [SMALL_STATE(64)] = 3301,
  [SMALL_STATE(65)] = 3342,
  [SMALL_STATE(66)] = 3383,
  [SMALL_STATE(67)] = 3473,
  [SMALL_STATE(68)] = 3513,
  [SMALL_STATE(69)] = 3555,
  [SMALL_STATE(70)] = 3595,
  [SMALL_STATE(71)] = 3635,
  [SMALL_STATE(72)] = 3675,
  [SMALL_STATE(73)] = 3715,
  [SMALL_STATE(74)] = 3805,
  [SMALL_STATE(75)] = 3845,
  [SMALL_STATE(76)] = 3885,
  [SMALL_STATE(77)] = 3925,
  [SMALL_STATE(78)] = 3965,
  [SMALL_STATE(79)] = 4007,
  [SMALL_STATE(80)] = 4047,
  [SMALL_STATE(81)] = 4087,
  [SMALL_STATE(82)] = 4129,
  [SMALL_STATE(83)] = 4169,
  [SMALL_STATE(84)] = 4209,
  [SMALL_STATE(85)] = 4296,
  [SMALL_STATE(86)] = 4335,
  [SMALL_STATE(87)] = 4374,
  [SMALL_STATE(88)] = 4413,
  [SMALL_STATE(89)] = 4452,
  [SMALL_STATE(90)] = 4491,
  [SMALL_STATE(91)] = 4530,
  [SMALL_STATE(92)] = 4569,
  [SMALL_STATE(93)] = 4608,
  [SMALL_STATE(94)] = 4647,
  [SMALL_STATE(95)] = 4686,
  [SMALL_STATE(96)] = 4725,
  [SMALL_STATE(97)] = 4764,
  [SMALL_STATE(98)] = 4842,
  [SMALL_STATE(99)] = 4920,
  [SMALL_STATE(100)] = 4998,
  [SMALL_STATE(101)] = 5073,
  [SMALL_STATE(102)] = 5148,
  [SMALL_STATE(103)] = 5179,
  [SMALL_STATE(104)] = 5218,
  [SMALL_STATE(105)] = 5250,
  [SMALL_STATE(106)] = 5283,
  [SMALL_STATE(107)] = 5308,
  [SMALL_STATE(108)] = 5341,
  [SMALL_STATE(109)] = 5376,
  [SMALL_STATE(110)] = 5411,
  [SMALL_STATE(111)] = 5444,
  [SMALL_STATE(112)] = 5476,
  [SMALL_STATE(113)] = 5508,
  [SMALL_STATE(114)] = 5533,
  [SMALL_STATE(115)] = 5556,
  [SMALL_STATE(116)] = 5583,
  [SMALL_STATE(117)] = 5605,
  [SMALL_STATE(118)] = 5627,
  [SMALL_STATE(119)] = 5649,
  [SMALL_STATE(120)] = 5671,
  [SMALL_STATE(121)] = 5693,
  [SMALL_STATE(122)] = 5715,
  [SMALL_STATE(123)] = 5737,
  [SMALL_STATE(124)] = 5759,
  [SMALL_STATE(125)] = 5783,
  [SMALL_STATE(126)] = 5805,
  [SMALL_STATE(127)] = 5827,
  [SMALL_STATE(128)] = 5849,
  [SMALL_STATE(129)] = 5872,
  [SMALL_STATE(130)] = 5893,
  [SMALL_STATE(131)] = 5912,
  [SMALL_STATE(132)] = 5935,
  [SMALL_STATE(133)] = 5954,
  [SMALL_STATE(134)] = 5973,
  [SMALL_STATE(135)] = 5994,
  [SMALL_STATE(136)] = 6015,
  [SMALL_STATE(137)] = 6036,
  [SMALL_STATE(138)] = 6057,
  [SMALL_STATE(139)] = 6078,
  [SMALL_STATE(140)] = 6099,
  [SMALL_STATE(141)] = 6120,
  [SMALL_STATE(142)] = 6143,
  [SMALL_STATE(143)] = 6164,
  [SMALL_STATE(144)] = 6185,
  [SMALL_STATE(145)] = 6206,
  [SMALL_STATE(146)] = 6227,
  [SMALL_STATE(147)] = 6248,
  [SMALL_STATE(148)] = 6269,
  [SMALL_STATE(149)] = 6289,
  [SMALL_STATE(150)] = 6309,
  [SMALL_STATE(151)] = 6329,
  [SMALL_STATE(152)] = 6349,
  [SMALL_STATE(153)] = 6369,
  [SMALL_STATE(154)] = 6389,
  [SMALL_STATE(155)] = 6409,
  [SMALL_STATE(156)] = 6429,
  [SMALL_STATE(157)] = 6449,
  [SMALL_STATE(158)] = 6469,
  [SMALL_STATE(159)] = 6489,
  [SMALL_STATE(160)] = 6509,
  [SMALL_STATE(161)] = 6522,
  [SMALL_STATE(162)] = 6538,
  [SMALL_STATE(163)] = 6554,
  [SMALL_STATE(164)] = 6570,
  [SMALL_STATE(165)] = 6586,
  [SMALL_STATE(166)] = 6599,
  [SMALL_STATE(167)] = 6612,
  [SMALL_STATE(168)] = 6625,
  [SMALL_STATE(169)] = 6638,
  [SMALL_STATE(170)] = 6651,
  [SMALL_STATE(171)] = 6664,
  [SMALL_STATE(172)] = 6674,
  [SMALL_STATE(173)] = 6684,
  [SMALL_STATE(174)] = 6694,
  [SMALL_STATE(175)] = 6704,
  [SMALL_STATE(176)] = 6712,
  [SMALL_STATE(177)] = 6722,
  [SMALL_STATE(178)] = 6728,
  [SMALL_STATE(179)] = 6738,
  [SMALL_STATE(180)] = 6745,
  [SMALL_STATE(181)] = 6752,
  [SMALL_STATE(182)] = 6759,
  [SMALL_STATE(183)] = 6766,
  [SMALL_STATE(184)] = 6773,
  [SMALL_STATE(185)] = 6780,
  [SMALL_STATE(186)] = 6787,
  [SMALL_STATE(187)] = 6794,
  [SMALL_STATE(188)] = 6801,
  [SMALL_STATE(189)] = 6808,
  [SMALL_STATE(190)] = 6815,
  [SMALL_STATE(191)] = 6822,
  [SMALL_STATE(192)] = 6829,
  [SMALL_STATE(193)] = 6836,
  [SMALL_STATE(194)] = 6843,
  [SMALL_STATE(195)] = 6850,
  [SMALL_STATE(196)] = 6857,
  [SMALL_STATE(197)] = 6864,
  [SMALL_STATE(198)] = 6871,
  [SMALL_STATE(199)] = 6878,
  [SMALL_STATE(200)] = 6885,
  [SMALL_STATE(201)] = 6892,
  [SMALL_STATE(202)] = 6899,
  [SMALL_STATE(203)] = 6906,
  [SMALL_STATE(204)] = 6913,
  [SMALL_STATE(205)] = 6918,
  [SMALL_STATE(206)] = 6925,
  [SMALL_STATE(207)] = 6929,
  [SMALL_STATE(208)] = 6933,
  [SMALL_STATE(209)] = 6937,
  [SMALL_STATE(210)] = 6941,
  [SMALL_STATE(211)] = 6945,
  [SMALL_STATE(212)] = 6949,
  [SMALL_STATE(213)] = 6953,
  [SMALL_STATE(214)] = 6957,
  [SMALL_STATE(215)] = 6961,
  [SMALL_STATE(216)] = 6965,
  [SMALL_STATE(217)] = 6969,
  [SMALL_STATE(218)] = 6973,
  [SMALL_STATE(219)] = 6977,
  [SMALL_STATE(220)] = 6981,
  [SMALL_STATE(221)] = 6985,
  [SMALL_STATE(222)] = 6989,
  [SMALL_STATE(223)] = 6993,
  [SMALL_STATE(224)] = 6997,
  [SMALL_STATE(225)] = 7001,
  [SMALL_STATE(226)] = 7005,
  [SMALL_STATE(227)] = 7009,
  [SMALL_STATE(228)] = 7013,
  [SMALL_STATE(229)] = 7017,
  [SMALL_STATE(230)] = 7021,
  [SMALL_STATE(231)] = 7025,
  [SMALL_STATE(232)] = 7029,
  [SMALL_STATE(233)] = 7033,
  [SMALL_STATE(234)] = 7037,
  [SMALL_STATE(235)] = 7041,
  [SMALL_STATE(236)] = 7045,
  [SMALL_STATE(237)] = 7049,
  [SMALL_STATE(238)] = 7053,
  [SMALL_STATE(239)] = 7057,
  [SMALL_STATE(240)] = 7061,
  [SMALL_STATE(241)] = 7065,
  [SMALL_STATE(242)] = 7069,
  [SMALL_STATE(243)] = 7073,
  [SMALL_STATE(244)] = 7077,
  [SMALL_STATE(245)] = 7081,
  [SMALL_STATE(246)] = 7085,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(215),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(99),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(245),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(51),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(168),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(162),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(246),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(193),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(29),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(212),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(215),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(98),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(218),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(90),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(170),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(164),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(222),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(222),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(192),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(81),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(89),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(14),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(215),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(216),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(212),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 22),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(215),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(111),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(216),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(98),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(218),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(90),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(170),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(164),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(222),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(192),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(81),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(89),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(212),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 10),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 31),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 31),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 19),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 19),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 20),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 20),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 19),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 19),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 30),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 30),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 11),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 11),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 28),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 28),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 36),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 36),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 24),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 15),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(215),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(97),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(243),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(157),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(166),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(161),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(244),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(244),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(205),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(131),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(154),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(212),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 38),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 38),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 18),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 18),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 21),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 21),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 23),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 23),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 32),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 32),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 33),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 33),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 15),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 15),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 27),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 27),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 12),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 12),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(178),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 35),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 1, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 39),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [755] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
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
