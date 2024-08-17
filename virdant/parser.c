#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_pub = 3,
  anon_sym_ext = 4,
  anon_sym_mod = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_builtin = 8,
  anon_sym_type = 9,
  anon_sym_struct = 10,
  anon_sym_COLON = 11,
  anon_sym_union = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_socket = 15,
  anon_sym_mosi = 16,
  anon_sym_miso = 17,
  anon_sym_COMMA = 18,
  anon_sym_implicit = 19,
  anon_sym_incoming = 20,
  anon_sym_outgoing = 21,
  anon_sym_node = 22,
  anon_sym_reg = 23,
  anon_sym_on = 24,
  anon_sym_of = 25,
  anon_sym_master = 26,
  anon_sym_slave = 27,
  sym_direct = 28,
  sym_latched = 29,
  anon_sym_if = 30,
  anon_sym_else = 31,
  anon_sym_match = 32,
  anon_sym_EQ_GT = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_DOT_DOT = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  sym_type_clock = 40,
  anon_sym_Word = 41,
  sym_type_bit = 42,
  sym_path = 43,
  aux_sym_word_token1 = 44,
  aux_sym_word_token2 = 45,
  aux_sym_word_token3 = 46,
  sym_nat = 47,
  sym_ctor = 48,
  sym_qualident = 49,
  sym_ident = 50,
  sym_comment_line = 51,
  sym_comment_block = 52,
  sym_package = 53,
  sym_package_import = 54,
  sym_item = 55,
  sym_moddef = 56,
  sym_builtindef = 57,
  sym_structdef = 58,
  sym_field = 59,
  sym_uniondef = 60,
  sym_alt = 61,
  sym_socketdef = 62,
  sym_channel = 63,
  sym_channeldir = 64,
  sym_typelist = 65,
  sym__decl = 66,
  sym__component = 67,
  sym_implicit = 68,
  sym_incoming = 69,
  sym_outgoing = 70,
  sym_node = 71,
  sym_reg = 72,
  sym_socket = 73,
  sym_socket_role = 74,
  sym_connect = 75,
  sym_submodule = 76,
  sym_connect_type = 77,
  sym_expr = 78,
  sym_expr_if = 79,
  sym_expr_match = 80,
  sym_match_arm = 81,
  sym_pat = 82,
  sym_patlist = 83,
  sym_expr_call = 84,
  sym_expr_idx = 85,
  sym_expr_lit = 86,
  sym_expr_reference = 87,
  sym_word_lit = 88,
  sym_bool = 89,
  sym__expr_list = 90,
  sym_type = 91,
  sym_type_word = 92,
  sym_word = 93,
  aux_sym_package_repeat1 = 94,
  aux_sym_package_repeat2 = 95,
  aux_sym_moddef_repeat1 = 96,
  aux_sym_structdef_repeat1 = 97,
  aux_sym_uniondef_repeat1 = 98,
  aux_sym_socketdef_repeat1 = 99,
  aux_sym_typelist_repeat1 = 100,
  aux_sym_expr_if_repeat1 = 101,
  aux_sym_expr_match_repeat1 = 102,
  aux_sym_patlist_repeat1 = 103,
  aux_sym__expr_list_repeat1 = 104,
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
  [anon_sym_builtin] = "builtin",
  [anon_sym_type] = "type",
  [anon_sym_struct] = "struct",
  [anon_sym_COLON] = ":",
  [anon_sym_union] = "union",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_socket] = "socket",
  [anon_sym_mosi] = "mosi",
  [anon_sym_miso] = "miso",
  [anon_sym_COMMA] = ",",
  [anon_sym_implicit] = "implicit",
  [anon_sym_incoming] = "incoming",
  [anon_sym_outgoing] = "outgoing",
  [anon_sym_node] = "node",
  [anon_sym_reg] = "reg",
  [anon_sym_on] = "on",
  [anon_sym_of] = "of",
  [anon_sym_master] = "master",
  [anon_sym_slave] = "slave",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_type_clock] = "type_clock",
  [anon_sym_Word] = "Word",
  [sym_type_bit] = "type_bit",
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
  [sym_builtindef] = "builtindef",
  [sym_structdef] = "structdef",
  [sym_field] = "field",
  [sym_uniondef] = "uniondef",
  [sym_alt] = "alt",
  [sym_socketdef] = "socketdef",
  [sym_channel] = "channel",
  [sym_channeldir] = "channeldir",
  [sym_typelist] = "typelist",
  [sym__decl] = "_decl",
  [sym__component] = "_component",
  [sym_implicit] = "implicit",
  [sym_incoming] = "incoming",
  [sym_outgoing] = "outgoing",
  [sym_node] = "node",
  [sym_reg] = "reg",
  [sym_socket] = "socket",
  [sym_socket_role] = "socket_role",
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
  [sym_word_lit] = "word_lit",
  [sym_bool] = "bool",
  [sym__expr_list] = "_expr_list",
  [sym_type] = "type",
  [sym_type_word] = "type_word",
  [sym_word] = "word",
  [aux_sym_package_repeat1] = "package_repeat1",
  [aux_sym_package_repeat2] = "package_repeat2",
  [aux_sym_moddef_repeat1] = "moddef_repeat1",
  [aux_sym_structdef_repeat1] = "structdef_repeat1",
  [aux_sym_uniondef_repeat1] = "uniondef_repeat1",
  [aux_sym_socketdef_repeat1] = "socketdef_repeat1",
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
  [anon_sym_builtin] = anon_sym_builtin,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_socket] = anon_sym_socket,
  [anon_sym_mosi] = anon_sym_mosi,
  [anon_sym_miso] = anon_sym_miso,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_incoming] = anon_sym_incoming,
  [anon_sym_outgoing] = anon_sym_outgoing,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_master] = anon_sym_master,
  [anon_sym_slave] = anon_sym_slave,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_type_clock] = sym_type_clock,
  [anon_sym_Word] = anon_sym_Word,
  [sym_type_bit] = sym_type_bit,
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
  [sym_builtindef] = sym_builtindef,
  [sym_structdef] = sym_structdef,
  [sym_field] = sym_field,
  [sym_uniondef] = sym_uniondef,
  [sym_alt] = sym_alt,
  [sym_socketdef] = sym_socketdef,
  [sym_channel] = sym_channel,
  [sym_channeldir] = sym_channeldir,
  [sym_typelist] = sym_typelist,
  [sym__decl] = sym__decl,
  [sym__component] = sym__component,
  [sym_implicit] = sym_implicit,
  [sym_incoming] = sym_incoming,
  [sym_outgoing] = sym_outgoing,
  [sym_node] = sym_node,
  [sym_reg] = sym_reg,
  [sym_socket] = sym_socket,
  [sym_socket_role] = sym_socket_role,
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
  [sym_word_lit] = sym_word_lit,
  [sym_bool] = sym_bool,
  [sym__expr_list] = sym__expr_list,
  [sym_type] = sym_type,
  [sym_type_word] = sym_type_word,
  [sym_word] = sym_word,
  [aux_sym_package_repeat1] = aux_sym_package_repeat1,
  [aux_sym_package_repeat2] = aux_sym_package_repeat2,
  [aux_sym_moddef_repeat1] = aux_sym_moddef_repeat1,
  [aux_sym_structdef_repeat1] = aux_sym_structdef_repeat1,
  [aux_sym_uniondef_repeat1] = aux_sym_uniondef_repeat1,
  [aux_sym_socketdef_repeat1] = aux_sym_socketdef_repeat1,
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
  [anon_sym_builtin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
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
  [anon_sym_socket] = {
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
  [anon_sym_implicit] = {
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
  [anon_sym_master] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slave] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_type_bit] = {
    .visible = true,
    .named = true,
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
  [sym_builtindef] = {
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
  [sym_socketdef] = {
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
  [sym_implicit] = {
    .visible = true,
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
  [sym_socket] = {
    .visible = true,
    .named = true,
  },
  [sym_socket_role] = {
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
  [sym_word_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
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
  [aux_sym_socketdef_repeat1] = {
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
  field_role = 8,
  field_socketdef = 9,
  field_subject = 10,
  field_target = 11,
  field_type = 12,
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
  [field_role] = "role",
  [field_socketdef] = "socketdef",
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
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
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
    {field_on, 4},
    {field_type, 3},
  [13] =
    {field_name, 2},
    {field_role, 0},
    {field_socketdef, 4},
  [16] =
    {field_args, 2},
  [17] =
    {field_method, 2},
    {field_subject, 0},
  [19] =
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
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '(', 124,
        ')', 125,
        ',', 129,
        '-', 15,
        '.', 8,
        '/', 5,
        '0', 223,
        ':', 122,
        ';', 111,
        '<', 14,
        '=', 16,
        '@', 106,
        'B', 46,
        'C', 59,
        'W', 69,
        '[', 157,
        ']', 158,
        'b', 97,
        'e', 57,
        'f', 19,
        'i', 39,
        'm', 17,
        'n', 70,
        'o', 40,
        'p', 96,
        'r', 30,
        's', 58,
        't', 80,
        'u', 66,
        '{', 116,
        '}', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '(', 124,
        ')', 125,
        ',', 129,
        '-', 15,
        '/', 5,
        '0', 223,
        ':', 121,
        ';', 111,
        '@', 106,
        '[', 157,
        'f', 170,
        'i', 185,
        'm', 171,
        't', 207,
        '{', 116,
        '}', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '{') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '}') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'W') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(243);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(159);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '/', 5,
        ':', 13,
        '<', 14,
        'i', 198,
        'm', 173,
        'n', 204,
        'o', 216,
        'r', 181,
        's', 197,
        '}', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(164);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 100:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 106:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 107:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 108:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_builtin);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_socket);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_mosi);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_miso);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_master);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_master);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_slave);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_slave);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_type_clock);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Word);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_type_bit);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_type_bit);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(103);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == 'w') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'w') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ctor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_qualident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 244:
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 9},
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
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
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
    [anon_sym_builtin] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_socket] = ACTIONS(1),
    [anon_sym_mosi] = ACTIONS(1),
    [anon_sym_miso] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_incoming] = ACTIONS(1),
    [anon_sym_outgoing] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_master] = ACTIONS(1),
    [anon_sym_slave] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_type_clock] = ACTIONS(1),
    [anon_sym_Word] = ACTIONS(1),
    [sym_type_bit] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_token3] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [sym_ctor] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
  [1] = {
    [sym_package] = STATE(190),
    [sym_package_import] = STATE(23),
    [sym_item] = STATE(24),
    [sym_moddef] = STATE(63),
    [sym_builtindef] = STATE(63),
    [sym_structdef] = STATE(63),
    [sym_uniondef] = STATE(63),
    [sym_socketdef] = STATE(63),
    [aux_sym_package_repeat1] = STATE(23),
    [aux_sym_package_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_ext] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(13),
    [anon_sym_builtin] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_socket] = ACTIONS(21),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(87), 1,
      sym_expr,
    STATE(177), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [58] = 16,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_word,
    STATE(87), 1,
      sym_expr,
    STATE(140), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [116] = 13,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_implicit,
    ACTIONS(51), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(55), 1,
      anon_sym_node,
    ACTIONS(57), 1,
      anon_sym_reg,
    ACTIONS(61), 1,
      sym_path,
    STATE(11), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(59), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [167] = 13,
    ACTIONS(63), 1,
      anon_sym_mod,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_implicit,
    ACTIONS(71), 1,
      anon_sym_incoming,
    ACTIONS(74), 1,
      anon_sym_outgoing,
    ACTIONS(77), 1,
      anon_sym_node,
    ACTIONS(80), 1,
      anon_sym_reg,
    ACTIONS(86), 1,
      sym_path,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(83), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [218] = 13,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_implicit,
    ACTIONS(51), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(55), 1,
      anon_sym_node,
    ACTIONS(57), 1,
      anon_sym_reg,
    ACTIONS(61), 1,
      sym_path,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(59), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [269] = 15,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_word,
    STATE(100), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [324] = 13,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_implicit,
    ACTIONS(51), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(55), 1,
      anon_sym_node,
    ACTIONS(57), 1,
      anon_sym_reg,
    ACTIONS(61), 1,
      sym_path,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(59), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [375] = 15,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_word,
    STATE(100), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [430] = 13,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_implicit,
    ACTIONS(51), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(55), 1,
      anon_sym_node,
    ACTIONS(57), 1,
      anon_sym_reg,
    ACTIONS(61), 1,
      sym_path,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(59), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [481] = 13,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_implicit,
    ACTIONS(51), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(55), 1,
      anon_sym_node,
    ACTIONS(57), 1,
      anon_sym_reg,
    ACTIONS(61), 1,
      sym_path,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(59), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [532] = 13,
    ACTIONS(45), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_implicit,
    ACTIONS(51), 1,
      anon_sym_incoming,
    ACTIONS(53), 1,
      anon_sym_outgoing,
    ACTIONS(55), 1,
      anon_sym_node,
    ACTIONS(57), 1,
      anon_sym_reg,
    ACTIONS(61), 1,
      sym_path,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_moddef_repeat1,
    STATE(212), 1,
      sym_socket_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(59), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(143), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_socket,
      sym_connect,
      sym_submodule,
  [583] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(108), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [635] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(102), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [687] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(100), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [739] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(96), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [791] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(104), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [843] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(119), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [895] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(93), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [947] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(117), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [999] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(109), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [1051] = 14,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(33), 1,
      sym_path,
    ACTIONS(37), 1,
      aux_sym_word_token3,
    ACTIONS(39), 1,
      sym_nat,
    ACTIONS(41), 1,
      sym_ctor,
    STATE(58), 1,
      sym_word,
    STATE(105), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(32), 2,
      sym_word_lit,
      sym_bool,
    STATE(61), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [1103] = 13,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_builtin,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_union,
    ACTIONS(21), 1,
      anon_sym_socket,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(28), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    STATE(63), 5,
      sym_moddef,
      sym_builtindef,
      sym_structdef,
      sym_uniondef,
      sym_socketdef,
  [1150] = 11,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_builtin,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_union,
    ACTIONS(21), 1,
      anon_sym_socket,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(26), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(63), 5,
      sym_moddef,
      sym_builtindef,
      sym_structdef,
      sym_uniondef,
      sym_socketdef,
  [1190] = 11,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_builtin,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_union,
    ACTIONS(21), 1,
      anon_sym_socket,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(26), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(63), 5,
      sym_moddef,
      sym_builtindef,
      sym_structdef,
      sym_uniondef,
      sym_socketdef,
  [1230] = 11,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(112), 1,
      anon_sym_ext,
    ACTIONS(115), 1,
      anon_sym_mod,
    ACTIONS(118), 1,
      anon_sym_builtin,
    ACTIONS(121), 1,
      anon_sym_struct,
    ACTIONS(124), 1,
      anon_sym_union,
    ACTIONS(127), 1,
      anon_sym_socket,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(26), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(63), 5,
      sym_moddef,
      sym_builtindef,
      sym_structdef,
      sym_uniondef,
      sym_socketdef,
  [1270] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(130), 4,
      anon_sym_LPAREN,
      aux_sym_word_token1,
      aux_sym_word_token2,
      sym_ctor,
    ACTIONS(132), 7,
      anon_sym_if,
      anon_sym_match,
      anon_sym_true,
      anon_sym_false,
      sym_path,
      aux_sym_word_token3,
      sym_nat,
  [1290] = 4,
    ACTIONS(136), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(28), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1312] = 3,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(139), 9,
      anon_sym_mod,
      anon_sym_implicit,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_node,
      anon_sym_reg,
      anon_sym_master,
      anon_sym_slave,
      sym_path,
  [1331] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1347] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(143), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1362] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(145), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1377] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1392] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(149), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1407] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1422] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1437] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(155), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1452] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1467] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(159), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1482] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(161), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1497] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(163), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1512] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1527] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1542] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(169), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1557] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(171), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1572] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1587] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(175), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1602] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1617] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(179), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1632] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1647] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1662] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1677] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(187), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1692] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(189), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1707] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1722] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(193), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1737] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1752] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(197), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1767] = 7,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(111), 1,
      sym_type,
    STATE(148), 1,
      sym_typelist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [1792] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1807] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(207), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1822] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1837] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_builtin,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_socket,
  [1852] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(213), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1867] = 6,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym_ctor,
    STATE(152), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
    STATE(67), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1889] = 6,
    ACTIONS(219), 1,
      sym_ctor,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
    STATE(65), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1911] = 6,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym_ctor,
    STATE(152), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(225), 2,
      anon_sym_else,
      sym_ident,
    STATE(67), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1933] = 6,
    ACTIONS(203), 1,
      anon_sym_Word,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_type_word,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [1955] = 6,
    ACTIONS(219), 1,
      sym_ctor,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
    STATE(71), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1977] = 6,
    ACTIONS(203), 1,
      anon_sym_Word,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_type_word,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [1999] = 6,
    ACTIONS(219), 1,
      sym_ctor,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
    STATE(67), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [2021] = 5,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(241), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(84), 2,
      sym_channel,
      aux_sym_socketdef_repeat1,
  [2040] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(168), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2059] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2078] = 5,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(241), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(72), 2,
      sym_channel,
      aux_sym_socketdef_repeat1,
  [2097] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(247), 2,
      anon_sym_on,
      sym_path,
    ACTIONS(245), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2112] = 6,
    ACTIONS(219), 1,
      sym_ctor,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_pat,
    STATE(185), 1,
      sym_patlist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
  [2133] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(253), 2,
      anon_sym_on,
      sym_path,
    ACTIONS(251), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2148] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2167] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(146), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2186] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(155), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2205] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(167), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2224] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(165), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2243] = 5,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(257), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(84), 2,
      sym_channel,
      aux_sym_socketdef_repeat1,
  [2262] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(123), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2281] = 5,
    ACTIONS(203), 1,
      anon_sym_Word,
    STATE(78), 1,
      sym_type_word,
    STATE(173), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(201), 3,
      sym_type_clock,
      sym_type_bit,
      sym_qualident,
  [2300] = 6,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2320] = 5,
    ACTIONS(219), 1,
      sym_ctor,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
  [2338] = 5,
    ACTIONS(219), 1,
      sym_ctor,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
  [2356] = 4,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(90), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2371] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(277), 2,
      anon_sym_RBRACE,
      sym_ctor,
    ACTIONS(279), 2,
      anon_sym_else,
      sym_ident,
  [2384] = 4,
    ACTIONS(219), 1,
      sym_ctor,
    STATE(126), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(217), 2,
      anon_sym_else,
      sym_ident,
  [2399] = 5,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2416] = 4,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(95), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2431] = 4,
    ACTIONS(285), 1,
      sym_ident,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(90), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2446] = 5,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2463] = 4,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(99), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2478] = 4,
    ACTIONS(295), 1,
      sym_ident,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(97), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2493] = 4,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(99), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2508] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(304), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2523] = 4,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2537] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2551] = 4,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2565] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2579] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2593] = 3,
    STATE(17), 1,
      sym_connect_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(319), 2,
      sym_direct,
      sym_latched,
  [2605] = 4,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2619] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2633] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2647] = 4,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2661] = 4,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2675] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(334), 3,
      anon_sym_RBRACE,
      anon_sym_mosi,
      anon_sym_miso,
  [2685] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(336), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2695] = 4,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2709] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(343), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2719] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(345), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2729] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2743] = 4,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2757] = 4,
    ACTIONS(264), 1,
      anon_sym_DASH_GT,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2771] = 4,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2785] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2794] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(338), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2803] = 3,
    ACTIONS(359), 1,
      anon_sym_on,
    ACTIONS(361), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2814] = 3,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2825] = 3,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2836] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(306), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2845] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2854] = 3,
    ACTIONS(371), 1,
      anon_sym_ext,
    ACTIONS(373), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2865] = 3,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2876] = 3,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2887] = 3,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2898] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(384), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2907] = 2,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2915] = 2,
    ACTIONS(388), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2923] = 2,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2931] = 2,
    ACTIONS(392), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2939] = 2,
    ACTIONS(394), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2947] = 2,
    ACTIONS(396), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2955] = 2,
    ACTIONS(398), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2963] = 2,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2971] = 2,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2979] = 2,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2987] = 2,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2995] = 2,
    ACTIONS(408), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3003] = 2,
    ACTIONS(410), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3011] = 2,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3019] = 2,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3027] = 2,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3035] = 2,
    ACTIONS(418), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3043] = 2,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3051] = 2,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3059] = 2,
    ACTIONS(424), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3067] = 2,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3075] = 2,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3083] = 2,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3091] = 2,
    ACTIONS(432), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3099] = 2,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3107] = 2,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3115] = 2,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3123] = 2,
    ACTIONS(440), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3131] = 2,
    ACTIONS(442), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3139] = 2,
    ACTIONS(444), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3147] = 2,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3155] = 2,
    ACTIONS(448), 1,
      anon_sym_socket,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3163] = 2,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3171] = 2,
    ACTIONS(452), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3179] = 2,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3187] = 2,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3195] = 2,
    ACTIONS(458), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3203] = 2,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3211] = 2,
    ACTIONS(462), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3219] = 2,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3227] = 2,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3235] = 2,
    ACTIONS(468), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3243] = 2,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3251] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3259] = 2,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3267] = 2,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3275] = 2,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3283] = 2,
    ACTIONS(480), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3291] = 2,
    ACTIONS(482), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3299] = 2,
    ACTIONS(484), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3307] = 2,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3315] = 2,
    ACTIONS(488), 1,
      sym_qualident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3323] = 2,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3331] = 2,
    ACTIONS(492), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3339] = 2,
    ACTIONS(494), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3347] = 2,
    ACTIONS(496), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3355] = 2,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3363] = 2,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3371] = 2,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3379] = 2,
    ACTIONS(504), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3387] = 2,
    ACTIONS(506), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3395] = 2,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3403] = 2,
    ACTIONS(510), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3411] = 2,
    ACTIONS(512), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3419] = 2,
    ACTIONS(514), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3427] = 2,
    ACTIONS(516), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3435] = 2,
    ACTIONS(518), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3443] = 2,
    ACTIONS(520), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3451] = 2,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3459] = 2,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3467] = 2,
    ACTIONS(526), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3475] = 2,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3483] = 2,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3491] = 2,
    ACTIONS(530), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3499] = 2,
    ACTIONS(532), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3507] = 2,
    ACTIONS(373), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3515] = 2,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3523] = 2,
    ACTIONS(536), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3531] = 2,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3539] = 2,
    ACTIONS(540), 1,
      anon_sym_socket,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 269,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 375,
  [SMALL_STATE(10)] = 430,
  [SMALL_STATE(11)] = 481,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 583,
  [SMALL_STATE(14)] = 635,
  [SMALL_STATE(15)] = 687,
  [SMALL_STATE(16)] = 739,
  [SMALL_STATE(17)] = 791,
  [SMALL_STATE(18)] = 843,
  [SMALL_STATE(19)] = 895,
  [SMALL_STATE(20)] = 947,
  [SMALL_STATE(21)] = 999,
  [SMALL_STATE(22)] = 1051,
  [SMALL_STATE(23)] = 1103,
  [SMALL_STATE(24)] = 1150,
  [SMALL_STATE(25)] = 1190,
  [SMALL_STATE(26)] = 1230,
  [SMALL_STATE(27)] = 1270,
  [SMALL_STATE(28)] = 1290,
  [SMALL_STATE(29)] = 1312,
  [SMALL_STATE(30)] = 1331,
  [SMALL_STATE(31)] = 1347,
  [SMALL_STATE(32)] = 1362,
  [SMALL_STATE(33)] = 1377,
  [SMALL_STATE(34)] = 1392,
  [SMALL_STATE(35)] = 1407,
  [SMALL_STATE(36)] = 1422,
  [SMALL_STATE(37)] = 1437,
  [SMALL_STATE(38)] = 1452,
  [SMALL_STATE(39)] = 1467,
  [SMALL_STATE(40)] = 1482,
  [SMALL_STATE(41)] = 1497,
  [SMALL_STATE(42)] = 1512,
  [SMALL_STATE(43)] = 1527,
  [SMALL_STATE(44)] = 1542,
  [SMALL_STATE(45)] = 1557,
  [SMALL_STATE(46)] = 1572,
  [SMALL_STATE(47)] = 1587,
  [SMALL_STATE(48)] = 1602,
  [SMALL_STATE(49)] = 1617,
  [SMALL_STATE(50)] = 1632,
  [SMALL_STATE(51)] = 1647,
  [SMALL_STATE(52)] = 1662,
  [SMALL_STATE(53)] = 1677,
  [SMALL_STATE(54)] = 1692,
  [SMALL_STATE(55)] = 1707,
  [SMALL_STATE(56)] = 1722,
  [SMALL_STATE(57)] = 1737,
  [SMALL_STATE(58)] = 1752,
  [SMALL_STATE(59)] = 1767,
  [SMALL_STATE(60)] = 1792,
  [SMALL_STATE(61)] = 1807,
  [SMALL_STATE(62)] = 1822,
  [SMALL_STATE(63)] = 1837,
  [SMALL_STATE(64)] = 1852,
  [SMALL_STATE(65)] = 1867,
  [SMALL_STATE(66)] = 1889,
  [SMALL_STATE(67)] = 1911,
  [SMALL_STATE(68)] = 1933,
  [SMALL_STATE(69)] = 1955,
  [SMALL_STATE(70)] = 1977,
  [SMALL_STATE(71)] = 1999,
  [SMALL_STATE(72)] = 2021,
  [SMALL_STATE(73)] = 2040,
  [SMALL_STATE(74)] = 2059,
  [SMALL_STATE(75)] = 2078,
  [SMALL_STATE(76)] = 2097,
  [SMALL_STATE(77)] = 2112,
  [SMALL_STATE(78)] = 2133,
  [SMALL_STATE(79)] = 2148,
  [SMALL_STATE(80)] = 2167,
  [SMALL_STATE(81)] = 2186,
  [SMALL_STATE(82)] = 2205,
  [SMALL_STATE(83)] = 2224,
  [SMALL_STATE(84)] = 2243,
  [SMALL_STATE(85)] = 2262,
  [SMALL_STATE(86)] = 2281,
  [SMALL_STATE(87)] = 2300,
  [SMALL_STATE(88)] = 2320,
  [SMALL_STATE(89)] = 2338,
  [SMALL_STATE(90)] = 2356,
  [SMALL_STATE(91)] = 2371,
  [SMALL_STATE(92)] = 2384,
  [SMALL_STATE(93)] = 2399,
  [SMALL_STATE(94)] = 2416,
  [SMALL_STATE(95)] = 2431,
  [SMALL_STATE(96)] = 2446,
  [SMALL_STATE(97)] = 2463,
  [SMALL_STATE(98)] = 2478,
  [SMALL_STATE(99)] = 2493,
  [SMALL_STATE(100)] = 2508,
  [SMALL_STATE(101)] = 2523,
  [SMALL_STATE(102)] = 2537,
  [SMALL_STATE(103)] = 2551,
  [SMALL_STATE(104)] = 2565,
  [SMALL_STATE(105)] = 2579,
  [SMALL_STATE(106)] = 2593,
  [SMALL_STATE(107)] = 2605,
  [SMALL_STATE(108)] = 2619,
  [SMALL_STATE(109)] = 2633,
  [SMALL_STATE(110)] = 2647,
  [SMALL_STATE(111)] = 2661,
  [SMALL_STATE(112)] = 2675,
  [SMALL_STATE(113)] = 2685,
  [SMALL_STATE(114)] = 2695,
  [SMALL_STATE(115)] = 2709,
  [SMALL_STATE(116)] = 2719,
  [SMALL_STATE(117)] = 2729,
  [SMALL_STATE(118)] = 2743,
  [SMALL_STATE(119)] = 2757,
  [SMALL_STATE(120)] = 2771,
  [SMALL_STATE(121)] = 2785,
  [SMALL_STATE(122)] = 2794,
  [SMALL_STATE(123)] = 2803,
  [SMALL_STATE(124)] = 2814,
  [SMALL_STATE(125)] = 2825,
  [SMALL_STATE(126)] = 2836,
  [SMALL_STATE(127)] = 2845,
  [SMALL_STATE(128)] = 2854,
  [SMALL_STATE(129)] = 2865,
  [SMALL_STATE(130)] = 2876,
  [SMALL_STATE(131)] = 2887,
  [SMALL_STATE(132)] = 2898,
  [SMALL_STATE(133)] = 2907,
  [SMALL_STATE(134)] = 2915,
  [SMALL_STATE(135)] = 2923,
  [SMALL_STATE(136)] = 2931,
  [SMALL_STATE(137)] = 2939,
  [SMALL_STATE(138)] = 2947,
  [SMALL_STATE(139)] = 2955,
  [SMALL_STATE(140)] = 2963,
  [SMALL_STATE(141)] = 2971,
  [SMALL_STATE(142)] = 2979,
  [SMALL_STATE(143)] = 2987,
  [SMALL_STATE(144)] = 2995,
  [SMALL_STATE(145)] = 3003,
  [SMALL_STATE(146)] = 3011,
  [SMALL_STATE(147)] = 3019,
  [SMALL_STATE(148)] = 3027,
  [SMALL_STATE(149)] = 3035,
  [SMALL_STATE(150)] = 3043,
  [SMALL_STATE(151)] = 3051,
  [SMALL_STATE(152)] = 3059,
  [SMALL_STATE(153)] = 3067,
  [SMALL_STATE(154)] = 3075,
  [SMALL_STATE(155)] = 3083,
  [SMALL_STATE(156)] = 3091,
  [SMALL_STATE(157)] = 3099,
  [SMALL_STATE(158)] = 3107,
  [SMALL_STATE(159)] = 3115,
  [SMALL_STATE(160)] = 3123,
  [SMALL_STATE(161)] = 3131,
  [SMALL_STATE(162)] = 3139,
  [SMALL_STATE(163)] = 3147,
  [SMALL_STATE(164)] = 3155,
  [SMALL_STATE(165)] = 3163,
  [SMALL_STATE(166)] = 3171,
  [SMALL_STATE(167)] = 3179,
  [SMALL_STATE(168)] = 3187,
  [SMALL_STATE(169)] = 3195,
  [SMALL_STATE(170)] = 3203,
  [SMALL_STATE(171)] = 3211,
  [SMALL_STATE(172)] = 3219,
  [SMALL_STATE(173)] = 3227,
  [SMALL_STATE(174)] = 3235,
  [SMALL_STATE(175)] = 3243,
  [SMALL_STATE(176)] = 3251,
  [SMALL_STATE(177)] = 3259,
  [SMALL_STATE(178)] = 3267,
  [SMALL_STATE(179)] = 3275,
  [SMALL_STATE(180)] = 3283,
  [SMALL_STATE(181)] = 3291,
  [SMALL_STATE(182)] = 3299,
  [SMALL_STATE(183)] = 3307,
  [SMALL_STATE(184)] = 3315,
  [SMALL_STATE(185)] = 3323,
  [SMALL_STATE(186)] = 3331,
  [SMALL_STATE(187)] = 3339,
  [SMALL_STATE(188)] = 3347,
  [SMALL_STATE(189)] = 3355,
  [SMALL_STATE(190)] = 3363,
  [SMALL_STATE(191)] = 3371,
  [SMALL_STATE(192)] = 3379,
  [SMALL_STATE(193)] = 3387,
  [SMALL_STATE(194)] = 3395,
  [SMALL_STATE(195)] = 3403,
  [SMALL_STATE(196)] = 3411,
  [SMALL_STATE(197)] = 3419,
  [SMALL_STATE(198)] = 3427,
  [SMALL_STATE(199)] = 3435,
  [SMALL_STATE(200)] = 3443,
  [SMALL_STATE(201)] = 3451,
  [SMALL_STATE(202)] = 3459,
  [SMALL_STATE(203)] = 3467,
  [SMALL_STATE(204)] = 3475,
  [SMALL_STATE(205)] = 3483,
  [SMALL_STATE(206)] = 3491,
  [SMALL_STATE(207)] = 3499,
  [SMALL_STATE(208)] = 3507,
  [SMALL_STATE(209)] = 3515,
  [SMALL_STATE(210)] = 3523,
  [SMALL_STATE(211)] = 3531,
  [SMALL_STATE(212)] = 3539,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(208),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(203),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(193),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(192),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 9, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 5, 0, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, 0, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 10, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtindef, 5, 0, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 7, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 7, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 5, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_socketdef, 5, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_socketdef, 4, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 6, 0, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, 0, 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 6, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_lit, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 6, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 4, 0, 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, 0, 11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_match_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_word, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_socketdef_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_socketdef_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_arm, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, 0, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel, 5, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 4, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 5, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 4, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 5, 0, 7),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_socket, 5, 0, 8),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_socket_role, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, 0, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, 0, 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, 0, 6),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 5, 0, 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit, 4, 0, 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 4, 0, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [500] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 5, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channeldir, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
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

TS_PUBLIC const TSLanguage *tree_sitter_virdant(void) {
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
