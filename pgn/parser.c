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
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 40

enum ts_symbol_identifiers {
  sym__empty_line = 1,
  sym_rest_of_line_comment_delimiter_open = 2,
  aux_sym_rest_of_line_comment_token1 = 3,
  sym_rest_of_line_comment_text = 4,
  sym_old_style_twic_section_comment = 5,
  sym_tagpair_delimiter_open = 6,
  sym_tagpair_delimiter_close = 7,
  anon_sym_DQUOTE = 8,
  sym_tagpair_key = 9,
  aux_sym_tagpair_value_contents_token1 = 10,
  sym_variation_delimiter_open = 11,
  sym_variation_delimiter_close = 12,
  sym_inline_comment_delimiter_open = 13,
  sym_inline_comment_delimiter_close = 14,
  sym_inline_comment_text = 15,
  sym_move_number = 16,
  sym__san_file = 17,
  sym__san_rank = 18,
  sym__san_promotable_piece = 19,
  sym__san_major_or_minor_piece = 20,
  sym__san_capture_symbol = 21,
  anon_sym_EQ = 22,
  anon_sym_P = 23,
  anon_sym_u2659 = 24,
  anon_sym_u265fufe0e = 25,
  anon_sym_AT = 26,
  aux_sym__lan_move_by_coordinates_token1 = 27,
  sym__san_move_castle = 28,
  sym__san_null_move = 29,
  sym_check_or_mate_condition = 30,
  sym_annotation = 31,
  anon_sym_1 = 32,
  anon_sym_DASH = 33,
  aux_sym_result_code_token1 = 34,
  anon_sym_u2212 = 35,
  aux_sym_result_code_token2 = 36,
  anon_sym_u2010 = 37,
  aux_sym_result_code_token3 = 38,
  anon_sym_u2011 = 39,
  aux_sym_result_code_token4 = 40,
  anon_sym_u2012 = 41,
  aux_sym_result_code_token5 = 42,
  anon_sym_u2013 = 43,
  aux_sym_result_code_token6 = 44,
  anon_sym_u2014 = 45,
  aux_sym_result_code_token7 = 46,
  anon_sym_u2796 = 47,
  aux_sym_result_code_token8 = 48,
  anon_sym_O = 49,
  anon_sym_0 = 50,
  anon_sym_o = 51,
  anon_sym_SLASH = 52,
  aux_sym_result_code_token9 = 53,
  anon_sym_u2215 = 54,
  aux_sym_result_code_token10 = 55,
  anon_sym_u2044 = 56,
  aux_sym_result_code_token11 = 57,
  anon_sym_u27cb = 58,
  aux_sym_result_code_token12 = 59,
  anon_sym_u29f8 = 60,
  aux_sym_result_code_token13 = 61,
  anon_sym_2 = 62,
  anon_sym_u00bd = 63,
  aux_sym_result_code_token14 = 64,
  anon_sym_STAR = 65,
  aux_sym_result_code_token15 = 66,
  anon_sym_u2217 = 67,
  aux_sym_result_code_token16 = 68,
  anon_sym_u2731 = 69,
  aux_sym_result_code_token17 = 70,
  anon_sym_u204e = 71,
  aux_sym_result_code_token18 = 72,
  anon_sym_u066d = 73,
  aux_sym_result_code_token19 = 74,
  sym_series_of_games = 75,
  sym_game = 76,
  sym_freestanding_comment = 77,
  sym_rest_of_line_comment = 78,
  sym_header = 79,
  sym_double_quote = 80,
  sym_tagpair = 81,
  sym__tagpair_value = 82,
  sym_tagpair_value_contents = 83,
  sym_movetext = 84,
  sym_variation_movetext = 85,
  sym__movetext_element = 86,
  sym__variation_movetext_element = 87,
  sym_variation = 88,
  sym_recursive_variation = 89,
  sym_inline_comment = 90,
  sym_san_move = 91,
  sym__san_move_piece = 92,
  sym_lan_move = 93,
  sym__san_promotion_symbol = 94,
  sym__san_square = 95,
  sym__san_promotion = 96,
  sym__san_move_pawn = 97,
  sym__san_drop_pawn = 98,
  sym__san_move_major_or_minor_piece = 99,
  sym__san_drop_major_or_minor_piece = 100,
  sym__lan_move_by_coordinates = 101,
  sym_result_code = 102,
  aux_sym_series_of_games_repeat1 = 103,
  aux_sym_freestanding_comment_repeat1 = 104,
  aux_sym_header_repeat1 = 105,
  aux_sym_tagpair_value_contents_repeat1 = 106,
  aux_sym_movetext_repeat1 = 107,
  aux_sym_variation_movetext_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
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
  [sym_series_of_games] = "series_of_games",
  [sym_game] = "game",
  [sym_freestanding_comment] = "freestanding_comment",
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
  [sym_rest_of_line_comment_delimiter_open] = sym_rest_of_line_comment_delimiter_open,
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
  [sym_series_of_games] = sym_series_of_games,
  [sym_game] = sym_game,
  [sym_freestanding_comment] = sym_freestanding_comment,
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
  [sym_rest_of_line_comment_delimiter_open] = {
    .visible = true,
    .named = true,
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
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 5},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 1},
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
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [17] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [19] =
    {field_variation_move_number, 0},
  [20] =
    {field_variation_annotation, 0},
  [21] =
    {field_variation_comment, 0},
  [22] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [27] =
    {field_variation_san_move, 0},
  [28] =
    {field_variation_lan_move, 0},
  [29] =
    {field_freestanding_comment, 0},
    {field_game, 1},
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
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 13,
  [18] = 14,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 14,
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
  [40] = 15,
  [41] = 41,
  [42] = 14,
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
  [54] = 29,
  [55] = 55,
  [56] = 56,
  [57] = 29,
  [58] = 58,
  [59] = 59,
  [60] = 38,
  [61] = 32,
  [62] = 62,
  [63] = 63,
  [64] = 26,
  [65] = 14,
  [66] = 58,
  [67] = 29,
  [68] = 31,
  [69] = 27,
  [70] = 23,
  [71] = 30,
  [72] = 33,
  [73] = 34,
  [74] = 35,
  [75] = 75,
  [76] = 36,
  [77] = 45,
  [78] = 39,
  [79] = 41,
  [80] = 45,
  [81] = 55,
  [82] = 56,
  [83] = 45,
  [84] = 52,
  [85] = 47,
  [86] = 50,
  [87] = 44,
  [88] = 46,
  [89] = 89,
  [90] = 59,
  [91] = 51,
  [92] = 92,
  [93] = 92,
  [94] = 49,
  [95] = 48,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 99,
  [102] = 100,
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
  [128] = 127,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 134,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 140,
  [146] = 146,
  [147] = 147,
  [148] = 141,
  [149] = 149,
  [150] = 143,
  [151] = 146,
  [152] = 144,
  [153] = 147,
  [154] = 142,
  [155] = 155,
  [156] = 139,
  [157] = 157,
  [158] = 157,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 160,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 169,
  [176] = 176,
  [177] = 162,
  [178] = 170,
  [179] = 179,
  [180] = 179,
  [181] = 149,
  [182] = 160,
  [183] = 162,
  [184] = 160,
  [185] = 162,
  [186] = 163,
  [187] = 174,
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
        '"', 1481,
        '#', 1537,
        '&', 798,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '-', 1562,
        '/', 1588,
        '0', 1584,
        '1', 1559,
        '2', 1598,
        '=', 1515,
        '@', 1525,
        'O', 1580,
        'P', 1518,
        '[', 1477,
        ']', 1479,
        'o', 1587,
        '{', 1490,
        '}', 1492,
        0xbd, 1599,
        0x66d, 1619,
        0x2010, 1566,
        0x2011, 1568,
        0x2012, 1570,
        0x2013, 1572,
        0x2014, 1574,
        0x2044, 1592,
        0x204e, 1615,
        0x2212, 1564,
        0x2215, 1590,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        0x2796, 1576,
        0x27cb, 1594,
        0x29f8, 1596,
        '%', 1469,
        ';', 1469,
        '+', 1540,
        0x16ed, 1540,
        0x2795, 1540,
        ':', 1513,
        'X', 1513,
        'x', 1513,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1465);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(1502);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1503);
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
          lookahead == 0x2796) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(1551);
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
          lookahead == 0x2796) ADVANCE(1551);
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
      if (lookahead == '.') ADVANCE(1551);
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
      if (lookahead == ';') ADVANCE(1606);
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
      if (lookahead == ';') ADVANCE(1538);
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
        ';', 1544,
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
      if (lookahead == ';') ADVANCE(1539);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1538);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1538);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1547);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1551);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1551);
      if (lookahead == 'f') ADVANCE(473);
      if (lookahead == 'q') ADVANCE(265);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1551);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1551);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1551);
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
      if (lookahead == ';') ADVANCE(1536);
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
      if (lookahead == ';') ADVANCE(1544);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1606);
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
      if (lookahead == ';') ADVANCE(1602);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1622);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1618);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1610);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1614);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(1528);
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
      if (lookahead == ';') ADVANCE(1545);
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
      if (lookahead == '=') ADVANCE(1551);
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
      if (lookahead == 'N') ADVANCE(1551);
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
      if (lookahead == 0xfe0e) ADVANCE(1524);
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
          lookahead == 's') ADVANCE(1536);
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
          lookahead == 'o') ADVANCE(1536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1532);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1550);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 536:
      ADVANCE_MAP(
        '\n', 822,
        '\r', 538,
        '.', 1494,
        '\t', 537,
        0x0b, 537,
        '\f', 537,
        ' ', 537,
        'A', 537,
        'B', 537,
        'a', 537,
        'b', 537,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(538);
      if (lookahead == '.') ADVANCE(1494);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(537);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '.') ADVANCE(1497);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      END_STATE();
    case 539:
      ADVANCE_MAP(
        '\n', 788,
        '\r', 789,
        '!', 1549,
        '$', 534,
        '&', 11,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'N', 1510,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '%', 1470,
        ';', 1470,
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
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 540:
      ADVANCE_MAP(
        '\n', 788,
        '\r', 539,
        '!', 1549,
        '$', 534,
        '&', 11,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'N', 1510,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '%', 1470,
        ';', 1470,
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
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1475);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(572);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(580);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(590);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(602);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(605);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(619);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(623);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1475);
      if (lookahead == '\r') ADVANCE(541);
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1476);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(776);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(664);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(672);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(676);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(692);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(702);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(717);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(718);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(724);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(725);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(726);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(727);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(731);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(733);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(735);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(740);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(750);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(753);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(757);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(760);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(761);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(763);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(764);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(765);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(768);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(769);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(770);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(771);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(772);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(773);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead == '-') ADVANCE(774);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1476);
      if (lookahead == '\r') ADVANCE(659);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 777:
      ADVANCE_MAP(
        '\n', 780,
        '\r', 777,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 778:
      ADVANCE_MAP(
        '\n', 780,
        '\r', 777,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 779:
      ADVANCE_MAP(
        '\n', 1467,
        '\r', 777,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 780:
      ADVANCE_MAP(
        '\n', 1467,
        '\r', 779,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 777,
        0x0b, 777,
        '\f', 777,
        ' ', 777,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 781:
      ADVANCE_MAP(
        '\n', 1471,
        '\r', 781,
        '!', 1549,
        '$', 534,
        '&', 11,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'N', 1510,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '%', 1470,
        ';', 1470,
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
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 782:
      ADVANCE_MAP(
        '\n', 1473,
        '\r', 782,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 782,
        0x0b, 782,
        '\f', 782,
        ' ', 782,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 783:
      ADVANCE_MAP(
        '\n', 1473,
        '\r', 782,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 782,
        0x0b, 782,
        '\f', 782,
        ' ', 782,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 784:
      ADVANCE_MAP(
        '\n', 1472,
        '\r', 784,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 784,
        0x0b, 784,
        '\f', 784,
        ' ', 784,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 785:
      ADVANCE_MAP(
        '\n', 1472,
        '\r', 784,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 784,
        0x0b, 784,
        '\f', 784,
        ' ', 784,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 786:
      ADVANCE_MAP(
        '\n', 1468,
        '\r', 782,
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
        '\t', 782,
        0x0b, 782,
        '\f', 782,
        ' ', 782,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 787:
      if (lookahead == ' ') SKIP(787);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(1482);
      if (lookahead != 0) ADVANCE(1483);
      END_STATE();
    case 788:
      ADVANCE_MAP(
        '!', 1549,
        '$', 534,
        '&', 11,
        '(', 1488,
        '*', 1604,
        '-', 1546,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'N', 1510,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '\n', 789,
        '\r', 789,
        '%', 1470,
        ';', 1470,
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
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 789:
      ADVANCE_MAP(
        '!', 1549,
        '$', 534,
        '&', 11,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'N', 1510,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '\n', 789,
        '\r', 789,
        '%', 1470,
        ';', 1470,
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
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 790:
      ADVANCE_MAP(
        '!', 1557,
        '#', 1537,
        '$', 1459,
        '&', 810,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1517,
        '?', 1557,
        '@', 1525,
        'O', 1580,
        'P', 1520,
        'R', 1506,
        'T', 1170,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 1541,
        0x16ed, 1541,
        0x2795, 1541,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1503);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 791:
      ADVANCE_MAP(
        '!', 1557,
        '#', 1537,
        '$', 1459,
        '&', 812,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1517,
        '?', 1557,
        '@', 1525,
        'O', 1580,
        'P', 1520,
        'R', 1506,
        'T', 1170,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 1541,
        0x16ed, 1541,
        0x2795, 1541,
        ':', 1513,
        'X', 1513,
        'x', 1513,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1529);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1503);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 792:
      ADVANCE_MAP(
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 793:
      ADVANCE_MAP(
        '!', 1557,
        '$', 1459,
        '&', 801,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'N', 1512,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 814,
        0x16ed, 814,
        0x2795, 814,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(793);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 794:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == ']') ADVANCE(1479);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(794);
      END_STATE();
    case 795:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == ']') ADVANCE(1480);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(794);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1484);
      if (lookahead != 0) ADVANCE(1486);
      END_STATE();
    case 796:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(797);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1485);
      if (lookahead != 0) ADVANCE(1486);
      END_STATE();
    case 797:
      if (lookahead == '"') ADVANCE(1481);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(797);
      END_STATE();
    case 798:
      ADVANCE_MAP(
        '#', 893,
        'a', 1357,
        'd', 1179,
        'f', 1346,
        'h', 1180,
        'l', 1318,
        'm', 1211,
        'n', 1210,
        'p', 1284,
        's', 1322,
      );
      END_STATE();
    case 799:
      if (lookahead == '#') ADVANCE(894);
      if (lookahead == 'd') ADVANCE(1194);
      if (lookahead == 'h') ADVANCE(1423);
      if (lookahead == 'm') ADVANCE(1214);
      if (lookahead == 'n') ADVANCE(1213);
      END_STATE();
    case 800:
      if (lookahead == '#') ADVANCE(913);
      if (lookahead == 'p') ADVANCE(1297);
      END_STATE();
    case 801:
      ADVANCE_MAP(
        '#', 896,
        'D', 1236,
        'L', 1187,
        'M', 1282,
        'P', 1299,
        'R', 1188,
        'S', 1257,
        'U', 1328,
        'a', 1357,
        'b', 1278,
        'c', 1277,
        'd', 1200,
        'e', 1336,
        'f', 1346,
        'h', 1175,
        'i', 1304,
        'l', 1227,
        'm', 1185,
        'n', 1177,
        'p', 1229,
        'q', 1401,
        'r', 1183,
        's', 1287,
        'u', 1184,
        'x', 1319,
      );
      END_STATE();
    case 802:
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead == 'e') ADVANCE(1422);
      if (lookahead == 'q') ADVANCE(1418);
      END_STATE();
    case 803:
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == 'e') ADVANCE(1343);
      END_STATE();
    case 804:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == 'd') ADVANCE(1202);
      if (lookahead == 'h') ADVANCE(1426);
      if (lookahead == 'm') ADVANCE(1226);
      if (lookahead == 'n') ADVANCE(1225);
      if (lookahead == 'p') ADVANCE(1301);
      if (lookahead == 's') ADVANCE(1327);
      END_STATE();
    case 805:
      ADVANCE_MAP(
        '#', 935,
        'a', 1357,
        'd', 1196,
        'f', 1346,
        'h', 1181,
        'l', 1318,
        'm', 1219,
        'n', 1220,
        's', 1322,
      );
      END_STATE();
    case 806:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'h') ADVANCE(1425);
      if (lookahead == 'm') ADVANCE(1224);
      if (lookahead == 'n') ADVANCE(1223);
      if (lookahead == 's') ADVANCE(1325);
      END_STATE();
    case 807:
      if (lookahead == '#') ADVANCE(949);
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'h') ADVANCE(1425);
      if (lookahead == 'm') ADVANCE(1224);
      if (lookahead == 'n') ADVANCE(1223);
      if (lookahead == 'p') ADVANCE(1297);
      if (lookahead == 's') ADVANCE(1325);
      END_STATE();
    case 808:
      if (lookahead == '#') ADVANCE(948);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'm') ADVANCE(1222);
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 809:
      if (lookahead == '#') ADVANCE(920);
      if (lookahead == 'p') ADVANCE(1301);
      END_STATE();
    case 810:
      ADVANCE_MAP(
        '#', 951,
        'D', 1236,
        'L', 1187,
        'M', 1282,
        'P', 1299,
        'R', 1188,
        'S', 1257,
        'U', 1328,
        'a', 1357,
        'b', 1278,
        'c', 1277,
        'd', 1200,
        'e', 1336,
        'f', 1346,
        'h', 1175,
        'i', 1304,
        'l', 1227,
        'm', 1185,
        'n', 1177,
        'p', 1230,
        'q', 1401,
        'r', 1183,
        's', 1287,
        'u', 1184,
        'x', 1319,
      );
      END_STATE();
    case 811:
      if (lookahead == '#') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'h') ADVANCE(1425);
      if (lookahead == 'm') ADVANCE(1224);
      if (lookahead == 'n') ADVANCE(1223);
      END_STATE();
    case 812:
      ADVANCE_MAP(
        '#', 952,
        'D', 1236,
        'L', 1187,
        'M', 1282,
        'P', 1299,
        'R', 1188,
        'S', 1257,
        'U', 1328,
        'a', 1357,
        'b', 1278,
        'c', 1277,
        'd', 1203,
        'e', 1336,
        'f', 1346,
        'h', 1176,
        'i', 1304,
        'l', 1227,
        'm', 1186,
        'n', 1178,
        'p', 1230,
        'q', 1401,
        'r', 1183,
        's', 1287,
        'u', 1184,
        'x', 1319,
      );
      END_STATE();
    case 813:
      ADVANCE_MAP(
        '&', 805,
        '*', 1603,
        '-', 1562,
        '/', 1588,
        '0', 1581,
        '1', 1559,
        '2', 1598,
        'O', 1578,
        'o', 1585,
        0xbd, 1599,
        0x66d, 1619,
        0x2010, 1566,
        0x2011, 1568,
        0x2012, 1570,
        0x2013, 1572,
        0x2014, 1574,
        0x2044, 1592,
        0x204e, 1615,
        0x2212, 1564,
        0x2215, 1590,
        0x2217, 1607,
        0x2731, 1611,
        0x2796, 1576,
        0x27cb, 1594,
        0x29f8, 1596,
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
          lookahead == 0x2796) ADVANCE(1542);
      END_STATE();
    case 815:
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 816:
      if (lookahead == '&') ADVANCE(809);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(1542);
      END_STATE();
    case 817:
      if (lookahead == '&') ADVANCE(811);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1542);
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
      if (lookahead == '.') ADVANCE(1497);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(1497);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      END_STATE();
    case 824:
      if (lookahead == '.') ADVANCE(1497);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      END_STATE();
    case 825:
      if (lookahead == '.') ADVANCE(1542);
      END_STATE();
    case 826:
      if (lookahead == '0') ADVANCE(838);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 827:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(844);
      if (lookahead == '6') ADVANCE(852);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 828:
      ADVANCE_MAP(
        '0', 895,
        '2', 902,
        '7', 1001,
        '9', 1450,
        'A', 1124,
        'a', 1124,
        'B', 1122,
        'b', 1122,
        'D', 1125,
        'd', 1125,
        'F', 1126,
        'f', 1126,
      );
      END_STATE();
    case 829:
      if (lookahead == '0') ADVANCE(830);
      if (lookahead == '1') ADVANCE(850);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '7') ADVANCE(1082);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 830:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1018);
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '7') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 831:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1025);
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '7') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 832:
      if (lookahead == '0') ADVANCE(876);
      if (lookahead == '1') ADVANCE(1030);
      if (lookahead == '2') ADVANCE(930);
      if (lookahead == '7') ADVANCE(1048);
      if (lookahead == '8') ADVANCE(1070);
      END_STATE();
    case 833:
      ADVANCE_MAP(
        '0', 929,
        '1', 1107,
        '2', 836,
        '3', 923,
        '5', 899,
        '6', 1045,
        '7', 926,
        'A', 842,
        'a', 842,
        'B', 897,
        'b', 897,
        'D', 1146,
        'd', 1146,
      );
      END_STATE();
    case 834:
      ADVANCE_MAP(
        '0', 929,
        '1', 1107,
        '2', 836,
        '3', 923,
        '5', 899,
        '6', 1045,
        '7', 927,
        'A', 842,
        'a', 842,
        'B', 898,
        'b', 898,
        'D', 1146,
        'd', 1146,
      );
      END_STATE();
    case 835:
      if (lookahead == '0') ADVANCE(918);
      END_STATE();
    case 836:
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '1') ADVANCE(981);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '9') ADVANCE(1444);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 837:
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '1') ADVANCE(984);
      if (lookahead == '6') ADVANCE(1038);
      if (lookahead == '9') ADVANCE(1444);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 838:
      if (lookahead == '0') ADVANCE(1016);
      if (lookahead == '1') ADVANCE(999);
      if (lookahead == '7') ADVANCE(1031);
      END_STATE();
    case 839:
      if (lookahead == '0') ADVANCE(1016);
      if (lookahead == '1') ADVANCE(1019);
      if (lookahead == '7') ADVANCE(1031);
      END_STATE();
    case 840:
      ADVANCE_MAP(
        '0', 932,
        '2', 900,
        '7', 1118,
        '9', 1452,
        'D', 1147,
        'd', 1147,
        'F', 1153,
        'f', 1153,
      );
      END_STATE();
    case 841:
      ADVANCE_MAP(
        '0', 932,
        '2', 900,
        '7', 1120,
        '9', 1452,
        'B', 1121,
        'b', 1121,
        'D', 1147,
        'd', 1147,
        'F', 1153,
        'f', 1153,
      );
      END_STATE();
    case 842:
      if (lookahead == '0') ADVANCE(858);
      if (lookahead == '7') ADVANCE(911);
      if (lookahead == ';') ADVANCE(1605);
      END_STATE();
    case 843:
      if (lookahead == '0') ADVANCE(936);
      END_STATE();
    case 844:
      if (lookahead == '0') ADVANCE(1125);
      if (lookahead == '1') ADVANCE(1125);
      if (lookahead == '2') ADVANCE(1125);
      END_STATE();
    case 845:
      if (lookahead == '0') ADVANCE(1125);
      if (lookahead == '1') ADVANCE(1125);
      if (lookahead == '2') ADVANCE(1125);
      if (lookahead == '3') ADVANCE(1125);
      if (lookahead == '4') ADVANCE(1125);
      END_STATE();
    case 846:
      if (lookahead == '0') ADVANCE(905);
      END_STATE();
    case 847:
      if (lookahead == '0') ADVANCE(916);
      END_STATE();
    case 848:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1123);
      END_STATE();
    case 849:
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '1') ADVANCE(1123);
      if (lookahead == '2') ADVANCE(1123);
      if (lookahead == '3') ADVANCE(1123);
      if (lookahead == '4') ADVANCE(1123);
      END_STATE();
    case 850:
      if (lookahead == '0') ADVANCE(965);
      END_STATE();
    case 851:
      if (lookahead == '0') ADVANCE(914);
      if (lookahead == '2') ADVANCE(919);
      if (lookahead == '7') ADVANCE(1106);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1123);
      END_STATE();
    case 852:
      if (lookahead == '0') ADVANCE(1130);
      END_STATE();
    case 853:
      if (lookahead == '0') ADVANCE(1131);
      END_STATE();
    case 854:
      if (lookahead == '0') ADVANCE(1134);
      if (lookahead == '1') ADVANCE(1138);
      if (lookahead == '2') ADVANCE(1139);
      if (lookahead == '3') ADVANCE(1140);
      if (lookahead == '4') ADVANCE(1141);
      END_STATE();
    case 855:
      if (lookahead == '0') ADVANCE(1160);
      if (lookahead == '1') ADVANCE(1160);
      if (lookahead == '2') ADVANCE(1160);
      END_STATE();
    case 856:
      if (lookahead == '0') ADVANCE(1160);
      if (lookahead == '1') ADVANCE(1160);
      if (lookahead == '2') ADVANCE(1160);
      if (lookahead == '3') ADVANCE(1160);
      if (lookahead == '4') ADVANCE(1160);
      END_STATE();
    case 857:
      if (lookahead == '0') ADVANCE(1139);
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '2') ADVANCE(1141);
      END_STATE();
    case 858:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1147);
      END_STATE();
    case 859:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '2') ADVANCE(1147);
      END_STATE();
    case 860:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 861:
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 862:
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '1') ADVANCE(1146);
      if (lookahead == '2') ADVANCE(1146);
      END_STATE();
    case 863:
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '1') ADVANCE(1146);
      if (lookahead == '2') ADVANCE(1146);
      if (lookahead == '3') ADVANCE(1146);
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 864:
      if (lookahead == '0') ADVANCE(1156);
      if (lookahead == '1') ADVANCE(1161);
      if (lookahead == '3') ADVANCE(1155);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(1153);
      END_STATE();
    case 866:
      if (lookahead == '0') ADVANCE(1152);
      if (lookahead == '1') ADVANCE(1152);
      if (lookahead == '2') ADVANCE(1152);
      END_STATE();
    case 867:
      if (lookahead == '0') ADVANCE(1152);
      if (lookahead == '1') ADVANCE(1152);
      if (lookahead == '2') ADVANCE(1152);
      if (lookahead == '3') ADVANCE(1152);
      if (lookahead == '4') ADVANCE(1152);
      END_STATE();
    case 868:
      if (lookahead == '0') ADVANCE(1154);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(1159);
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(1159);
      END_STATE();
    case 870:
      if (lookahead == '0') ADVANCE(1159);
      if (lookahead == '1') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1159);
      if (lookahead == '4') ADVANCE(1159);
      END_STATE();
    case 871:
      if (lookahead == '0') ADVANCE(839);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 872:
      if (lookahead == '0') ADVANCE(1090);
      if (lookahead == '1') ADVANCE(848);
      END_STATE();
    case 873:
      if (lookahead == '0') ADVANCE(939);
      END_STATE();
    case 874:
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(857);
      if (lookahead == '6') ADVANCE(852);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 875:
      if (lookahead == '0') ADVANCE(1093);
      if (lookahead == '1') ADVANCE(855);
      END_STATE();
    case 876:
      if (lookahead == '0') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(1006);
      END_STATE();
    case 877:
      if (lookahead == '0') ADVANCE(1095);
      if (lookahead == '1') ADVANCE(862);
      if (lookahead == '5') ADVANCE(975);
      if (lookahead == '6') ADVANCE(1009);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 878:
      if (lookahead == '0') ADVANCE(1038);
      if (lookahead == '6') ADVANCE(979);
      END_STATE();
    case 879:
      if (lookahead == '0') ADVANCE(1094);
      if (lookahead == '1') ADVANCE(859);
      END_STATE();
    case 880:
      if (lookahead == '0') ADVANCE(1094);
      if (lookahead == '1') ADVANCE(859);
      if (lookahead == '6') ADVANCE(865);
      END_STATE();
    case 881:
      if (lookahead == '0') ADVANCE(1097);
      if (lookahead == '1') ADVANCE(866);
      if (lookahead == '6') ADVANCE(868);
      END_STATE();
    case 882:
      if (lookahead == '0') ADVANCE(1099);
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '5') ADVANCE(975);
      if (lookahead == '6') ADVANCE(1009);
      if (lookahead == '7') ADVANCE(853);
      END_STATE();
    case 883:
      ADVANCE_MAP(
        '0', 921,
        '2', 917,
        '7', 1002,
        '9', 1450,
        'A', 1124,
        'a', 1124,
        'D', 1128,
        'd', 1128,
        'F', 1126,
        'f', 1126,
      );
      END_STATE();
    case 884:
      ADVANCE_MAP(
        '0', 934,
        '1', 1107,
        '2', 837,
        '3', 923,
        '5', 899,
        '6', 1045,
        '7', 928,
        'A', 842,
        'a', 842,
        'B', 898,
        'b', 898,
        'D', 1159,
        'd', 1159,
      );
      END_STATE();
    case 885:
      ADVANCE_MAP(
        '0', 933,
        '2', 915,
        '7', 1116,
        '9', 1453,
        'B', 1147,
        'b', 1147,
        'D', 1152,
        'd', 1152,
        'F', 1154,
        'f', 1154,
      );
      END_STATE();
    case 886:
      if (lookahead == '0') ADVANCE(940);
      END_STATE();
    case 887:
      if (lookahead == '0') ADVANCE(924);
      if (lookahead == '2') ADVANCE(922);
      if (lookahead == '7') ADVANCE(1114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1160);
      END_STATE();
    case 888:
      if (lookahead == '0') ADVANCE(943);
      END_STATE();
    case 889:
      if (lookahead == '0') ADVANCE(931);
      if (lookahead == '2') ADVANCE(925);
      if (lookahead == '7') ADVANCE(1117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 890:
      if (lookahead == '0') ADVANCE(831);
      if (lookahead == '1') ADVANCE(850);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '7') ADVANCE(1082);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 891:
      if (lookahead == '0') ADVANCE(941);
      END_STATE();
    case 892:
      if (lookahead == '0') ADVANCE(832);
      if (lookahead == '1') ADVANCE(850);
      if (lookahead == '6') ADVANCE(1043);
      if (lookahead == '7') ADVANCE(1082);
      if (lookahead == '8') ADVANCE(1108);
      END_STATE();
    case 893:
      if (lookahead == '1') ADVANCE(826);
      if (lookahead == '4') ADVANCE(953);
      if (lookahead == '5') ADVANCE(1088);
      if (lookahead == '8') ADVANCE(958);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(901);
      END_STATE();
    case 894:
      if (lookahead == '1') ADVANCE(846);
      if (lookahead == '4') ADVANCE(1050);
      if (lookahead == '8') ADVANCE(959);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(960);
      END_STATE();
    case 895:
      if (lookahead == '1') ADVANCE(845);
      if (lookahead == '4') ADVANCE(1034);
      END_STATE();
    case 896:
      ADVANCE_MAP(
        '1', 829,
        '3', 1012,
        '4', 954,
        '5', 1101,
        '6', 864,
        '8', 962,
        '9', 1032,
        'X', 942,
        'x', 942,
      );
      END_STATE();
    case 897:
      if (lookahead == '1') ADVANCE(975);
      if (lookahead == ';') ADVANCE(814);
      END_STATE();
    case 898:
      if (lookahead == '1') ADVANCE(975);
      if (lookahead == ';') ADVANCE(1541);
      END_STATE();
    case 899:
      if (lookahead == '1') ADVANCE(1040);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1432);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1430);
      END_STATE();
    case 900:
      if (lookahead == '1') ADVANCE(976);
      END_STATE();
    case 901:
      if (lookahead == '1') ADVANCE(1062);
      if (lookahead == '2') ADVANCE(828);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1438);
      END_STATE();
    case 902:
      if (lookahead == '1') ADVANCE(968);
      END_STATE();
    case 903:
      if (lookahead == '1') ADVANCE(858);
      if (lookahead == '2') ADVANCE(980);
      if (lookahead == '3') ADVANCE(1038);
      END_STATE();
    case 904:
      if (lookahead == '1') ADVANCE(858);
      if (lookahead == '2') ADVANCE(983);
      if (lookahead == '3') ADVANCE(1038);
      END_STATE();
    case 905:
      if (lookahead == '1') ADVANCE(1017);
      END_STATE();
    case 906:
      if (lookahead == '1') ADVANCE(970);
      END_STATE();
    case 907:
      if (lookahead == '1') ADVANCE(835);
      if (lookahead == '4') ADVANCE(1058);
      if (lookahead == '8') ADVANCE(963);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(964);
      END_STATE();
    case 908:
      if (lookahead == '1') ADVANCE(843);
      if (lookahead == '4') ADVANCE(1011);
      if (lookahead == '5') ADVANCE(1102);
      if (lookahead == '8') ADVANCE(996);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(944);
      END_STATE();
    case 909:
      if (lookahead == '1') ADVANCE(1135);
      END_STATE();
    case 910:
      if (lookahead == '1') ADVANCE(1147);
      END_STATE();
    case 911:
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == '2') ADVANCE(1147);
      END_STATE();
    case 912:
      if (lookahead == '1') ADVANCE(1147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 913:
      if (lookahead == '1') ADVANCE(847);
      if (lookahead == '4') ADVANCE(1003);
      if (lookahead == '5') ADVANCE(1100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(937);
      END_STATE();
    case 914:
      if (lookahead == '1') ADVANCE(849);
      END_STATE();
    case 915:
      if (lookahead == '1') ADVANCE(982);
      END_STATE();
    case 916:
      if (lookahead == '1') ADVANCE(998);
      END_STATE();
    case 917:
      if (lookahead == '1') ADVANCE(973);
      END_STATE();
    case 918:
      if (lookahead == '1') ADVANCE(1027);
      if (lookahead == '7') ADVANCE(1046);
      END_STATE();
    case 919:
      if (lookahead == '1') ADVANCE(971);
      END_STATE();
    case 920:
      if (lookahead == '1') ADVANCE(873);
      if (lookahead == '4') ADVANCE(1007);
      if (lookahead == '5') ADVANCE(1102);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(945);
      END_STATE();
    case 921:
      if (lookahead == '1') ADVANCE(854);
      if (lookahead == '4') ADVANCE(1034);
      END_STATE();
    case 922:
      if (lookahead == '1') ADVANCE(972);
      END_STATE();
    case 923:
      if (lookahead == '1') ADVANCE(1007);
      END_STATE();
    case 924:
      if (lookahead == '1') ADVANCE(856);
      END_STATE();
    case 925:
      if (lookahead == '1') ADVANCE(974);
      END_STATE();
    case 926:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1059);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1429);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 927:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1060);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1429);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 928:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1061);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1429);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 929:
      if (lookahead == '1') ADVANCE(863);
      if (lookahead == '3') ADVANCE(1435);
      if (lookahead == '4') ADVANCE(1083);
      END_STATE();
    case 930:
      if (lookahead == '1') ADVANCE(1094);
      if (lookahead == '2') ADVANCE(1082);
      END_STATE();
    case 931:
      if (lookahead == '1') ADVANCE(860);
      END_STATE();
    case 932:
      if (lookahead == '1') ADVANCE(860);
      if (lookahead == '4') ADVANCE(1041);
      END_STATE();
    case 933:
      if (lookahead == '1') ADVANCE(867);
      if (lookahead == '4') ADVANCE(1042);
      END_STATE();
    case 934:
      if (lookahead == '1') ADVANCE(870);
      if (lookahead == '3') ADVANCE(1435);
      if (lookahead == '4') ADVANCE(1083);
      END_STATE();
    case 935:
      if (lookahead == '1') ADVANCE(871);
      if (lookahead == '4') ADVANCE(957);
      if (lookahead == '8') ADVANCE(993);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(961);
      END_STATE();
    case 936:
      if (lookahead == '1') ADVANCE(1023);
      if (lookahead == '7') ADVANCE(1047);
      END_STATE();
    case 937:
      if (lookahead == '1') ADVANCE(1076);
      if (lookahead == '2') ADVANCE(1080);
      END_STATE();
    case 938:
      if (lookahead == '1') ADVANCE(1076);
      if (lookahead == '2') ADVANCE(841);
      END_STATE();
    case 939:
      if (lookahead == '1') ADVANCE(1020);
      END_STATE();
    case 940:
      if (lookahead == '1') ADVANCE(1024);
      END_STATE();
    case 941:
      if (lookahead == '1') ADVANCE(1029);
      if (lookahead == '7') ADVANCE(1046);
      END_STATE();
    case 942:
      if (lookahead == '1') ADVANCE(1077);
      if (lookahead == '2') ADVANCE(833);
      if (lookahead == '3') ADVANCE(1436);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      END_STATE();
    case 943:
      if (lookahead == '1') ADVANCE(1026);
      END_STATE();
    case 944:
      if (lookahead == '1') ADVANCE(1078);
      if (lookahead == '2') ADVANCE(885);
      END_STATE();
    case 945:
      if (lookahead == '1') ADVANCE(1078);
      if (lookahead == '2') ADVANCE(1087);
      END_STATE();
    case 946:
      if (lookahead == '1') ADVANCE(1079);
      if (lookahead == '2') ADVANCE(834);
      if (lookahead == '3') ADVANCE(1436);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      END_STATE();
    case 947:
      if (lookahead == '1') ADVANCE(1079);
      if (lookahead == '2') ADVANCE(884);
      if (lookahead == '3') ADVANCE(1436);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      END_STATE();
    case 948:
      if (lookahead == '1') ADVANCE(886);
      if (lookahead == '4') ADVANCE(1054);
      if (lookahead == '8') ADVANCE(994);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(985);
      END_STATE();
    case 949:
      if (lookahead == '1') ADVANCE(891);
      if (lookahead == '4') ADVANCE(1005);
      if (lookahead == '5') ADVANCE(1100);
      if (lookahead == '8') ADVANCE(963);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(938);
      END_STATE();
    case 950:
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '4') ADVANCE(1055);
      if (lookahead == '8') ADVANCE(997);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(990);
      END_STATE();
    case 951:
      ADVANCE_MAP(
        '1', 890,
        '3', 1012,
        '4', 955,
        '5', 1103,
        '6', 864,
        '8', 962,
        '9', 1032,
        'X', 946,
        'x', 946,
      );
      END_STATE();
    case 952:
      ADVANCE_MAP(
        '1', 892,
        '3', 1012,
        '4', 956,
        '5', 1103,
        '6', 864,
        '8', 995,
        '9', 1032,
        'X', 947,
        'x', 947,
      );
      END_STATE();
    case 953:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1122);
      if (lookahead == '5') ADVANCE(1125);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 954:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1144);
      if (lookahead == '5') ADVANCE(1146);
      END_STATE();
    case 955:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '5') ADVANCE(1146);
      END_STATE();
    case 956:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '5') ADVANCE(1159);
      END_STATE();
    case 957:
      if (lookahead == '2') ADVANCE(1124);
      if (lookahead == '5') ADVANCE(1128);
      if (lookahead == '7') ADVANCE(1126);
      END_STATE();
    case 958:
      if (lookahead == '2') ADVANCE(827);
      if (lookahead == '7') ADVANCE(967);
      END_STATE();
    case 959:
      if (lookahead == '2') ADVANCE(872);
      if (lookahead == '7') ADVANCE(988);
      END_STATE();
    case 960:
      if (lookahead == '2') ADVANCE(851);
      END_STATE();
    case 961:
      if (lookahead == '2') ADVANCE(883);
      if (lookahead == '6') ADVANCE(1069);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1438);
      END_STATE();
    case 962:
      if (lookahead == '2') ADVANCE(877);
      if (lookahead == '5') ADVANCE(1113);
      if (lookahead == '6') ADVANCE(1044);
      if (lookahead == '7') ADVANCE(903);
      if (lookahead == '8') ADVANCE(878);
      if (lookahead == '9') ADVANCE(1086);
      END_STATE();
    case 963:
      if (lookahead == '2') ADVANCE(880);
      if (lookahead == '7') ADVANCE(966);
      END_STATE();
    case 964:
      if (lookahead == '2') ADVANCE(840);
      END_STATE();
    case 965:
      if (lookahead == '2') ADVANCE(1067);
      END_STATE();
    case 966:
      if (lookahead == '2') ADVANCE(976);
      END_STATE();
    case 967:
      if (lookahead == '2') ADVANCE(968);
      END_STATE();
    case 968:
      if (lookahead == '2') ADVANCE(1125);
      if (lookahead == '5') ADVANCE(1132);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 969:
      if (lookahead == '2') ADVANCE(978);
      if (lookahead == '9') ADVANCE(1038);
      END_STATE();
    case 970:
      if (lookahead == '2') ADVANCE(1127);
      END_STATE();
    case 971:
      if (lookahead == '2') ADVANCE(1123);
      END_STATE();
    case 972:
      if (lookahead == '2') ADVANCE(1160);
      END_STATE();
    case 973:
      if (lookahead == '2') ADVANCE(1142);
      if (lookahead == '5') ADVANCE(1132);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 974:
      if (lookahead == '2') ADVANCE(1147);
      END_STATE();
    case 975:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 976:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '5') ADVANCE(1153);
      END_STATE();
    case 977:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 978:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 979:
      if (lookahead == '2') ADVANCE(1147);
      if (lookahead == '9') ADVANCE(1147);
      END_STATE();
    case 980:
      if (lookahead == '2') ADVANCE(1146);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 981:
      if (lookahead == '2') ADVANCE(1146);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 982:
      if (lookahead == '2') ADVANCE(1152);
      if (lookahead == '5') ADVANCE(1154);
      END_STATE();
    case 983:
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      END_STATE();
    case 984:
      if (lookahead == '2') ADVANCE(1159);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 985:
      if (lookahead == '2') ADVANCE(887);
      END_STATE();
    case 986:
      if (lookahead == '2') ADVANCE(982);
      END_STATE();
    case 987:
      if (lookahead == '2') ADVANCE(973);
      END_STATE();
    case 988:
      if (lookahead == '2') ADVANCE(971);
      END_STATE();
    case 989:
      if (lookahead == '2') ADVANCE(910);
      if (lookahead == '3') ADVANCE(1451);
      END_STATE();
    case 990:
      if (lookahead == '2') ADVANCE(889);
      END_STATE();
    case 991:
      if (lookahead == '2') ADVANCE(972);
      END_STATE();
    case 992:
      if (lookahead == '2') ADVANCE(974);
      END_STATE();
    case 993:
      if (lookahead == '2') ADVANCE(874);
      if (lookahead == '7') ADVANCE(987);
      END_STATE();
    case 994:
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == '7') ADVANCE(991);
      END_STATE();
    case 995:
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == '5') ADVANCE(1113);
      if (lookahead == '6') ADVANCE(1044);
      if (lookahead == '7') ADVANCE(904);
      if (lookahead == '8') ADVANCE(878);
      if (lookahead == '9') ADVANCE(1086);
      END_STATE();
    case 996:
      if (lookahead == '2') ADVANCE(881);
      if (lookahead == '7') ADVANCE(986);
      END_STATE();
    case 997:
      if (lookahead == '2') ADVANCE(879);
      if (lookahead == '7') ADVANCE(992);
      END_STATE();
    case 998:
      if (lookahead == '3') ADVANCE(1003);
      END_STATE();
    case 999:
      if (lookahead == '3') ADVANCE(1000);
      if (lookahead == '8') ADVANCE(1081);
      END_STATE();
    case 1000:
      if (lookahead == '3') ADVANCE(1122);
      if (lookahead == '4') ADVANCE(1125);
      END_STATE();
    case 1001:
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1049);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1431);
      END_STATE();
    case 1002:
      if (lookahead == '3') ADVANCE(909);
      if (lookahead == '9') ADVANCE(1065);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1431);
      END_STATE();
    case 1003:
      if (lookahead == '3') ADVANCE(1121);
      END_STATE();
    case 1004:
      if (lookahead == '3') ADVANCE(1121);
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 1005:
      if (lookahead == '3') ADVANCE(1121);
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1153);
      END_STATE();
    case 1006:
      if (lookahead == '3') ADVANCE(1135);
      END_STATE();
    case 1007:
      if (lookahead == '3') ADVANCE(1147);
      END_STATE();
    case 1008:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 1009:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1147);
      if (lookahead == '5') ADVANCE(1147);
      END_STATE();
    case 1010:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1152);
      END_STATE();
    case 1011:
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '5') ADVANCE(1152);
      if (lookahead == '7') ADVANCE(1154);
      END_STATE();
    case 1012:
      if (lookahead == '3') ADVANCE(1155);
      END_STATE();
    case 1013:
      if (lookahead == '3') ADVANCE(1144);
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 1014:
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '4') ADVANCE(1146);
      END_STATE();
    case 1015:
      if (lookahead == '3') ADVANCE(1157);
      if (lookahead == '4') ADVANCE(1159);
      END_STATE();
    case 1016:
      if (lookahead == '3') ADVANCE(1006);
      END_STATE();
    case 1017:
      if (lookahead == '3') ADVANCE(1033);
      END_STATE();
    case 1018:
      if (lookahead == '3') ADVANCE(1013);
      END_STATE();
    case 1019:
      if (lookahead == '3') ADVANCE(1037);
      if (lookahead == '8') ADVANCE(1081);
      END_STATE();
    case 1020:
      if (lookahead == '3') ADVANCE(1007);
      END_STATE();
    case 1021:
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '6') ADVANCE(1007);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(989);
      END_STATE();
    case 1022:
      if (lookahead == '3') ADVANCE(1007);
      if (lookahead == '7') ADVANCE(1055);
      END_STATE();
    case 1023:
      if (lookahead == '3') ADVANCE(1010);
      if (lookahead == '8') ADVANCE(1085);
      END_STATE();
    case 1024:
      if (lookahead == '3') ADVANCE(1036);
      END_STATE();
    case 1025:
      if (lookahead == '3') ADVANCE(1014);
      END_STATE();
    case 1026:
      if (lookahead == '3') ADVANCE(1038);
      END_STATE();
    case 1027:
      if (lookahead == '3') ADVANCE(1038);
      if (lookahead == '8') ADVANCE(1084);
      END_STATE();
    case 1028:
      if (lookahead == '3') ADVANCE(1441);
      END_STATE();
    case 1029:
      if (lookahead == '3') ADVANCE(1004);
      if (lookahead == '8') ADVANCE(1084);
      END_STATE();
    case 1030:
      if (lookahead == '3') ADVANCE(1015);
      END_STATE();
    case 1031:
      if (lookahead == '4') ADVANCE(1035);
      END_STATE();
    case 1032:
      if (lookahead == '4') ADVANCE(1104);
      if (lookahead == '6') ADVANCE(1022);
      if (lookahead == '7') ADVANCE(969);
      END_STATE();
    case 1033:
      if (lookahead == '4') ADVANCE(1123);
      END_STATE();
    case 1034:
      if (lookahead == '4') ADVANCE(1130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 1035:
      if (lookahead == '4') ADVANCE(1137);
      END_STATE();
    case 1036:
      if (lookahead == '4') ADVANCE(1160);
      END_STATE();
    case 1037:
      if (lookahead == '4') ADVANCE(1143);
      END_STATE();
    case 1038:
      if (lookahead == '4') ADVANCE(1147);
      END_STATE();
    case 1039:
      if (lookahead == '4') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 1040:
      if (lookahead == '4') ADVANCE(1147);
      if (lookahead == '8') ADVANCE(1147);
      END_STATE();
    case 1041:
      if (lookahead == '4') ADVANCE(1153);
      END_STATE();
    case 1042:
      if (lookahead == '4') ADVANCE(1154);
      END_STATE();
    case 1043:
      if (lookahead == '4') ADVANCE(1053);
      END_STATE();
    case 1044:
      if (lookahead == '4') ADVANCE(1066);
      if (lookahead == '6') ADVANCE(861);
      END_STATE();
    case 1045:
      if (lookahead == '4') ADVANCE(974);
      END_STATE();
    case 1046:
      if (lookahead == '4') ADVANCE(1041);
      END_STATE();
    case 1047:
      if (lookahead == '4') ADVANCE(1042);
      END_STATE();
    case 1048:
      if (lookahead == '5') ADVANCE(975);
      END_STATE();
    case 1049:
      if (lookahead == '5') ADVANCE(1122);
      if (lookahead == '6') ADVANCE(1125);
      END_STATE();
    case 1050:
      if (lookahead == '5') ADVANCE(1123);
      END_STATE();
    case 1051:
      if (lookahead == '5') ADVANCE(1121);
      END_STATE();
    case 1052:
      if (lookahead == '5') ADVANCE(1121);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1053:
      if (lookahead == '5') ADVANCE(1129);
      END_STATE();
    case 1054:
      if (lookahead == '5') ADVANCE(1160);
      END_STATE();
    case 1055:
      if (lookahead == '5') ADVANCE(1147);
      END_STATE();
    case 1056:
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1057:
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '6') ADVANCE(1152);
      END_STATE();
    case 1058:
      if (lookahead == '5') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1153);
      END_STATE();
    case 1059:
      if (lookahead == '5') ADVANCE(1144);
      if (lookahead == '6') ADVANCE(1146);
      END_STATE();
    case 1060:
      if (lookahead == '5') ADVANCE(1157);
      if (lookahead == '6') ADVANCE(1146);
      END_STATE();
    case 1061:
      if (lookahead == '5') ADVANCE(1157);
      if (lookahead == '6') ADVANCE(1159);
      END_STATE();
    case 1062:
      if (lookahead == '6') ADVANCE(1445);
      END_STATE();
    case 1063:
      if (lookahead == '6') ADVANCE(1123);
      END_STATE();
    case 1064:
      if (lookahead == '6') ADVANCE(1160);
      END_STATE();
    case 1065:
      if (lookahead == '6') ADVANCE(1143);
      END_STATE();
    case 1066:
      if (lookahead == '6') ADVANCE(1147);
      END_STATE();
    case 1067:
      if (lookahead == '6') ADVANCE(1147);
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 1068:
      if (lookahead == '6') ADVANCE(1105);
      END_STATE();
    case 1069:
      if (lookahead == '6') ADVANCE(1440);
      END_STATE();
    case 1070:
      if (lookahead == '6') ADVANCE(1056);
      END_STATE();
    case 1071:
      if (lookahead == '6') ADVANCE(910);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1028);
      END_STATE();
    case 1072:
      if (lookahead == '6') ADVANCE(1109);
      END_STATE();
    case 1073:
      if (lookahead == '6') ADVANCE(1111);
      END_STATE();
    case 1074:
      if (lookahead == '6') ADVANCE(1110);
      END_STATE();
    case 1075:
      if (lookahead == '6') ADVANCE(1112);
      END_STATE();
    case 1076:
      if (lookahead == '6') ADVANCE(1446);
      END_STATE();
    case 1077:
      if (lookahead == '6') ADVANCE(1447);
      END_STATE();
    case 1078:
      if (lookahead == '6') ADVANCE(1448);
      END_STATE();
    case 1079:
      if (lookahead == '6') ADVANCE(1449);
      END_STATE();
    case 1080:
      if (lookahead == '7') ADVANCE(1115);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1121);
      END_STATE();
    case 1081:
      if (lookahead == '7') ADVANCE(1136);
      END_STATE();
    case 1082:
      if (lookahead == '7') ADVANCE(1147);
      END_STATE();
    case 1083:
      if (lookahead == '7') ADVANCE(1147);
      if (lookahead == '8') ADVANCE(1147);
      if (lookahead == '9') ADVANCE(1147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 1084:
      if (lookahead == '7') ADVANCE(1153);
      END_STATE();
    case 1085:
      if (lookahead == '7') ADVANCE(1154);
      END_STATE();
    case 1086:
      if (lookahead == '7') ADVANCE(1110);
      END_STATE();
    case 1087:
      if (lookahead == '7') ADVANCE(1119);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      END_STATE();
    case 1088:
      if (lookahead == '8') ADVANCE(1068);
      END_STATE();
    case 1089:
      if (lookahead == '8') ADVANCE(1125);
      if (lookahead == '9') ADVANCE(1125);
      END_STATE();
    case 1090:
      if (lookahead == '8') ADVANCE(1123);
      if (lookahead == '9') ADVANCE(1123);
      END_STATE();
    case 1091:
      if (lookahead == '8') ADVANCE(1134);
      if (lookahead == '9') ADVANCE(1138);
      END_STATE();
    case 1092:
      if (lookahead == '8') ADVANCE(1137);
      END_STATE();
    case 1093:
      if (lookahead == '8') ADVANCE(1160);
      if (lookahead == '9') ADVANCE(1160);
      END_STATE();
    case 1094:
      if (lookahead == '8') ADVANCE(1147);
      if (lookahead == '9') ADVANCE(1147);
      END_STATE();
    case 1095:
      if (lookahead == '8') ADVANCE(1146);
      if (lookahead == '9') ADVANCE(1146);
      END_STATE();
    case 1096:
      if (lookahead == '8') ADVANCE(1153);
      END_STATE();
    case 1097:
      if (lookahead == '8') ADVANCE(1152);
      if (lookahead == '9') ADVANCE(1152);
      END_STATE();
    case 1098:
      if (lookahead == '8') ADVANCE(1154);
      END_STATE();
    case 1099:
      if (lookahead == '8') ADVANCE(1159);
      if (lookahead == '9') ADVANCE(1159);
      END_STATE();
    case 1100:
      if (lookahead == '8') ADVANCE(1072);
      END_STATE();
    case 1101:
      if (lookahead == '8') ADVANCE(1073);
      END_STATE();
    case 1102:
      if (lookahead == '8') ADVANCE(1074);
      END_STATE();
    case 1103:
      if (lookahead == '8') ADVANCE(1075);
      END_STATE();
    case 1104:
      if (lookahead == '9') ADVANCE(977);
      END_STATE();
    case 1105:
      if (lookahead == '9') ADVANCE(1122);
      END_STATE();
    case 1106:
      if (lookahead == '9') ADVANCE(1063);
      END_STATE();
    case 1107:
      if (lookahead == '9') ADVANCE(911);
      if (lookahead == ';') ADVANCE(1553);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1066);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1039);
      END_STATE();
    case 1108:
      if (lookahead == '9') ADVANCE(1127);
      END_STATE();
    case 1109:
      if (lookahead == '9') ADVANCE(1121);
      END_STATE();
    case 1110:
      if (lookahead == '9') ADVANCE(1147);
      END_STATE();
    case 1111:
      if (lookahead == '9') ADVANCE(1144);
      END_STATE();
    case 1112:
      if (lookahead == '9') ADVANCE(1157);
      END_STATE();
    case 1113:
      if (lookahead == '9') ADVANCE(1008);
      END_STATE();
    case 1114:
      if (lookahead == '9') ADVANCE(1064);
      END_STATE();
    case 1115:
      if (lookahead == '9') ADVANCE(1051);
      END_STATE();
    case 1116:
      if (lookahead == '9') ADVANCE(1057);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1434);
      END_STATE();
    case 1117:
      if (lookahead == '9') ADVANCE(1066);
      END_STATE();
    case 1118:
      if (lookahead == '9') ADVANCE(1066);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1433);
      END_STATE();
    case 1119:
      if (lookahead == '9') ADVANCE(1055);
      END_STATE();
    case 1120:
      if (lookahead == '9') ADVANCE(1052);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1433);
      END_STATE();
    case 1121:
      if (lookahead == ';') ADVANCE(1537);
      END_STATE();
    case 1122:
      if (lookahead == ';') ADVANCE(1540);
      END_STATE();
    case 1123:
      if (lookahead == ';') ADVANCE(1456);
      END_STATE();
    case 1124:
      if (lookahead == ';') ADVANCE(1605);
      END_STATE();
    case 1125:
      if (lookahead == ';') ADVANCE(1527);
      END_STATE();
    case 1126:
      if (lookahead == ';') ADVANCE(1589);
      END_STATE();
    case 1127:
      if (lookahead == ';') ADVANCE(1601);
      END_STATE();
    case 1128:
      if (lookahead == ';') ADVANCE(1563);
      END_STATE();
    case 1129:
      if (lookahead == ';') ADVANCE(1621);
      END_STATE();
    case 1130:
      if (lookahead == ';') ADVANCE(1593);
      END_STATE();
    case 1131:
      if (lookahead == ';') ADVANCE(1617);
      END_STATE();
    case 1132:
      if (lookahead == ';') ADVANCE(1591);
      END_STATE();
    case 1133:
      if (lookahead == ';') ADVANCE(1609);
      END_STATE();
    case 1134:
      if (lookahead == ';') ADVANCE(1567);
      END_STATE();
    case 1135:
      if (lookahead == ';') ADVANCE(1613);
      END_STATE();
    case 1136:
      if (lookahead == ';') ADVANCE(1595);
      END_STATE();
    case 1137:
      if (lookahead == ';') ADVANCE(1597);
      END_STATE();
    case 1138:
      if (lookahead == ';') ADVANCE(1569);
      END_STATE();
    case 1139:
      if (lookahead == ';') ADVANCE(1571);
      END_STATE();
    case 1140:
      if (lookahead == ';') ADVANCE(1573);
      END_STATE();
    case 1141:
      if (lookahead == ';') ADVANCE(1575);
      END_STATE();
    case 1142:
      if (lookahead == ';') ADVANCE(1565);
      END_STATE();
    case 1143:
      if (lookahead == ';') ADVANCE(1577);
      END_STATE();
    case 1144:
      if (lookahead == ';') ADVANCE(814);
      END_STATE();
    case 1145:
      if (lookahead == ';') ADVANCE(814);
      if (lookahead == 'b') ADVANCE(1147);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 'm') ADVANCE(1309);
      END_STATE();
    case 1146:
      if (lookahead == ';') ADVANCE(1552);
      END_STATE();
    case 1147:
      if (lookahead == ';') ADVANCE(1542);
      END_STATE();
    case 1148:
      if (lookahead == ';') ADVANCE(1542);
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 1149:
      if (lookahead == ';') ADVANCE(1542);
      if (lookahead == 'f') ADVANCE(1390);
      if (lookahead == 'q') ADVANCE(1147);
      END_STATE();
    case 1150:
      if (lookahead == ';') ADVANCE(1542);
      if (lookahead == 'o') ADVANCE(1421);
      END_STATE();
    case 1151:
      if (lookahead == ';') ADVANCE(1542);
      if (lookahead == 't') ADVANCE(1320);
      END_STATE();
    case 1152:
      if (lookahead == ';') ADVANCE(1534);
      END_STATE();
    case 1153:
      if (lookahead == ';') ADVANCE(817);
      END_STATE();
    case 1154:
      if (lookahead == ';') ADVANCE(816);
      END_STATE();
    case 1155:
      if (lookahead == ';') ADVANCE(1553);
      END_STATE();
    case 1156:
      if (lookahead == ';') ADVANCE(815);
      END_STATE();
    case 1157:
      if (lookahead == ';') ADVANCE(1541);
      END_STATE();
    case 1158:
      if (lookahead == ';') ADVANCE(1541);
      if (lookahead == 'b') ADVANCE(1147);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == 'm') ADVANCE(1309);
      END_STATE();
    case 1159:
      if (lookahead == ';') ADVANCE(1529);
      END_STATE();
    case 1160:
      if (lookahead == ';') ADVANCE(1457);
      END_STATE();
    case 1161:
      if (lookahead == ';') ADVANCE(1554);
      END_STATE();
    case 1162:
      if (lookahead == '=') ADVANCE(1542);
      END_STATE();
    case 1163:
      if (lookahead == '@') ADVANCE(1525);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1513);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1164);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(1502);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      END_STATE();
    case 1164:
      if (lookahead == '@') ADVANCE(1525);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1164);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      END_STATE();
    case 1165:
      if (lookahead == 'A') ADVANCE(1352);
      END_STATE();
    case 1166:
      if (lookahead == 'A') ADVANCE(1352);
      if (lookahead == 'R') ADVANCE(1276);
      END_STATE();
    case 1167:
      if (lookahead == 'A') ADVANCE(1352);
      if (lookahead == 'T') ADVANCE(1231);
      if (lookahead == 'p') ADVANCE(1232);
      END_STATE();
    case 1168:
      if (lookahead == 'L') ADVANCE(1234);
      if (lookahead == 'R') ADVANCE(1276);
      if (lookahead == 'U') ADVANCE(1332);
      END_STATE();
    case 1169:
      if (lookahead == 'M') ADVANCE(1283);
      END_STATE();
    case 1170:
      if (lookahead == 'N') ADVANCE(1542);
      END_STATE();
    case 1171:
      if (lookahead == 'P') ADVANCE(1301);
      END_STATE();
    case 1172:
      if (lookahead == 'R') ADVANCE(1276);
      END_STATE();
    case 1173:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 1174:
      if (lookahead == 'a') ADVANCE(1207);
      END_STATE();
    case 1175:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'y') ADVANCE(1339);
      END_STATE();
    case 1176:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'y') ADVANCE(1342);
      END_STATE();
    case 1177:
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'v') ADVANCE(1296);
      END_STATE();
    case 1178:
      if (lookahead == 'a') ADVANCE(1206);
      if (lookahead == 'd') ADVANCE(1203);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'v') ADVANCE(1296);
      END_STATE();
    case 1179:
      if (lookahead == 'a') ADVANCE(1358);
      END_STATE();
    case 1180:
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'y') ADVANCE(1330);
      END_STATE();
    case 1181:
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'y') ADVANCE(1334);
      END_STATE();
    case 1182:
      if (lookahead == 'a') ADVANCE(1347);
      END_STATE();
    case 1183:
      if (lookahead == 'a') ADVANCE(1347);
      if (lookahead == 'i') ADVANCE(1254);
      END_STATE();
    case 1184:
      if (lookahead == 'a') ADVANCE(1347);
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 1185:
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'i') ADVANCE(1217);
      if (lookahead == 'n') ADVANCE(1335);
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1186:
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'd') ADVANCE(1203);
      if (lookahead == 'i') ADVANCE(1218);
      if (lookahead == 'n') ADVANCE(1335);
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1187:
      if (lookahead == 'a') ADVANCE(1305);
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 1188:
      if (lookahead == 'a') ADVANCE(1305);
      if (lookahead == 'i') ADVANCE(1252);
      END_STATE();
    case 1189:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 1190:
      if (lookahead == 'a') ADVANCE(1352);
      if (lookahead == 'r') ADVANCE(1281);
      END_STATE();
    case 1191:
      if (lookahead == 'a') ADVANCE(1300);
      END_STATE();
    case 1192:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 1193:
      if (lookahead == 'a') ADVANCE(1147);
      END_STATE();
    case 1194:
      if (lookahead == 'a') ADVANCE(1376);
      END_STATE();
    case 1195:
      if (lookahead == 'a') ADVANCE(1353);
      END_STATE();
    case 1196:
      if (lookahead == 'a') ADVANCE(1377);
      END_STATE();
    case 1197:
      if (lookahead == 'a') ADVANCE(1379);
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
      if (lookahead == 'a') ADVANCE(1385);
      END_STATE();
    case 1203:
      if (lookahead == 'a') ADVANCE(1386);
      END_STATE();
    case 1204:
      if (lookahead == 'a') ADVANCE(1375);
      END_STATE();
    case 1205:
      if (lookahead == 'a') ADVANCE(1298);
      END_STATE();
    case 1206:
      if (lookahead == 'b') ADVANCE(1289);
      END_STATE();
    case 1207:
      if (lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 1208:
      if (lookahead == 'c') ADVANCE(1291);
      END_STATE();
    case 1209:
      if (lookahead == 'c') ADVANCE(1293);
      END_STATE();
    case 1210:
      if (lookahead == 'd') ADVANCE(1179);
      END_STATE();
    case 1211:
      if (lookahead == 'd') ADVANCE(1179);
      if (lookahead == 'i') ADVANCE(1215);
      END_STATE();
    case 1212:
      if (lookahead == 'd') ADVANCE(1326);
      if (lookahead == 'p') ADVANCE(1301);
      END_STATE();
    case 1213:
      if (lookahead == 'd') ADVANCE(1194);
      END_STATE();
    case 1214:
      if (lookahead == 'd') ADVANCE(1194);
      if (lookahead == 'i') ADVANCE(1313);
      END_STATE();
    case 1215:
      if (lookahead == 'd') ADVANCE(1173);
      if (lookahead == 'n') ADVANCE(1402);
      END_STATE();
    case 1216:
      if (lookahead == 'd') ADVANCE(1173);
      if (lookahead == 'n') ADVANCE(1411);
      END_STATE();
    case 1217:
      if (lookahead == 'd') ADVANCE(1173);
      if (lookahead == 'n') ADVANCE(1415);
      END_STATE();
    case 1218:
      if (lookahead == 'd') ADVANCE(1173);
      if (lookahead == 'n') ADVANCE(1417);
      END_STATE();
    case 1219:
      if (lookahead == 'd') ADVANCE(1197);
      if (lookahead == 'i') ADVANCE(1216);
      END_STATE();
    case 1220:
      if (lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 1221:
      if (lookahead == 'd') ADVANCE(1199);
      END_STATE();
    case 1222:
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 1223:
      if (lookahead == 'd') ADVANCE(1201);
      END_STATE();
    case 1224:
      if (lookahead == 'd') ADVANCE(1201);
      if (lookahead == 'i') ADVANCE(1316);
      END_STATE();
    case 1225:
      if (lookahead == 'd') ADVANCE(1202);
      END_STATE();
    case 1226:
      if (lookahead == 'd') ADVANCE(1202);
      if (lookahead == 'i') ADVANCE(1317);
      END_STATE();
    case 1227:
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == 'l') ADVANCE(1393);
      if (lookahead == 'o') ADVANCE(1420);
      if (lookahead == 'r') ADVANCE(1182);
      END_STATE();
    case 1228:
      if (lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 1229:
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == 'l') ADVANCE(1406);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1323);
      END_STATE();
    case 1230:
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == 'l') ADVANCE(1408);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1323);
      END_STATE();
    case 1231:
      if (lookahead == 'e') ADVANCE(1233);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 1234:
      if (lookahead == 'e') ADVANCE(1247);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(1306);
      END_STATE();
    case 1236:
      if (lookahead == 'e') ADVANCE(1291);
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
      if (lookahead == 'e') ADVANCE(1311);
      END_STATE();
    case 1242:
      if (lookahead == 'e') ADVANCE(1312);
      END_STATE();
    case 1243:
      if (lookahead == 'e') ADVANCE(1378);
      END_STATE();
    case 1244:
      if (lookahead == 'e') ADVANCE(1380);
      END_STATE();
    case 1245:
      if (lookahead == 'f') ADVANCE(1389);
      END_STATE();
    case 1246:
      if (lookahead == 'f') ADVANCE(1280);
      END_STATE();
    case 1247:
      if (lookahead == 'f') ADVANCE(1391);
      END_STATE();
    case 1248:
      if (lookahead == 'f') ADVANCE(1127);
      END_STATE();
    case 1249:
      if (lookahead == 'f') ADVANCE(1365);
      END_STATE();
    case 1250:
      if (lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1251:
      if (lookahead == 'g') ADVANCE(1319);
      END_STATE();
    case 1252:
      if (lookahead == 'g') ADVANCE(1258);
      END_STATE();
    case 1253:
      if (lookahead == 'g') ADVANCE(1147);
      END_STATE();
    case 1254:
      if (lookahead == 'g') ADVANCE(1260);
      END_STATE();
    case 1255:
      if (lookahead == 'h') ADVANCE(1228);
      END_STATE();
    case 1256:
      if (lookahead == 'h') ADVANCE(1125);
      END_STATE();
    case 1257:
      if (lookahead == 'h') ADVANCE(1324);
      if (lookahead == 'q') ADVANCE(1412);
      END_STATE();
    case 1258:
      if (lookahead == 'h') ADVANCE(1391);
      END_STATE();
    case 1259:
      if (lookahead == 'h') ADVANCE(1123);
      END_STATE();
    case 1260:
      if (lookahead == 'h') ADVANCE(1398);
      END_STATE();
    case 1261:
      if (lookahead == 'h') ADVANCE(1134);
      END_STATE();
    case 1262:
      if (lookahead == 'h') ADVANCE(1160);
      END_STATE();
    case 1263:
      if (lookahead == 'h') ADVANCE(1140);
      END_STATE();
    case 1264:
      if (lookahead == 'h') ADVANCE(1141);
      END_STATE();
    case 1265:
      if (lookahead == 'h') ADVANCE(1147);
      END_STATE();
    case 1266:
      if (lookahead == 'h') ADVANCE(1146);
      END_STATE();
    case 1267:
      if (lookahead == 'h') ADVANCE(1152);
      END_STATE();
    case 1268:
      if (lookahead == 'h') ADVANCE(1159);
      END_STATE();
    case 1269:
      if (lookahead == 'h') ADVANCE(1235);
      END_STATE();
    case 1270:
      if (lookahead == 'h') ADVANCE(1237);
      END_STATE();
    case 1271:
      if (lookahead == 'h') ADVANCE(1238);
      END_STATE();
    case 1272:
      if (lookahead == 'h') ADVANCE(1240);
      END_STATE();
    case 1273:
      if (lookahead == 'h') ADVANCE(1239);
      END_STATE();
    case 1274:
      if (lookahead == 'h') ADVANCE(1241);
      END_STATE();
    case 1275:
      if (lookahead == 'h') ADVANCE(1242);
      END_STATE();
    case 1276:
      if (lookahead == 'i') ADVANCE(1252);
      END_STATE();
    case 1277:
      if (lookahead == 'i') ADVANCE(1354);
      END_STATE();
    case 1278:
      if (lookahead == 'i') ADVANCE(1251);
      if (lookahead == 'o') ADVANCE(1388);
      END_STATE();
    case 1279:
      if (lookahead == 'i') ADVANCE(1147);
      END_STATE();
    case 1280:
      if (lookahead == 'i') ADVANCE(1309);
      END_STATE();
    case 1281:
      if (lookahead == 'i') ADVANCE(1254);
      END_STATE();
    case 1282:
      if (lookahead == 'i') ADVANCE(1315);
      END_STATE();
    case 1283:
      if (lookahead == 'i') ADVANCE(1316);
      END_STATE();
    case 1284:
      if (lookahead == 'l') ADVANCE(1400);
      END_STATE();
    case 1285:
      if (lookahead == 'l') ADVANCE(1248);
      END_STATE();
    case 1286:
      if (lookahead == 'l') ADVANCE(1248);
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 1287:
      if (lookahead == 'l') ADVANCE(1182);
      if (lookahead == 'q') ADVANCE(1399);
      if (lookahead == 'r') ADVANCE(1182);
      END_STATE();
    case 1288:
      if (lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(1193);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 1291:
      if (lookahead == 'l') ADVANCE(1147);
      END_STATE();
    case 1292:
      if (lookahead == 'l') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1293:
      if (lookahead == 'l') ADVANCE(1155);
      END_STATE();
    case 1294:
      if (lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1295:
      if (lookahead == 'l') ADVANCE(1154);
      END_STATE();
    case 1296:
      if (lookahead == 'l') ADVANCE(1397);
      END_STATE();
    case 1297:
      if (lookahead == 'l') ADVANCE(1403);
      END_STATE();
    case 1298:
      if (lookahead == 'l') ADVANCE(1370);
      END_STATE();
    case 1299:
      if (lookahead == 'l') ADVANCE(1405);
      END_STATE();
    case 1300:
      if (lookahead == 'l') ADVANCE(1372);
      END_STATE();
    case 1301:
      if (lookahead == 'l') ADVANCE(1414);
      END_STATE();
    case 1302:
      if (lookahead == 'm') ADVANCE(1147);
      END_STATE();
    case 1303:
      if (lookahead == 'n') ADVANCE(1125);
      END_STATE();
    case 1304:
      if (lookahead == 'n') ADVANCE(1246);
      END_STATE();
    case 1305:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 1306:
      if (lookahead == 'n') ADVANCE(1123);
      END_STATE();
    case 1307:
      if (lookahead == 'n') ADVANCE(1134);
      END_STATE();
    case 1308:
      if (lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 1309:
      if (lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 1310:
      if (lookahead == 'n') ADVANCE(1146);
      END_STATE();
    case 1311:
      if (lookahead == 'n') ADVANCE(1152);
      END_STATE();
    case 1312:
      if (lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 1313:
      if (lookahead == 'n') ADVANCE(1410);
      END_STATE();
    case 1314:
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 1315:
      if (lookahead == 'n') ADVANCE(1407);
      END_STATE();
    case 1316:
      if (lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 1317:
      if (lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1318:
      if (lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 1319:
      if (lookahead == 'o') ADVANCE(1212);
      END_STATE();
    case 1320:
      if (lookahead == 'o') ADVANCE(1302);
      END_STATE();
    case 1321:
      if (lookahead == 'o') ADVANCE(1421);
      END_STATE();
    case 1322:
      if (lookahead == 'o') ADVANCE(1288);
      END_STATE();
    case 1323:
      if (lookahead == 'o') ADVANCE(1249);
      END_STATE();
    case 1324:
      if (lookahead == 'o') ADVANCE(1350);
      END_STATE();
    case 1325:
      if (lookahead == 'o') ADVANCE(1294);
      END_STATE();
    case 1326:
      if (lookahead == 'o') ADVANCE(1395);
      END_STATE();
    case 1327:
      if (lookahead == 'o') ADVANCE(1295);
      END_STATE();
    case 1328:
      if (lookahead == 'p') ADVANCE(1167);
      END_STATE();
    case 1329:
      if (lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 1330:
      if (lookahead == 'p') ADVANCE(1255);
      END_STATE();
    case 1331:
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1332:
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 1333:
      if (lookahead == 'p') ADVANCE(1269);
      END_STATE();
    case 1334:
      if (lookahead == 'p') ADVANCE(1270);
      END_STATE();
    case 1335:
      if (lookahead == 'p') ADVANCE(1301);
      END_STATE();
    case 1336:
      if (lookahead == 'p') ADVANCE(1301);
      if (lookahead == 'q') ADVANCE(1404);
      if (lookahead == 'x') ADVANCE(1209);
      END_STATE();
    case 1337:
      if (lookahead == 'p') ADVANCE(1301);
      if (lookahead == 'u') ADVANCE(1292);
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
      if (lookahead == 'p') ADVANCE(1274);
      END_STATE();
    case 1342:
      if (lookahead == 'p') ADVANCE(1275);
      END_STATE();
    case 1343:
      if (lookahead == 'q') ADVANCE(1419);
      END_STATE();
    case 1344:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 1345:
      if (lookahead == 'r') ADVANCE(1150);
      END_STATE();
    case 1346:
      if (lookahead == 'r') ADVANCE(1174);
      END_STATE();
    case 1347:
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 1348:
      if (lookahead == 'r') ADVANCE(1279);
      END_STATE();
    case 1349:
      if (lookahead == 'r') ADVANCE(1331);
      END_STATE();
    case 1350:
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 1351:
      if (lookahead == 'r') ADVANCE(1233);
      END_STATE();
    case 1352:
      if (lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(1345);
      END_STATE();
    case 1354:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1355:
      if (lookahead == 'r') ADVANCE(1321);
      END_STATE();
    case 1356:
      if (lookahead == 'r') ADVANCE(1250);
      END_STATE();
    case 1357:
      if (lookahead == 's') ADVANCE(1387);
      END_STATE();
    case 1358:
      if (lookahead == 's') ADVANCE(1256);
      END_STATE();
    case 1359:
      if (lookahead == 's') ADVANCE(1169);
      END_STATE();
    case 1360:
      if (lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 1361:
      if (lookahead == 's') ADVANCE(1171);
      END_STATE();
    case 1362:
      if (lookahead == 's') ADVANCE(1122);
      END_STATE();
    case 1363:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 1364:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 1365:
      if (lookahead == 's') ADVANCE(1409);
      END_STATE();
    case 1366:
      if (lookahead == 's') ADVANCE(1123);
      END_STATE();
    case 1367:
      if (lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 1368:
      if (lookahead == 's') ADVANCE(1160);
      END_STATE();
    case 1369:
      if (lookahead == 's') ADVANCE(1142);
      END_STATE();
    case 1370:
      if (lookahead == 's') ADVANCE(1147);
      END_STATE();
    case 1371:
      if (lookahead == 's') ADVANCE(1146);
      END_STATE();
    case 1372:
      if (lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 1373:
      if (lookahead == 's') ADVANCE(1152);
      END_STATE();
    case 1374:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1375:
      if (lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 1376:
      if (lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 1377:
      if (lookahead == 's') ADVANCE(1261);
      END_STATE();
    case 1378:
      if (lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1379:
      if (lookahead == 's') ADVANCE(1264);
      END_STATE();
    case 1380:
      if (lookahead == 's') ADVANCE(1395);
      END_STATE();
    case 1381:
      if (lookahead == 's') ADVANCE(1263);
      END_STATE();
    case 1382:
      if (lookahead == 's') ADVANCE(1262);
      END_STATE();
    case 1383:
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 1384:
      if (lookahead == 's') ADVANCE(1265);
      END_STATE();
    case 1385:
      if (lookahead == 's') ADVANCE(1267);
      END_STATE();
    case 1386:
      if (lookahead == 's') ADVANCE(1268);
      END_STATE();
    case 1387:
      if (lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 1388:
      if (lookahead == 't') ADVANCE(1151);
      if (lookahead == 'x') ADVANCE(1337);
      END_STATE();
    case 1389:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1390:
      if (lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 1391:
      if (lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1393:
      if (lookahead == 't') ADVANCE(1348);
      END_STATE();
    case 1394:
      if (lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1397:
      if (lookahead == 't') ADVANCE(1156);
      END_STATE();
    case 1398:
      if (lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1399:
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 1400:
      if (lookahead == 'u') ADVANCE(1362);
      END_STATE();
    case 1401:
      if (lookahead == 'u') ADVANCE(1243);
      END_STATE();
    case 1402:
      if (lookahead == 'u') ADVANCE(1364);
      END_STATE();
    case 1403:
      if (lookahead == 'u') ADVANCE(1367);
      END_STATE();
    case 1404:
      if (lookahead == 'u') ADVANCE(1191);
      END_STATE();
    case 1405:
      if (lookahead == 'u') ADVANCE(1359);
      END_STATE();
    case 1406:
      if (lookahead == 'u') ADVANCE(1360);
      END_STATE();
    case 1407:
      if (lookahead == 'u') ADVANCE(1361);
      END_STATE();
    case 1408:
      if (lookahead == 'u') ADVANCE(1363);
      END_STATE();
    case 1409:
      if (lookahead == 'u') ADVANCE(1356);
      END_STATE();
    case 1410:
      if (lookahead == 'u') ADVANCE(1366);
      END_STATE();
    case 1411:
      if (lookahead == 'u') ADVANCE(1369);
      END_STATE();
    case 1412:
      if (lookahead == 'u') ADVANCE(1192);
      END_STATE();
    case 1413:
      if (lookahead == 'u') ADVANCE(1368);
      END_STATE();
    case 1414:
      if (lookahead == 'u') ADVANCE(1370);
      END_STATE();
    case 1415:
      if (lookahead == 'u') ADVANCE(1371);
      END_STATE();
    case 1416:
      if (lookahead == 'u') ADVANCE(1373);
      END_STATE();
    case 1417:
      if (lookahead == 'u') ADVANCE(1374);
      END_STATE();
    case 1418:
      if (lookahead == 'u') ADVANCE(1244);
      END_STATE();
    case 1419:
      if (lookahead == 'u') ADVANCE(1205);
      END_STATE();
    case 1420:
      if (lookahead == 'w') ADVANCE(1204);
      END_STATE();
    case 1421:
      if (lookahead == 'w') ADVANCE(1147);
      END_STATE();
    case 1422:
      if (lookahead == 'x') ADVANCE(1208);
      END_STATE();
    case 1423:
      if (lookahead == 'y') ADVANCE(1333);
      END_STATE();
    case 1424:
      if (lookahead == 'y') ADVANCE(1338);
      END_STATE();
    case 1425:
      if (lookahead == 'y') ADVANCE(1340);
      END_STATE();
    case 1426:
      if (lookahead == 'y') ADVANCE(1341);
      END_STATE();
    case 1427:
      if (lookahead == 0xfe0e) ADVANCE(1523);
      END_STATE();
    case 1428:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1455);
      END_STATE();
    case 1429:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      END_STATE();
    case 1430:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1431:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1136);
      END_STATE();
    case 1432:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1147);
      END_STATE();
    case 1433:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1153);
      END_STATE();
    case 1434:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1154);
      END_STATE();
    case 1435:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 1436:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1156);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1161);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1155);
      END_STATE();
    case 1437:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      END_STATE();
    case 1438:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 1439:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1121);
      END_STATE();
    case 1440:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1129);
      END_STATE();
    case 1441:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 1442:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1144);
      END_STATE();
    case 1443:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1157);
      END_STATE();
    case 1444:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 1445:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 1446:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 1447:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 1448:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 1449:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 1450:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1092);
      END_STATE();
    case 1451:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 1452:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1096);
      END_STATE();
    case 1453:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1098);
      END_STATE();
    case 1454:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1534);
      END_STATE();
    case 1455:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1454);
      END_STATE();
    case 1456:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1533);
      END_STATE();
    case 1457:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1530);
      END_STATE();
    case 1458:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1534);
      END_STATE();
    case 1459:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1558);
      END_STATE();
    case 1460:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '\n', 1471,
        '\r', 781,
        '!', 1549,
        '$', 534,
        '&', 11,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '%', 1470,
        ';', 1470,
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
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1461:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1549,
        '#', 1539,
        '$', 534,
        '&', 2,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1548,
        '?', 1549,
        '@', 1526,
        'O', 1579,
        'P', 1519,
        'R', 1508,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '\n', 789,
        '\r', 789,
        '%', 1470,
        ';', 1470,
        'Z', 531,
        'z', 531,
        '+', 1538,
        0x16ed, 1538,
        0x2795, 1538,
        ':', 1514,
        'X', 1514,
        'x', 1514,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1509);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1462:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1549,
        '#', 1539,
        '$', 534,
        '&', 2,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1516,
        '?', 1549,
        '@', 1526,
        'O', 1579,
        'P', 1519,
        'R', 1504,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '\n', 789,
        '\r', 789,
        '%', 1470,
        ';', 1470,
        'Z', 531,
        'z', 531,
        '+', 1538,
        0x16ed, 1538,
        0x2795, 1538,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1547);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1505);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1463:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1549,
        '#', 1539,
        '$', 534,
        '&', 13,
        '(', 1488,
        '*', 1604,
        '0', 1582,
        '1', 1560,
        '<', 283,
        '=', 1516,
        '?', 1549,
        '@', 1526,
        'O', 1579,
        'P', 1519,
        'R', 1504,
        'T', 289,
        '[', 1478,
        'e', 1499,
        'o', 1586,
        'p', 508,
        '{', 1491,
        0xbd, 1600,
        0x66d, 1620,
        0x204e, 1616,
        0x2217, 1608,
        0x2659, 1522,
        0x265f, 507,
        0x2731, 1612,
        '\n', 789,
        '\r', 789,
        '%', 1470,
        ';', 1470,
        'Z', 531,
        'z', 531,
        '+', 1538,
        0x16ed, 1538,
        0x2795, 1538,
        ':', 1514,
        'X', 1514,
        'x', 1514,
        '\t', 540,
        0x0b, 540,
        '\f', 540,
        ' ', 540,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1500);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1528);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1505);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1464:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '!', 1557,
        '#', 1537,
        '$', 1459,
        '&', 810,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '0', 1583,
        '1', 1561,
        '<', 1162,
        '=', 1556,
        '?', 1557,
        '@', 1525,
        'O', 1580,
        'P', 1520,
        'R', 1511,
        'T', 1170,
        '[', 1477,
        'e', 1501,
        'o', 1587,
        'p', 1428,
        '{', 1490,
        0xbd, 1599,
        0x66d, 1619,
        0x204e, 1615,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        '%', 1469,
        ';', 1469,
        'Z', 1458,
        'z', 1458,
        '+', 1541,
        0x16ed, 1541,
        0x2795, 1541,
        ':', 1513,
        'X', 1513,
        'x', 1513,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
      if (set_contains(sym_annotation_character_set_4, 42, lookahead)) ADVANCE(1542);
      END_STATE();
    case 1465:
      if (eof) ADVANCE(1466);
      ADVANCE_MAP(
        '"', 1481,
        '&', 805,
        '(', 1487,
        ')', 1489,
        '*', 1603,
        '-', 1562,
        '/', 1588,
        '0', 1584,
        '1', 1559,
        '2', 1598,
        '@', 1525,
        'O', 1580,
        'P', 1518,
        '[', 1477,
        ']', 1479,
        'o', 1587,
        '{', 1490,
        '}', 1492,
        0xbd, 1599,
        0x66d, 1619,
        0x2010, 1566,
        0x2011, 1568,
        0x2012, 1570,
        0x2013, 1572,
        0x2014, 1574,
        0x2044, 1592,
        0x204e, 1615,
        0x2212, 1564,
        0x2215, 1590,
        0x2217, 1607,
        0x2659, 1521,
        0x265f, 1427,
        0x2731, 1611,
        0x2796, 1576,
        0x27cb, 1594,
        0x29f8, 1596,
        '%', 1469,
        ';', 1469,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1465);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(1498);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(1507);
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
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_rest_of_line_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1471);
      if (lookahead == '\r') ADVANCE(781);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(781);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1472);
      if (lookahead == '\r') ADVANCE(784);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(784);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(1468);
      if (lookahead == '\r') ADVANCE(786);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(782);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1474);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_tagpair_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_tagpair_delimiter_close);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(1486);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1483);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1483);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ']') ADVANCE(1480);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1486);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1486);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(1486);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_variation_delimiter_close);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_open);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_inline_comment_delimiter_close);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_inline_comment_text);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1493);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1496);
      if (lookahead == '\r') ADVANCE(1495);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1494);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(1496);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1497);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(820);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1497);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '.') ADVANCE(1497);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(1329);
      if (lookahead == 'p') ADVANCE(1542);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(1542);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1555);
      if (lookahead == '\r') ADVANCE(1543);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(1542);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1542);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1542);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1455);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 10,
        '+', 1551,
        0x16ed, 1551,
        0x2795, 1551,
        '/', 15,
        0x2044, 15,
        0x2215, 15,
        0x27cb, 15,
        0x29f8, 15,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 804,
        '+', 1542,
        0x16ed, 1542,
        0x2795, 1542,
        '/', 816,
        0x2044, 816,
        0x2215, 816,
        0x27cb, 816,
        0x29f8, 816,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1534);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 1531:
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
    case 1532:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(808);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1457);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 4,
        '+', 1539,
        0x16ed, 1539,
        0x2795, 1539,
        '/', 17,
        0x2044, 17,
        0x2215, 17,
        0x27cb, 17,
        0x29f8, 17,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(800);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(1537);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 807,
        '+', 1537,
        0x16ed, 1537,
        0x2795, 1537,
        '/', 817,
        0x2044, 817,
        0x2215, 817,
        0x27cb, 817,
        0x29f8, 817,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1542);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 10,
        '-', 1535,
        '+', 1551,
        0x16ed, 1551,
        0x2795, 1551,
        '/', 15,
        0x2044, 15,
        0x2215, 15,
        0x27cb, 15,
        0x29f8, 15,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 821,
        '\r', 1,
        '&', 10,
        '+', 1551,
        0x16ed, 1551,
        0x2795, 1551,
        '/', 15,
        0x2044, 15,
        0x2215, 15,
        0x27cb, 15,
        0x29f8, 15,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1551);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1550);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 804,
        '+', 1542,
        0x16ed, 1542,
        0x2795, 1542,
        '/', 816,
        0x2044, 816,
        0x2215, 816,
        0x27cb, 816,
        0x29f8, 816,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1534);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(802);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '=') ADVANCE(1542);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(1542);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1558);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_1);
      ADVANCE_MAP(
        '\n', 822,
        '\r', 538,
        '.', 1494,
        '\t', 537,
        0x0b, 537,
        '\f', 537,
        ' ', 537,
        'A', 537,
        'B', 537,
        'a', 537,
        'b', 537,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1497);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1579:
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
    case 1580:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1456);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 822,
        '\r', 538,
        '&', 3,
        '.', 1494,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '.') ADVANCE(1497);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(824);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1456);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 1586:
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
    case 1587:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '&') ADVANCE(799);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1456);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(535);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 1622:
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1461},
  [2] = {.lex_state = 1461},
  [3] = {.lex_state = 1461},
  [4] = {.lex_state = 778},
  [5] = {.lex_state = 1464},
  [6] = {.lex_state = 1464},
  [7] = {.lex_state = 1464},
  [8] = {.lex_state = 1463},
  [9] = {.lex_state = 1461},
  [10] = {.lex_state = 1461},
  [11] = {.lex_state = 791},
  [12] = {.lex_state = 1462},
  [13] = {.lex_state = 1462},
  [14] = {.lex_state = 1463},
  [15] = {.lex_state = 1461},
  [16] = {.lex_state = 790},
  [17] = {.lex_state = 790},
  [18] = {.lex_state = 791},
  [19] = {.lex_state = 1462},
  [20] = {.lex_state = 778},
  [21] = {.lex_state = 778},
  [22] = {.lex_state = 778},
  [23] = {.lex_state = 1461},
  [24] = {.lex_state = 1461},
  [25] = {.lex_state = 1461},
  [26] = {.lex_state = 1461},
  [27] = {.lex_state = 1461},
  [28] = {.lex_state = 1464},
  [29] = {.lex_state = 1460},
  [30] = {.lex_state = 1461},
  [31] = {.lex_state = 1461},
  [32] = {.lex_state = 1461},
  [33] = {.lex_state = 1461},
  [34] = {.lex_state = 1461},
  [35] = {.lex_state = 1461},
  [36] = {.lex_state = 1461},
  [37] = {.lex_state = 1464},
  [38] = {.lex_state = 1461},
  [39] = {.lex_state = 1461},
  [40] = {.lex_state = 1464},
  [41] = {.lex_state = 1461},
  [42] = {.lex_state = 790},
  [43] = {.lex_state = 1461},
  [44] = {.lex_state = 1461},
  [45] = {.lex_state = 1461},
  [46] = {.lex_state = 1461},
  [47] = {.lex_state = 1461},
  [48] = {.lex_state = 1461},
  [49] = {.lex_state = 1461},
  [50] = {.lex_state = 1461},
  [51] = {.lex_state = 1461},
  [52] = {.lex_state = 1461},
  [53] = {.lex_state = 1464},
  [54] = {.lex_state = 1460},
  [55] = {.lex_state = 1461},
  [56] = {.lex_state = 1461},
  [57] = {.lex_state = 783},
  [58] = {.lex_state = 1461},
  [59] = {.lex_state = 1461},
  [60] = {.lex_state = 1464},
  [61] = {.lex_state = 1464},
  [62] = {.lex_state = 778},
  [63] = {.lex_state = 778},
  [64] = {.lex_state = 1464},
  [65] = {.lex_state = 1464},
  [66] = {.lex_state = 1461},
  [67] = {.lex_state = 785},
  [68] = {.lex_state = 1464},
  [69] = {.lex_state = 1464},
  [70] = {.lex_state = 1464},
  [71] = {.lex_state = 1464},
  [72] = {.lex_state = 1464},
  [73] = {.lex_state = 1464},
  [74] = {.lex_state = 1464},
  [75] = {.lex_state = 778},
  [76] = {.lex_state = 1464},
  [77] = {.lex_state = 1461},
  [78] = {.lex_state = 1464},
  [79] = {.lex_state = 1464},
  [80] = {.lex_state = 778},
  [81] = {.lex_state = 1464},
  [82] = {.lex_state = 1464},
  [83] = {.lex_state = 1464},
  [84] = {.lex_state = 1464},
  [85] = {.lex_state = 1464},
  [86] = {.lex_state = 1464},
  [87] = {.lex_state = 1464},
  [88] = {.lex_state = 1464},
  [89] = {.lex_state = 1464},
  [90] = {.lex_state = 1464},
  [91] = {.lex_state = 1464},
  [92] = {.lex_state = 1464},
  [93] = {.lex_state = 1464},
  [94] = {.lex_state = 1464},
  [95] = {.lex_state = 1464},
  [96] = {.lex_state = 1464},
  [97] = {.lex_state = 1464},
  [98] = {.lex_state = 813},
  [99] = {.lex_state = 1461},
  [100] = {.lex_state = 1461},
  [101] = {.lex_state = 1461},
  [102] = {.lex_state = 1461},
  [103] = {.lex_state = 813},
  [104] = {.lex_state = 1461},
  [105] = {.lex_state = 1461},
  [106] = {.lex_state = 813},
  [107] = {.lex_state = 1461},
  [108] = {.lex_state = 1461},
  [109] = {.lex_state = 1461},
  [110] = {.lex_state = 813},
  [111] = {.lex_state = 1461},
  [112] = {.lex_state = 1461},
  [113] = {.lex_state = 1461},
  [114] = {.lex_state = 1461},
  [115] = {.lex_state = 813},
  [116] = {.lex_state = 1461},
  [117] = {.lex_state = 1464},
  [118] = {.lex_state = 1464},
  [119] = {.lex_state = 1464},
  [120] = {.lex_state = 1464},
  [121] = {.lex_state = 1464},
  [122] = {.lex_state = 1464},
  [123] = {.lex_state = 1464},
  [124] = {.lex_state = 1464},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 796},
  [127] = {.lex_state = 1163},
  [128] = {.lex_state = 1163},
  [129] = {.lex_state = 1163},
  [130] = {.lex_state = 1163},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 795},
  [133] = {.lex_state = 796},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 796},
  [137] = {.lex_state = 813},
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
  [149] = {.lex_state = 796},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1163},
  [158] = {.lex_state = 1163},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1474},
  [161] = {.lex_state = 813},
  [162] = {.lex_state = 1163},
  [163] = {.lex_state = 1493},
  [164] = {.lex_state = 1474},
  [165] = {.lex_state = 787},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 813},
  [168] = {.lex_state = 813},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 813},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1163},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1474},
  [183] = {.lex_state = 1163},
  [184] = {.lex_state = 1474},
  [185] = {.lex_state = 1163},
  [186] = {.lex_state = 1493},
  [187] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(1),
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
  },
  [1] = {
    [sym_series_of_games] = STATE(166),
    [sym_game] = STATE(105),
    [sym_freestanding_comment] = STATE(37),
    [sym_rest_of_line_comment] = STATE(58),
    [sym_header] = STATE(4),
    [sym_tagpair] = STATE(20),
    [sym_movetext] = STATE(103),
    [sym__movetext_element] = STATE(94),
    [sym_variation] = STATE(94),
    [sym_inline_comment] = STATE(95),
    [sym_san_move] = STATE(85),
    [sym__san_move_piece] = STATE(70),
    [sym_lan_move] = STATE(87),
    [sym__san_square] = STATE(11),
    [sym__san_move_pawn] = STATE(70),
    [sym__san_drop_pawn] = STATE(70),
    [sym__san_move_major_or_minor_piece] = STATE(70),
    [sym__san_drop_major_or_minor_piece] = STATE(70),
    [sym__lan_move_by_coordinates] = STATE(61),
    [aux_sym_series_of_games_repeat1] = STATE(9),
    [aux_sym_freestanding_comment_repeat1] = STATE(100),
    [aux_sym_movetext_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_rest_of_line_comment_delimiter_open] = ACTIONS(5),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
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
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(32), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(47), 1,
      sym_san_move,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(47), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(48), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(49), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(43), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(23), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(31), 17,
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
  [87] = 20,
    ACTIONS(53), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(58), 1,
      sym_variation_delimiter_open,
    ACTIONS(61), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(64), 1,
      sym_move_number,
    ACTIONS(67), 1,
      sym__san_file,
    ACTIONS(70), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(76), 1,
      anon_sym_AT,
    ACTIONS(82), 1,
      sym_annotation,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(32), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(47), 1,
      sym_san_move,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(79), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(48), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(49), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(73), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(23), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(56), 17,
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
  [174] = 25,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
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
    ACTIONS(85), 1,
      sym__empty_line,
    ACTIONS(87), 1,
      anon_sym_1,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(25), 1,
      sym_movetext,
    STATE(32), 1,
      sym__lan_move_by_coordinates,
    STATE(44), 1,
      sym_lan_move,
    STATE(47), 1,
      sym_san_move,
    STATE(112), 1,
      sym_result_code,
    ACTIONS(47), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(91), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(48), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(49), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(43), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(23), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(93), 10,
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
  [271] = 25,
    ACTIONS(39), 1,
      sym__san_file,
    ACTIONS(41), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(43), 1,
      anon_sym_P,
    ACTIONS(49), 1,
      sym_annotation,
    ACTIONS(87), 1,
      anon_sym_1,
    ACTIONS(95), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(97), 1,
      sym_variation_delimiter_open,
    ACTIONS(99), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(101), 1,
      sym_move_number,
    ACTIONS(105), 1,
      anon_sym_AT,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(32), 1,
      sym__lan_move_by_coordinates,
    STATE(43), 1,
      sym_movetext,
    STATE(44), 1,
      sym_lan_move,
    STATE(47), 1,
      sym_san_move,
    STATE(107), 1,
      sym_result_code,
    ACTIONS(103), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(107), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(109), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(48), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(49), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(23), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(111), 10,
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
  [367] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(115), 1,
      sym_variation_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(119), 1,
      sym_move_number,
    ACTIONS(123), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(31), 4,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(29), 12,
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
  [453] = 21,
    ACTIONS(127), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(130), 1,
      sym_variation_delimiter_open,
    ACTIONS(133), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(136), 1,
      sym_move_number,
    ACTIONS(139), 1,
      sym__san_file,
    ACTIONS(142), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(145), 1,
      anon_sym_P,
    ACTIONS(151), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      sym_annotation,
    STATE(7), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    ACTIONS(148), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(154), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(56), 4,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(51), 12,
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
  [539] = 7,
    ACTIONS(164), 1,
      sym__san_promotable_piece,
    ACTIONS(168), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym__san_promotion,
    STATE(179), 1,
      sym__san_promotion_symbol,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(166), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(162), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [593] = 29,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
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
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      aux_sym_series_of_games_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(28), 1,
      sym_freestanding_comment,
    STATE(58), 1,
      sym_rest_of_line_comment,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_inline_comment,
    STATE(100), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(103), 1,
      sym_movetext,
    STATE(105), 1,
      sym_game,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [689] = 29,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(177), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(180), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(183), 1,
      sym_variation_delimiter_open,
    ACTIONS(186), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(189), 1,
      sym_move_number,
    ACTIONS(192), 1,
      sym__san_file,
    ACTIONS(195), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      sym_annotation,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      aux_sym_series_of_games_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(53), 1,
      sym_freestanding_comment,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(66), 1,
      sym_rest_of_line_comment,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    STATE(95), 1,
      sym_inline_comment,
    STATE(102), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(103), 1,
      sym_movetext,
    STATE(105), 1,
      sym_game,
    ACTIONS(204), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(198), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [785] = 8,
    ACTIONS(210), 1,
      sym__san_promotable_piece,
    ACTIONS(212), 1,
      sym__san_capture_symbol,
    ACTIONS(214), 1,
      anon_sym_EQ,
    ACTIONS(216), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(68), 1,
      sym__san_promotion,
    STATE(180), 1,
      sym__san_promotion_symbol,
    ACTIONS(162), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(160), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [839] = 6,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(222), 1,
      sym__san_promotable_piece,
    STATE(33), 1,
      sym__san_promotion,
    STATE(179), 1,
      sym__san_promotion_symbol,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(220), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [889] = 6,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(228), 1,
      sym__san_promotable_piece,
    STATE(35), 1,
      sym__san_promotion,
    STATE(179), 1,
      sym__san_promotion_symbol,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(226), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [939] = 2,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(232), 35,
      sym_rest_of_line_comment_delimiter_open,
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
  [981] = 4,
    ACTIONS(234), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(232), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1025] = 6,
    ACTIONS(214), 1,
      anon_sym_EQ,
    ACTIONS(236), 1,
      sym__san_promotable_piece,
    STATE(72), 1,
      sym__san_promotion,
    STATE(180), 1,
      sym__san_promotion_symbol,
    ACTIONS(220), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(218), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [1073] = 6,
    ACTIONS(214), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      sym__san_promotable_piece,
    STATE(74), 1,
      sym__san_promotion,
    STATE(180), 1,
      sym__san_promotion_symbol,
    ACTIONS(226), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(224), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [1121] = 2,
    ACTIONS(232), 12,
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
    ACTIONS(230), 23,
      sym_rest_of_line_comment_delimiter_open,
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
  [1161] = 2,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(232), 33,
      sym_rest_of_line_comment_delimiter_open,
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
  [1201] = 7,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(240), 1,
      sym__empty_line,
    ACTIONS(242), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(22), 1,
      aux_sym_header_repeat1,
    STATE(62), 1,
      sym_rest_of_line_comment,
    STATE(63), 1,
      sym_tagpair,
    ACTIONS(244), 28,
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
  [1250] = 7,
    ACTIONS(246), 1,
      sym__empty_line,
    ACTIONS(249), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(252), 1,
      sym_tagpair_delimiter_open,
    STATE(21), 1,
      aux_sym_header_repeat1,
    STATE(62), 1,
      sym_rest_of_line_comment,
    STATE(63), 1,
      sym_tagpair,
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
  [1299] = 7,
    ACTIONS(9), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(242), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(257), 1,
      sym__empty_line,
    STATE(21), 1,
      aux_sym_header_repeat1,
    STATE(62), 1,
      sym_rest_of_line_comment,
    STATE(63), 1,
      sym_tagpair,
    ACTIONS(259), 28,
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
  [1348] = 3,
    ACTIONS(265), 1,
      sym_check_or_mate_condition,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(263), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [1388] = 2,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(232), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1426] = 7,
    ACTIONS(87), 1,
      anon_sym_1,
    STATE(104), 1,
      sym_result_code,
    ACTIONS(91), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(93), 10,
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
    ACTIONS(269), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [1474] = 2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(273), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1512] = 2,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(277), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1550] = 25,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(115), 1,
      sym_variation_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(119), 1,
      sym_move_number,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    STATE(103), 1,
      sym_movetext,
    STATE(114), 1,
      sym_game,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1634] = 3,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(285), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1674] = 2,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(291), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1712] = 2,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(295), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1750] = 3,
    ACTIONS(301), 1,
      sym_check_or_mate_condition,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(299), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [1790] = 2,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(305), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1828] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(309), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1866] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(313), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1904] = 2,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(317), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [1942] = 25,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(115), 1,
      sym_variation_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(119), 1,
      sym_move_number,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    STATE(103), 1,
      sym_movetext,
    STATE(114), 1,
      sym_game,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2026] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(323), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [2064] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(327), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [2102] = 4,
    ACTIONS(329), 1,
      sym__san_capture_symbol,
    STATE(73), 1,
      sym__san_square,
    ACTIONS(232), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(230), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [2144] = 2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(333), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [2182] = 2,
    ACTIONS(232), 11,
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
    ACTIONS(230), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [2220] = 7,
    ACTIONS(87), 1,
      anon_sym_1,
    STATE(108), 1,
      sym_result_code,
    ACTIONS(91), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(89), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(93), 10,
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
    ACTIONS(337), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [2268] = 2,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(341), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2305] = 2,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(345), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2342] = 2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(349), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2379] = 2,
    ACTIONS(351), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(353), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2416] = 2,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(357), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2453] = 2,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(361), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2490] = 2,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(365), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2527] = 2,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(369), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2564] = 2,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(373), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2601] = 24,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(115), 1,
      sym_variation_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(119), 1,
      sym_move_number,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym_tagpair_delimiter_open,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(11), 1,
      sym__san_square,
    STATE(20), 1,
      sym_tagpair,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(85), 1,
      sym_san_move,
    STATE(87), 1,
      sym_lan_move,
    STATE(103), 1,
      sym_movetext,
    STATE(114), 1,
      sym_game,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(94), 2,
      sym__movetext_element,
      sym_variation,
    STATE(95), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [2682] = 2,
    ACTIONS(375), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(285), 31,
      sym_rest_of_line_comment_delimiter_open,
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
  [2719] = 2,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(379), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2756] = 2,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(383), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2793] = 2,
    ACTIONS(385), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(285), 31,
      sym__empty_line,
      sym_rest_of_line_comment_delimiter_open,
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
  [2830] = 4,
    ACTIONS(392), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(389), 13,
      sym_rest_of_line_comment_delimiter_open,
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
    ACTIONS(357), 16,
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
  [2871] = 2,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(396), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [2908] = 2,
    ACTIONS(323), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(321), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [2944] = 3,
    ACTIONS(398), 1,
      sym_check_or_mate_condition,
    ACTIONS(299), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(297), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [2982] = 2,
    ACTIONS(400), 1,
      sym__empty_line,
    ACTIONS(402), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [3018] = 2,
    ACTIONS(404), 1,
      sym__empty_line,
    ACTIONS(406), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [3054] = 2,
    ACTIONS(273), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(271), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3090] = 2,
    ACTIONS(232), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(230), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3126] = 4,
    ACTIONS(387), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(392), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(389), 13,
      sym_rest_of_line_comment_delimiter_open,
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
    ACTIONS(357), 16,
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
  [3166] = 2,
    ACTIONS(408), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(285), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [3202] = 2,
    ACTIONS(295), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(293), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3238] = 2,
    ACTIONS(277), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(275), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3274] = 3,
    ACTIONS(410), 1,
      sym_check_or_mate_condition,
    ACTIONS(263), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(261), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3312] = 2,
    ACTIONS(291), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(289), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3348] = 2,
    ACTIONS(305), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(303), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3384] = 2,
    ACTIONS(309), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(307), 22,
      sym_rest_of_line_comment_delimiter_open,
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
    ACTIONS(313), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(311), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3456] = 2,
    ACTIONS(412), 1,
      sym__empty_line,
    ACTIONS(414), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [3492] = 2,
    ACTIONS(317), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(315), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3528] = 2,
    ACTIONS(343), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(345), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [3564] = 2,
    ACTIONS(327), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(325), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3600] = 2,
    ACTIONS(333), 9,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(331), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3636] = 2,
    ACTIONS(343), 1,
      sym__empty_line,
    ACTIONS(345), 30,
      sym_rest_of_line_comment_delimiter_open,
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
  [3672] = 2,
    ACTIONS(379), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(377), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3707] = 2,
    ACTIONS(383), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(381), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3742] = 2,
    ACTIONS(345), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(343), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3777] = 2,
    ACTIONS(373), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(371), 22,
      sym_rest_of_line_comment_delimiter_open,
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
  [3812] = 2,
    ACTIONS(353), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(351), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [3846] = 2,
    ACTIONS(365), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(363), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [3880] = 2,
    ACTIONS(341), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(339), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [3914] = 2,
    ACTIONS(349), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(347), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [3948] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(416), 1,
      sym_variation_delimiter_open,
    ACTIONS(418), 1,
      sym_variation_delimiter_close,
    ACTIONS(420), 1,
      sym_move_number,
    ACTIONS(422), 1,
      sym_annotation,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(123), 1,
      sym_san_move,
    STATE(159), 1,
      sym_variation_movetext,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(122), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4020] = 2,
    ACTIONS(396), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(394), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [4054] = 2,
    ACTIONS(369), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(367), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [4088] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(416), 1,
      sym_variation_delimiter_open,
    ACTIONS(420), 1,
      sym_move_number,
    ACTIONS(422), 1,
      sym_annotation,
    ACTIONS(424), 1,
      sym_variation_delimiter_close,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(123), 1,
      sym_san_move,
    STATE(175), 1,
      sym_variation_movetext,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(122), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4160] = 21,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(416), 1,
      sym_variation_delimiter_open,
    ACTIONS(420), 1,
      sym_move_number,
    ACTIONS(422), 1,
      sym_annotation,
    ACTIONS(426), 1,
      sym_variation_delimiter_close,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(97), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(123), 1,
      sym_san_move,
    STATE(169), 1,
      sym_variation_movetext,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(122), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4232] = 2,
    ACTIONS(361), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(359), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [4266] = 2,
    ACTIONS(357), 8,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(355), 21,
      sym_rest_of_line_comment_delimiter_open,
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
  [4300] = 20,
    ACTIONS(428), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(431), 1,
      sym_variation_delimiter_open,
    ACTIONS(434), 1,
      sym_variation_delimiter_close,
    ACTIONS(436), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(439), 1,
      sym_move_number,
    ACTIONS(442), 1,
      sym__san_file,
    ACTIONS(445), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(448), 1,
      anon_sym_P,
    ACTIONS(454), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      sym_annotation,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(96), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(123), 1,
      sym_san_move,
    ACTIONS(451), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(457), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(122), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4369] = 20,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(113), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(117), 1,
      sym_inline_comment_delimiter_open,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(416), 1,
      sym_variation_delimiter_open,
    ACTIONS(420), 1,
      sym_move_number,
    ACTIONS(422), 1,
      sym_annotation,
    ACTIONS(463), 1,
      sym_variation_delimiter_close,
    STATE(11), 1,
      sym__san_square,
    STATE(61), 1,
      sym__lan_move_by_coordinates,
    STATE(96), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(117), 1,
      sym_lan_move,
    STATE(123), 1,
      sym_san_move,
    ACTIONS(121), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(120), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(122), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(70), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4438] = 2,
    ACTIONS(467), 10,
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
    ACTIONS(465), 16,
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
  [4469] = 5,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(474), 1,
      sym_old_style_twic_section_comment,
    STATE(99), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(477), 13,
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
  [4498] = 5,
    ACTIONS(5), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym_old_style_twic_section_comment,
    STATE(99), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(483), 13,
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
  [4527] = 4,
    ACTIONS(485), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(488), 1,
      sym_old_style_twic_section_comment,
    STATE(101), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(477), 13,
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
  [4553] = 4,
    ACTIONS(491), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(493), 1,
      sym_old_style_twic_section_comment,
    STATE(101), 2,
      sym_rest_of_line_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(483), 13,
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
  [4579] = 5,
    ACTIONS(495), 1,
      anon_sym_1,
    STATE(113), 1,
      sym_result_code,
    ACTIONS(109), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(497), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(111), 10,
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
  [4607] = 2,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(501), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4628] = 2,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(505), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4649] = 1,
    ACTIONS(507), 16,
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
  [4668] = 2,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(511), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4689] = 2,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(515), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4710] = 2,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(519), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4731] = 1,
    ACTIONS(521), 16,
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
  [4750] = 2,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(525), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4771] = 2,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(529), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4792] = 2,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(533), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4813] = 2,
    ACTIONS(535), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(537), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4834] = 1,
    ACTIONS(539), 16,
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
  [4853] = 2,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(543), 14,
      sym_rest_of_line_comment_delimiter_open,
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
  [4874] = 2,
    ACTIONS(547), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(545), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4893] = 2,
    ACTIONS(551), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(549), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4912] = 2,
    ACTIONS(555), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(553), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4931] = 2,
    ACTIONS(559), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(557), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4950] = 2,
    ACTIONS(563), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(561), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4969] = 2,
    ACTIONS(567), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(565), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [4988] = 2,
    ACTIONS(571), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(569), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5007] = 2,
    ACTIONS(575), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(573), 10,
      sym_rest_of_line_comment_delimiter_open,
      sym_variation_delimiter_open,
      sym_variation_delimiter_close,
      sym_inline_comment_delimiter_open,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [5026] = 1,
    ACTIONS(577), 10,
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
  [5039] = 5,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(581), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(133), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(155), 1,
      sym_tagpair_value_contents,
    STATE(171), 1,
      sym_double_quote,
  [5055] = 5,
    ACTIONS(583), 1,
      sym__san_file,
    ACTIONS(585), 1,
      sym__san_rank,
    ACTIONS(587), 1,
      sym__san_capture_symbol,
    ACTIONS(589), 1,
      anon_sym_AT,
    STATE(64), 1,
      sym__san_square,
  [5071] = 5,
    ACTIONS(591), 1,
      sym__san_file,
    ACTIONS(593), 1,
      sym__san_rank,
    ACTIONS(595), 1,
      sym__san_capture_symbol,
    ACTIONS(597), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__san_square,
  [5087] = 4,
    ACTIONS(599), 1,
      sym__san_file,
    ACTIONS(601), 1,
      sym__san_rank,
    ACTIONS(603), 1,
      sym__san_capture_symbol,
    STATE(79), 1,
      sym__san_square,
  [5100] = 4,
    ACTIONS(605), 1,
      sym__san_file,
    ACTIONS(607), 1,
      sym__san_rank,
    ACTIONS(609), 1,
      sym__san_capture_symbol,
    STATE(41), 1,
      sym__san_square,
  [5113] = 3,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_double_quote,
    STATE(176), 1,
      sym__tagpair_value,
  [5123] = 2,
    ACTIONS(613), 1,
      sym_tagpair_delimiter_close,
    ACTIONS(615), 2,
      anon_sym_DQUOTE,
      aux_sym_tagpair_value_contents_token1,
  [5131] = 3,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    ACTIONS(620), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(136), 1,
      aux_sym_tagpair_value_contents_repeat1,
  [5141] = 3,
    ACTIONS(605), 1,
      sym__san_file,
    ACTIONS(609), 1,
      sym__san_capture_symbol,
    STATE(41), 1,
      sym__san_square,
  [5151] = 3,
    ACTIONS(599), 1,
      sym__san_file,
    ACTIONS(603), 1,
      sym__san_capture_symbol,
    STATE(79), 1,
      sym__san_square,
  [5161] = 3,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(136), 1,
      aux_sym_tagpair_value_contents_repeat1,
  [5171] = 1,
    ACTIONS(628), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [5177] = 1,
    ACTIONS(628), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [5182] = 2,
    ACTIONS(599), 1,
      sym__san_file,
    STATE(69), 1,
      sym__san_square,
  [5189] = 2,
    ACTIONS(605), 1,
      sym__san_file,
    STATE(30), 1,
      sym__san_square,
  [5196] = 2,
    ACTIONS(599), 1,
      sym__san_file,
    STATE(60), 1,
      sym__san_square,
  [5203] = 2,
    ACTIONS(605), 1,
      sym__san_file,
    STATE(34), 1,
      sym__san_square,
  [5210] = 2,
    ACTIONS(599), 1,
      sym__san_file,
    STATE(78), 1,
      sym__san_square,
  [5217] = 2,
    ACTIONS(599), 1,
      sym__san_file,
    STATE(79), 1,
      sym__san_square,
  [5224] = 2,
    ACTIONS(599), 1,
      sym__san_file,
    STATE(71), 1,
      sym__san_square,
  [5231] = 2,
    ACTIONS(630), 1,
      sym__san_file,
    STATE(12), 1,
      sym__san_square,
  [5238] = 2,
    ACTIONS(632), 1,
      sym__san_file,
    STATE(17), 1,
      sym__san_square,
  [5245] = 2,
    ACTIONS(605), 1,
      sym__san_file,
    STATE(38), 1,
      sym__san_square,
  [5252] = 2,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(634), 1,
      aux_sym_tagpair_value_contents_token1,
  [5259] = 2,
    ACTIONS(605), 1,
      sym__san_file,
    STATE(39), 1,
      sym__san_square,
  [5266] = 2,
    ACTIONS(632), 1,
      sym__san_file,
    STATE(16), 1,
      sym__san_square,
  [5273] = 2,
    ACTIONS(605), 1,
      sym__san_file,
    STATE(41), 1,
      sym__san_square,
  [5280] = 2,
    ACTIONS(630), 1,
      sym__san_file,
    STATE(13), 1,
      sym__san_square,
  [5287] = 2,
    ACTIONS(599), 1,
      sym__san_file,
    STATE(73), 1,
      sym__san_square,
  [5294] = 2,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      sym_double_quote,
  [5301] = 2,
    ACTIONS(605), 1,
      sym__san_file,
    STATE(27), 1,
      sym__san_square,
  [5308] = 2,
    ACTIONS(638), 1,
      sym__san_rank,
    ACTIONS(640), 1,
      sym__san_capture_symbol,
  [5315] = 2,
    ACTIONS(642), 1,
      sym__san_rank,
    ACTIONS(644), 1,
      sym__san_capture_symbol,
  [5322] = 1,
    ACTIONS(646), 1,
      sym_variation_delimiter_close,
  [5326] = 1,
    ACTIONS(648), 1,
      sym_rest_of_line_comment_text,
  [5330] = 1,
    ACTIONS(650), 1,
      anon_sym_2,
  [5334] = 1,
    ACTIONS(652), 1,
      sym__san_rank,
  [5338] = 1,
    ACTIONS(654), 1,
      sym_inline_comment_text,
  [5342] = 1,
    ACTIONS(656), 1,
      sym_rest_of_line_comment_text,
  [5346] = 1,
    ACTIONS(658), 1,
      sym_tagpair_key,
  [5350] = 1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
  [5354] = 1,
    ACTIONS(662), 1,
      anon_sym_1,
  [5358] = 1,
    ACTIONS(628), 1,
      anon_sym_1,
  [5362] = 1,
    ACTIONS(664), 1,
      sym_variation_delimiter_close,
  [5366] = 1,
    ACTIONS(666), 1,
      sym_inline_comment_delimiter_close,
  [5370] = 1,
    ACTIONS(668), 1,
      sym_tagpair_delimiter_close,
  [5374] = 1,
    ACTIONS(670), 1,
      anon_sym_2,
  [5378] = 1,
    ACTIONS(672), 1,
      sym_tagpair_delimiter_close,
  [5382] = 1,
    ACTIONS(674), 1,
      anon_sym_AT,
  [5386] = 1,
    ACTIONS(676), 1,
      sym_variation_delimiter_close,
  [5390] = 1,
    ACTIONS(678), 1,
      sym_tagpair_delimiter_close,
  [5394] = 1,
    ACTIONS(680), 1,
      sym__san_rank,
  [5398] = 1,
    ACTIONS(682), 1,
      sym_inline_comment_delimiter_close,
  [5402] = 1,
    ACTIONS(684), 1,
      sym__san_promotable_piece,
  [5406] = 1,
    ACTIONS(686), 1,
      sym__san_promotable_piece,
  [5410] = 1,
    ACTIONS(634), 1,
      sym_tagpair_delimiter_close,
  [5414] = 1,
    ACTIONS(688), 1,
      sym_rest_of_line_comment_text,
  [5418] = 1,
    ACTIONS(690), 1,
      sym__san_rank,
  [5422] = 1,
    ACTIONS(692), 1,
      sym_rest_of_line_comment_text,
  [5426] = 1,
    ACTIONS(694), 1,
      sym__san_rank,
  [5430] = 1,
    ACTIONS(696), 1,
      sym_inline_comment_text,
  [5434] = 1,
    ACTIONS(698), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 367,
  [SMALL_STATE(7)] = 453,
  [SMALL_STATE(8)] = 539,
  [SMALL_STATE(9)] = 593,
  [SMALL_STATE(10)] = 689,
  [SMALL_STATE(11)] = 785,
  [SMALL_STATE(12)] = 839,
  [SMALL_STATE(13)] = 889,
  [SMALL_STATE(14)] = 939,
  [SMALL_STATE(15)] = 981,
  [SMALL_STATE(16)] = 1025,
  [SMALL_STATE(17)] = 1073,
  [SMALL_STATE(18)] = 1121,
  [SMALL_STATE(19)] = 1161,
  [SMALL_STATE(20)] = 1201,
  [SMALL_STATE(21)] = 1250,
  [SMALL_STATE(22)] = 1299,
  [SMALL_STATE(23)] = 1348,
  [SMALL_STATE(24)] = 1388,
  [SMALL_STATE(25)] = 1426,
  [SMALL_STATE(26)] = 1474,
  [SMALL_STATE(27)] = 1512,
  [SMALL_STATE(28)] = 1550,
  [SMALL_STATE(29)] = 1634,
  [SMALL_STATE(30)] = 1674,
  [SMALL_STATE(31)] = 1712,
  [SMALL_STATE(32)] = 1750,
  [SMALL_STATE(33)] = 1790,
  [SMALL_STATE(34)] = 1828,
  [SMALL_STATE(35)] = 1866,
  [SMALL_STATE(36)] = 1904,
  [SMALL_STATE(37)] = 1942,
  [SMALL_STATE(38)] = 2026,
  [SMALL_STATE(39)] = 2064,
  [SMALL_STATE(40)] = 2102,
  [SMALL_STATE(41)] = 2144,
  [SMALL_STATE(42)] = 2182,
  [SMALL_STATE(43)] = 2220,
  [SMALL_STATE(44)] = 2268,
  [SMALL_STATE(45)] = 2305,
  [SMALL_STATE(46)] = 2342,
  [SMALL_STATE(47)] = 2379,
  [SMALL_STATE(48)] = 2416,
  [SMALL_STATE(49)] = 2453,
  [SMALL_STATE(50)] = 2490,
  [SMALL_STATE(51)] = 2527,
  [SMALL_STATE(52)] = 2564,
  [SMALL_STATE(53)] = 2601,
  [SMALL_STATE(54)] = 2682,
  [SMALL_STATE(55)] = 2719,
  [SMALL_STATE(56)] = 2756,
  [SMALL_STATE(57)] = 2793,
  [SMALL_STATE(58)] = 2830,
  [SMALL_STATE(59)] = 2871,
  [SMALL_STATE(60)] = 2908,
  [SMALL_STATE(61)] = 2944,
  [SMALL_STATE(62)] = 2982,
  [SMALL_STATE(63)] = 3018,
  [SMALL_STATE(64)] = 3054,
  [SMALL_STATE(65)] = 3090,
  [SMALL_STATE(66)] = 3126,
  [SMALL_STATE(67)] = 3166,
  [SMALL_STATE(68)] = 3202,
  [SMALL_STATE(69)] = 3238,
  [SMALL_STATE(70)] = 3274,
  [SMALL_STATE(71)] = 3312,
  [SMALL_STATE(72)] = 3348,
  [SMALL_STATE(73)] = 3384,
  [SMALL_STATE(74)] = 3420,
  [SMALL_STATE(75)] = 3456,
  [SMALL_STATE(76)] = 3492,
  [SMALL_STATE(77)] = 3528,
  [SMALL_STATE(78)] = 3564,
  [SMALL_STATE(79)] = 3600,
  [SMALL_STATE(80)] = 3636,
  [SMALL_STATE(81)] = 3672,
  [SMALL_STATE(82)] = 3707,
  [SMALL_STATE(83)] = 3742,
  [SMALL_STATE(84)] = 3777,
  [SMALL_STATE(85)] = 3812,
  [SMALL_STATE(86)] = 3846,
  [SMALL_STATE(87)] = 3880,
  [SMALL_STATE(88)] = 3914,
  [SMALL_STATE(89)] = 3948,
  [SMALL_STATE(90)] = 4020,
  [SMALL_STATE(91)] = 4054,
  [SMALL_STATE(92)] = 4088,
  [SMALL_STATE(93)] = 4160,
  [SMALL_STATE(94)] = 4232,
  [SMALL_STATE(95)] = 4266,
  [SMALL_STATE(96)] = 4300,
  [SMALL_STATE(97)] = 4369,
  [SMALL_STATE(98)] = 4438,
  [SMALL_STATE(99)] = 4469,
  [SMALL_STATE(100)] = 4498,
  [SMALL_STATE(101)] = 4527,
  [SMALL_STATE(102)] = 4553,
  [SMALL_STATE(103)] = 4579,
  [SMALL_STATE(104)] = 4607,
  [SMALL_STATE(105)] = 4628,
  [SMALL_STATE(106)] = 4649,
  [SMALL_STATE(107)] = 4668,
  [SMALL_STATE(108)] = 4689,
  [SMALL_STATE(109)] = 4710,
  [SMALL_STATE(110)] = 4731,
  [SMALL_STATE(111)] = 4750,
  [SMALL_STATE(112)] = 4771,
  [SMALL_STATE(113)] = 4792,
  [SMALL_STATE(114)] = 4813,
  [SMALL_STATE(115)] = 4834,
  [SMALL_STATE(116)] = 4853,
  [SMALL_STATE(117)] = 4874,
  [SMALL_STATE(118)] = 4893,
  [SMALL_STATE(119)] = 4912,
  [SMALL_STATE(120)] = 4931,
  [SMALL_STATE(121)] = 4950,
  [SMALL_STATE(122)] = 4969,
  [SMALL_STATE(123)] = 4988,
  [SMALL_STATE(124)] = 5007,
  [SMALL_STATE(125)] = 5026,
  [SMALL_STATE(126)] = 5039,
  [SMALL_STATE(127)] = 5055,
  [SMALL_STATE(128)] = 5071,
  [SMALL_STATE(129)] = 5087,
  [SMALL_STATE(130)] = 5100,
  [SMALL_STATE(131)] = 5113,
  [SMALL_STATE(132)] = 5123,
  [SMALL_STATE(133)] = 5131,
  [SMALL_STATE(134)] = 5141,
  [SMALL_STATE(135)] = 5151,
  [SMALL_STATE(136)] = 5161,
  [SMALL_STATE(137)] = 5171,
  [SMALL_STATE(138)] = 5177,
  [SMALL_STATE(139)] = 5182,
  [SMALL_STATE(140)] = 5189,
  [SMALL_STATE(141)] = 5196,
  [SMALL_STATE(142)] = 5203,
  [SMALL_STATE(143)] = 5210,
  [SMALL_STATE(144)] = 5217,
  [SMALL_STATE(145)] = 5224,
  [SMALL_STATE(146)] = 5231,
  [SMALL_STATE(147)] = 5238,
  [SMALL_STATE(148)] = 5245,
  [SMALL_STATE(149)] = 5252,
  [SMALL_STATE(150)] = 5259,
  [SMALL_STATE(151)] = 5266,
  [SMALL_STATE(152)] = 5273,
  [SMALL_STATE(153)] = 5280,
  [SMALL_STATE(154)] = 5287,
  [SMALL_STATE(155)] = 5294,
  [SMALL_STATE(156)] = 5301,
  [SMALL_STATE(157)] = 5308,
  [SMALL_STATE(158)] = 5315,
  [SMALL_STATE(159)] = 5322,
  [SMALL_STATE(160)] = 5326,
  [SMALL_STATE(161)] = 5330,
  [SMALL_STATE(162)] = 5334,
  [SMALL_STATE(163)] = 5338,
  [SMALL_STATE(164)] = 5342,
  [SMALL_STATE(165)] = 5346,
  [SMALL_STATE(166)] = 5350,
  [SMALL_STATE(167)] = 5354,
  [SMALL_STATE(168)] = 5358,
  [SMALL_STATE(169)] = 5362,
  [SMALL_STATE(170)] = 5366,
  [SMALL_STATE(171)] = 5370,
  [SMALL_STATE(172)] = 5374,
  [SMALL_STATE(173)] = 5378,
  [SMALL_STATE(174)] = 5382,
  [SMALL_STATE(175)] = 5386,
  [SMALL_STATE(176)] = 5390,
  [SMALL_STATE(177)] = 5394,
  [SMALL_STATE(178)] = 5398,
  [SMALL_STATE(179)] = 5402,
  [SMALL_STATE(180)] = 5406,
  [SMALL_STATE(181)] = 5410,
  [SMALL_STATE(182)] = 5414,
  [SMALL_STATE(183)] = 5418,
  [SMALL_STATE(184)] = 5422,
  [SMALL_STATE(185)] = 5426,
  [SMALL_STATE(186)] = 5430,
  [SMALL_STATE(187)] = 5434,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(160),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(93),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(186),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(51),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(157),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(128),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(187),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(156),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(23),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(50),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(164),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(92),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(163),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(91),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(158),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(127),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(174),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(174),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(139),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(70),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 26), SHIFT_REPEAT(86),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(184),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(102),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(165),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(92),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(163),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(91),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(158),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(127),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(174),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(139),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(70),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 25), SHIFT_REPEAT(86),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(21),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(182),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(165),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 22),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 20),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 20),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 24),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 11),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 11),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 31),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 31),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 11),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 11),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 28),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 28),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 30),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 30),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 12),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 12),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 36),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 36),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(164),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(89),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(163),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(118),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(158),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(127),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(174),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(174),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(139),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(70),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 29), SHIFT_REPEAT(119),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 16),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 33),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 33),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 32),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 32),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 38),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 38),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 21),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 21),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 23),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 23),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 19),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 19),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 18),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 18),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 14),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 15),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 15),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 16),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 16),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 27),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 27),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(136),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 35),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 39),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
