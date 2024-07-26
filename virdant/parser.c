#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_pub = 3,
  anon_sym_ext = 4,
  anon_sym_mod = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_struct = 8,
  anon_sym_type = 9,
  anon_sym_COLON = 10,
  anon_sym_union = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_port = 14,
  anon_sym_mosi = 15,
  anon_sym_miso = 16,
  anon_sym_COMMA = 17,
  anon_sym_incoming = 18,
  anon_sym_outgoing = 19,
  anon_sym_node = 20,
  anon_sym_reg = 21,
  anon_sym_on = 22,
  anon_sym_of = 23,
  sym_direct = 24,
  sym_latched = 25,
  anon_sym_if = 26,
  anon_sym_else = 27,
  anon_sym_match = 28,
  anon_sym_EQ_GT = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_DOT_DOT = 33,
  sym_type_clock = 34,
  anon_sym_Word = 35,
  sym_path = 36,
  aux_sym_word_token1 = 37,
  aux_sym_word_token2 = 38,
  aux_sym_word_token3 = 39,
  sym_nat = 40,
  sym_ctor = 41,
  sym_qualident = 42,
  sym_ident = 43,
  sym_comment_line = 44,
  sym_comment_block = 45,
  sym_package = 46,
  sym_package_import = 47,
  sym_item = 48,
  sym_moddef = 49,
  sym_structdef = 50,
  sym_field = 51,
  sym_uniondef = 52,
  sym_alt = 53,
  sym_portdef = 54,
  sym_channel = 55,
  sym_channeldir = 56,
  sym_typelist = 57,
  sym__decl = 58,
  sym__component = 59,
  sym_incoming = 60,
  sym_outgoing = 61,
  sym_node = 62,
  sym_reg = 63,
  sym_connect = 64,
  sym_submodule = 65,
  sym_connect_type = 66,
  sym_expr = 67,
  sym_expr_if = 68,
  sym_expr_match = 69,
  sym_match_arm = 70,
  sym_pat = 71,
  sym_patlist = 72,
  sym_expr_call = 73,
  sym_expr_idx = 74,
  sym_expr_lit = 75,
  sym_expr_reference = 76,
  sym__word_lit = 77,
  sym__expr_list = 78,
  sym_type = 79,
  sym_type_word = 80,
  sym_word = 81,
  aux_sym_package_repeat1 = 82,
  aux_sym_package_repeat2 = 83,
  aux_sym_moddef_repeat1 = 84,
  aux_sym_structdef_repeat1 = 85,
  aux_sym_uniondef_repeat1 = 86,
  aux_sym_portdef_repeat1 = 87,
  aux_sym_typelist_repeat1 = 88,
  aux_sym_expr_if_repeat1 = 89,
  aux_sym_expr_match_repeat1 = 90,
  aux_sym_patlist_repeat1 = 91,
  aux_sym__expr_list_repeat1 = 92,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_pub] = "pub",
  [anon_sym_ext] = "ext",
  [anon_sym_mod] = "mod",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_struct] = "struct",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_union] = "union",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_port] = "port",
  [anon_sym_mosi] = "mosi",
  [anon_sym_miso] = "miso",
  [anon_sym_COMMA] = ",",
  [anon_sym_incoming] = "incoming",
  [anon_sym_outgoing] = "outgoing",
  [anon_sym_node] = "node",
  [anon_sym_reg] = "reg",
  [anon_sym_on] = "on",
  [anon_sym_of] = "of",
  [sym_direct] = "direct",
  [sym_latched] = "latched",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_DOT] = "..",
  [sym_type_clock] = "type_clock",
  [anon_sym_Word] = "Word",
  [sym_path] = "path",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_token3] = "word_token3",
  [sym_nat] = "nat",
  [sym_ctor] = "ctor",
  [sym_qualident] = "qualident",
  [sym_ident] = "ident",
  [sym_comment_line] = "comment_line",
  [sym_comment_block] = "comment_block",
  [sym_package] = "package",
  [sym_package_import] = "package_import",
  [sym_item] = "item",
  [sym_moddef] = "moddef",
  [sym_structdef] = "structdef",
  [sym_field] = "field",
  [sym_uniondef] = "uniondef",
  [sym_alt] = "alt",
  [sym_portdef] = "portdef",
  [sym_channel] = "channel",
  [sym_channeldir] = "channeldir",
  [sym_typelist] = "typelist",
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
  [sym_expr_if] = "expr_if",
  [sym_expr_match] = "expr_match",
  [sym_match_arm] = "match_arm",
  [sym_pat] = "pat",
  [sym_patlist] = "patlist",
  [sym_expr_call] = "expr_call",
  [sym_expr_idx] = "expr_idx",
  [sym_expr_lit] = "expr_lit",
  [sym_expr_reference] = "expr_reference",
  [sym__word_lit] = "_word_lit",
  [sym__expr_list] = "_expr_list",
  [sym_type] = "type",
  [sym_type_word] = "type_word",
  [sym_word] = "word",
  [aux_sym_package_repeat1] = "package_repeat1",
  [aux_sym_package_repeat2] = "package_repeat2",
  [aux_sym_moddef_repeat1] = "moddef_repeat1",
  [aux_sym_structdef_repeat1] = "structdef_repeat1",
  [aux_sym_uniondef_repeat1] = "uniondef_repeat1",
  [aux_sym_portdef_repeat1] = "portdef_repeat1",
  [aux_sym_typelist_repeat1] = "typelist_repeat1",
  [aux_sym_expr_if_repeat1] = "expr_if_repeat1",
  [aux_sym_expr_match_repeat1] = "expr_match_repeat1",
  [aux_sym_patlist_repeat1] = "patlist_repeat1",
  [aux_sym__expr_list_repeat1] = "_expr_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_ext] = anon_sym_ext,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_mosi] = anon_sym_mosi,
  [anon_sym_miso] = anon_sym_miso,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_incoming] = anon_sym_incoming,
  [anon_sym_outgoing] = anon_sym_outgoing,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_of] = anon_sym_of,
  [sym_direct] = sym_direct,
  [sym_latched] = sym_latched,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_type_clock] = sym_type_clock,
  [anon_sym_Word] = anon_sym_Word,
  [sym_path] = sym_path,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_token2] = aux_sym_word_token2,
  [aux_sym_word_token3] = aux_sym_word_token3,
  [sym_nat] = sym_nat,
  [sym_ctor] = sym_ctor,
  [sym_qualident] = sym_qualident,
  [sym_ident] = sym_ident,
  [sym_comment_line] = sym_comment_line,
  [sym_comment_block] = sym_comment_block,
  [sym_package] = sym_package,
  [sym_package_import] = sym_package_import,
  [sym_item] = sym_item,
  [sym_moddef] = sym_moddef,
  [sym_structdef] = sym_structdef,
  [sym_field] = sym_field,
  [sym_uniondef] = sym_uniondef,
  [sym_alt] = sym_alt,
  [sym_portdef] = sym_portdef,
  [sym_channel] = sym_channel,
  [sym_channeldir] = sym_channeldir,
  [sym_typelist] = sym_typelist,
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
  [sym_expr_if] = sym_expr_if,
  [sym_expr_match] = sym_expr_match,
  [sym_match_arm] = sym_match_arm,
  [sym_pat] = sym_pat,
  [sym_patlist] = sym_patlist,
  [sym_expr_call] = sym_expr_call,
  [sym_expr_idx] = sym_expr_idx,
  [sym_expr_lit] = sym_expr_lit,
  [sym_expr_reference] = sym_expr_reference,
  [sym__word_lit] = sym__word_lit,
  [sym__expr_list] = sym__expr_list,
  [sym_type] = sym_type,
  [sym_type_word] = sym_type_word,
  [sym_word] = sym_word,
  [aux_sym_package_repeat1] = aux_sym_package_repeat1,
  [aux_sym_package_repeat2] = aux_sym_package_repeat2,
  [aux_sym_moddef_repeat1] = aux_sym_moddef_repeat1,
  [aux_sym_structdef_repeat1] = aux_sym_structdef_repeat1,
  [aux_sym_uniondef_repeat1] = aux_sym_uniondef_repeat1,
  [aux_sym_portdef_repeat1] = aux_sym_portdef_repeat1,
  [aux_sym_typelist_repeat1] = aux_sym_typelist_repeat1,
  [aux_sym_expr_if_repeat1] = aux_sym_expr_if_repeat1,
  [aux_sym_expr_match_repeat1] = aux_sym_expr_match_repeat1,
  [aux_sym_patlist_repeat1] = aux_sym_patlist_repeat1,
  [aux_sym__expr_list_repeat1] = aux_sym__expr_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext] = {
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
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
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mosi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miso] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incoming] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [anon_sym_DOT_DOT] = {
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
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [sym_ctor] = {
    .visible = true,
    .named = true,
  },
  [sym_qualident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
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
  [sym_package_import] = {
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
  [sym_structdef] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_uniondef] = {
    .visible = true,
    .named = true,
  },
  [sym_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_portdef] = {
    .visible = true,
    .named = true,
  },
  [sym_channel] = {
    .visible = true,
    .named = true,
  },
  [sym_channeldir] = {
    .visible = true,
    .named = true,
  },
  [sym_typelist] = {
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
  [sym_expr_if] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_match] = {
    .visible = true,
    .named = true,
  },
  [sym_match_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_pat] = {
    .visible = true,
    .named = true,
  },
  [sym_patlist] = {
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
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moddef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structdef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uniondef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_portdef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typelist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_patlist_repeat1] = {
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 3},
  [3] =
    {field_connect_type, 1},
    {field_expr, 2},
    {field_target, 0},
  [6] =
    {field_module, 3},
    {field_name, 1},
  [8] =
    {field_name, 1},
    {field_type, 3},
  [10] =
    {field_name, 1},
    {field_on, 5},
    {field_type, 3},
  [13] =
    {field_args, 2},
  [14] =
    {field_method, 2},
    {field_subject, 0},
  [16] =
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
  [98] = 98,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
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
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
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
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(161);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(49);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(161);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == '[') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '}') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'C') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(179);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(125);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '}') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 80:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 81:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 82:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mosi);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_miso);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_type_clock);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Word);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == 'w') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'w') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ctor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_qualident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_ext] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_mosi] = ACTIONS(1),
    [anon_sym_miso] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_incoming] = ACTIONS(1),
    [anon_sym_outgoing] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_direct] = ACTIONS(1),
    [sym_latched] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_type_clock] = ACTIONS(1),
    [anon_sym_Word] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_token3] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [sym_ctor] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
  [1] = {
    [sym_package] = STATE(174),
    [sym_package_import] = STATE(17),
    [sym_item] = STATE(24),
    [sym_moddef] = STATE(56),
    [sym_structdef] = STATE(56),
    [sym_uniondef] = STATE(56),
    [sym_portdef] = STATE(56),
    [aux_sym_package_repeat1] = STATE(17),
    [aux_sym_package_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_ext] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(13),
    [anon_sym_struct] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(17),
    [anon_sym_port] = ACTIONS(19),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(78), 1,
      sym_expr,
    STATE(139), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [51] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_expr,
    STATE(160), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [102] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [150] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [198] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(97), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [243] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(103), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [288] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(111), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [333] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(96), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [378] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(115), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [423] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(88), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [468] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(116), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [513] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(90), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [558] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(102), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [603] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_match,
    ACTIONS(29), 1,
      sym_path,
    ACTIONS(33), 1,
      aux_sym_word_token3,
    ACTIONS(35), 1,
      sym_nat,
    ACTIONS(37), 1,
      sym_ctor,
    STATE(100), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(46), 2,
      sym__word_lit,
      sym_word,
    STATE(35), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [648] = 10,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(56), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(62), 1,
      sym_path,
    STATE(16), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [687] = 12,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_port,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(26), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(27), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    STATE(56), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [730] = 10,
    ACTIONS(67), 1,
      anon_sym_mod,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(73), 1,
      anon_sym_outgoing,
    ACTIONS(75), 1,
      anon_sym_node,
    ACTIONS(77), 1,
      anon_sym_reg,
    ACTIONS(79), 1,
      sym_path,
    STATE(20), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [769] = 10,
    ACTIONS(67), 1,
      anon_sym_mod,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(73), 1,
      anon_sym_outgoing,
    ACTIONS(75), 1,
      anon_sym_node,
    ACTIONS(77), 1,
      anon_sym_reg,
    ACTIONS(79), 1,
      sym_path,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [808] = 10,
    ACTIONS(67), 1,
      anon_sym_mod,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(73), 1,
      anon_sym_outgoing,
    ACTIONS(75), 1,
      anon_sym_node,
    ACTIONS(77), 1,
      anon_sym_reg,
    ACTIONS(79), 1,
      sym_path,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [847] = 10,
    ACTIONS(67), 1,
      anon_sym_mod,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(73), 1,
      anon_sym_outgoing,
    ACTIONS(75), 1,
      anon_sym_node,
    ACTIONS(77), 1,
      anon_sym_reg,
    ACTIONS(79), 1,
      sym_path,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [886] = 10,
    ACTIONS(67), 1,
      anon_sym_mod,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(73), 1,
      anon_sym_outgoing,
    ACTIONS(75), 1,
      anon_sym_node,
    ACTIONS(77), 1,
      anon_sym_reg,
    ACTIONS(79), 1,
      sym_path,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [925] = 10,
    ACTIONS(67), 1,
      anon_sym_mod,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(73), 1,
      anon_sym_outgoing,
    ACTIONS(75), 1,
      anon_sym_node,
    ACTIONS(77), 1,
      anon_sym_reg,
    ACTIONS(79), 1,
      sym_path,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(133), 8,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_connect,
      sym_submodule,
  [964] = 10,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_port,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(56), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1000] = 10,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_pub,
    ACTIONS(96), 1,
      anon_sym_ext,
    ACTIONS(99), 1,
      anon_sym_mod,
    ACTIONS(102), 1,
      anon_sym_struct,
    ACTIONS(105), 1,
      anon_sym_union,
    ACTIONS(108), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(56), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1036] = 10,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_port,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(56), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1072] = 4,
    ACTIONS(115), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(27), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1093] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(118), 4,
      anon_sym_LPAREN,
      aux_sym_word_token1,
      aux_sym_word_token2,
      sym_ctor,
    ACTIONS(120), 5,
      anon_sym_if,
      anon_sym_match,
      sym_path,
      aux_sym_word_token3,
      sym_nat,
  [1111] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(122), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1126] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(124), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1141] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(126), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1156] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(128), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1171] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(130), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1186] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(132), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1201] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(134), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1216] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(136), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1231] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(138), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1246] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(140), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1261] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(142), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1276] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(144), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1291] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(146), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1306] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(148), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1321] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(150), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1336] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1351] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(154), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1366] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(156), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1381] = 6,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      sym_ctor,
    STATE(135), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
    STATE(62), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1403] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1417] = 6,
    ACTIONS(162), 1,
      sym_ctor,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
    STATE(55), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1439] = 7,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(110), 1,
      sym_type,
    STATE(162), 1,
      sym_typelist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1463] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1477] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1491] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1505] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1519] = 6,
    ACTIONS(162), 1,
      sym_ctor,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
    STATE(60), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1541] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1555] = 3,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(186), 6,
      anon_sym_mod,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_node,
      anon_sym_reg,
      sym_path,
  [1571] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1585] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1599] = 6,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      sym_ctor,
    STATE(135), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(194), 2,
      anon_sym_else,
      sym_ident,
    STATE(60), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1621] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1635] = 6,
    ACTIONS(162), 1,
      sym_ctor,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
    STATE(60), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1657] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1671] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1685] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1699] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1713] = 6,
    ACTIONS(172), 1,
      anon_sym_Word,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_type_word,
    STATE(118), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1734] = 5,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(216), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(68), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1753] = 6,
    ACTIONS(172), 1,
      anon_sym_Word,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_type_word,
    STATE(118), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1774] = 5,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(223), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(71), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1793] = 5,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(223), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(68), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1812] = 6,
    ACTIONS(162), 1,
      sym_ctor,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_pat,
    STATE(168), 1,
      sym_patlist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
  [1833] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(229), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_on,
  [1845] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(118), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1863] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(231), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_on,
  [1875] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(158), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1893] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(165), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1911] = 6,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [1931] = 5,
    ACTIONS(162), 1,
      sym_ctor,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
  [1949] = 5,
    ACTIONS(162), 1,
      sym_ctor,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
  [1967] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(177), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [1985] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(179), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [2003] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(137), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [2021] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(181), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [2039] = 5,
    ACTIONS(172), 1,
      anon_sym_Word,
    STATE(75), 1,
      sym_type_word,
    STATE(180), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(170), 2,
      sym_type_clock,
      sym_qualident,
  [2057] = 4,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(87), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2072] = 4,
    ACTIONS(247), 1,
      sym_ident,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(92), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2087] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(251), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2102] = 4,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(91), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2117] = 5,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2134] = 4,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(91), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2149] = 4,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(92), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2164] = 4,
    ACTIONS(162), 1,
      sym_ctor,
    STATE(119), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 2,
      anon_sym_else,
      sym_ident,
  [2179] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(269), 2,
      anon_sym_RBRACE,
      sym_ctor,
    ACTIONS(271), 2,
      anon_sym_else,
      sym_ident,
  [2192] = 4,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(89), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2207] = 5,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2224] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2238] = 3,
    STATE(8), 1,
      sym_connect_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(281), 2,
      sym_direct,
      sym_latched,
  [2250] = 4,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2264] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2278] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(287), 3,
      anon_sym_RBRACE,
      anon_sym_mosi,
      anon_sym_miso,
  [2288] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2302] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2316] = 4,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2330] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(297), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2340] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(299), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2350] = 4,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2364] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(306), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2374] = 4,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2388] = 4,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2402] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2416] = 4,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2430] = 4,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2444] = 4,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2458] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2472] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2486] = 3,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2497] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(319), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2506] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(301), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2515] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2524] = 3,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2535] = 3,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2546] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(342), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2555] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(344), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2564] = 3,
    ACTIONS(336), 1,
      anon_sym_if,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2575] = 3,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2586] = 3,
    ACTIONS(351), 1,
      anon_sym_ext,
    ACTIONS(353), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2597] = 2,
    ACTIONS(355), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2605] = 2,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2613] = 2,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2621] = 2,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2629] = 2,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2637] = 2,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2645] = 2,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2653] = 2,
    ACTIONS(369), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2661] = 2,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2669] = 2,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2677] = 2,
    ACTIONS(375), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2685] = 2,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2693] = 2,
    ACTIONS(379), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2701] = 2,
    ACTIONS(381), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2709] = 2,
    ACTIONS(383), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2717] = 2,
    ACTIONS(385), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2725] = 2,
    ACTIONS(387), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2733] = 2,
    ACTIONS(389), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2741] = 2,
    ACTIONS(391), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2749] = 2,
    ACTIONS(393), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2757] = 2,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2765] = 2,
    ACTIONS(397), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2773] = 2,
    ACTIONS(399), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2781] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2789] = 2,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2797] = 2,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2805] = 2,
    ACTIONS(407), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2813] = 2,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2821] = 2,
    ACTIONS(411), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2829] = 2,
    ACTIONS(413), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2837] = 2,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2845] = 2,
    ACTIONS(417), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2853] = 2,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2861] = 2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2869] = 2,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2877] = 2,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2885] = 2,
    ACTIONS(427), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2893] = 2,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2901] = 2,
    ACTIONS(431), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2909] = 2,
    ACTIONS(433), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2917] = 2,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2925] = 2,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2933] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2941] = 2,
    ACTIONS(441), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2949] = 2,
    ACTIONS(443), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2957] = 2,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2965] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2973] = 2,
    ACTIONS(449), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2981] = 2,
    ACTIONS(451), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2989] = 2,
    ACTIONS(453), 1,
      anon_sym_on,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2997] = 2,
    ACTIONS(455), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3005] = 2,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3013] = 2,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3021] = 2,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3029] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3037] = 2,
    ACTIONS(465), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3045] = 2,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3053] = 2,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3061] = 2,
    ACTIONS(471), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3069] = 2,
    ACTIONS(336), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3077] = 2,
    ACTIONS(473), 1,
      sym_qualident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3085] = 2,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3093] = 2,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3101] = 2,
    ACTIONS(353), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3109] = 2,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3117] = 2,
    ACTIONS(481), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3125] = 2,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3133] = 2,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 198,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 513,
  [SMALL_STATE(14)] = 558,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 648,
  [SMALL_STATE(17)] = 687,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 769,
  [SMALL_STATE(20)] = 808,
  [SMALL_STATE(21)] = 847,
  [SMALL_STATE(22)] = 886,
  [SMALL_STATE(23)] = 925,
  [SMALL_STATE(24)] = 964,
  [SMALL_STATE(25)] = 1000,
  [SMALL_STATE(26)] = 1036,
  [SMALL_STATE(27)] = 1072,
  [SMALL_STATE(28)] = 1093,
  [SMALL_STATE(29)] = 1111,
  [SMALL_STATE(30)] = 1126,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1156,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1186,
  [SMALL_STATE(35)] = 1201,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1231,
  [SMALL_STATE(38)] = 1246,
  [SMALL_STATE(39)] = 1261,
  [SMALL_STATE(40)] = 1276,
  [SMALL_STATE(41)] = 1291,
  [SMALL_STATE(42)] = 1306,
  [SMALL_STATE(43)] = 1321,
  [SMALL_STATE(44)] = 1336,
  [SMALL_STATE(45)] = 1351,
  [SMALL_STATE(46)] = 1366,
  [SMALL_STATE(47)] = 1381,
  [SMALL_STATE(48)] = 1403,
  [SMALL_STATE(49)] = 1417,
  [SMALL_STATE(50)] = 1439,
  [SMALL_STATE(51)] = 1463,
  [SMALL_STATE(52)] = 1477,
  [SMALL_STATE(53)] = 1491,
  [SMALL_STATE(54)] = 1505,
  [SMALL_STATE(55)] = 1519,
  [SMALL_STATE(56)] = 1541,
  [SMALL_STATE(57)] = 1555,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1585,
  [SMALL_STATE(60)] = 1599,
  [SMALL_STATE(61)] = 1621,
  [SMALL_STATE(62)] = 1635,
  [SMALL_STATE(63)] = 1657,
  [SMALL_STATE(64)] = 1671,
  [SMALL_STATE(65)] = 1685,
  [SMALL_STATE(66)] = 1699,
  [SMALL_STATE(67)] = 1713,
  [SMALL_STATE(68)] = 1734,
  [SMALL_STATE(69)] = 1753,
  [SMALL_STATE(70)] = 1774,
  [SMALL_STATE(71)] = 1793,
  [SMALL_STATE(72)] = 1812,
  [SMALL_STATE(73)] = 1833,
  [SMALL_STATE(74)] = 1845,
  [SMALL_STATE(75)] = 1863,
  [SMALL_STATE(76)] = 1875,
  [SMALL_STATE(77)] = 1893,
  [SMALL_STATE(78)] = 1911,
  [SMALL_STATE(79)] = 1931,
  [SMALL_STATE(80)] = 1949,
  [SMALL_STATE(81)] = 1967,
  [SMALL_STATE(82)] = 1985,
  [SMALL_STATE(83)] = 2003,
  [SMALL_STATE(84)] = 2021,
  [SMALL_STATE(85)] = 2039,
  [SMALL_STATE(86)] = 2057,
  [SMALL_STATE(87)] = 2072,
  [SMALL_STATE(88)] = 2087,
  [SMALL_STATE(89)] = 2102,
  [SMALL_STATE(90)] = 2117,
  [SMALL_STATE(91)] = 2134,
  [SMALL_STATE(92)] = 2149,
  [SMALL_STATE(93)] = 2164,
  [SMALL_STATE(94)] = 2179,
  [SMALL_STATE(95)] = 2192,
  [SMALL_STATE(96)] = 2207,
  [SMALL_STATE(97)] = 2224,
  [SMALL_STATE(98)] = 2238,
  [SMALL_STATE(99)] = 2250,
  [SMALL_STATE(100)] = 2264,
  [SMALL_STATE(101)] = 2278,
  [SMALL_STATE(102)] = 2288,
  [SMALL_STATE(103)] = 2302,
  [SMALL_STATE(104)] = 2316,
  [SMALL_STATE(105)] = 2330,
  [SMALL_STATE(106)] = 2340,
  [SMALL_STATE(107)] = 2350,
  [SMALL_STATE(108)] = 2364,
  [SMALL_STATE(109)] = 2374,
  [SMALL_STATE(110)] = 2388,
  [SMALL_STATE(111)] = 2402,
  [SMALL_STATE(112)] = 2416,
  [SMALL_STATE(113)] = 2430,
  [SMALL_STATE(114)] = 2444,
  [SMALL_STATE(115)] = 2458,
  [SMALL_STATE(116)] = 2472,
  [SMALL_STATE(117)] = 2486,
  [SMALL_STATE(118)] = 2497,
  [SMALL_STATE(119)] = 2506,
  [SMALL_STATE(120)] = 2515,
  [SMALL_STATE(121)] = 2524,
  [SMALL_STATE(122)] = 2535,
  [SMALL_STATE(123)] = 2546,
  [SMALL_STATE(124)] = 2555,
  [SMALL_STATE(125)] = 2564,
  [SMALL_STATE(126)] = 2575,
  [SMALL_STATE(127)] = 2586,
  [SMALL_STATE(128)] = 2597,
  [SMALL_STATE(129)] = 2605,
  [SMALL_STATE(130)] = 2613,
  [SMALL_STATE(131)] = 2621,
  [SMALL_STATE(132)] = 2629,
  [SMALL_STATE(133)] = 2637,
  [SMALL_STATE(134)] = 2645,
  [SMALL_STATE(135)] = 2653,
  [SMALL_STATE(136)] = 2661,
  [SMALL_STATE(137)] = 2669,
  [SMALL_STATE(138)] = 2677,
  [SMALL_STATE(139)] = 2685,
  [SMALL_STATE(140)] = 2693,
  [SMALL_STATE(141)] = 2701,
  [SMALL_STATE(142)] = 2709,
  [SMALL_STATE(143)] = 2717,
  [SMALL_STATE(144)] = 2725,
  [SMALL_STATE(145)] = 2733,
  [SMALL_STATE(146)] = 2741,
  [SMALL_STATE(147)] = 2749,
  [SMALL_STATE(148)] = 2757,
  [SMALL_STATE(149)] = 2765,
  [SMALL_STATE(150)] = 2773,
  [SMALL_STATE(151)] = 2781,
  [SMALL_STATE(152)] = 2789,
  [SMALL_STATE(153)] = 2797,
  [SMALL_STATE(154)] = 2805,
  [SMALL_STATE(155)] = 2813,
  [SMALL_STATE(156)] = 2821,
  [SMALL_STATE(157)] = 2829,
  [SMALL_STATE(158)] = 2837,
  [SMALL_STATE(159)] = 2845,
  [SMALL_STATE(160)] = 2853,
  [SMALL_STATE(161)] = 2861,
  [SMALL_STATE(162)] = 2869,
  [SMALL_STATE(163)] = 2877,
  [SMALL_STATE(164)] = 2885,
  [SMALL_STATE(165)] = 2893,
  [SMALL_STATE(166)] = 2901,
  [SMALL_STATE(167)] = 2909,
  [SMALL_STATE(168)] = 2917,
  [SMALL_STATE(169)] = 2925,
  [SMALL_STATE(170)] = 2933,
  [SMALL_STATE(171)] = 2941,
  [SMALL_STATE(172)] = 2949,
  [SMALL_STATE(173)] = 2957,
  [SMALL_STATE(174)] = 2965,
  [SMALL_STATE(175)] = 2973,
  [SMALL_STATE(176)] = 2981,
  [SMALL_STATE(177)] = 2989,
  [SMALL_STATE(178)] = 2997,
  [SMALL_STATE(179)] = 3005,
  [SMALL_STATE(180)] = 3013,
  [SMALL_STATE(181)] = 3021,
  [SMALL_STATE(182)] = 3029,
  [SMALL_STATE(183)] = 3037,
  [SMALL_STATE(184)] = 3045,
  [SMALL_STATE(185)] = 3053,
  [SMALL_STATE(186)] = 3061,
  [SMALL_STATE(187)] = 3069,
  [SMALL_STATE(188)] = 3077,
  [SMALL_STATE(189)] = 3085,
  [SMALL_STATE(190)] = 3093,
  [SMALL_STATE(191)] = 3101,
  [SMALL_STATE(192)] = 3109,
  [SMALL_STATE(193)] = 3117,
  [SMALL_STATE(194)] = 3125,
  [SMALL_STATE(195)] = 3133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(146),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(142),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(141),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(140),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(138),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(127),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(191),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(186),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(183),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(176),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(175),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2), SHIFT_REPEAT(128),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 4, .production_id = 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, .production_id = 9),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 10),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, .production_id = 10),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 6, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 6, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portdef, 4, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_match_repeat1, 2), SHIFT_REPEAT(106),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2), SHIFT_REPEAT(134),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 5, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 5, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portdef, 5, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 7, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_portdef_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_portdef_repeat1, 2), SHIFT_REPEAT(144),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2), SHIFT_REPEAT(193),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2), SHIFT_REPEAT(190),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_arm, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2), SHIFT_REPEAT(93),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 4),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2), SHIFT_REPEAT(11),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, .production_id = 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2), SHIFT_REPEAT(74),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 2), SHIFT_REPEAT(178),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 6, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channeldir, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, .production_id = 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 4, .production_id = 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
