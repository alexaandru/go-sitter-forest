#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  anon_sym_implicit = 18,
  anon_sym_incoming = 19,
  anon_sym_outgoing = 20,
  anon_sym_node = 21,
  anon_sym_reg = 22,
  anon_sym_on = 23,
  anon_sym_of = 24,
  anon_sym_master = 25,
  anon_sym_slave = 26,
  sym_direct = 27,
  sym_latched = 28,
  anon_sym_if = 29,
  anon_sym_else = 30,
  anon_sym_match = 31,
  anon_sym_EQ_GT = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_DOT_DOT = 36,
  sym_type_clock = 37,
  anon_sym_Word = 38,
  sym_path = 39,
  aux_sym_word_token1 = 40,
  aux_sym_word_token2 = 41,
  aux_sym_word_token3 = 42,
  sym_nat = 43,
  sym_ctor = 44,
  sym_qualident = 45,
  sym_ident = 46,
  sym_comment_line = 47,
  sym_comment_block = 48,
  sym_package = 49,
  sym_package_import = 50,
  sym_item = 51,
  sym_moddef = 52,
  sym_structdef = 53,
  sym_field = 54,
  sym_uniondef = 55,
  sym_alt = 56,
  sym_portdef = 57,
  sym_channel = 58,
  sym_channeldir = 59,
  sym_typelist = 60,
  sym__decl = 61,
  sym__component = 62,
  sym_implicit = 63,
  sym_incoming = 64,
  sym_outgoing = 65,
  sym_node = 66,
  sym_reg = 67,
  sym_port = 68,
  sym_port_role = 69,
  sym_connect = 70,
  sym_submodule = 71,
  sym_connect_type = 72,
  sym_expr = 73,
  sym_expr_if = 74,
  sym_expr_match = 75,
  sym_match_arm = 76,
  sym_pat = 77,
  sym_patlist = 78,
  sym_expr_call = 79,
  sym_expr_idx = 80,
  sym_expr_lit = 81,
  sym_expr_reference = 82,
  sym__word_lit = 83,
  sym__expr_list = 84,
  sym_type = 85,
  sym_type_word = 86,
  sym_word = 87,
  aux_sym_package_repeat1 = 88,
  aux_sym_package_repeat2 = 89,
  aux_sym_moddef_repeat1 = 90,
  aux_sym_structdef_repeat1 = 91,
  aux_sym_uniondef_repeat1 = 92,
  aux_sym_portdef_repeat1 = 93,
  aux_sym_typelist_repeat1 = 94,
  aux_sym_expr_if_repeat1 = 95,
  aux_sym_expr_match_repeat1 = 96,
  aux_sym_patlist_repeat1 = 97,
  aux_sym__expr_list_repeat1 = 98,
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
  [sym_implicit] = "implicit",
  [sym_incoming] = "incoming",
  [sym_outgoing] = "outgoing",
  [sym_node] = "node",
  [sym_reg] = "reg",
  [sym_port] = "port",
  [sym_port_role] = "port_role",
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
  [sym_implicit] = sym_implicit,
  [sym_incoming] = sym_incoming,
  [sym_outgoing] = sym_outgoing,
  [sym_node] = sym_node,
  [sym_reg] = sym_reg,
  [sym_port] = sym_port,
  [sym_port_role] = sym_port_role,
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
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_port_role] = {
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
  field_portdef = 8,
  field_role = 9,
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
  [field_portdef] = "portdef",
  [field_role] = "role",
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
    {field_portdef, 4},
    {field_role, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '{') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'W') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(211);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(142);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 83:
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(189);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 90:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 91:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 92:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_mosi);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_miso);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_master);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_master);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_slave);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_slave);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_type_clock);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Word);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == 'w') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'w') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ctor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_qualident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
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
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
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
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 2},
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
    [sym_package] = STATE(196),
    [sym_package_import] = STATE(23),
    [sym_item] = STATE(24),
    [sym_moddef] = STATE(60),
    [sym_structdef] = STATE(60),
    [sym_uniondef] = STATE(60),
    [sym_portdef] = STATE(60),
    [aux_sym_package_repeat1] = STATE(23),
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
  [0] = 13,
    ACTIONS(21), 1,
      anon_sym_mod,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_implicit,
    ACTIONS(29), 1,
      anon_sym_incoming,
    ACTIONS(32), 1,
      anon_sym_outgoing,
    ACTIONS(35), 1,
      anon_sym_node,
    ACTIONS(38), 1,
      anon_sym_reg,
    ACTIONS(44), 1,
      sym_path,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(41), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [51] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    STATE(6), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [102] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [153] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [204] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [255] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [306] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(131), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(168), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [357] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(77), 1,
      sym_expr,
    STATE(136), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [408] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_expr,
    STATE(170), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [459] = 13,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [507] = 13,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [555] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(111), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [600] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(114), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [645] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(113), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [690] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(106), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [735] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(92), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [780] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(107), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [825] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(104), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [870] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(105), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [915] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(93), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [960] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(94), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [1005] = 12,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(26), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(28), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    STATE(60), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1048] = 10,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(60), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1084] = 10,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_pub,
    ACTIONS(106), 1,
      anon_sym_ext,
    ACTIONS(109), 1,
      anon_sym_mod,
    ACTIONS(112), 1,
      anon_sym_struct,
    ACTIONS(115), 1,
      anon_sym_union,
    ACTIONS(118), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(60), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1120] = 10,
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
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(60), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1156] = 3,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(123), 9,
      anon_sym_mod,
      anon_sym_implicit,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_node,
      anon_sym_reg,
      anon_sym_master,
      anon_sym_slave,
      sym_path,
  [1175] = 4,
    ACTIONS(127), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(28), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1196] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(130), 4,
      anon_sym_LPAREN,
      aux_sym_word_token1,
      aux_sym_word_token2,
      sym_ctor,
    ACTIONS(132), 5,
      anon_sym_if,
      anon_sym_match,
      sym_path,
      aux_sym_word_token3,
      sym_nat,
  [1214] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1229] = 2,
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
  [1244] = 2,
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
  [1259] = 2,
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
  [1274] = 2,
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
  [1289] = 2,
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
  [1304] = 2,
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
  [1319] = 2,
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
  [1334] = 2,
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
  [1349] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(152), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1364] = 2,
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
  [1379] = 2,
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
  [1394] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(158), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1409] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1424] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(162), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1439] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(164), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1454] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(166), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1469] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(168), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1484] = 6,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      sym_ctor,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(52), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1506] = 2,
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
  [1520] = 2,
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
  [1534] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(48), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1556] = 6,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym_ctor,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(184), 2,
      anon_sym_else,
      sym_ident,
    STATE(52), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1578] = 2,
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
  [1592] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1606] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1620] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1634] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1648] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(52), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1670] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(58), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1692] = 2,
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
  [1706] = 2,
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
  [1720] = 2,
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
  [1734] = 2,
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
  [1748] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1762] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1776] = 7,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(108), 1,
      sym_type,
    STATE(144), 1,
      sym_typelist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [1800] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_pat,
    STATE(178), 1,
      sym_patlist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [1821] = 5,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(226), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(73), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1840] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(230), 2,
      anon_sym_on,
      sym_path,
    ACTIONS(228), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1855] = 6,
    ACTIONS(220), 1,
      anon_sym_Word,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_type_word,
    STATE(123), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [1876] = 6,
    ACTIONS(220), 1,
      anon_sym_Word,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_type_word,
    STATE(123), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [1897] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(238), 2,
      anon_sym_on,
      sym_path,
    ACTIONS(236), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1912] = 5,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(242), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(73), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1931] = 5,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(226), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(68), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1950] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(119), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [1968] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(141), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [1986] = 6,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2006] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(150), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2024] = 5,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [2042] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(175), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2060] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(167), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2078] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(132), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2096] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(133), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2114] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(173), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2132] = 5,
    ACTIONS(220), 1,
      anon_sym_Word,
    STATE(69), 1,
      sym_type_word,
    STATE(123), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 2,
      sym_type_clock,
      sym_qualident,
  [2150] = 5,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [2168] = 4,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(95), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2183] = 4,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(96), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2198] = 4,
    ACTIONS(174), 1,
      sym_ctor,
    STATE(126), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [2213] = 4,
    ACTIONS(261), 1,
      sym_ident,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(87), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2228] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(269), 2,
      anon_sym_RBRACE,
      sym_ctor,
    ACTIONS(271), 2,
      anon_sym_else,
      sym_ident,
  [2241] = 5,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2258] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(277), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2273] = 5,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2290] = 4,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(95), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2305] = 4,
    ACTIONS(265), 1,
      sym_ident,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(97), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2320] = 4,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(97), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2335] = 4,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2349] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(297), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2359] = 4,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2373] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(302), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2383] = 3,
    STATE(13), 1,
      sym_connect_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(304), 2,
      sym_direct,
      sym_latched,
  [2395] = 4,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2409] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2423] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2437] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2451] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2465] = 4,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2479] = 4,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2493] = 4,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2507] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2521] = 4,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2535] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2549] = 4,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2563] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(338), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2573] = 4,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2587] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(342), 3,
      anon_sym_RBRACE,
      anon_sym_mosi,
      anon_sym_miso,
  [2597] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(344), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2606] = 3,
    ACTIONS(346), 1,
      anon_sym_on,
    ACTIONS(348), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2617] = 3,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(352), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2628] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(354), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2637] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2646] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(306), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2655] = 3,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2666] = 3,
    ACTIONS(360), 1,
      anon_sym_ext,
    ACTIONS(362), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2677] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(325), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2686] = 3,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2697] = 3,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2708] = 3,
    ACTIONS(366), 1,
      anon_sym_if,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2719] = 2,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2727] = 2,
    ACTIONS(375), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2735] = 2,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2743] = 2,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2751] = 2,
    ACTIONS(381), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2759] = 2,
    ACTIONS(383), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2767] = 2,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2775] = 2,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2783] = 2,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2791] = 2,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2799] = 2,
    ACTIONS(393), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2807] = 2,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2815] = 2,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2823] = 2,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2831] = 2,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2839] = 2,
    ACTIONS(403), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2847] = 2,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2855] = 2,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2863] = 2,
    ACTIONS(409), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2871] = 2,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2879] = 2,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2887] = 2,
    ACTIONS(415), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2895] = 2,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2903] = 2,
    ACTIONS(419), 1,
      sym_qualident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2911] = 2,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2919] = 2,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2927] = 2,
    ACTIONS(425), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2935] = 2,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2943] = 2,
    ACTIONS(429), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2951] = 2,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2959] = 2,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2967] = 2,
    ACTIONS(435), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2975] = 2,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2983] = 2,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2991] = 2,
    ACTIONS(441), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2999] = 2,
    ACTIONS(443), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3007] = 2,
    ACTIONS(445), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3015] = 2,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3023] = 2,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3031] = 2,
    ACTIONS(451), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3039] = 2,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3047] = 2,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3055] = 2,
    ACTIONS(457), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3063] = 2,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3071] = 2,
    ACTIONS(461), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3079] = 2,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3087] = 2,
    ACTIONS(465), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3095] = 2,
    ACTIONS(467), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3103] = 2,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3111] = 2,
    ACTIONS(471), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3119] = 2,
    ACTIONS(473), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3127] = 2,
    ACTIONS(475), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3135] = 2,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3143] = 2,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3151] = 2,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3159] = 2,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3167] = 2,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3175] = 2,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3183] = 2,
    ACTIONS(489), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3191] = 2,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3199] = 2,
    ACTIONS(493), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3207] = 2,
    ACTIONS(495), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3215] = 2,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3223] = 2,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3231] = 2,
    ACTIONS(501), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3239] = 2,
    ACTIONS(503), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3247] = 2,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3255] = 2,
    ACTIONS(366), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3263] = 2,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3271] = 2,
    ACTIONS(509), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3279] = 2,
    ACTIONS(511), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3287] = 2,
    ACTIONS(513), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3295] = 2,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3303] = 2,
    ACTIONS(517), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3311] = 2,
    ACTIONS(362), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3319] = 2,
    ACTIONS(519), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 600,
  [SMALL_STATE(15)] = 645,
  [SMALL_STATE(16)] = 690,
  [SMALL_STATE(17)] = 735,
  [SMALL_STATE(18)] = 780,
  [SMALL_STATE(19)] = 825,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 915,
  [SMALL_STATE(22)] = 960,
  [SMALL_STATE(23)] = 1005,
  [SMALL_STATE(24)] = 1048,
  [SMALL_STATE(25)] = 1084,
  [SMALL_STATE(26)] = 1120,
  [SMALL_STATE(27)] = 1156,
  [SMALL_STATE(28)] = 1175,
  [SMALL_STATE(29)] = 1196,
  [SMALL_STATE(30)] = 1214,
  [SMALL_STATE(31)] = 1229,
  [SMALL_STATE(32)] = 1244,
  [SMALL_STATE(33)] = 1259,
  [SMALL_STATE(34)] = 1274,
  [SMALL_STATE(35)] = 1289,
  [SMALL_STATE(36)] = 1304,
  [SMALL_STATE(37)] = 1319,
  [SMALL_STATE(38)] = 1334,
  [SMALL_STATE(39)] = 1349,
  [SMALL_STATE(40)] = 1364,
  [SMALL_STATE(41)] = 1379,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1409,
  [SMALL_STATE(44)] = 1424,
  [SMALL_STATE(45)] = 1439,
  [SMALL_STATE(46)] = 1454,
  [SMALL_STATE(47)] = 1469,
  [SMALL_STATE(48)] = 1484,
  [SMALL_STATE(49)] = 1506,
  [SMALL_STATE(50)] = 1520,
  [SMALL_STATE(51)] = 1534,
  [SMALL_STATE(52)] = 1556,
  [SMALL_STATE(53)] = 1578,
  [SMALL_STATE(54)] = 1592,
  [SMALL_STATE(55)] = 1606,
  [SMALL_STATE(56)] = 1620,
  [SMALL_STATE(57)] = 1634,
  [SMALL_STATE(58)] = 1648,
  [SMALL_STATE(59)] = 1670,
  [SMALL_STATE(60)] = 1692,
  [SMALL_STATE(61)] = 1706,
  [SMALL_STATE(62)] = 1720,
  [SMALL_STATE(63)] = 1734,
  [SMALL_STATE(64)] = 1748,
  [SMALL_STATE(65)] = 1762,
  [SMALL_STATE(66)] = 1776,
  [SMALL_STATE(67)] = 1800,
  [SMALL_STATE(68)] = 1821,
  [SMALL_STATE(69)] = 1840,
  [SMALL_STATE(70)] = 1855,
  [SMALL_STATE(71)] = 1876,
  [SMALL_STATE(72)] = 1897,
  [SMALL_STATE(73)] = 1912,
  [SMALL_STATE(74)] = 1931,
  [SMALL_STATE(75)] = 1950,
  [SMALL_STATE(76)] = 1968,
  [SMALL_STATE(77)] = 1986,
  [SMALL_STATE(78)] = 2006,
  [SMALL_STATE(79)] = 2024,
  [SMALL_STATE(80)] = 2042,
  [SMALL_STATE(81)] = 2060,
  [SMALL_STATE(82)] = 2078,
  [SMALL_STATE(83)] = 2096,
  [SMALL_STATE(84)] = 2114,
  [SMALL_STATE(85)] = 2132,
  [SMALL_STATE(86)] = 2150,
  [SMALL_STATE(87)] = 2168,
  [SMALL_STATE(88)] = 2183,
  [SMALL_STATE(89)] = 2198,
  [SMALL_STATE(90)] = 2213,
  [SMALL_STATE(91)] = 2228,
  [SMALL_STATE(92)] = 2241,
  [SMALL_STATE(93)] = 2258,
  [SMALL_STATE(94)] = 2273,
  [SMALL_STATE(95)] = 2290,
  [SMALL_STATE(96)] = 2305,
  [SMALL_STATE(97)] = 2320,
  [SMALL_STATE(98)] = 2335,
  [SMALL_STATE(99)] = 2349,
  [SMALL_STATE(100)] = 2359,
  [SMALL_STATE(101)] = 2373,
  [SMALL_STATE(102)] = 2383,
  [SMALL_STATE(103)] = 2395,
  [SMALL_STATE(104)] = 2409,
  [SMALL_STATE(105)] = 2423,
  [SMALL_STATE(106)] = 2437,
  [SMALL_STATE(107)] = 2451,
  [SMALL_STATE(108)] = 2465,
  [SMALL_STATE(109)] = 2479,
  [SMALL_STATE(110)] = 2493,
  [SMALL_STATE(111)] = 2507,
  [SMALL_STATE(112)] = 2521,
  [SMALL_STATE(113)] = 2535,
  [SMALL_STATE(114)] = 2549,
  [SMALL_STATE(115)] = 2563,
  [SMALL_STATE(116)] = 2573,
  [SMALL_STATE(117)] = 2587,
  [SMALL_STATE(118)] = 2597,
  [SMALL_STATE(119)] = 2606,
  [SMALL_STATE(120)] = 2617,
  [SMALL_STATE(121)] = 2628,
  [SMALL_STATE(122)] = 2637,
  [SMALL_STATE(123)] = 2646,
  [SMALL_STATE(124)] = 2655,
  [SMALL_STATE(125)] = 2666,
  [SMALL_STATE(126)] = 2677,
  [SMALL_STATE(127)] = 2686,
  [SMALL_STATE(128)] = 2697,
  [SMALL_STATE(129)] = 2708,
  [SMALL_STATE(130)] = 2719,
  [SMALL_STATE(131)] = 2727,
  [SMALL_STATE(132)] = 2735,
  [SMALL_STATE(133)] = 2743,
  [SMALL_STATE(134)] = 2751,
  [SMALL_STATE(135)] = 2759,
  [SMALL_STATE(136)] = 2767,
  [SMALL_STATE(137)] = 2775,
  [SMALL_STATE(138)] = 2783,
  [SMALL_STATE(139)] = 2791,
  [SMALL_STATE(140)] = 2799,
  [SMALL_STATE(141)] = 2807,
  [SMALL_STATE(142)] = 2815,
  [SMALL_STATE(143)] = 2823,
  [SMALL_STATE(144)] = 2831,
  [SMALL_STATE(145)] = 2839,
  [SMALL_STATE(146)] = 2847,
  [SMALL_STATE(147)] = 2855,
  [SMALL_STATE(148)] = 2863,
  [SMALL_STATE(149)] = 2871,
  [SMALL_STATE(150)] = 2879,
  [SMALL_STATE(151)] = 2887,
  [SMALL_STATE(152)] = 2895,
  [SMALL_STATE(153)] = 2903,
  [SMALL_STATE(154)] = 2911,
  [SMALL_STATE(155)] = 2919,
  [SMALL_STATE(156)] = 2927,
  [SMALL_STATE(157)] = 2935,
  [SMALL_STATE(158)] = 2943,
  [SMALL_STATE(159)] = 2951,
  [SMALL_STATE(160)] = 2959,
  [SMALL_STATE(161)] = 2967,
  [SMALL_STATE(162)] = 2975,
  [SMALL_STATE(163)] = 2983,
  [SMALL_STATE(164)] = 2991,
  [SMALL_STATE(165)] = 2999,
  [SMALL_STATE(166)] = 3007,
  [SMALL_STATE(167)] = 3015,
  [SMALL_STATE(168)] = 3023,
  [SMALL_STATE(169)] = 3031,
  [SMALL_STATE(170)] = 3039,
  [SMALL_STATE(171)] = 3047,
  [SMALL_STATE(172)] = 3055,
  [SMALL_STATE(173)] = 3063,
  [SMALL_STATE(174)] = 3071,
  [SMALL_STATE(175)] = 3079,
  [SMALL_STATE(176)] = 3087,
  [SMALL_STATE(177)] = 3095,
  [SMALL_STATE(178)] = 3103,
  [SMALL_STATE(179)] = 3111,
  [SMALL_STATE(180)] = 3119,
  [SMALL_STATE(181)] = 3127,
  [SMALL_STATE(182)] = 3135,
  [SMALL_STATE(183)] = 3143,
  [SMALL_STATE(184)] = 3151,
  [SMALL_STATE(185)] = 3159,
  [SMALL_STATE(186)] = 3167,
  [SMALL_STATE(187)] = 3175,
  [SMALL_STATE(188)] = 3183,
  [SMALL_STATE(189)] = 3191,
  [SMALL_STATE(190)] = 3199,
  [SMALL_STATE(191)] = 3207,
  [SMALL_STATE(192)] = 3215,
  [SMALL_STATE(193)] = 3223,
  [SMALL_STATE(194)] = 3231,
  [SMALL_STATE(195)] = 3239,
  [SMALL_STATE(196)] = 3247,
  [SMALL_STATE(197)] = 3255,
  [SMALL_STATE(198)] = 3263,
  [SMALL_STATE(199)] = 3271,
  [SMALL_STATE(200)] = 3279,
  [SMALL_STATE(201)] = 3287,
  [SMALL_STATE(202)] = 3295,
  [SMALL_STATE(203)] = 3303,
  [SMALL_STATE(204)] = 3311,
  [SMALL_STATE(205)] = 3319,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(181),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(180),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(179),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(177),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(176),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(172),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(169),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2), SHIFT_REPEAT(102),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(125),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(204),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(203),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(201),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(200),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2), SHIFT_REPEAT(199),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2), SHIFT_REPEAT(145),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 10),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, .production_id = 11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 4, .production_id = 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 9),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 6, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portdef, 4, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_match_repeat1, 2), SHIFT_REPEAT(101),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2), SHIFT_REPEAT(147),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portdef, 5, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 5, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 7, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 6, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 5, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_word, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_portdef_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_portdef_repeat1, 2), SHIFT_REPEAT(166),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_arm, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2), SHIFT_REPEAT(157),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2), SHIFT_REPEAT(155),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 3),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2), SHIFT_REPEAT(21),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2), SHIFT_REPEAT(85),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2), SHIFT_REPEAT(89),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 2), SHIFT_REPEAT(188),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, .production_id = 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 5, .production_id = 8),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 4, .production_id = 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channeldir, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_role, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit, 4, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 5, .production_id = 7),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [505] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 5, .production_id = 6),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
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
