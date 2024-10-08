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
#define STATE_COUNT 827
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 0
#define TOKEN_COUNT 148
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_filename = 1,
  aux_sym_line_token1 = 2,
  anon_sym_COLON = 3,
  anon_sym_COMMA = 4,
  sym_location_unknown = 5,
  anon_sym_LBRACE_DASH_POUND_LT = 6,
  anon_sym_GT_POUND_DASH_RBRACE = 7,
  sym_single_line_comment = 8,
  sym_multiline_comment = 9,
  sym_iso_ref = 10,
  anon_sym_def = 11,
  anon_sym_struct = 12,
  anon_sym_union = 13,
  anon_sym_COLON_EQ = 14,
  sym_int_const = 15,
  sym_floating_const = 16,
  sym_sym = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_void = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_const = 24,
  anon_sym_volatile = 25,
  anon_sym__Atomic = 26,
  anon_sym_STAR = 27,
  anon_sym_LPAREN_STAR_RPAREN = 28,
  anon_sym_restrict = 29,
  anon_sym_COMMA2 = 30,
  anon_sym_DOT_DOT_DOT = 31,
  aux_sym_integer_type_token1 = 32,
  sym_floating_type = 33,
  anon_sym_ail_ctype = 34,
  anon_sym_EQ = 35,
  anon_sym_glob = 36,
  anon_sym_pure = 37,
  anon_sym_memop = 38,
  anon_sym_let = 39,
  anon_sym_in = 40,
  anon_sym_if = 41,
  anon_sym_then = 42,
  anon_sym_else = 43,
  anon_sym_case = 44,
  anon_sym_of = 45,
  anon_sym_PIPE = 46,
  anon_sym_EQ_GT = 47,
  anon_sym_end = 48,
  anon_sym_pcall = 49,
  anon_sym_ccall = 50,
  anon_sym_unseq = 51,
  anon_sym_weak = 52,
  anon_sym_SEMI = 53,
  anon_sym_strong = 54,
  anon_sym_bound = 55,
  anon_sym_save = 56,
  anon_sym_run = 57,
  anon_sym_nd = 58,
  anon_sym_par = 59,
  anon_sym_eff = 60,
  anon_sym_undef = 61,
  anon_sym_error = 62,
  anon_sym_CivNULLcap = 63,
  anon_sym_signed = 64,
  anon_sym_unsigned = 65,
  anon_sym_array_shift = 66,
  anon_sym_member_shift = 67,
  anon_sym_DOT = 68,
  anon_sym_not = 69,
  anon_sym_DASH = 70,
  anon_sym_cfunction = 71,
  anon_sym_LBRACE = 72,
  anon_sym_RBRACE = 73,
  anon_sym_is_scalar = 74,
  anon_sym_is_integer = 75,
  anon_sym_is_signed_LPAREN = 76,
  anon_sym_is_unsigned_LPAREN = 77,
  anon_sym_are_compatible = 78,
  anon_sym_conv_loaded_int = 79,
  anon_sym_LBRACK_RBRACK = 80,
  anon_sym_COLON_COLON = 81,
  anon_sym_DeriveCap = 82,
  aux_sym_pure_memop_op_token1 = 83,
  anon_sym_CapAssignValue = 84,
  anon_sym_Ptr_tIntValue = 85,
  anon_sym_PtrEq = 86,
  anon_sym_PtrNe = 87,
  anon_sym_PtrLt = 88,
  anon_sym_PtrGt = 89,
  anon_sym_PtrLe = 90,
  anon_sym_PtrGe = 91,
  anon_sym_Ptrdiff = 92,
  anon_sym_IntFromPtr = 93,
  anon_sym_PtrFromInt = 94,
  anon_sym_PtrValidForDeref = 95,
  anon_sym_PtrWellAligned = 96,
  anon_sym_PtrArrayShift = 97,
  aux_sym_memop_op_token1 = 98,
  anon_sym_PtrMemberShift = 99,
  anon_sym__ = 100,
  anon_sym_unit = 101,
  anon_sym_boolean = 102,
  anon_sym_ctype = 103,
  anon_sym_loaded = 104,
  anon_sym_storable = 105,
  anon_sym_integer = 106,
  anon_sym_floating = 107,
  anon_sym_pointer = 108,
  anon_sym_array = 109,
  sym_memory_order = 110,
  anon_sym_create_readonly = 111,
  anon_sym_create = 112,
  anon_sym_alloc = 113,
  anon_sym_free = 114,
  anon_sym_kill = 115,
  anon_sym_store = 116,
  anon_sym_store_lock = 117,
  anon_sym_load = 118,
  anon_sym_seq_rmw = 119,
  anon_sym_seq_rmw_with_forward = 120,
  anon_sym_rmw = 121,
  anon_sym_fence = 122,
  anon_sym_neg = 123,
  sym_ub = 124,
  aux_sym_string_token1 = 125,
  anon_sym_Array = 126,
  anon_sym_Ivmax = 127,
  anon_sym_Ivmin = 128,
  anon_sym_Ivsizeof = 129,
  anon_sym_Ivalignof = 130,
  anon_sym_Specified = 131,
  anon_sym_Unspecified = 132,
  anon_sym_Fvfromint = 133,
  anon_sym_Ivfromfloat = 134,
  anon_sym_IvCOMPL = 135,
  anon_sym_IvAND = 136,
  anon_sym_IvOR = 137,
  anon_sym_IvXOR = 138,
  sym_binary_operator = 139,
  sym_bool_literal = 140,
  anon_sym_IvMaxAlignment = 141,
  anon_sym_NULL = 142,
  anon_sym_Cfunction = 143,
  anon_sym_Unit = 144,
  sym_impl = 145,
  anon_sym_ailname = 146,
  anon_sym_proc = 147,
  sym_source_file = 148,
  sym_line = 149,
  sym_column = 150,
  sym_position = 151,
  sym_location_range = 152,
  sym_location = 153,
  sym_declaration = 154,
  sym_def_aggregate_declaration = 155,
  sym_def_fields = 156,
  sym_def_field = 157,
  sym_core_ctype = 158,
  sym_ctype = 159,
  sym_ctype_star = 160,
  sym_params = 161,
  sym_integer_type = 162,
  sym_basic_type = 163,
  sym_glob_ctype_attribute = 164,
  sym_glob_declaration = 165,
  sym_expr = 166,
  sym_core_type = 167,
  sym_pexpr = 168,
  sym_list_pexpr = 169,
  sym_pure_memop_op = 170,
  sym_memop_op = 171,
  sym_pattern = 172,
  sym_list_pattern = 173,
  sym_name = 174,
  sym_core_base_type = 175,
  sym_core_object_type = 176,
  sym_action = 177,
  sym_paction = 178,
  sym_string = 179,
  sym_cstring = 180,
  sym_ctor = 181,
  sym_cabs_id = 182,
  sym_member = 183,
  sym_value = 184,
  sym_attribute = 185,
  sym_attribute_pair = 186,
  sym_proc_declaration = 187,
  sym_proc_full_declaration = 188,
  sym_proc_forward_declaration = 189,
  sym_def_declaration = 190,
  aux_sym_source_file_repeat1 = 191,
  aux_sym_def_fields_repeat1 = 192,
  aux_sym_params_repeat1 = 193,
  aux_sym_integer_type_repeat1 = 194,
  aux_sym_expr_repeat1 = 195,
  aux_sym_expr_repeat2 = 196,
  aux_sym_expr_repeat3 = 197,
  aux_sym_expr_repeat4 = 198,
  aux_sym_pexpr_repeat1 = 199,
  aux_sym_pexpr_repeat2 = 200,
  aux_sym_pattern_repeat1 = 201,
  aux_sym_core_base_type_repeat1 = 202,
  aux_sym_attribute_repeat1 = 203,
  aux_sym_proc_full_declaration_repeat1 = 204,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_filename] = "filename",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ", ",
  [sym_location_unknown] = "location_unknown",
  [anon_sym_LBRACE_DASH_POUND_LT] = "{-# <",
  [anon_sym_GT_POUND_DASH_RBRACE] = "> #-}",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_iso_ref] = "iso_ref",
  [anon_sym_def] = "def",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_COLON_EQ] = ":=",
  [sym_int_const] = "int_const",
  [sym_floating_const] = "floating_const",
  [sym_sym] = "sym",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym_volatile] = "volatile",
  [anon_sym__Atomic] = "_Atomic",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN_STAR_RPAREN] = "(*)",
  [anon_sym_restrict] = "restrict",
  [anon_sym_COMMA2] = ",",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_integer_type_token1] = "integer_type_token1",
  [sym_floating_type] = "floating_type",
  [anon_sym_ail_ctype] = "ail_ctype",
  [anon_sym_EQ] = "=",
  [anon_sym_glob] = "glob",
  [anon_sym_pure] = "pure",
  [anon_sym_memop] = "memop",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_end] = "end",
  [anon_sym_pcall] = "pcall",
  [anon_sym_ccall] = "ccall",
  [anon_sym_unseq] = "unseq",
  [anon_sym_weak] = "weak",
  [anon_sym_SEMI] = ";",
  [anon_sym_strong] = "strong",
  [anon_sym_bound] = "bound",
  [anon_sym_save] = "save",
  [anon_sym_run] = "run",
  [anon_sym_nd] = "nd",
  [anon_sym_par] = "par",
  [anon_sym_eff] = "eff",
  [anon_sym_undef] = "undef",
  [anon_sym_error] = "error",
  [anon_sym_CivNULLcap] = "CivNULLcap",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_array_shift] = "array_shift",
  [anon_sym_member_shift] = "member_shift",
  [anon_sym_DOT] = ".",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_cfunction] = "cfunction",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_is_scalar] = "is_scalar",
  [anon_sym_is_integer] = "is_integer",
  [anon_sym_is_signed_LPAREN] = "is_signed(",
  [anon_sym_is_unsigned_LPAREN] = "is_unsigned(",
  [anon_sym_are_compatible] = "are_compatible",
  [anon_sym_conv_loaded_int] = "conv_loaded_int",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DeriveCap] = "DeriveCap",
  [aux_sym_pure_memop_op_token1] = "pure_memop_op_token1",
  [anon_sym_CapAssignValue] = "CapAssignValue",
  [anon_sym_Ptr_tIntValue] = "Ptr_tIntValue",
  [anon_sym_PtrEq] = "PtrEq",
  [anon_sym_PtrNe] = "PtrNe",
  [anon_sym_PtrLt] = "PtrLt",
  [anon_sym_PtrGt] = "PtrGt",
  [anon_sym_PtrLe] = "PtrLe",
  [anon_sym_PtrGe] = "PtrGe",
  [anon_sym_Ptrdiff] = "Ptrdiff",
  [anon_sym_IntFromPtr] = "IntFromPtr",
  [anon_sym_PtrFromInt] = "PtrFromInt",
  [anon_sym_PtrValidForDeref] = "PtrValidForDeref",
  [anon_sym_PtrWellAligned] = "PtrWellAligned",
  [anon_sym_PtrArrayShift] = "PtrArrayShift",
  [aux_sym_memop_op_token1] = "memop_op_token1",
  [anon_sym_PtrMemberShift] = "PtrMemberShift",
  [anon_sym__] = "_",
  [anon_sym_unit] = "unit",
  [anon_sym_boolean] = "boolean",
  [anon_sym_ctype] = "ctype",
  [anon_sym_loaded] = "loaded",
  [anon_sym_storable] = "storable",
  [anon_sym_integer] = "integer",
  [anon_sym_floating] = "floating",
  [anon_sym_pointer] = "pointer",
  [anon_sym_array] = "array",
  [sym_memory_order] = "memory_order",
  [anon_sym_create_readonly] = "create_readonly",
  [anon_sym_create] = "create",
  [anon_sym_alloc] = "alloc",
  [anon_sym_free] = "free",
  [anon_sym_kill] = "kill",
  [anon_sym_store] = "store",
  [anon_sym_store_lock] = "store_lock",
  [anon_sym_load] = "load",
  [anon_sym_seq_rmw] = "seq_rmw",
  [anon_sym_seq_rmw_with_forward] = "seq_rmw_with_forward",
  [anon_sym_rmw] = "rmw",
  [anon_sym_fence] = "fence",
  [anon_sym_neg] = "neg",
  [sym_ub] = "ub",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_Array] = "Array",
  [anon_sym_Ivmax] = "Ivmax",
  [anon_sym_Ivmin] = "Ivmin",
  [anon_sym_Ivsizeof] = "Ivsizeof",
  [anon_sym_Ivalignof] = "Ivalignof",
  [anon_sym_Specified] = "Specified",
  [anon_sym_Unspecified] = "Unspecified",
  [anon_sym_Fvfromint] = "Fvfromint",
  [anon_sym_Ivfromfloat] = "Ivfromfloat",
  [anon_sym_IvCOMPL] = "IvCOMPL",
  [anon_sym_IvAND] = "IvAND",
  [anon_sym_IvOR] = "IvOR",
  [anon_sym_IvXOR] = "IvXOR",
  [sym_binary_operator] = "binary_operator",
  [sym_bool_literal] = "bool_literal",
  [anon_sym_IvMaxAlignment] = "IvMaxAlignment",
  [anon_sym_NULL] = "NULL",
  [anon_sym_Cfunction] = "Cfunction",
  [anon_sym_Unit] = "Unit",
  [sym_impl] = "impl",
  [anon_sym_ailname] = "ailname",
  [anon_sym_proc] = "proc",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_column] = "column",
  [sym_position] = "position",
  [sym_location_range] = "location_range",
  [sym_location] = "location",
  [sym_declaration] = "declaration",
  [sym_def_aggregate_declaration] = "def_aggregate_declaration",
  [sym_def_fields] = "def_fields",
  [sym_def_field] = "def_field",
  [sym_core_ctype] = "core_ctype",
  [sym_ctype] = "ctype",
  [sym_ctype_star] = "ctype_star",
  [sym_params] = "params",
  [sym_integer_type] = "integer_type",
  [sym_basic_type] = "basic_type",
  [sym_glob_ctype_attribute] = "glob_ctype_attribute",
  [sym_glob_declaration] = "glob_declaration",
  [sym_expr] = "expr",
  [sym_core_type] = "core_type",
  [sym_pexpr] = "pexpr",
  [sym_list_pexpr] = "list_pexpr",
  [sym_pure_memop_op] = "pure_memop_op",
  [sym_memop_op] = "memop_op",
  [sym_pattern] = "pattern",
  [sym_list_pattern] = "list_pattern",
  [sym_name] = "name",
  [sym_core_base_type] = "core_base_type",
  [sym_core_object_type] = "core_object_type",
  [sym_action] = "action",
  [sym_paction] = "paction",
  [sym_string] = "string",
  [sym_cstring] = "cstring",
  [sym_ctor] = "ctor",
  [sym_cabs_id] = "cabs_id",
  [sym_member] = "member",
  [sym_value] = "value",
  [sym_attribute] = "attribute",
  [sym_attribute_pair] = "attribute_pair",
  [sym_proc_declaration] = "proc_declaration",
  [sym_proc_full_declaration] = "proc_full_declaration",
  [sym_proc_forward_declaration] = "proc_forward_declaration",
  [sym_def_declaration] = "def_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_def_fields_repeat1] = "def_fields_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_integer_type_repeat1] = "integer_type_repeat1",
  [aux_sym_expr_repeat1] = "expr_repeat1",
  [aux_sym_expr_repeat2] = "expr_repeat2",
  [aux_sym_expr_repeat3] = "expr_repeat3",
  [aux_sym_expr_repeat4] = "expr_repeat4",
  [aux_sym_pexpr_repeat1] = "pexpr_repeat1",
  [aux_sym_pexpr_repeat2] = "pexpr_repeat2",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_core_base_type_repeat1] = "core_base_type_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_proc_full_declaration_repeat1] = "proc_full_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_filename] = sym_filename,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_location_unknown] = sym_location_unknown,
  [anon_sym_LBRACE_DASH_POUND_LT] = anon_sym_LBRACE_DASH_POUND_LT,
  [anon_sym_GT_POUND_DASH_RBRACE] = anon_sym_GT_POUND_DASH_RBRACE,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_iso_ref] = sym_iso_ref,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_int_const] = sym_int_const,
  [sym_floating_const] = sym_floating_const,
  [sym_sym] = sym_sym,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym__Atomic] = anon_sym__Atomic,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN_STAR_RPAREN] = anon_sym_LPAREN_STAR_RPAREN,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_COMMA2] = anon_sym_COMMA2,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [aux_sym_integer_type_token1] = aux_sym_integer_type_token1,
  [sym_floating_type] = sym_floating_type,
  [anon_sym_ail_ctype] = anon_sym_ail_ctype,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_glob] = anon_sym_glob,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_memop] = anon_sym_memop,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_pcall] = anon_sym_pcall,
  [anon_sym_ccall] = anon_sym_ccall,
  [anon_sym_unseq] = anon_sym_unseq,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_strong] = anon_sym_strong,
  [anon_sym_bound] = anon_sym_bound,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_nd] = anon_sym_nd,
  [anon_sym_par] = anon_sym_par,
  [anon_sym_eff] = anon_sym_eff,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_CivNULLcap] = anon_sym_CivNULLcap,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_array_shift] = anon_sym_array_shift,
  [anon_sym_member_shift] = anon_sym_member_shift,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_cfunction] = anon_sym_cfunction,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_is_scalar] = anon_sym_is_scalar,
  [anon_sym_is_integer] = anon_sym_is_integer,
  [anon_sym_is_signed_LPAREN] = anon_sym_is_signed_LPAREN,
  [anon_sym_is_unsigned_LPAREN] = anon_sym_is_unsigned_LPAREN,
  [anon_sym_are_compatible] = anon_sym_are_compatible,
  [anon_sym_conv_loaded_int] = anon_sym_conv_loaded_int,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DeriveCap] = anon_sym_DeriveCap,
  [aux_sym_pure_memop_op_token1] = aux_sym_pure_memop_op_token1,
  [anon_sym_CapAssignValue] = anon_sym_CapAssignValue,
  [anon_sym_Ptr_tIntValue] = anon_sym_Ptr_tIntValue,
  [anon_sym_PtrEq] = anon_sym_PtrEq,
  [anon_sym_PtrNe] = anon_sym_PtrNe,
  [anon_sym_PtrLt] = anon_sym_PtrLt,
  [anon_sym_PtrGt] = anon_sym_PtrGt,
  [anon_sym_PtrLe] = anon_sym_PtrLe,
  [anon_sym_PtrGe] = anon_sym_PtrGe,
  [anon_sym_Ptrdiff] = anon_sym_Ptrdiff,
  [anon_sym_IntFromPtr] = anon_sym_IntFromPtr,
  [anon_sym_PtrFromInt] = anon_sym_PtrFromInt,
  [anon_sym_PtrValidForDeref] = anon_sym_PtrValidForDeref,
  [anon_sym_PtrWellAligned] = anon_sym_PtrWellAligned,
  [anon_sym_PtrArrayShift] = anon_sym_PtrArrayShift,
  [aux_sym_memop_op_token1] = aux_sym_memop_op_token1,
  [anon_sym_PtrMemberShift] = anon_sym_PtrMemberShift,
  [anon_sym__] = anon_sym__,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_ctype] = anon_sym_ctype,
  [anon_sym_loaded] = anon_sym_loaded,
  [anon_sym_storable] = anon_sym_storable,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_pointer] = anon_sym_pointer,
  [anon_sym_array] = anon_sym_array,
  [sym_memory_order] = sym_memory_order,
  [anon_sym_create_readonly] = anon_sym_create_readonly,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_alloc] = anon_sym_alloc,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_store_lock] = anon_sym_store_lock,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_seq_rmw] = anon_sym_seq_rmw,
  [anon_sym_seq_rmw_with_forward] = anon_sym_seq_rmw_with_forward,
  [anon_sym_rmw] = anon_sym_rmw,
  [anon_sym_fence] = anon_sym_fence,
  [anon_sym_neg] = anon_sym_neg,
  [sym_ub] = sym_ub,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Ivmax] = anon_sym_Ivmax,
  [anon_sym_Ivmin] = anon_sym_Ivmin,
  [anon_sym_Ivsizeof] = anon_sym_Ivsizeof,
  [anon_sym_Ivalignof] = anon_sym_Ivalignof,
  [anon_sym_Specified] = anon_sym_Specified,
  [anon_sym_Unspecified] = anon_sym_Unspecified,
  [anon_sym_Fvfromint] = anon_sym_Fvfromint,
  [anon_sym_Ivfromfloat] = anon_sym_Ivfromfloat,
  [anon_sym_IvCOMPL] = anon_sym_IvCOMPL,
  [anon_sym_IvAND] = anon_sym_IvAND,
  [anon_sym_IvOR] = anon_sym_IvOR,
  [anon_sym_IvXOR] = anon_sym_IvXOR,
  [sym_binary_operator] = sym_binary_operator,
  [sym_bool_literal] = sym_bool_literal,
  [anon_sym_IvMaxAlignment] = anon_sym_IvMaxAlignment,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_Cfunction] = anon_sym_Cfunction,
  [anon_sym_Unit] = anon_sym_Unit,
  [sym_impl] = sym_impl,
  [anon_sym_ailname] = anon_sym_ailname,
  [anon_sym_proc] = anon_sym_proc,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_column] = sym_column,
  [sym_position] = sym_position,
  [sym_location_range] = sym_location_range,
  [sym_location] = sym_location,
  [sym_declaration] = sym_declaration,
  [sym_def_aggregate_declaration] = sym_def_aggregate_declaration,
  [sym_def_fields] = sym_def_fields,
  [sym_def_field] = sym_def_field,
  [sym_core_ctype] = sym_core_ctype,
  [sym_ctype] = sym_ctype,
  [sym_ctype_star] = sym_ctype_star,
  [sym_params] = sym_params,
  [sym_integer_type] = sym_integer_type,
  [sym_basic_type] = sym_basic_type,
  [sym_glob_ctype_attribute] = sym_glob_ctype_attribute,
  [sym_glob_declaration] = sym_glob_declaration,
  [sym_expr] = sym_expr,
  [sym_core_type] = sym_core_type,
  [sym_pexpr] = sym_pexpr,
  [sym_list_pexpr] = sym_list_pexpr,
  [sym_pure_memop_op] = sym_pure_memop_op,
  [sym_memop_op] = sym_memop_op,
  [sym_pattern] = sym_pattern,
  [sym_list_pattern] = sym_list_pattern,
  [sym_name] = sym_name,
  [sym_core_base_type] = sym_core_base_type,
  [sym_core_object_type] = sym_core_object_type,
  [sym_action] = sym_action,
  [sym_paction] = sym_paction,
  [sym_string] = sym_string,
  [sym_cstring] = sym_cstring,
  [sym_ctor] = sym_ctor,
  [sym_cabs_id] = sym_cabs_id,
  [sym_member] = sym_member,
  [sym_value] = sym_value,
  [sym_attribute] = sym_attribute,
  [sym_attribute_pair] = sym_attribute_pair,
  [sym_proc_declaration] = sym_proc_declaration,
  [sym_proc_full_declaration] = sym_proc_full_declaration,
  [sym_proc_forward_declaration] = sym_proc_forward_declaration,
  [sym_def_declaration] = sym_def_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_def_fields_repeat1] = aux_sym_def_fields_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_integer_type_repeat1] = aux_sym_integer_type_repeat1,
  [aux_sym_expr_repeat1] = aux_sym_expr_repeat1,
  [aux_sym_expr_repeat2] = aux_sym_expr_repeat2,
  [aux_sym_expr_repeat3] = aux_sym_expr_repeat3,
  [aux_sym_expr_repeat4] = aux_sym_expr_repeat4,
  [aux_sym_pexpr_repeat1] = aux_sym_pexpr_repeat1,
  [aux_sym_pexpr_repeat2] = aux_sym_pexpr_repeat2,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_core_base_type_repeat1] = aux_sym_core_base_type_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_proc_full_declaration_repeat1] = aux_sym_proc_full_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_location_unknown] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_DASH_POUND_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_POUND_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_iso_ref] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_int_const] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_const] = {
    .visible = true,
    .named = true,
  },
  [sym_sym] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__Atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_floating_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ail_ctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ccall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unseq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_par] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CivNULLcap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cfunction] = {
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
  [anon_sym_is_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_signed_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_unsigned_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are_compatible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conv_loaded_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveCap] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pure_memop_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CapAssignValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptr_tIntValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrEq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrNe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrLt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrGt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrLe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrGe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptrdiff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IntFromPtr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrFromInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrValidForDeref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrWellAligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrArrayShift] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_memop_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PtrMemberShift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [sym_memory_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_create_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_rmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_rmw_with_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [sym_ub] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivmax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivmin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivsizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivalignof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Specified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unspecified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fvfromint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivfromfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvCOMPL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvXOR] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IvMaxAlignment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [sym_impl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ailname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym_position] = {
    .visible = true,
    .named = true,
  },
  [sym_location_range] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_aggregate_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_def_field] = {
    .visible = true,
    .named = true,
  },
  [sym_core_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype_star] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_ctype_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_core_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_pure_memop_op] = {
    .visible = true,
    .named = true,
  },
  [sym_memop_op] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_core_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_core_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_paction] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_cstring] = {
    .visible = true,
    .named = true,
  },
  [sym_ctor] = {
    .visible = true,
    .named = true,
  },
  [sym_cabs_id] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_full_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_forward_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexpr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_base_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_full_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_end = 1,
  field_filename = 2,
  field_start = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_end] = "end",
  [field_filename] = "filename",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_end, 2},
    {field_start, 0},
  [2] =
    {field_filename, 0},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 4,
  [11] = 5,
  [12] = 8,
  [13] = 7,
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
  [35] = 28,
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
  [55] = 15,
  [56] = 33,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
  [62] = 14,
  [63] = 59,
  [64] = 20,
  [65] = 21,
  [66] = 22,
  [67] = 23,
  [68] = 26,
  [69] = 30,
  [70] = 36,
  [71] = 38,
  [72] = 40,
  [73] = 44,
  [74] = 45,
  [75] = 46,
  [76] = 49,
  [77] = 29,
  [78] = 18,
  [79] = 31,
  [80] = 16,
  [81] = 60,
  [82] = 25,
  [83] = 37,
  [84] = 39,
  [85] = 51,
  [86] = 17,
  [87] = 57,
  [88] = 24,
  [89] = 41,
  [90] = 50,
  [91] = 58,
  [92] = 27,
  [93] = 47,
  [94] = 42,
  [95] = 32,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 100,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 101,
  [112] = 112,
  [113] = 113,
  [114] = 108,
  [115] = 115,
  [116] = 116,
  [117] = 112,
  [118] = 110,
  [119] = 99,
  [120] = 115,
  [121] = 105,
  [122] = 104,
  [123] = 123,
  [124] = 124,
  [125] = 113,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 131,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 133,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 144,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 159,
  [162] = 160,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 149,
  [167] = 157,
  [168] = 158,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 149,
  [174] = 172,
  [175] = 175,
  [176] = 170,
  [177] = 177,
  [178] = 152,
  [179] = 147,
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
  [194] = 191,
  [195] = 195,
  [196] = 187,
  [197] = 197,
  [198] = 198,
  [199] = 191,
  [200] = 183,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 193,
  [205] = 201,
  [206] = 184,
  [207] = 186,
  [208] = 190,
  [209] = 209,
  [210] = 210,
  [211] = 189,
  [212] = 195,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 227,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 188,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 238,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 238,
  [256] = 256,
  [257] = 254,
  [258] = 258,
  [259] = 259,
  [260] = 185,
  [261] = 254,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 218,
  [272] = 272,
  [273] = 222,
  [274] = 213,
  [275] = 216,
  [276] = 217,
  [277] = 214,
  [278] = 226,
  [279] = 209,
  [280] = 202,
  [281] = 220,
  [282] = 221,
  [283] = 215,
  [284] = 225,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 224,
  [290] = 210,
  [291] = 291,
  [292] = 223,
  [293] = 219,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 235,
  [310] = 262,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 251,
  [315] = 263,
  [316] = 249,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 306,
  [321] = 259,
  [322] = 322,
  [323] = 301,
  [324] = 267,
  [325] = 307,
  [326] = 326,
  [327] = 268,
  [328] = 269,
  [329] = 250,
  [330] = 304,
  [331] = 242,
  [332] = 244,
  [333] = 243,
  [334] = 303,
  [335] = 245,
  [336] = 252,
  [337] = 337,
  [338] = 253,
  [339] = 239,
  [340] = 241,
  [341] = 341,
  [342] = 234,
  [343] = 311,
  [344] = 300,
  [345] = 227,
  [346] = 311,
  [347] = 318,
  [348] = 326,
  [349] = 349,
  [350] = 350,
  [351] = 319,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 356,
  [371] = 371,
  [372] = 372,
  [373] = 365,
  [374] = 374,
  [375] = 360,
  [376] = 376,
  [377] = 363,
  [378] = 378,
  [379] = 374,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 402,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 403,
  [436] = 406,
  [437] = 411,
  [438] = 415,
  [439] = 439,
  [440] = 428,
  [441] = 431,
  [442] = 434,
  [443] = 439,
  [444] = 444,
  [445] = 445,
  [446] = 444,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 383,
  [454] = 384,
  [455] = 389,
  [456] = 391,
  [457] = 397,
  [458] = 398,
  [459] = 400,
  [460] = 445,
  [461] = 407,
  [462] = 409,
  [463] = 429,
  [464] = 402,
  [465] = 465,
  [466] = 466,
  [467] = 447,
  [468] = 468,
  [469] = 469,
  [470] = 381,
  [471] = 471,
  [472] = 429,
  [473] = 418,
  [474] = 419,
  [475] = 475,
  [476] = 468,
  [477] = 427,
  [478] = 478,
  [479] = 479,
  [480] = 448,
  [481] = 449,
  [482] = 475,
  [483] = 433,
  [484] = 416,
  [485] = 485,
  [486] = 466,
  [487] = 487,
  [488] = 390,
  [489] = 392,
  [490] = 380,
  [491] = 491,
  [492] = 450,
  [493] = 417,
  [494] = 471,
  [495] = 413,
  [496] = 478,
  [497] = 465,
  [498] = 393,
  [499] = 410,
  [500] = 414,
  [501] = 501,
  [502] = 451,
  [503] = 452,
  [504] = 469,
  [505] = 408,
  [506] = 394,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 193,
  [523] = 201,
  [524] = 184,
  [525] = 186,
  [526] = 190,
  [527] = 189,
  [528] = 195,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 510,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 540,
  [547] = 547,
  [548] = 542,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 552,
  [556] = 556,
  [557] = 539,
  [558] = 558,
  [559] = 551,
  [560] = 560,
  [561] = 561,
  [562] = 513,
  [563] = 563,
  [564] = 554,
  [565] = 558,
  [566] = 561,
  [567] = 511,
  [568] = 514,
  [569] = 515,
  [570] = 517,
  [571] = 536,
  [572] = 545,
  [573] = 553,
  [574] = 516,
  [575] = 575,
  [576] = 576,
  [577] = 556,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 585,
  [633] = 633,
  [634] = 634,
  [635] = 611,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 591,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 582,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 582,
  [659] = 659,
  [660] = 654,
  [661] = 585,
  [662] = 592,
  [663] = 645,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 608,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 622,
  [676] = 620,
  [677] = 623,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 649,
  [686] = 583,
  [687] = 687,
  [688] = 617,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 671,
  [693] = 602,
  [694] = 637,
  [695] = 695,
  [696] = 579,
  [697] = 697,
  [698] = 698,
  [699] = 655,
  [700] = 597,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 631,
  [705] = 705,
  [706] = 706,
  [707] = 639,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 594,
  [717] = 717,
  [718] = 718,
  [719] = 601,
  [720] = 590,
  [721] = 627,
  [722] = 690,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 648,
  [729] = 595,
  [730] = 683,
  [731] = 731,
  [732] = 647,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 735,
  [738] = 738,
  [739] = 739,
  [740] = 652,
  [741] = 708,
  [742] = 666,
  [743] = 669,
  [744] = 744,
  [745] = 718,
  [746] = 691,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 689,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 594,
  [755] = 672,
  [756] = 650,
  [757] = 757,
  [758] = 598,
  [759] = 759,
  [760] = 760,
  [761] = 629,
  [762] = 762,
  [763] = 763,
  [764] = 659,
  [765] = 610,
  [766] = 731,
  [767] = 726,
  [768] = 744,
  [769] = 769,
  [770] = 587,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 773,
  [776] = 776,
  [777] = 640,
  [778] = 778,
  [779] = 779,
  [780] = 748,
  [781] = 749,
  [782] = 738,
  [783] = 760,
  [784] = 607,
  [785] = 727,
  [786] = 786,
  [787] = 596,
  [788] = 705,
  [789] = 621,
  [790] = 643,
  [791] = 600,
  [792] = 792,
  [793] = 606,
  [794] = 779,
  [795] = 795,
  [796] = 667,
  [797] = 797,
  [798] = 725,
  [799] = 799,
  [800] = 800,
  [801] = 753,
  [802] = 580,
  [803] = 733,
  [804] = 804,
  [805] = 805,
  [806] = 603,
  [807] = 807,
  [808] = 752,
  [809] = 711,
  [810] = 800,
  [811] = 697,
  [812] = 624,
  [813] = 813,
  [814] = 628,
  [815] = 712,
  [816] = 772,
  [817] = 774,
  [818] = 724,
  [819] = 673,
  [820] = 734,
  [821] = 763,
  [822] = 822,
  [823] = 655,
  [824] = 674,
  [825] = 795,
  [826] = 826,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(860);
      ADVANCE_MAP(
        '"', 14,
        '\'', 1316,
        '(', 1323,
        ')', 1324,
        '*', 1331,
        ',', 1334,
        '-', 1431,
        '.', 1428,
        '/', 1537,
        ':', 874,
        ';', 1406,
        '<', 1534,
        '=', 1382,
        '>', 1535,
        'A', 680,
        'B', 408,
        'C', 123,
        'D', 274,
        'E', 550,
        'F', 128,
        'I', 549,
        'N', 83,
        'P', 480,
        'S', 60,
        'T', 682,
        'U', 536,
        '[', 1320,
        '\\', 40,
        ']', 1321,
        '_', 1467,
        'a', 188,
        'b', 600,
        'c', 124,
        'd', 276,
        'e', 362,
        'f', 285,
        'g', 481,
        'i', 350,
        'k', 413,
        'l', 278,
        'm', 246,
        'n', 216,
        'o', 352,
        'p', 140,
        'r', 247,
        's', 132,
        't', 399,
        'u', 538,
        'v', 601,
        'w', 280,
        '{', 1435,
        '|', 1398,
        '}', 1436,
        '+', 1532,
        '^', 1532,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(871);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(879);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(855);
      if (lookahead == '#') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '}') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '}') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(875);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(492);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1505);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(30);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\'', 1316,
        '(', 1323,
        ')', 1324,
        '*', 1331,
        ',', 1334,
        '-', 28,
        '[', 1319,
        'a', 1242,
        'b', 1197,
        'c', 1289,
        'f', 1130,
        'i', 1180,
        'l', 1206,
        'p', 1209,
        's', 1270,
        'u', 1167,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\'', 1316,
        '(', 1323,
        ')', 1324,
        '*', 1331,
        ',', 1334,
        '-', 28,
        '[', 1319,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\'', 1316,
        '(', 1322,
        ')', 1324,
        '+', 38,
        ',', 1334,
        '-', 1432,
        '.', 850,
        ':', 42,
        '<', 43,
        '=', 1382,
        '>', 11,
        'A', 1226,
        'B', 1075,
        'C', 1048,
        'E', 1155,
        'F', 943,
        'I', 1153,
        'N', 921,
        'P', 1118,
        'S', 905,
        'T', 1228,
        'U', 1146,
        '[', 1320,
        ']', 1321,
        '_', 893,
        'a', 1116,
        'b', 1292,
        'c', 940,
        'e', 1231,
        'i', 1043,
        'l', 1006,
        'm', 997,
        'n', 1186,
        's', 1076,
        'u', 1147,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\'', 1316,
        '(', 1322,
        ')', 1324,
        '+', 38,
        ',', 12,
        '-', 1432,
        '.', 850,
        ':', 41,
        '=', 1381,
        '>', 11,
        'A', 1226,
        'B', 1075,
        'C', 1048,
        'E', 1155,
        'F', 943,
        'I', 1153,
        'N', 921,
        'P', 1118,
        'S', 905,
        'T', 1228,
        'U', 1146,
        '[', 1320,
        ']', 1321,
        '_', 893,
        'a', 1116,
        'b', 1292,
        'c', 940,
        'e', 1231,
        'i', 1043,
        'l', 1006,
        'm', 997,
        'n', 1186,
        's', 1077,
        'u', 1175,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(1441);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(1442);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '(', 1322,
        ')', 1324,
        ',', 1334,
        '-', 1533,
        '/', 1537,
        ':', 41,
        '<', 1535,
        '>', 1535,
        '\\', 40,
        ']', 1321,
        'e', 501,
        'i', 537,
        'o', 352,
        'r', 311,
        't', 399,
        '{', 29,
        '|', 1398,
        '}', 1436,
        '*', 1532,
        '+', 1532,
        '=', 1532,
        '^', 1532,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '(', 1322,
        ')', 1324,
        '-', 28,
        ':', 873,
        'A', 1227,
        'F', 1297,
        'I', 1299,
        'S', 1212,
        'U', 1162,
        '[', 1320,
        ']', 1321,
        '_', 1468,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '(', 1322,
        '-', 28,
        ':', 41,
        '=', 45,
        'A', 1227,
        'F', 1297,
        'I', 1299,
        'S', 1212,
        'U', 1162,
        '[', 1320,
        '_', 1468,
        's', 1287,
        'w', 1024,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(872);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        ')', 1324,
        '-', 28,
        '.', 34,
        '_', 1336,
        'c', 1364,
        'd', 1360,
        'f', 1354,
        'l', 1365,
        's', 1370,
        'u', 1356,
        'v', 1361,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        ')', 1324,
        '-', 28,
        'A', 1271,
        'B', 1075,
        'C', 1071,
        'E', 1155,
        'I', 1154,
        'P', 1118,
        'S', 906,
        '[', 1319,
        'a', 1117,
        'b', 1292,
        'c', 1258,
        's', 1077,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(1332);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(863);
      if (lookahead == 'u') ADVANCE(865);
      if (lookahead == '{') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(863);
      if (lookahead == '{') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '{') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1450);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(1335);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(199);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(733);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(1532);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(1448);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(1448);
      if (lookahead == '=') ADVANCE(890);
      END_STATE();
    case 43:
      if (lookahead == '<') ADVANCE(853);
      END_STATE();
    case 44:
      if (lookahead == '<') ADVANCE(877);
      if (lookahead == 0xa7) ADVANCE(854);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(1399);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(741);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        'A', 69,
        'C', 71,
        'M', 127,
        'O', 77,
        'X', 73,
        'a', 487,
        'f', 711,
        'm', 131,
        's', 410,
      );
      END_STATE();
    case 50:
      ADVANCE_MAP(
        'A', 713,
        'E', 667,
        'F', 716,
        'G', 255,
        'L', 256,
        'M', 283,
        'N', 257,
        'V', 160,
        'W', 335,
        '_', 751,
        'd', 414,
      );
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(512);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(513);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(1526);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(336);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(629);
      END_STATE();
    case 58:
      if (lookahead == 'F') ADVANCE(714);
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 59:
      if (lookahead == 'H') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(566);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(572);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(1541);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(1524);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(201);
      END_STATE();
    case 68:
      if (lookahead == 'M') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(1548);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(778);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(1528);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(1530);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(403);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(404);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'p') ADVANCE(509);
      END_STATE();
    case 83:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 84:
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 'V') ADVANCE(148);
      END_STATE();
    case 86:
      if (lookahead == 'V') ADVANCE(172);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(849);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(851);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(852);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(587);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(737);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(823);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(235);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(207);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(664);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(371);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(632);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(421);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(591);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(734);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(736);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(459);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(469);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(797);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(740);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(743);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(744);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(816);
      if (lookahead == 'h') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(364);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(836);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(830);
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead == 'u') ADVANCE(694);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(785);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(1495);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(1383);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(841);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(494);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(428);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(495);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(498);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(499);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(468);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(1551);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(1492);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(1329);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(815);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(775);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(617);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(621);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(790);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1412);
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1412);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(1400);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(1498);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(1317);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(1409);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(1476);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(1421);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(1547);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(1489);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(1422);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(1516);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(1518);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(1463);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(1500);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(1497);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'k') ADVANCE(561);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(824);
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1394);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1385);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1458);
      if (lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1457);
      if (lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1454);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1474);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1495);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1378);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1547);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1380);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(1452);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1451);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1473);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(647);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'm') ADVANCE(824);
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(1391);
      if (lookahead == 'n') ADVANCE(1390);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(1391);
      if (lookahead == 'n') ADVANCE(805);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(1397);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(882);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(1414);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(1415);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(1547);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(1459);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(1512);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(1514);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(1462);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 363:
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 'w') ADVANCE(450);
      END_STATE();
    case 364:
      if (lookahead == 'f') ADVANCE(718);
      END_STATE();
    case 365:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 366:
      if (lookahead == 'f') ADVANCE(762);
      END_STATE();
    case 367:
      if (lookahead == 'f') ADVANCE(763);
      END_STATE();
    case 368:
      if (lookahead == 'f') ADVANCE(764);
      END_STATE();
    case 369:
      if (lookahead == 'f') ADVANCE(766);
      END_STATE();
    case 370:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 371:
      if (lookahead == 'f') ADVANCE(631);
      END_STATE();
    case 372:
      if (lookahead == 'f') ADVANCE(436);
      END_STATE();
    case 373:
      if (lookahead == 'f') ADVANCE(510);
      END_STATE();
    case 374:
      if (lookahead == 'f') ADVANCE(437);
      END_STATE();
    case 375:
      if (lookahead == 'f') ADVANCE(443);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(1503);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(1407);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(1482);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(570);
      if (lookahead == 'z') ADVANCE(291);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(594);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(544);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(574);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(576);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(578);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(584);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(596);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 398:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(424);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(449);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(453);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(610);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(750);
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(798);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(789);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(821);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(693);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(598);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 470:
      if (lookahead == 'k') ADVANCE(1404);
      END_STATE();
    case 471:
      if (lookahead == 'k') ADVANCE(1496);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 's') ADVANCE(787);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(1494);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(1402);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(1401);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(1489);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(623);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(645);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(825);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(661);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(662);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(373);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(606);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(452);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(1390);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(1411);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(1393);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(1510);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(1547);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(1471);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(1543);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(1433);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(747);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(781);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 't') ADVANCE(843);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(805);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(625);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead == 't') ADVANCE(1469);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(1386);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(1449);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(1419);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(497);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(709);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 666:
      if (lookahead == 'q') ADVANCE(109);
      END_STATE();
    case 667:
      if (lookahead == 'q') ADVANCE(1453);
      END_STATE();
    case 668:
      if (lookahead == 'q') ADVANCE(1403);
      END_STATE();
    case 669:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 670:
      if (lookahead == 'q') ADVANCE(105);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(1413);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(1417);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(1547);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(1484);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(1437);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(1460);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(1439);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(1480);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(807);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(1547);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(787);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(756);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(1429);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(1545);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(1325);
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(1547);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(1489);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(1520);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(1461);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(1522);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(1423);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(1425);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(1464);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(1539);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(1466);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 806:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 807:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 808:
      if (lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 809:
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 810:
      if (lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 811:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 812:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 813:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 814:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 815:
      if (lookahead == 'u') ADVANCE(801);
      END_STATE();
    case 816:
      if (lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 817:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 818:
      if (lookahead == 'v') ADVANCE(439);
      END_STATE();
    case 819:
      if (lookahead == 'v') ADVANCE(254);
      END_STATE();
    case 820:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 821:
      if (lookahead == 'v') ADVANCE(261);
      END_STATE();
    case 822:
      if (lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 823:
      if (lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 824:
      if (lookahead == 'w') ADVANCE(1501);
      END_STATE();
    case 825:
      if (lookahead == 'w') ADVANCE(1499);
      END_STATE();
    case 826:
      if (lookahead == 'w') ADVANCE(553);
      END_STATE();
    case 827:
      if (lookahead == 'w') ADVANCE(430);
      END_STATE();
    case 828:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 829:
      if (lookahead == 'x') ADVANCE(1508);
      END_STATE();
    case 830:
      if (lookahead == 'x') ADVANCE(1547);
      END_STATE();
    case 831:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 832:
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 833:
      if (lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 834:
      if (lookahead == 'y') ADVANCE(1506);
      END_STATE();
    case 835:
      if (lookahead == 'y') ADVANCE(1487);
      END_STATE();
    case 836:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 837:
      if (lookahead == 'y') ADVANCE(1490);
      END_STATE();
    case 838:
      if (lookahead == 'y') ADVANCE(1486);
      END_STATE();
    case 839:
      if (lookahead == 'y') ADVANCE(654);
      END_STATE();
    case 840:
      if (lookahead == 'y') ADVANCE(656);
      END_STATE();
    case 841:
      if (lookahead == 'y') ADVANCE(782);
      END_STATE();
    case 842:
      if (lookahead == 'y') ADVANCE(658);
      END_STATE();
    case 843:
      if (lookahead == 'y') ADVANCE(657);
      END_STATE();
    case 844:
      if (lookahead == 'y') ADVANCE(659);
      END_STATE();
    case 845:
      if (lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 846:
      if (lookahead == 'z') ADVANCE(291);
      END_STATE();
    case 847:
      if (lookahead == 'z') ADVANCE(298);
      END_STATE();
    case 848:
      if (lookahead == '}') ADVANCE(878);
      END_STATE();
    case 849:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1532);
      END_STATE();
    case 850:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      END_STATE();
    case 851:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1465);
      END_STATE();
    case 852:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1549);
      END_STATE();
    case 853:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 854:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 855:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 856:
      if (eof) ADVANCE(860);
      ADVANCE_MAP(
        '\'', 1316,
        '(', 1323,
        ')', 1324,
        '*', 1331,
        ',', 1334,
        '-', 28,
        ':', 873,
        '[', 1319,
        'd', 275,
        'g', 481,
        'p', 686,
        'r', 333,
        '{', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(856);
      END_STATE();
    case 857:
      if (eof) ADVANCE(860);
      ADVANCE_MAP(
        '(', 1322,
        ')', 1324,
        ',', 1334,
        '-', 1533,
        '.', 1427,
        '/', 1537,
        ':', 42,
        '<', 1535,
        '=', 1536,
        '>', 1535,
        'A', 768,
        'B', 408,
        'C', 398,
        'E', 550,
        'I', 592,
        'P', 479,
        'S', 59,
        '[', 1319,
        '\\', 40,
        ']', 1321,
        'a', 472,
        'b', 639,
        'c', 125,
        'd', 275,
        'f', 286,
        'g', 481,
        'i', 351,
        'k', 413,
        'l', 279,
        'm', 306,
        'n', 215,
        'p', 140,
        'r', 312,
        's', 133,
        'u', 551,
        '{', 29,
        '}', 1436,
        '*', 1532,
        '+', 1532,
        '^', 1532,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(892);
      END_STATE();
    case 858:
      if (eof) ADVANCE(860);
      ADVANCE_MAP(
        '(', 1322,
        ')', 1324,
        ',', 1334,
        '-', 1533,
        '/', 1537,
        ':', 41,
        '<', 1535,
        '>', 1535,
        '[', 1319,
        '\\', 40,
        ']', 1321,
        'a', 715,
        'b', 630,
        'c', 802,
        'd', 275,
        'e', 361,
        'f', 511,
        'g', 481,
        'i', 597,
        'l', 643,
        'o', 352,
        'p', 605,
        'r', 311,
        's', 772,
        't', 399,
        'u', 569,
        '{', 29,
        '|', 1398,
        '}', 1436,
        '*', 1532,
        '+', 1532,
        '=', 1532,
        '^', 1532,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(858);
      END_STATE();
    case 859:
      if (eof) ADVANCE(860);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1021);
      if (lookahead == 'g') ADVANCE(1121);
      if (lookahead == 'p') ADVANCE(1236);
      if (lookahead == '{') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(859);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '\n') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == ' ') ADVANCE(492);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '-') ADVANCE(861);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 'k') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 'n') ADVANCE(864);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 'n') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 'n') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 'o') ADVANCE(869);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 'w') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_filename);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '_') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(871);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1448);
      if (lookahead == '=') ADVANCE(890);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_location_unknown);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND_LT);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_GT_POUND_DASH_RBRACE);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_single_line_comment);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_multiline_comment);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_iso_ref);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(895);
      if (lookahead == '_') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(893);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 913,
        'C', 915,
        'M', 941,
        'O', 918,
        'X', 916,
        'a', 1128,
        'f', 1240,
        'm', 945,
        's', 1099,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 913,
        'C', 915,
        'O', 918,
        'X', 916,
        'a', 1128,
        'f', 1240,
        'm', 945,
        's', 1099,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'D') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(920);
      if (lookahead == 'p') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'M') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'P') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1251);
      if (lookahead == 'f') ADVANCE(1296);
      if (lookahead == 'o') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1127);
      if (lookahead == 'v') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1305);
      if (lookahead == 'i') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'i') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1018);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == 'i') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == 'r') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1392);
      if (lookahead == 's') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1293);
      if (lookahead == 'h') ADVANCE(957);
      if (lookahead == 'i') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1091);
      if (lookahead == 'w') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1312);
      if (lookahead == 't') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1262);
      if (lookahead == 's') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1178);
      if (lookahead == 's') ADVANCE(971);
      if (lookahead == 'u') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'k') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1078);
      if (lookahead == 'r') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1274);
      if (lookahead == 'v') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1149);
      if (lookahead == 't') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1230);
      if (lookahead == 't') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1315);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1315);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1447);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'A') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == '_') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'b') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'g') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1343);
      if (lookahead == 'l') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'm') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'r') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 's') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1399);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_is_signed_LPAREN);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_is_unsigned_LPAREN);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1450);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_memop_op_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1465);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(892);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(724);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(717);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(827);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == '>') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(853);
      if (lookahead == '=') ADVANCE(1532);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1532);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1399);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1532);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1548);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1549);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 857},
  [97] = {.lex_state = 857},
  [98] = {.lex_state = 857},
  [99] = {.lex_state = 857},
  [100] = {.lex_state = 857},
  [101] = {.lex_state = 857},
  [102] = {.lex_state = 857},
  [103] = {.lex_state = 857},
  [104] = {.lex_state = 857},
  [105] = {.lex_state = 857},
  [106] = {.lex_state = 857},
  [107] = {.lex_state = 857},
  [108] = {.lex_state = 857},
  [109] = {.lex_state = 857},
  [110] = {.lex_state = 857},
  [111] = {.lex_state = 857},
  [112] = {.lex_state = 857},
  [113] = {.lex_state = 857},
  [114] = {.lex_state = 857},
  [115] = {.lex_state = 857},
  [116] = {.lex_state = 857},
  [117] = {.lex_state = 857},
  [118] = {.lex_state = 857},
  [119] = {.lex_state = 857},
  [120] = {.lex_state = 857},
  [121] = {.lex_state = 857},
  [122] = {.lex_state = 857},
  [123] = {.lex_state = 857},
  [124] = {.lex_state = 857},
  [125] = {.lex_state = 857},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 858},
  [144] = {.lex_state = 858},
  [145] = {.lex_state = 858},
  [146] = {.lex_state = 858},
  [147] = {.lex_state = 858},
  [148] = {.lex_state = 858},
  [149] = {.lex_state = 858},
  [150] = {.lex_state = 858},
  [151] = {.lex_state = 858},
  [152] = {.lex_state = 858},
  [153] = {.lex_state = 858},
  [154] = {.lex_state = 858},
  [155] = {.lex_state = 858},
  [156] = {.lex_state = 858},
  [157] = {.lex_state = 858},
  [158] = {.lex_state = 858},
  [159] = {.lex_state = 858},
  [160] = {.lex_state = 858},
  [161] = {.lex_state = 858},
  [162] = {.lex_state = 858},
  [163] = {.lex_state = 858},
  [164] = {.lex_state = 25},
  [165] = {.lex_state = 858},
  [166] = {.lex_state = 858},
  [167] = {.lex_state = 858},
  [168] = {.lex_state = 858},
  [169] = {.lex_state = 858},
  [170] = {.lex_state = 858},
  [171] = {.lex_state = 858},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 858},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 858},
  [176] = {.lex_state = 858},
  [177] = {.lex_state = 858},
  [178] = {.lex_state = 858},
  [179] = {.lex_state = 858},
  [180] = {.lex_state = 858},
  [181] = {.lex_state = 25},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 857},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 857},
  [187] = {.lex_state = 857},
  [188] = {.lex_state = 22},
  [189] = {.lex_state = 857},
  [190] = {.lex_state = 857},
  [191] = {.lex_state = 25},
  [192] = {.lex_state = 25},
  [193] = {.lex_state = 857},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 857},
  [196] = {.lex_state = 857},
  [197] = {.lex_state = 25},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 857},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 22},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 22},
  [207] = {.lex_state = 22},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 22},
  [210] = {.lex_state = 22},
  [211] = {.lex_state = 22},
  [212] = {.lex_state = 22},
  [213] = {.lex_state = 22},
  [214] = {.lex_state = 22},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 22},
  [217] = {.lex_state = 22},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 22},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 22},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 858},
  [233] = {.lex_state = 856},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 858},
  [237] = {.lex_state = 859},
  [238] = {.lex_state = 857},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 857},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 857},
  [255] = {.lex_state = 857},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 857},
  [258] = {.lex_state = 859},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 858},
  [261] = {.lex_state = 857},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 858},
  [272] = {.lex_state = 18},
  [273] = {.lex_state = 858},
  [274] = {.lex_state = 858},
  [275] = {.lex_state = 858},
  [276] = {.lex_state = 858},
  [277] = {.lex_state = 858},
  [278] = {.lex_state = 858},
  [279] = {.lex_state = 858},
  [280] = {.lex_state = 858},
  [281] = {.lex_state = 858},
  [282] = {.lex_state = 858},
  [283] = {.lex_state = 858},
  [284] = {.lex_state = 858},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 18},
  [287] = {.lex_state = 18},
  [288] = {.lex_state = 18},
  [289] = {.lex_state = 858},
  [290] = {.lex_state = 858},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 858},
  [293] = {.lex_state = 858},
  [294] = {.lex_state = 18},
  [295] = {.lex_state = 18},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 18},
  [298] = {.lex_state = 858},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 858},
  [301] = {.lex_state = 858},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 858},
  [304] = {.lex_state = 858},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 858},
  [307] = {.lex_state = 858},
  [308] = {.lex_state = 859},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 859},
  [318] = {.lex_state = 858},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 858},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 858},
  [323] = {.lex_state = 858},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 858},
  [326] = {.lex_state = 858},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 858},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 858},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 858},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 16},
  [344] = {.lex_state = 858},
  [345] = {.lex_state = 859},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 858},
  [348] = {.lex_state = 858},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 856},
  [351] = {.lex_state = 16},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 858},
  [355] = {.lex_state = 858},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 16},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 858},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 858},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 858},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 31},
  [373] = {.lex_state = 858},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 858},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 858},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 858},
  [391] = {.lex_state = 858},
  [392] = {.lex_state = 858},
  [393] = {.lex_state = 858},
  [394] = {.lex_state = 858},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 858},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 858},
  [408] = {.lex_state = 858},
  [409] = {.lex_state = 858},
  [410] = {.lex_state = 858},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 858},
  [414] = {.lex_state = 858},
  [415] = {.lex_state = 858},
  [416] = {.lex_state = 858},
  [417] = {.lex_state = 858},
  [418] = {.lex_state = 858},
  [419] = {.lex_state = 26},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 22},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 858},
  [432] = {.lex_state = 857},
  [433] = {.lex_state = 858},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 858},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 22},
  [441] = {.lex_state = 858},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 858},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 858},
  [447] = {.lex_state = 858},
  [448] = {.lex_state = 857},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 858},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 858},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 858},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 858},
  [462] = {.lex_state = 858},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 858},
  [466] = {.lex_state = 858},
  [467] = {.lex_state = 858},
  [468] = {.lex_state = 858},
  [469] = {.lex_state = 858},
  [470] = {.lex_state = 858},
  [471] = {.lex_state = 26},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 858},
  [474] = {.lex_state = 26},
  [475] = {.lex_state = 858},
  [476] = {.lex_state = 858},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 22},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 857},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 858},
  [483] = {.lex_state = 858},
  [484] = {.lex_state = 858},
  [485] = {.lex_state = 26},
  [486] = {.lex_state = 858},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 858},
  [489] = {.lex_state = 858},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 858},
  [493] = {.lex_state = 858},
  [494] = {.lex_state = 26},
  [495] = {.lex_state = 858},
  [496] = {.lex_state = 22},
  [497] = {.lex_state = 858},
  [498] = {.lex_state = 858},
  [499] = {.lex_state = 858},
  [500] = {.lex_state = 858},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 858},
  [505] = {.lex_state = 858},
  [506] = {.lex_state = 858},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 857},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 19},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 26},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 857},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 19},
  [523] = {.lex_state = 19},
  [524] = {.lex_state = 19},
  [525] = {.lex_state = 19},
  [526] = {.lex_state = 19},
  [527] = {.lex_state = 19},
  [528] = {.lex_state = 19},
  [529] = {.lex_state = 26},
  [530] = {.lex_state = 24},
  [531] = {.lex_state = 26},
  [532] = {.lex_state = 19},
  [533] = {.lex_state = 857},
  [534] = {.lex_state = 19},
  [535] = {.lex_state = 19},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 26},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 24},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 24},
  [545] = {.lex_state = 19},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 32},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 19},
  [552] = {.lex_state = 857},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 857},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 26},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 19},
  [560] = {.lex_state = 18},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 26},
  [563] = {.lex_state = 24},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 19},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 19},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 857},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 23},
  [581] = {.lex_state = 18},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 23},
  [587] = {.lex_state = 23},
  [588] = {.lex_state = 26},
  [589] = {.lex_state = 18},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 23},
  [592] = {.lex_state = 23},
  [593] = {.lex_state = 19},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 23},
  [598] = {.lex_state = 26},
  [599] = {.lex_state = 18},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 26},
  [605] = {.lex_state = 23},
  [606] = {.lex_state = 26},
  [607] = {.lex_state = 26},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 18},
  [610] = {.lex_state = 23},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 19},
  [613] = {.lex_state = 26},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 19},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 23},
  [628] = {.lex_state = 23},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 23},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 857},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 23},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 23},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 26},
  [641] = {.lex_state = 23},
  [642] = {.lex_state = 18},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 23},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 18},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 26},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 26},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 18},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 23},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 23},
  [671] = {.lex_state = 18},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 26},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 857},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 23},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 24},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 857},
  [692] = {.lex_state = 18},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 857},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 26},
  [700] = {.lex_state = 23},
  [701] = {.lex_state = 23},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 23},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 18},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 23},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 18},
  [714] = {.lex_state = 26},
  [715] = {.lex_state = 857},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 23},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 18},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 26},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 18},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 19},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 857},
  [747] = {.lex_state = 26},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 24},
  [751] = {.lex_state = 33},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 26},
  [759] = {.lex_state = 26},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 23},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 26},
  [770] = {.lex_state = 23},
  [771] = {.lex_state = 18},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 26},
  [778] = {.lex_state = 26},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 26},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 26},
  [793] = {.lex_state = 26},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 26},
  [798] = {.lex_state = 18},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 26},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 23},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 18},
  [805] = {.lex_state = 23},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 26},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 23},
  [814] = {.lex_state = 23},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 23},
  [823] = {.lex_state = 26},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_location] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_line_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_location_unknown] = ACTIONS(1),
    [anon_sym_LBRACE_DASH_POUND_LT] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
    [sym_iso_ref] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_int_const] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym__Atomic] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_floating_type] = ACTIONS(1),
    [anon_sym_ail_ctype] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_glob] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_memop] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_pcall] = ACTIONS(1),
    [anon_sym_ccall] = ACTIONS(1),
    [anon_sym_unseq] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_strong] = ACTIONS(1),
    [anon_sym_bound] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_nd] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_eff] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_CivNULLcap] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_array_shift] = ACTIONS(1),
    [anon_sym_member_shift] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_cfunction] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_is_scalar] = ACTIONS(1),
    [anon_sym_is_integer] = ACTIONS(1),
    [anon_sym_is_signed_LPAREN] = ACTIONS(1),
    [anon_sym_is_unsigned_LPAREN] = ACTIONS(1),
    [anon_sym_are_compatible] = ACTIONS(1),
    [anon_sym_conv_loaded_int] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DeriveCap] = ACTIONS(1),
    [anon_sym_CapAssignValue] = ACTIONS(1),
    [anon_sym_Ptr_tIntValue] = ACTIONS(1),
    [anon_sym_PtrEq] = ACTIONS(1),
    [anon_sym_PtrNe] = ACTIONS(1),
    [anon_sym_PtrLt] = ACTIONS(1),
    [anon_sym_PtrGt] = ACTIONS(1),
    [anon_sym_PtrLe] = ACTIONS(1),
    [anon_sym_PtrGe] = ACTIONS(1),
    [anon_sym_Ptrdiff] = ACTIONS(1),
    [anon_sym_IntFromPtr] = ACTIONS(1),
    [anon_sym_PtrFromInt] = ACTIONS(1),
    [anon_sym_PtrValidForDeref] = ACTIONS(1),
    [anon_sym_PtrWellAligned] = ACTIONS(1),
    [anon_sym_PtrArrayShift] = ACTIONS(1),
    [aux_sym_memop_op_token1] = ACTIONS(1),
    [anon_sym_PtrMemberShift] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_ctype] = ACTIONS(1),
    [anon_sym_loaded] = ACTIONS(1),
    [anon_sym_storable] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_pointer] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [sym_memory_order] = ACTIONS(1),
    [anon_sym_create_readonly] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_alloc] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_store_lock] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_seq_rmw] = ACTIONS(1),
    [anon_sym_seq_rmw_with_forward] = ACTIONS(1),
    [anon_sym_rmw] = ACTIONS(1),
    [anon_sym_fence] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [sym_ub] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Ivmax] = ACTIONS(1),
    [anon_sym_Ivmin] = ACTIONS(1),
    [anon_sym_Ivsizeof] = ACTIONS(1),
    [anon_sym_Ivalignof] = ACTIONS(1),
    [anon_sym_Specified] = ACTIONS(1),
    [anon_sym_Unspecified] = ACTIONS(1),
    [anon_sym_Fvfromint] = ACTIONS(1),
    [anon_sym_Ivfromfloat] = ACTIONS(1),
    [anon_sym_IvCOMPL] = ACTIONS(1),
    [anon_sym_IvAND] = ACTIONS(1),
    [anon_sym_IvOR] = ACTIONS(1),
    [anon_sym_IvXOR] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [sym_bool_literal] = ACTIONS(1),
    [anon_sym_IvMaxAlignment] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_Cfunction] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [sym_impl] = ACTIONS(1),
    [anon_sym_ailname] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(786),
    [sym_location] = STATE(1),
    [sym_declaration] = STATE(366),
    [sym_def_aggregate_declaration] = STATE(378),
    [sym_glob_declaration] = STATE(378),
    [sym_proc_declaration] = STATE(378),
    [sym_proc_full_declaration] = STATE(353),
    [sym_proc_forward_declaration] = STATE(353),
    [sym_def_declaration] = STATE(378),
    [aux_sym_source_file_repeat1] = STATE(228),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACE_DASH_POUND_LT] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
    [sym_iso_ref] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_glob] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(2), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(348), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [122] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(65), 1,
      anon_sym_struct,
    ACTIONS(67), 1,
      anon_sym_union,
    STATE(3), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(326), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [244] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(323), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [363] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(330), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [482] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(318), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [601] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(325), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [720] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(320), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [839] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(347), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [958] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(301), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1077] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(304), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1196] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(306), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1315] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(307), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1434] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(14), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(483), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1550] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_memop,
    ACTIONS(101), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_case,
    ACTIONS(107), 1,
      anon_sym_undef,
    ACTIONS(109), 1,
      anon_sym_error,
    ACTIONS(111), 1,
      anon_sym_CivNULLcap,
    ACTIONS(113), 1,
      anon_sym_array_shift,
    ACTIONS(115), 1,
      anon_sym_member_shift,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_are_compatible,
    ACTIONS(125), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(127), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(129), 1,
      anon_sym_NULL,
    ACTIONS(131), 1,
      anon_sym_Cfunction,
    STATE(15), 1,
      sym_location,
    STATE(276), 1,
      sym_pexpr,
    STATE(279), 1,
      sym_core_ctype,
    ACTIONS(91), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(290), 2,
      sym_list_pexpr,
      sym_value,
    STATE(608), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(117), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(89), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1666] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(16), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(475), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1782] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(17), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(417), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1898] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(18), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(418), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2014] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(19), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(341), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2130] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(20), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(344), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2246] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(21), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(428), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2362] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(22), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(431), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2478] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(23), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(446), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2594] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(24), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(465), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2710] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(25), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(466), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2826] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(26), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(467), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2942] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(27), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(469), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3058] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(28), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(470), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3174] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(29), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(476), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3290] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(30), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(492), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3406] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(31), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(496), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3522] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_memop,
    ACTIONS(101), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_case,
    ACTIONS(107), 1,
      anon_sym_undef,
    ACTIONS(109), 1,
      anon_sym_error,
    ACTIONS(111), 1,
      anon_sym_CivNULLcap,
    ACTIONS(113), 1,
      anon_sym_array_shift,
    ACTIONS(115), 1,
      anon_sym_member_shift,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_are_compatible,
    ACTIONS(125), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(127), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(129), 1,
      anon_sym_NULL,
    ACTIONS(131), 1,
      anon_sym_Cfunction,
    STATE(32), 1,
      sym_location,
    STATE(277), 1,
      sym_pexpr,
    STATE(279), 1,
      sym_core_ctype,
    ACTIONS(91), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(290), 2,
      sym_list_pexpr,
      sym_value,
    STATE(608), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(117), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(89), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3638] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_memop,
    ACTIONS(101), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_case,
    ACTIONS(107), 1,
      anon_sym_undef,
    ACTIONS(109), 1,
      anon_sym_error,
    ACTIONS(111), 1,
      anon_sym_CivNULLcap,
    ACTIONS(113), 1,
      anon_sym_array_shift,
    ACTIONS(115), 1,
      anon_sym_member_shift,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_are_compatible,
    ACTIONS(125), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(127), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(129), 1,
      anon_sym_NULL,
    ACTIONS(131), 1,
      anon_sym_Cfunction,
    STATE(33), 1,
      sym_location,
    STATE(273), 1,
      sym_pexpr,
    STATE(279), 1,
      sym_core_ctype,
    ACTIONS(91), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(290), 2,
      sym_list_pexpr,
      sym_value,
    STATE(608), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(117), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(89), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3754] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(34), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(322), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3870] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(35), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(381), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3986] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(36), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(325), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4102] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(37), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(390), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4218] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(38), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(391), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4334] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(39), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(392), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4450] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(40), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(373), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4566] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(41), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(393), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4682] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(42), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(394), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4798] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(43), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(368), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4914] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(44), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(398), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5030] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(45), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(407), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5146] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(46), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(363), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5262] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(47), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(408), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5378] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(48), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(354), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5494] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(49), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(409), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5610] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(50), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(410), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5726] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(51), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(303), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5842] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(52), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(355), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5958] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_memop,
    ACTIONS(101), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_case,
    ACTIONS(107), 1,
      anon_sym_undef,
    ACTIONS(109), 1,
      anon_sym_error,
    ACTIONS(111), 1,
      anon_sym_CivNULLcap,
    ACTIONS(113), 1,
      anon_sym_array_shift,
    ACTIONS(115), 1,
      anon_sym_member_shift,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_are_compatible,
    ACTIONS(125), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(127), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(129), 1,
      anon_sym_NULL,
    ACTIONS(131), 1,
      anon_sym_Cfunction,
    STATE(53), 1,
      sym_location,
    STATE(279), 1,
      sym_core_ctype,
    STATE(298), 1,
      sym_pexpr,
    ACTIONS(91), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(290), 2,
      sym_list_pexpr,
      sym_value,
    STATE(608), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(117), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(89), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6074] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(54), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(216), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6190] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(55), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(217), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6306] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(56), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(222), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6422] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(57), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(413), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6538] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(58), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(414), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6654] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(59), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(415), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6770] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(60), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(416), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6886] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_memop,
    ACTIONS(101), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_case,
    ACTIONS(107), 1,
      anon_sym_undef,
    ACTIONS(109), 1,
      anon_sym_error,
    ACTIONS(111), 1,
      anon_sym_CivNULLcap,
    ACTIONS(113), 1,
      anon_sym_array_shift,
    ACTIONS(115), 1,
      anon_sym_member_shift,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_are_compatible,
    ACTIONS(125), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(127), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(129), 1,
      anon_sym_NULL,
    ACTIONS(131), 1,
      anon_sym_Cfunction,
    STATE(61), 1,
      sym_location,
    STATE(275), 1,
      sym_pexpr,
    STATE(279), 1,
      sym_core_ctype,
    ACTIONS(91), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(290), 2,
      sym_list_pexpr,
      sym_value,
    STATE(608), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(117), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(89), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7002] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(62), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(433), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7118] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(63), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(438), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7234] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(64), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(300), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7350] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(65), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(440), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7466] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(66), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(441), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7582] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(67), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(444), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7698] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(68), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(447), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7814] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(69), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(450), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7930] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(70), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(307), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8046] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(71), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(456), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8162] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(72), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(365), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8278] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(73), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(458), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8394] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(74), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(461), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8510] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(75), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(377), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8626] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(76), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(462), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8742] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(77), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(468), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8858] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(78), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(473), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [8974] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(79), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(478), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9090] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(80), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(482), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9206] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(81), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(484), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9322] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(82), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(486), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9438] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(83), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(488), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9554] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(84), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(489), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9670] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(85), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(334), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9786] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(86), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(493), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9902] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(87), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(495), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10018] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(88), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(497), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10134] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(89), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(498), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10250] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(90), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(499), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10366] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(91), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(500), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10482] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(92), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(504), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10598] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(93), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(505), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10714] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(94), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(506), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10830] = 30,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_memop,
    ACTIONS(31), 1,
      anon_sym_let,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_case,
    ACTIONS(37), 1,
      anon_sym_undef,
    ACTIONS(39), 1,
      anon_sym_error,
    ACTIONS(41), 1,
      anon_sym_CivNULLcap,
    ACTIONS(43), 1,
      anon_sym_array_shift,
    ACTIONS(45), 1,
      anon_sym_member_shift,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      anon_sym_are_compatible,
    ACTIONS(55), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(57), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(63), 1,
      anon_sym_Cfunction,
    STATE(95), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(214), 1,
      sym_pexpr,
    ACTIONS(21), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(668), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(47), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(19), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [10946] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(96), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(360), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11047] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(375), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11148] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(98), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(312), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11246] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(99), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(243), 1,
      sym_expr,
    STATE(244), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11344] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(100), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(542), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11442] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(101), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    STATE(573), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11540] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(102), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(349), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11638] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(103), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(352), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11736] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(104), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(253), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11834] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(105), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(239), 1,
      sym_expr,
    STATE(244), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11932] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(106), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(305), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12030] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(107), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(548), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12128] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(108), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(262), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12226] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(109), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(302), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12324] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(110), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(268), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12422] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(111), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    STATE(553), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12520] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(112), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    STATE(556), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12618] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(113), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(510), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12716] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(114), 1,
      sym_location,
    STATE(310), 1,
      sym_expr,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12814] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(115), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(242), 1,
      sym_expr,
    STATE(244), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12912] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(116), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    STATE(405), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13010] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(117), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    STATE(577), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13108] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(118), 1,
      sym_location,
    STATE(327), 1,
      sym_expr,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13206] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(119), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(333), 1,
      sym_expr,
    STATE(342), 1,
      sym_paction,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13304] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(120), 1,
      sym_location,
    STATE(331), 1,
      sym_expr,
    STATE(332), 1,
      sym_action,
    STATE(342), 1,
      sym_paction,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13402] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(121), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(339), 1,
      sym_expr,
    STATE(342), 1,
      sym_paction,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13500] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_pure,
    ACTIONS(191), 1,
      anon_sym_memop,
    ACTIONS(193), 1,
      anon_sym_let,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_case,
    ACTIONS(199), 1,
      anon_sym_pcall,
    ACTIONS(201), 1,
      anon_sym_ccall,
    ACTIONS(205), 1,
      anon_sym_bound,
    ACTIONS(207), 1,
      anon_sym_save,
    ACTIONS(209), 1,
      anon_sym_run,
    ACTIONS(211), 1,
      anon_sym_create_readonly,
    ACTIONS(213), 1,
      anon_sym_create,
    ACTIONS(215), 1,
      anon_sym_alloc,
    ACTIONS(217), 1,
      anon_sym_free,
    ACTIONS(219), 1,
      anon_sym_kill,
    ACTIONS(221), 1,
      anon_sym_store,
    ACTIONS(223), 1,
      anon_sym_store_lock,
    ACTIONS(225), 1,
      anon_sym_load,
    ACTIONS(227), 1,
      anon_sym_seq_rmw,
    ACTIONS(229), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(231), 1,
      anon_sym_rmw,
    ACTIONS(233), 1,
      anon_sym_fence,
    ACTIONS(235), 1,
      anon_sym_neg,
    STATE(122), 1,
      sym_location,
    STATE(332), 1,
      sym_action,
    STATE(338), 1,
      sym_expr,
    STATE(342), 1,
      sym_paction,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13598] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(123), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(387), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13696] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(124), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(313), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13794] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_pure,
    ACTIONS(139), 1,
      anon_sym_memop,
    ACTIONS(141), 1,
      anon_sym_let,
    ACTIONS(143), 1,
      anon_sym_if,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(147), 1,
      anon_sym_pcall,
    ACTIONS(149), 1,
      anon_sym_ccall,
    ACTIONS(153), 1,
      anon_sym_bound,
    ACTIONS(155), 1,
      anon_sym_save,
    ACTIONS(157), 1,
      anon_sym_run,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    ACTIONS(183), 1,
      anon_sym_neg,
    STATE(125), 1,
      sym_location,
    STATE(234), 1,
      sym_paction,
    STATE(244), 1,
      sym_action,
    STATE(537), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13892] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(126), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(511), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(243), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [13945] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(567), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(247), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [13998] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(128), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(370), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14050] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(371), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14102] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(356), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14154] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(131), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(551), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14203] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(132), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(563), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14252] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(545), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14301] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(134), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(544), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14350] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(135), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(560), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14399] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(136), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(559), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14448] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(137), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(358), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14497] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(138), 1,
      sym_location,
    STATE(291), 1,
      sym_pattern,
    STATE(297), 1,
      sym_list_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14546] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(139), 1,
      sym_location,
    STATE(291), 1,
      sym_pattern,
    STATE(297), 1,
      sym_list_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14595] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(140), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(572), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(237), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14644] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(141), 1,
      sym_location,
    STATE(297), 1,
      sym_list_pattern,
    STATE(364), 1,
      sym_pattern,
    STATE(681), 1,
      sym_ctor,
    ACTIONS(249), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(59), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [14693] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(263), 1,
      sym_sym,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym_loaded,
    ACTIONS(277), 1,
      anon_sym_array,
    STATE(142), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(425), 1,
      sym_core_base_type,
    ACTIONS(261), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(275), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(271), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14744] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_eff,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(143), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(518), 1,
      sym_core_type,
    STATE(695), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14795] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(463), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14843] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(429), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14891] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(472), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14939] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(147), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(294), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14984] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(148), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(646), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15029] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(149), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(653), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15074] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(150), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(771), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15119] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(151), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(512), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15164] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(725), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15209] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(280), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15254] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(154), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(715), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15299] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(155), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(804), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15344] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_loaded,
    ACTIONS(309), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_location,
    STATE(202), 1,
      sym_core_base_type,
    STATE(204), 1,
      sym_core_object_type,
    ACTIONS(297), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(307), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(303), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15389] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(157), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(296), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15434] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(158), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(299), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15479] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(159), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(295), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15524] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(160), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(286), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15569] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_loaded,
    ACTIONS(323), 1,
      anon_sym_array,
    STATE(161), 1,
      sym_location,
    STATE(295), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(311), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(321), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(317), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15614] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_loaded,
    ACTIONS(323), 1,
      anon_sym_array,
    STATE(162), 1,
      sym_location,
    STATE(286), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(311), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(321), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(317), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15659] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(163), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(589), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15704] = 15,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(164), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(265), 1,
      sym_ctype,
    STATE(698), 1,
      sym_params,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [15755] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(165), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(396), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15800] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(166), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(582), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15845] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_loaded,
    ACTIONS(323), 1,
      anon_sym_array,
    STATE(167), 1,
      sym_location,
    STATE(296), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(311), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(321), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(317), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15890] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_loaded,
    ACTIONS(323), 1,
      anon_sym_array,
    STATE(168), 1,
      sym_location,
    STATE(299), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(311), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(321), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(317), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15935] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(169), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(420), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15980] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(170), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(817), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16025] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(171), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(519), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16070] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(341), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(343), 1,
      aux_sym_memop_op_token1,
    STATE(172), 1,
      sym_location,
    STATE(637), 1,
      sym_memop_op,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(339), 12,
      anon_sym_PtrEq,
      anon_sym_PtrNe,
      anon_sym_PtrLt,
      anon_sym_PtrGt,
      anon_sym_PtrLe,
      anon_sym_PtrGe,
      anon_sym_Ptrdiff,
      anon_sym_IntFromPtr,
      anon_sym_PtrFromInt,
      anon_sym_PtrValidForDeref,
      anon_sym_PtrWellAligned,
      anon_sym_PtrMemberShift,
  [16105] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(173), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(658), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16150] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(341), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(343), 1,
      aux_sym_memop_op_token1,
    STATE(174), 1,
      sym_location,
    STATE(694), 1,
      sym_memop_op,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(339), 12,
      anon_sym_PtrEq,
      anon_sym_PtrNe,
      anon_sym_PtrLt,
      anon_sym_PtrGt,
      anon_sym_PtrLe,
      anon_sym_PtrGe,
      anon_sym_Ptrdiff,
      anon_sym_IntFromPtr,
      anon_sym_PtrFromInt,
      anon_sym_PtrValidForDeref,
      anon_sym_PtrWellAligned,
      anon_sym_PtrMemberShift,
  [16185] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(175), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(599), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16230] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(176), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(774), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16275] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(177), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(581), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16320] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(178), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(798), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16365] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_loaded,
    ACTIONS(323), 1,
      anon_sym_array,
    STATE(179), 1,
      sym_location,
    STATE(294), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(311), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(321), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(317), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16410] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(180), 1,
      sym_location,
    STATE(193), 1,
      sym_core_object_type,
    STATE(657), 1,
      sym_core_base_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(283), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16455] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(181), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(285), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16503] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    ACTIONS(347), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(182), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(285), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16551] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(183), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(351), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16596] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(184), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16625] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      sym_binary_operator,
    STATE(185), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(353), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16656] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(361), 1,
      sym_binary_operator,
    STATE(186), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(359), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16685] = 16,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    STATE(187), 1,
      sym_location,
    STATE(623), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16736] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(188), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(363), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16767] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(371), 1,
      sym_binary_operator,
    STATE(189), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(369), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16796] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(375), 1,
      sym_binary_operator,
    STATE(190), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16825] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(191), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(343), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16870] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(192), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(337), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16915] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(193), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(377), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16944] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(194), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(311), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16989] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(195), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(381), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17018] = 16,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(159), 1,
      anon_sym_create_readonly,
    ACTIONS(161), 1,
      anon_sym_create,
    ACTIONS(163), 1,
      anon_sym_alloc,
    ACTIONS(165), 1,
      anon_sym_free,
    ACTIONS(167), 1,
      anon_sym_kill,
    ACTIONS(169), 1,
      anon_sym_store,
    ACTIONS(171), 1,
      anon_sym_store_lock,
    ACTIONS(173), 1,
      anon_sym_load,
    ACTIONS(175), 1,
      anon_sym_seq_rmw,
    ACTIONS(177), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(179), 1,
      anon_sym_rmw,
    ACTIONS(181), 1,
      anon_sym_fence,
    STATE(196), 1,
      sym_location,
    STATE(677), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17069] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(197), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(247), 1,
      sym_basic_type,
    STATE(270), 1,
      sym_ctype_star,
    STATE(361), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17116] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(198), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(285), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17161] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(199), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(346), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17206] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(327), 1,
      anon_sym_void,
    ACTIONS(333), 1,
      anon_sym__Atomic,
    ACTIONS(335), 1,
      aux_sym_integer_type_token1,
    ACTIONS(337), 1,
      sym_floating_type,
    STATE(200), 1,
      sym_location,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(240), 1,
      sym_integer_type,
    STATE(319), 1,
      sym_ctype,
    ACTIONS(325), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(331), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(247), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17251] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(201), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(385), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17280] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(202), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(389), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17308] = 10,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      anon_sym_def,
    ACTIONS(398), 1,
      anon_sym_glob,
    ACTIONS(401), 1,
      anon_sym_proc,
    STATE(366), 1,
      sym_declaration,
    STATE(203), 2,
      sym_location,
      aux_sym_source_file_repeat1,
    STATE(353), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    STATE(378), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [17346] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(204), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(377), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17374] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(205), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(385), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17402] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(206), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(349), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17430] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(361), 1,
      sym_binary_operator,
    STATE(207), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(359), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17458] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(375), 1,
      sym_binary_operator,
    STATE(208), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(373), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17486] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(209), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(363), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17514] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(357), 1,
      sym_binary_operator,
    STATE(210), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(353), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17542] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(371), 1,
      sym_binary_operator,
    STATE(211), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(369), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17570] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(212), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(381), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17598] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(406), 1,
      sym_binary_operator,
    STATE(213), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(404), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17626] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(410), 1,
      sym_binary_operator,
    STATE(214), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(408), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17654] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(215), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(412), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17682] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(216), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(389), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17710] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(217), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(412), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17738] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(418), 1,
      sym_binary_operator,
    STATE(218), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(416), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17766] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(422), 1,
      sym_binary_operator,
    STATE(219), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(420), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17794] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(426), 1,
      sym_binary_operator,
    STATE(220), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(424), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17822] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(430), 1,
      sym_binary_operator,
    STATE(221), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(428), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17850] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(222), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(432), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17878] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(223), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(432), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17906] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(438), 1,
      sym_binary_operator,
    STATE(224), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(436), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17934] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(442), 1,
      sym_binary_operator,
    STATE(225), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(440), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17962] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(446), 1,
      sym_binary_operator,
    STATE(226), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(444), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [17990] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(450), 1,
      sym_binary_operator,
    STATE(227), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(448), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [18018] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_glob,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      aux_sym_source_file_repeat1,
    STATE(228), 1,
      sym_location,
    STATE(366), 1,
      sym_declaration,
    STATE(353), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    STATE(378), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [18058] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_integer_type_token1,
    STATE(229), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(454), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18087] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      aux_sym_integer_type_token1,
    STATE(230), 2,
      sym_location,
      aux_sym_integer_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(460), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18114] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(467), 7,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
      aux_sym_integer_type_token1,
  [18138] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(450), 1,
      sym_binary_operator,
    STATE(232), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18162] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_restrict,
    STATE(233), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(471), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18188] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(234), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18209] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(235), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18230] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(367), 1,
      sym_binary_operator,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18255] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 1,
      sym_sym,
    STATE(237), 1,
      sym_location,
    STATE(258), 1,
      aux_sym_def_fields_repeat1,
    STATE(308), 1,
      sym_def_field,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(485), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18284] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(186), 1,
      sym_core_object_type,
    STATE(238), 1,
      sym_location,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18311] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(239), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18332] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(491), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18355] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(241), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18376] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(242), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(497), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18397] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(243), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(499), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18418] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(244), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(501), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18439] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(245), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(503), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18460] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(309), 1,
      anon_sym_array,
    STATE(207), 1,
      sym_core_object_type,
    STATE(246), 1,
      sym_location,
    ACTIONS(297), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(307), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18487] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(247), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(505), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18510] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(509), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18533] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(249), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18554] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(250), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(497), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18575] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(251), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18596] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(252), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(517), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18617] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(253), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(519), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18638] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(254), 1,
      sym_location,
    STATE(632), 1,
      sym_core_object_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18665] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(323), 1,
      anon_sym_array,
    STATE(255), 1,
      sym_location,
    STATE(525), 1,
      sym_core_object_type,
    ACTIONS(311), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(321), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18692] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(521), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18715] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(257), 1,
      sym_location,
    STATE(585), 1,
      sym_core_object_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18742] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 1,
      sym_sym,
    STATE(308), 1,
      sym_def_field,
    STATE(258), 2,
      sym_location,
      aux_sym_def_fields_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(527), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18769] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(259), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18790] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      sym_binary_operator,
    STATE(260), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18815] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(261), 1,
      sym_location,
    STATE(661), 1,
      sym_core_object_type,
    ACTIONS(279), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(287), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18842] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(262), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18863] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(263), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18884] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(536), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18907] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA2,
    STATE(265), 1,
      sym_location,
    STATE(479), 1,
      aux_sym_params_repeat1,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [18938] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(550), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [18961] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(267), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(554), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18982] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(268), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(554), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [19003] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(269), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(556), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [19024] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(270), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(509), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA2,
  [19047] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(418), 1,
      sym_binary_operator,
    STATE(271), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19069] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(272), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(558), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19091] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(273), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19113] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(406), 1,
      sym_binary_operator,
    STATE(274), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19135] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(275), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19157] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(276), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19179] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(410), 1,
      sym_binary_operator,
    STATE(277), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19201] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(446), 1,
      sym_binary_operator,
    STATE(278), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19223] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(279), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19245] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(280), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19267] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(426), 1,
      sym_binary_operator,
    STATE(281), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(424), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19289] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(430), 1,
      sym_binary_operator,
    STATE(282), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(428), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19311] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(283), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19333] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(442), 1,
      sym_binary_operator,
    STATE(284), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(440), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19355] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(562), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19381] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(566), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(564), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19403] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(570), 1,
      anon_sym_EQ,
    STATE(287), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(568), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19425] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(574), 1,
      anon_sym_EQ,
    STATE(288), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(572), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19447] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(438), 1,
      sym_binary_operator,
    STATE(289), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(436), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19469] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(357), 1,
      sym_binary_operator,
    STATE(290), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19491] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(578), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(576), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19513] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(292), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19535] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(422), 1,
      sym_binary_operator,
    STATE(293), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19557] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(582), 1,
      anon_sym_EQ,
    STATE(294), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(580), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19579] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(586), 1,
      anon_sym_EQ,
    STATE(295), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(584), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19601] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(590), 1,
      anon_sym_EQ,
    STATE(296), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(588), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19623] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(594), 1,
      anon_sym_EQ,
    STATE(297), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(592), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19645] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(598), 1,
      anon_sym_COLON_COLON,
    ACTIONS(600), 1,
      sym_binary_operator,
    STATE(298), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(596), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19669] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(578), 1,
      anon_sym_EQ,
    STATE(299), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(576), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19691] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(300), 1,
      sym_location,
    STATE(449), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19718] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_location,
    STATE(443), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19745] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(302), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(610), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19766] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_COMMA2,
    STATE(303), 1,
      sym_location,
    STATE(380), 1,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19793] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_location,
    STATE(454), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19820] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(305), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(620), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19841] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(306), 1,
      sym_location,
    STATE(455), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19868] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_location,
    STATE(459), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19895] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(308), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(626), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [19916] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(309), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(479), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19935] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(310), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(479), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19954] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19979] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(312), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(630), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20000] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(632), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20021] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(314), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(515), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20040] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(315), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(534), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20059] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(316), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(513), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20078] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(636), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20099] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(638), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_location,
    STATE(403), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20126] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20151] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(320), 1,
      sym_location,
    STATE(389), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20178] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(321), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(532), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20197] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym_location,
    STATE(399), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20224] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      sym_location,
    STATE(439), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20251] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(324), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(554), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20270] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym_location,
    STATE(400), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20297] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(648), 1,
      anon_sym_COMMA2,
    STATE(326), 1,
      sym_location,
    STATE(406), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20324] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(327), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(554), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20343] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(328), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(556), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20362] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(329), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(497), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20381] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_location,
    STATE(384), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20408] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(331), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(497), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20427] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(332), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(501), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20446] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(333), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(499), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20465] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(616), 1,
      anon_sym_COMMA2,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_location,
    STATE(490), 1,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20492] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(335), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(503), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20511] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(336), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(517), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20530] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20555] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(338), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(519), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20574] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(339), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(489), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20593] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(340), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(495), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20612] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(341), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(656), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
  [20635] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(342), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(477), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20654] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20679] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(344), 1,
      sym_location,
    STATE(481), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20706] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    STATE(345), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(450), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20727] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20752] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_location,
    STATE(435), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20779] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(664), 1,
      anon_sym_COMMA2,
    STATE(348), 1,
      sym_location,
    STATE(436), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20806] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(349), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(666), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20827] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(670), 1,
      anon_sym_COLON,
    STATE(350), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(668), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20848] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20873] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(352), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(674), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20894] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(353), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(676), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20912] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(354), 1,
      sym_location,
    ACTIONS(678), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACE,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20934] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(355), 1,
      sym_location,
    ACTIONS(680), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20956] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(682), 1,
      anon_sym_RBRACK,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    STATE(356), 1,
      sym_location,
    STATE(477), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20980] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(357), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(688), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20998] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      sym_location,
    STATE(507), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21022] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(692), 1,
      sym_sym,
    STATE(237), 1,
      aux_sym_def_fields_repeat1,
    STATE(308), 1,
      sym_def_field,
    STATE(359), 1,
      sym_location,
    STATE(369), 1,
      sym_def_fields,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21046] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(694), 1,
      anon_sym_COMMA2,
    STATE(360), 1,
      sym_location,
    STATE(452), 1,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21070] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_location,
    ACTIONS(546), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21092] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(698), 1,
      anon_sym_COMMA2,
    ACTIONS(696), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(362), 2,
      sym_location,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21112] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    ACTIONS(703), 1,
      anon_sym_COMMA2,
    STATE(363), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21136] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    STATE(364), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(696), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
  [21156] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 1,
      anon_sym_COMMA2,
    STATE(365), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21180] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(366), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(709), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21198] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(711), 1,
      anon_sym_COMMA2,
    ACTIONS(656), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(367), 2,
      sym_location,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21218] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(368), 1,
      sym_location,
    ACTIONS(714), 2,
      anon_sym_PIPE,
      anon_sym_end,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21240] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(369), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(716), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21258] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(370), 1,
      sym_location,
    STATE(427), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21282] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_location,
    STATE(487), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21306] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(722), 1,
      sym_filename,
    ACTIONS(724), 1,
      sym_location_unknown,
    STATE(372), 1,
      sym_location,
    STATE(706), 1,
      sym_location_range,
    STATE(739), 1,
      sym_position,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21330] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(728), 1,
      anon_sym_COMMA2,
    STATE(373), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21354] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(730), 1,
      anon_sym_DeriveCap,
    STATE(374), 1,
      sym_location,
    STATE(696), 1,
      sym_pure_memop_op,
    ACTIONS(732), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21376] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(694), 1,
      anon_sym_COMMA2,
    STATE(375), 1,
      sym_location,
    STATE(503), 1,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21400] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(376), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(734), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21418] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA2,
    STATE(377), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21442] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(378), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(740), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21460] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(730), 1,
      anon_sym_DeriveCap,
    STATE(379), 1,
      sym_location,
    STATE(579), 1,
      sym_pure_memop_op,
    ACTIONS(732), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21482] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(616), 1,
      anon_sym_COMMA2,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      sym_location,
    STATE(412), 1,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21503] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(744), 1,
      anon_sym_COMMA2,
    STATE(381), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21524] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(746), 1,
      anon_sym_COMMA2,
    STATE(382), 2,
      sym_location,
      aux_sym_params_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21543] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(749), 1,
      anon_sym_COMMA2,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_location,
    STATE(397), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21564] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(384), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21585] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    ACTIONS(755), 1,
      anon_sym_COMMA2,
    STATE(385), 2,
      sym_location,
      aux_sym_attribute_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21604] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(758), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_end,
    STATE(386), 2,
      sym_location,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21623] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(387), 1,
      sym_location,
    ACTIONS(763), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21642] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(765), 1,
      anon_sym_COMMA2,
    STATE(388), 2,
      sym_location,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21661] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(389), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21682] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(768), 1,
      anon_sym_COMMA2,
    STATE(390), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21703] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21724] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(770), 1,
      anon_sym_COMMA2,
    STATE(392), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21745] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(772), 1,
      anon_sym_COMMA2,
    STATE(393), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21766] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(774), 1,
      anon_sym_COMMA2,
    STATE(394), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21787] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 1,
      anon_sym_COMMA2,
    STATE(395), 1,
      sym_location,
    STATE(421), 1,
      aux_sym_proc_full_declaration_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21808] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 1,
      anon_sym_COMMA2,
    STATE(396), 1,
      sym_location,
    STATE(422), 1,
      aux_sym_proc_full_declaration_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21829] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(749), 1,
      anon_sym_COMMA2,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym_location,
    STATE(404), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21850] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21871] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(399), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21892] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(400), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21913] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    ACTIONS(788), 1,
      anon_sym_COMMA2,
    STATE(401), 1,
      sym_location,
    STATE(426), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21934] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    STATE(402), 1,
      sym_location,
    STATE(423), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21955] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(403), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21976] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(796), 1,
      anon_sym_COMMA2,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(404), 2,
      sym_location,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21995] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    STATE(405), 1,
      sym_location,
    ACTIONS(801), 2,
      anon_sym_PIPE,
      anon_sym_end,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22014] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(406), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22035] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22056] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(805), 1,
      anon_sym_COMMA2,
    STATE(408), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22077] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22098] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(809), 1,
      anon_sym_COMMA2,
    STATE(410), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22119] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(644), 1,
      anon_sym_end,
    ACTIONS(811), 1,
      anon_sym_PIPE,
    STATE(411), 1,
      sym_location,
    STATE(434), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22140] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_COMMA2,
    STATE(412), 2,
      sym_location,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22159] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(818), 1,
      anon_sym_COMMA2,
    STATE(413), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22180] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(820), 1,
      anon_sym_COMMA2,
    STATE(414), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22201] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22222] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(822), 1,
      anon_sym_COMMA2,
    STATE(416), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22243] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(824), 1,
      anon_sym_then,
    STATE(417), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22264] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(826), 1,
      anon_sym_of,
    STATE(418), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22285] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(419), 1,
      sym_location,
    STATE(546), 1,
      sym_name,
    ACTIONS(828), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22304] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(778), 1,
      anon_sym_COMMA2,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(420), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22325] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      anon_sym_COMMA2,
    STATE(421), 2,
      sym_location,
      aux_sym_proc_full_declaration_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22344] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(778), 1,
      anon_sym_COMMA2,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(422), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22365] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    ACTIONS(841), 1,
      anon_sym_COMMA2,
    STATE(423), 2,
      sym_location,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22384] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(844), 1,
      anon_sym_RBRACK,
    ACTIONS(846), 1,
      anon_sym_ailname,
    STATE(401), 1,
      sym_attribute_pair,
    STATE(424), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22405] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      sym_location,
    STATE(501), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22426] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(788), 1,
      anon_sym_COMMA2,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_attribute_repeat1,
    STATE(426), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22447] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_pattern_repeat1,
    STATE(427), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22468] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(854), 1,
      anon_sym_in,
    STATE(428), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22489] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym_location,
    STATE(430), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22510] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_core_base_type_repeat1,
    STATE(430), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22531] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(854), 1,
      anon_sym_else,
    STATE(431), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22552] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(862), 1,
      sym_impl,
    STATE(432), 1,
      sym_location,
    ACTIONS(860), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22571] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(433), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22592] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(71), 1,
      anon_sym_end,
    ACTIONS(811), 1,
      anon_sym_PIPE,
    STATE(434), 1,
      sym_location,
    STATE(491), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22613] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(435), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22634] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(436), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22655] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(608), 1,
      anon_sym_end,
    ACTIONS(811), 1,
      anon_sym_PIPE,
    STATE(437), 1,
      sym_location,
    STATE(442), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22676] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22697] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(439), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22718] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(866), 1,
      anon_sym_in,
    STATE(440), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22739] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(866), 1,
      anon_sym_else,
    STATE(441), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22760] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(83), 1,
      anon_sym_end,
    ACTIONS(811), 1,
      anon_sym_PIPE,
    STATE(442), 1,
      sym_location,
    STATE(491), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22781] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(443), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22802] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(444), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22823] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(85), 1,
      anon_sym_end,
    ACTIONS(868), 1,
      anon_sym_PIPE,
    STATE(445), 1,
      sym_location,
    STATE(451), 1,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22844] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(446), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22865] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22886] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(872), 1,
      anon_sym_DOT,
    STATE(448), 1,
      sym_location,
    STATE(453), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22907] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(449), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22928] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22949] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(87), 1,
      anon_sym_end,
    ACTIONS(868), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
    STATE(451), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22970] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 1,
      anon_sym_COMMA2,
    STATE(388), 1,
      aux_sym_expr_repeat3,
    STATE(452), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22991] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(749), 1,
      anon_sym_COMMA2,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(453), 1,
      sym_location,
    STATE(457), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23012] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(454), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23033] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(455), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23054] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23075] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(749), 1,
      anon_sym_COMMA2,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    STATE(404), 1,
      aux_sym_pexpr_repeat2,
    STATE(457), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23096] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23117] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(459), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23138] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(77), 1,
      anon_sym_end,
    ACTIONS(868), 1,
      anon_sym_PIPE,
    STATE(460), 1,
      sym_location,
    STATE(502), 1,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23159] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23180] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23201] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_location,
    STATE(464), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23222] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_core_base_type_repeat1,
    STATE(464), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23243] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(886), 1,
      anon_sym_COMMA2,
    STATE(465), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23264] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(888), 1,
      anon_sym_COMMA2,
    STATE(466), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23285] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23306] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(892), 1,
      anon_sym_of,
    STATE(468), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23327] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(894), 1,
      anon_sym_COMMA2,
    STATE(469), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23348] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(896), 1,
      anon_sym_COMMA2,
    STATE(470), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23369] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(471), 1,
      sym_location,
    STATE(603), 1,
      sym_name,
    ACTIONS(828), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23388] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_core_base_type_repeat1,
    STATE(472), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23409] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(900), 1,
      anon_sym_of,
    STATE(473), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23430] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(474), 1,
      sym_location,
    STATE(540), 1,
      sym_name,
    ACTIONS(828), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23449] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(902), 1,
      anon_sym_then,
    STATE(475), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23470] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(904), 1,
      anon_sym_of,
    STATE(476), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23491] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_pattern_repeat1,
    STATE(477), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23512] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(908), 1,
      anon_sym_in,
    STATE(478), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23533] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      anon_sym_COMMA2,
    STATE(382), 1,
      aux_sym_params_repeat1,
    STATE(479), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23554] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(872), 1,
      anon_sym_DOT,
    STATE(383), 1,
      sym_member,
    STATE(480), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23575] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(602), 1,
      anon_sym_COMMA2,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_expr_repeat1,
    STATE(481), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23596] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(914), 1,
      anon_sym_then,
    STATE(482), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23617] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(483), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23638] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(916), 1,
      anon_sym_COMMA2,
    STATE(484), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23659] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(918), 1,
      sym_sym,
    ACTIONS(920), 1,
      anon_sym_LBRACK,
    STATE(485), 1,
      sym_location,
    STATE(588), 1,
      sym_attribute,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23680] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(922), 1,
      anon_sym_COMMA2,
    STATE(486), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23701] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_pattern_repeat1,
    STATE(487), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23722] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(924), 1,
      anon_sym_COMMA2,
    STATE(488), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23743] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(926), 1,
      anon_sym_COMMA2,
    STATE(489), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23764] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(616), 1,
      anon_sym_COMMA2,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_expr_repeat4,
    STATE(490), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23785] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(930), 1,
      anon_sym_PIPE,
    ACTIONS(933), 1,
      anon_sym_end,
    STATE(491), 2,
      sym_location,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23804] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23825] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(935), 1,
      anon_sym_then,
    STATE(493), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23846] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(494), 1,
      sym_location,
    STATE(806), 1,
      sym_name,
    ACTIONS(828), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23865] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(937), 1,
      anon_sym_COMMA2,
    STATE(495), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23886] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(939), 1,
      anon_sym_in,
    STATE(496), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23907] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(941), 1,
      anon_sym_COMMA2,
    STATE(497), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23928] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(943), 1,
      anon_sym_COMMA2,
    STATE(498), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23949] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(945), 1,
      anon_sym_COMMA2,
    STATE(499), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23970] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(947), 1,
      anon_sym_COMMA2,
    STATE(500), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23991] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_core_base_type_repeat1,
    STATE(501), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24012] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(868), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
    STATE(502), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24033] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 1,
      anon_sym_COMMA2,
    STATE(388), 1,
      aux_sym_expr_repeat3,
    STATE(503), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24054] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(951), 1,
      anon_sym_COMMA2,
    STATE(504), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24075] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(953), 1,
      anon_sym_COMMA2,
    STATE(505), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24096] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(955), 1,
      anon_sym_COMMA2,
    STATE(506), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24117] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(684), 1,
      anon_sym_COMMA2,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_pattern_repeat1,
    STATE(507), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24138] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(959), 1,
      sym_int_const,
    STATE(508), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24156] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(509), 1,
      sym_location,
    ACTIONS(355), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24172] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(510), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24190] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(961), 1,
      anon_sym_EQ,
    ACTIONS(963), 1,
      anon_sym_COLON_COLON,
    STATE(511), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24208] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(512), 1,
      sym_location,
    ACTIONS(965), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24224] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(967), 1,
      sym_sym,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24242] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(514), 1,
      sym_location,
    STATE(652), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24260] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(515), 1,
      sym_location,
    STATE(666), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24278] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(516), 1,
      sym_location,
    STATE(667), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24296] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(517), 1,
      sym_location,
    STATE(669), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24314] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(971), 1,
      anon_sym_LBRACK,
    STATE(518), 1,
      sym_location,
    STATE(736), 1,
      sym_glob_ctype_attribute,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24332] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(519), 1,
      sym_location,
    ACTIONS(839), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24348] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(973), 1,
      aux_sym_string_token1,
    STATE(520), 1,
      sym_location,
    STATE(543), 1,
      sym_cstring,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24366] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(846), 1,
      anon_sym_ailname,
    STATE(521), 1,
      sym_location,
    STATE(550), 1,
      sym_attribute_pair,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24384] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(522), 1,
      sym_location,
    ACTIONS(377), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24400] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(523), 1,
      sym_location,
    ACTIONS(385), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24416] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(524), 1,
      sym_location,
    ACTIONS(349), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24432] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(525), 1,
      sym_location,
    ACTIONS(359), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24448] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(526), 1,
      sym_location,
    ACTIONS(373), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24464] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(527), 1,
      sym_location,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24480] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(528), 1,
      sym_location,
    ACTIONS(381), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24496] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(975), 1,
      sym_sym,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24514] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(979), 1,
      aux_sym_line_token1,
    STATE(530), 1,
      sym_location,
    STATE(535), 1,
      sym_column,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24532] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(981), 1,
      sym_sym,
    STATE(531), 1,
      sym_location,
    STATE(593), 1,
      sym_cabs_id,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24550] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(532), 1,
      sym_location,
    ACTIONS(983), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24566] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(872), 1,
      anon_sym_DOT,
    STATE(533), 1,
      sym_location,
    STATE(547), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24584] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(534), 1,
      sym_location,
    ACTIONS(985), 2,
      anon_sym_COMMA,
      anon_sym_GT_POUND_DASH_RBRACE,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24600] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(535), 1,
      sym_location,
    ACTIONS(987), 2,
      anon_sym_COMMA,
      anon_sym_GT_POUND_DASH_RBRACE,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24616] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(536), 1,
      sym_location,
    STATE(768), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24634] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(537), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24652] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(989), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      sym_core_ctype,
    STATE(538), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24670] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(981), 1,
      sym_sym,
    STATE(539), 1,
      sym_location,
    STATE(663), 1,
      sym_cabs_id,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24688] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(991), 1,
      anon_sym_COMMA2,
    STATE(540), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24706] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(993), 1,
      aux_sym_line_token1,
    STATE(541), 1,
      sym_location,
    STATE(641), 1,
      sym_line,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24724] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(542), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24742] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(543), 1,
      sym_location,
    ACTIONS(995), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24758] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(997), 1,
      anon_sym_EQ_GT,
    STATE(544), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24776] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(963), 1,
      anon_sym_COLON_COLON,
    ACTIONS(999), 1,
      anon_sym_EQ,
    STATE(545), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24794] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(1001), 1,
      anon_sym_COMMA2,
    STATE(546), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24812] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(547), 1,
      sym_location,
    ACTIONS(799), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACE,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24828] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    STATE(548), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24846] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(722), 1,
      sym_filename,
    STATE(549), 1,
      sym_location,
    STATE(642), 1,
      sym_position,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24864] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(550), 1,
      sym_location,
    ACTIONS(753), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24880] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(963), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1003), 1,
      anon_sym_EQ,
    STATE(551), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24898] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(872), 1,
      anon_sym_DOT,
    STATE(552), 1,
      sym_location,
    STATE(635), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24916] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    ACTIONS(908), 1,
      anon_sym_else,
    STATE(553), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24934] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1005), 1,
      aux_sym_string_token1,
    STATE(554), 1,
      sym_location,
    STATE(803), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24952] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(872), 1,
      anon_sym_DOT,
    STATE(555), 1,
      sym_location,
    STATE(611), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24970] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    ACTIONS(1007), 1,
      anon_sym_in,
    STATE(556), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24988] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(981), 1,
      sym_sym,
    STATE(557), 1,
      sym_location,
    STATE(645), 1,
      sym_cabs_id,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25006] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(558), 1,
      sym_location,
    ACTIONS(1009), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25022] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(963), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1011), 1,
      anon_sym_EQ,
    STATE(559), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25040] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1013), 1,
      anon_sym_COMMA2,
    STATE(560), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25058] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(561), 1,
      sym_location,
    STATE(803), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25076] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1015), 1,
      sym_sym,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25094] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1019), 1,
      anon_sym_EQ_GT,
    STATE(563), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25112] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1005), 1,
      aux_sym_string_token1,
    STATE(564), 1,
      sym_location,
    STATE(733), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25130] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(565), 1,
      sym_location,
    ACTIONS(1021), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25146] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(566), 1,
      sym_location,
    STATE(733), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25164] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(963), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1023), 1,
      anon_sym_EQ,
    STATE(567), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25182] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(568), 1,
      sym_location,
    STATE(740), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25200] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(569), 1,
      sym_location,
    STATE(742), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25218] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(570), 1,
      sym_location,
    STATE(743), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25236] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(571), 1,
      sym_location,
    STATE(744), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25254] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(963), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1025), 1,
      anon_sym_EQ,
    STATE(572), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25272] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    ACTIONS(939), 1,
      anon_sym_else,
    STATE(573), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25290] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(574), 1,
      sym_location,
    STATE(796), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25308] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(575), 1,
      sym_location,
    STATE(651), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25326] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    STATE(576), 1,
      sym_location,
    ACTIONS(1027), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25342] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(803), 1,
      anon_sym_SEMI,
    ACTIONS(1029), 1,
      anon_sym_in,
    STATE(577), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25360] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1031), 1,
      anon_sym_LBRACK,
    ACTIONS(1033), 1,
      anon_sym_COMMA2,
    STATE(578), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25378] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1035), 1,
      anon_sym_COMMA2,
    STATE(579), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25393] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1037), 1,
      anon_sym_COLON,
    STATE(580), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25408] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1039), 1,
      anon_sym_COLON_EQ,
    STATE(581), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25423] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    STATE(582), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25438] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    STATE(583), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25453] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25468] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25483] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1047), 1,
      anon_sym_COLON,
    STATE(586), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25498] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1049), 1,
      anon_sym_COLON,
    STATE(587), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25513] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1051), 1,
      sym_sym,
    STATE(588), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25528] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1053), 1,
      anon_sym_COLON_EQ,
    STATE(589), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25543] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    STATE(590), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25558] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1057), 1,
      anon_sym_COLON,
    STATE(591), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25573] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1059), 1,
      anon_sym_COLON,
    STATE(592), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25588] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1061), 1,
      anon_sym_EQ,
    STATE(593), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25603] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(594), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25618] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
    STATE(595), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25633] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
    STATE(596), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25648] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1069), 1,
      anon_sym_COLON,
    STATE(597), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25663] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1071), 1,
      sym_sym,
    STATE(598), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25678] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1073), 1,
      anon_sym_COLON_EQ,
    STATE(599), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25693] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25708] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(601), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25723] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    STATE(602), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25738] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25753] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1079), 1,
      sym_sym,
    STATE(604), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25768] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    STATE(605), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25783] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1083), 1,
      sym_sym,
    STATE(606), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25798] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1085), 1,
      sym_sym,
    STATE(607), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25813] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    STATE(608), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25828] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1089), 1,
      anon_sym_COLON_EQ,
    STATE(609), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25843] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1091), 1,
      anon_sym_COLON,
    STATE(610), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25858] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(611), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25873] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1093), 1,
      anon_sym_EQ,
    STATE(612), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25888] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1095), 1,
      sym_sym,
    STATE(613), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25903] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1097), 1,
      anon_sym_COMMA2,
    STATE(614), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25918] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1099), 1,
      anon_sym_COMMA2,
    STATE(615), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25933] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    STATE(616), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25948] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1103), 1,
      sym_memory_order,
    STATE(617), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25963] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    STATE(618), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25978] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1107), 1,
      anon_sym_eff,
    STATE(619), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25993] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1109), 1,
      anon_sym_LPAREN,
    STATE(620), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26008] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
    STATE(621), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26023] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26038] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26053] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(624), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26068] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1117), 1,
      anon_sym_eff,
    STATE(625), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26083] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1033), 1,
      anon_sym_COMMA2,
    STATE(626), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26098] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1119), 1,
      anon_sym_COLON,
    STATE(627), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26113] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    STATE(628), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26128] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26143] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1123), 1,
      anon_sym_COLON,
    STATE(630), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26158] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1125), 1,
      anon_sym_in,
    STATE(631), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26173] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26188] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1129), 1,
      anon_sym_LBRACK,
    STATE(633), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26203] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    STATE(634), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26218] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(635), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26233] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    STATE(636), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26248] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1135), 1,
      anon_sym_COMMA2,
    STATE(637), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26263] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1137), 1,
      anon_sym_COLON,
    STATE(638), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26278] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1139), 1,
      sym_memory_order,
    STATE(639), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26293] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1141), 1,
      sym_sym,
    STATE(640), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26308] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1143), 1,
      anon_sym_COLON,
    STATE(641), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26323] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1145), 1,
      anon_sym_GT_POUND_DASH_RBRACE,
    STATE(642), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26338] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
    STATE(643), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26353] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1149), 1,
      anon_sym_COLON,
    STATE(644), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26368] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26383] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1153), 1,
      anon_sym_COLON_EQ,
    STATE(646), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26398] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26413] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1157), 1,
      sym_sym,
    STATE(648), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26428] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26443] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26458] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1159), 1,
      anon_sym_RBRACK,
    STATE(651), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26473] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1001), 1,
      anon_sym_COMMA2,
    STATE(652), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26488] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(653), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26503] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26518] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1163), 1,
      sym_sym,
    STATE(655), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26533] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26548] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1167), 1,
      anon_sym_COLON_EQ,
    STATE(657), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26563] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(658), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26578] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26593] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26608] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26623] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1175), 1,
      anon_sym_COLON,
    STATE(662), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26638] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26653] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    STATE(664), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26668] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1181), 1,
      anon_sym_COMMA2,
    STATE(665), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26683] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(888), 1,
      anon_sym_COMMA2,
    STATE(666), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26698] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1183), 1,
      anon_sym_COMMA2,
    STATE(667), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26713] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
    STATE(668), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26728] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1187), 1,
      anon_sym_COMMA2,
    STATE(669), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26743] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1189), 1,
      anon_sym_COLON,
    STATE(670), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26758] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1191), 1,
      sym_ub,
    STATE(671), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26773] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1193), 1,
      anon_sym_LPAREN,
    STATE(672), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26788] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(673), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26803] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1197), 1,
      anon_sym_LPAREN,
    STATE(674), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26818] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26833] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(676), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26848] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(677), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26863] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1203), 1,
      sym_sym,
    STATE(678), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26878] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    STATE(679), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26893] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1205), 1,
      anon_sym_LBRACK,
    STATE(680), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26908] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1207), 1,
      anon_sym_LPAREN,
    STATE(681), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26923] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1209), 1,
      anon_sym_eff,
    STATE(682), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26938] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
    STATE(683), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26953] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1213), 1,
      anon_sym_COMMA2,
    STATE(684), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26968] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26983] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1215), 1,
      anon_sym_LPAREN,
    STATE(686), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26998] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1217), 1,
      anon_sym_COLON,
    STATE(687), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27013] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1219), 1,
      sym_memory_order,
    STATE(688), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27028] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1221), 1,
      anon_sym_EQ_GT,
    STATE(689), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27043] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1223), 1,
      anon_sym_LBRACE,
    STATE(690), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27058] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    STATE(691), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27073] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1227), 1,
      sym_ub,
    STATE(692), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27088] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1229), 1,
      anon_sym_LPAREN,
    STATE(693), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27103] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1231), 1,
      anon_sym_COMMA2,
    STATE(694), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27118] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1233), 1,
      anon_sym_LBRACK,
    STATE(695), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27133] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1235), 1,
      anon_sym_COMMA2,
    STATE(696), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27148] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
    STATE(697), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27163] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27178] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1239), 1,
      sym_sym,
    STATE(699), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27193] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    STATE(700), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27208] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    STATE(701), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27223] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1245), 1,
      anon_sym_eff,
    STATE(702), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27238] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    STATE(703), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27253] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1249), 1,
      anon_sym_in,
    STATE(704), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27268] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1251), 1,
      anon_sym_LPAREN,
    STATE(705), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27283] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1253), 1,
      anon_sym_GT_POUND_DASH_RBRACE,
    STATE(706), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27298] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1255), 1,
      sym_memory_order,
    STATE(707), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27313] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1257), 1,
      sym_memory_order,
    STATE(708), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27328] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1259), 1,
      anon_sym_RBRACK,
    STATE(709), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27343] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1261), 1,
      anon_sym_COLON,
    STATE(710), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27358] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1263), 1,
      anon_sym_in,
    STATE(711), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27373] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1265), 1,
      sym_memory_order,
    STATE(712), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27388] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1267), 1,
      anon_sym_COLON_EQ,
    STATE(713), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27403] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1269), 1,
      sym_sym,
    STATE(714), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27418] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1271), 1,
      anon_sym_LBRACK,
    STATE(715), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27433] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
    STATE(716), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27448] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1275), 1,
      anon_sym_ail_ctype,
    STATE(717), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27463] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
    STATE(718), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27478] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
    STATE(719), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27493] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1281), 1,
      anon_sym_LPAREN,
    STATE(720), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27508] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1283), 1,
      anon_sym_COLON,
    STATE(721), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27523] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1285), 1,
      anon_sym_LBRACE,
    STATE(722), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27538] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1287), 1,
      anon_sym_COMMA2,
    STATE(723), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27553] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
    STATE(724), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27568] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1291), 1,
      anon_sym_COLON_EQ,
    STATE(725), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27583] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(726), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27598] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    STATE(727), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27613] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1297), 1,
      sym_sym,
    STATE(728), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27628] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1299), 1,
      anon_sym_LPAREN,
    STATE(729), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27643] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
    STATE(730), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27658] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
    STATE(731), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27673] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(732), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27688] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(916), 1,
      anon_sym_COMMA2,
    STATE(733), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27703] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(734), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27718] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1309), 1,
      anon_sym_LBRACE,
    STATE(735), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27733] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1311), 1,
      anon_sym_COLON_EQ,
    STATE(736), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27748] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1313), 1,
      anon_sym_LBRACE,
    STATE(737), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27763] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
    STATE(738), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27778] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(739), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27793] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(991), 1,
      anon_sym_COMMA2,
    STATE(740), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27808] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1319), 1,
      sym_memory_order,
    STATE(741), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27823] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(922), 1,
      anon_sym_COMMA2,
    STATE(742), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27838] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1321), 1,
      anon_sym_COMMA2,
    STATE(743), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27853] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1323), 1,
      anon_sym_COMMA2,
    STATE(744), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27868] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    STATE(745), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27883] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1327), 1,
      anon_sym_DOT,
    STATE(746), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27898] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1329), 1,
      sym_sym,
    STATE(747), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27913] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
    STATE(748), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27928] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    STATE(749), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27943] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1335), 1,
      anon_sym_EQ_GT,
    STATE(750), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27958] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1337), 1,
      aux_sym_pure_memop_op_token1,
    STATE(751), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27973] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1339), 1,
      anon_sym_LPAREN,
    STATE(752), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27988] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1341), 1,
      anon_sym_COMMA2,
    STATE(753), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28003] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
    STATE(754), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28018] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1345), 1,
      anon_sym_LPAREN,
    STATE(755), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28033] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(756), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28048] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1347), 1,
      anon_sym_COMMA2,
    STATE(757), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28063] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1349), 1,
      sym_sym,
    STATE(758), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28078] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1351), 1,
      sym_sym,
    STATE(759), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28093] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28108] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(761), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28123] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1355), 1,
      anon_sym_LPAREN,
    STATE(762), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28138] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1357), 1,
      anon_sym_LPAREN,
    STATE(763), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28153] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(764), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28168] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1361), 1,
      anon_sym_COLON,
    STATE(765), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28183] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1363), 1,
      anon_sym_LPAREN,
    STATE(766), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28198] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
    STATE(767), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28213] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1367), 1,
      anon_sym_COMMA2,
    STATE(768), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28228] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1369), 1,
      sym_sym,
    STATE(769), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28243] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1371), 1,
      anon_sym_COLON,
    STATE(770), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28258] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1373), 1,
      anon_sym_COLON_EQ,
    STATE(771), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28273] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1375), 1,
      anon_sym_LPAREN,
    STATE(772), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28288] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1377), 1,
      anon_sym_COMMA2,
    STATE(773), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28303] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
    STATE(774), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28318] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1381), 1,
      anon_sym_COMMA2,
    STATE(775), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28333] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1383), 1,
      anon_sym_eff,
    STATE(776), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28348] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1385), 1,
      sym_sym,
    STATE(777), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28363] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1387), 1,
      sym_sym,
    STATE(778), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28378] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1389), 1,
      sym_memory_order,
    STATE(779), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28393] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(780), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28408] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
    STATE(781), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28423] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1395), 1,
      anon_sym_LPAREN,
    STATE(782), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28438] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1397), 1,
      anon_sym_LPAREN,
    STATE(783), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28453] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1399), 1,
      sym_sym,
    STATE(784), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28468] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
    STATE(785), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28483] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1403), 1,
      ts_builtin_sym_end,
    STATE(786), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28498] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
    STATE(787), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28513] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
    STATE(788), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28528] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1409), 1,
      anon_sym_LPAREN,
    STATE(789), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28543] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(790), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28558] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(791), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28573] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1413), 1,
      sym_sym,
    STATE(792), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28588] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1415), 1,
      sym_sym,
    STATE(793), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28603] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1417), 1,
      sym_memory_order,
    STATE(794), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28618] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1419), 1,
      anon_sym_in,
    STATE(795), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28633] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1421), 1,
      anon_sym_COMMA2,
    STATE(796), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28648] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1423), 1,
      sym_sym,
    STATE(797), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28663] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1425), 1,
      anon_sym_COLON_EQ,
    STATE(798), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28678] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1427), 1,
      anon_sym_COMMA2,
    STATE(799), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28693] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1429), 1,
      sym_sym,
    STATE(800), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28708] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1431), 1,
      anon_sym_COMMA2,
    STATE(801), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28723] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1433), 1,
      anon_sym_COLON,
    STATE(802), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28738] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(822), 1,
      anon_sym_COMMA2,
    STATE(803), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28753] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1435), 1,
      anon_sym_COLON_EQ,
    STATE(804), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28768] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1437), 1,
      anon_sym_COLON,
    STATE(805), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28783] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(806), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28798] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(807), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28813] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1441), 1,
      anon_sym_LPAREN,
    STATE(808), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28828] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1443), 1,
      anon_sym_in,
    STATE(809), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28843] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1445), 1,
      sym_sym,
    STATE(810), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28858] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
    STATE(811), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28873] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    STATE(812), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28888] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1451), 1,
      anon_sym_COLON,
    STATE(813), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28903] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1453), 1,
      anon_sym_COLON,
    STATE(814), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28918] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1455), 1,
      sym_memory_order,
    STATE(815), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28933] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1457), 1,
      anon_sym_LPAREN,
    STATE(816), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28948] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1459), 1,
      anon_sym_LPAREN,
    STATE(817), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28963] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1461), 1,
      anon_sym_LPAREN,
    STATE(818), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28978] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
    STATE(819), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28993] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
    STATE(820), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29008] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
    STATE(821), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29023] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1469), 1,
      anon_sym_COLON,
    STATE(822), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29038] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1471), 1,
      sym_sym,
    STATE(823), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29053] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1473), 1,
      anon_sym_LPAREN,
    STATE(824), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29068] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND_LT,
    ACTIONS(1475), 1,
      anon_sym_in,
    STATE(825), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29083] = 1,
    ACTIONS(1477), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 244,
  [SMALL_STATE(5)] = 363,
  [SMALL_STATE(6)] = 482,
  [SMALL_STATE(7)] = 601,
  [SMALL_STATE(8)] = 720,
  [SMALL_STATE(9)] = 839,
  [SMALL_STATE(10)] = 958,
  [SMALL_STATE(11)] = 1077,
  [SMALL_STATE(12)] = 1196,
  [SMALL_STATE(13)] = 1315,
  [SMALL_STATE(14)] = 1434,
  [SMALL_STATE(15)] = 1550,
  [SMALL_STATE(16)] = 1666,
  [SMALL_STATE(17)] = 1782,
  [SMALL_STATE(18)] = 1898,
  [SMALL_STATE(19)] = 2014,
  [SMALL_STATE(20)] = 2130,
  [SMALL_STATE(21)] = 2246,
  [SMALL_STATE(22)] = 2362,
  [SMALL_STATE(23)] = 2478,
  [SMALL_STATE(24)] = 2594,
  [SMALL_STATE(25)] = 2710,
  [SMALL_STATE(26)] = 2826,
  [SMALL_STATE(27)] = 2942,
  [SMALL_STATE(28)] = 3058,
  [SMALL_STATE(29)] = 3174,
  [SMALL_STATE(30)] = 3290,
  [SMALL_STATE(31)] = 3406,
  [SMALL_STATE(32)] = 3522,
  [SMALL_STATE(33)] = 3638,
  [SMALL_STATE(34)] = 3754,
  [SMALL_STATE(35)] = 3870,
  [SMALL_STATE(36)] = 3986,
  [SMALL_STATE(37)] = 4102,
  [SMALL_STATE(38)] = 4218,
  [SMALL_STATE(39)] = 4334,
  [SMALL_STATE(40)] = 4450,
  [SMALL_STATE(41)] = 4566,
  [SMALL_STATE(42)] = 4682,
  [SMALL_STATE(43)] = 4798,
  [SMALL_STATE(44)] = 4914,
  [SMALL_STATE(45)] = 5030,
  [SMALL_STATE(46)] = 5146,
  [SMALL_STATE(47)] = 5262,
  [SMALL_STATE(48)] = 5378,
  [SMALL_STATE(49)] = 5494,
  [SMALL_STATE(50)] = 5610,
  [SMALL_STATE(51)] = 5726,
  [SMALL_STATE(52)] = 5842,
  [SMALL_STATE(53)] = 5958,
  [SMALL_STATE(54)] = 6074,
  [SMALL_STATE(55)] = 6190,
  [SMALL_STATE(56)] = 6306,
  [SMALL_STATE(57)] = 6422,
  [SMALL_STATE(58)] = 6538,
  [SMALL_STATE(59)] = 6654,
  [SMALL_STATE(60)] = 6770,
  [SMALL_STATE(61)] = 6886,
  [SMALL_STATE(62)] = 7002,
  [SMALL_STATE(63)] = 7118,
  [SMALL_STATE(64)] = 7234,
  [SMALL_STATE(65)] = 7350,
  [SMALL_STATE(66)] = 7466,
  [SMALL_STATE(67)] = 7582,
  [SMALL_STATE(68)] = 7698,
  [SMALL_STATE(69)] = 7814,
  [SMALL_STATE(70)] = 7930,
  [SMALL_STATE(71)] = 8046,
  [SMALL_STATE(72)] = 8162,
  [SMALL_STATE(73)] = 8278,
  [SMALL_STATE(74)] = 8394,
  [SMALL_STATE(75)] = 8510,
  [SMALL_STATE(76)] = 8626,
  [SMALL_STATE(77)] = 8742,
  [SMALL_STATE(78)] = 8858,
  [SMALL_STATE(79)] = 8974,
  [SMALL_STATE(80)] = 9090,
  [SMALL_STATE(81)] = 9206,
  [SMALL_STATE(82)] = 9322,
  [SMALL_STATE(83)] = 9438,
  [SMALL_STATE(84)] = 9554,
  [SMALL_STATE(85)] = 9670,
  [SMALL_STATE(86)] = 9786,
  [SMALL_STATE(87)] = 9902,
  [SMALL_STATE(88)] = 10018,
  [SMALL_STATE(89)] = 10134,
  [SMALL_STATE(90)] = 10250,
  [SMALL_STATE(91)] = 10366,
  [SMALL_STATE(92)] = 10482,
  [SMALL_STATE(93)] = 10598,
  [SMALL_STATE(94)] = 10714,
  [SMALL_STATE(95)] = 10830,
  [SMALL_STATE(96)] = 10946,
  [SMALL_STATE(97)] = 11047,
  [SMALL_STATE(98)] = 11148,
  [SMALL_STATE(99)] = 11246,
  [SMALL_STATE(100)] = 11344,
  [SMALL_STATE(101)] = 11442,
  [SMALL_STATE(102)] = 11540,
  [SMALL_STATE(103)] = 11638,
  [SMALL_STATE(104)] = 11736,
  [SMALL_STATE(105)] = 11834,
  [SMALL_STATE(106)] = 11932,
  [SMALL_STATE(107)] = 12030,
  [SMALL_STATE(108)] = 12128,
  [SMALL_STATE(109)] = 12226,
  [SMALL_STATE(110)] = 12324,
  [SMALL_STATE(111)] = 12422,
  [SMALL_STATE(112)] = 12520,
  [SMALL_STATE(113)] = 12618,
  [SMALL_STATE(114)] = 12716,
  [SMALL_STATE(115)] = 12814,
  [SMALL_STATE(116)] = 12912,
  [SMALL_STATE(117)] = 13010,
  [SMALL_STATE(118)] = 13108,
  [SMALL_STATE(119)] = 13206,
  [SMALL_STATE(120)] = 13304,
  [SMALL_STATE(121)] = 13402,
  [SMALL_STATE(122)] = 13500,
  [SMALL_STATE(123)] = 13598,
  [SMALL_STATE(124)] = 13696,
  [SMALL_STATE(125)] = 13794,
  [SMALL_STATE(126)] = 13892,
  [SMALL_STATE(127)] = 13945,
  [SMALL_STATE(128)] = 13998,
  [SMALL_STATE(129)] = 14050,
  [SMALL_STATE(130)] = 14102,
  [SMALL_STATE(131)] = 14154,
  [SMALL_STATE(132)] = 14203,
  [SMALL_STATE(133)] = 14252,
  [SMALL_STATE(134)] = 14301,
  [SMALL_STATE(135)] = 14350,
  [SMALL_STATE(136)] = 14399,
  [SMALL_STATE(137)] = 14448,
  [SMALL_STATE(138)] = 14497,
  [SMALL_STATE(139)] = 14546,
  [SMALL_STATE(140)] = 14595,
  [SMALL_STATE(141)] = 14644,
  [SMALL_STATE(142)] = 14693,
  [SMALL_STATE(143)] = 14744,
  [SMALL_STATE(144)] = 14795,
  [SMALL_STATE(145)] = 14843,
  [SMALL_STATE(146)] = 14891,
  [SMALL_STATE(147)] = 14939,
  [SMALL_STATE(148)] = 14984,
  [SMALL_STATE(149)] = 15029,
  [SMALL_STATE(150)] = 15074,
  [SMALL_STATE(151)] = 15119,
  [SMALL_STATE(152)] = 15164,
  [SMALL_STATE(153)] = 15209,
  [SMALL_STATE(154)] = 15254,
  [SMALL_STATE(155)] = 15299,
  [SMALL_STATE(156)] = 15344,
  [SMALL_STATE(157)] = 15389,
  [SMALL_STATE(158)] = 15434,
  [SMALL_STATE(159)] = 15479,
  [SMALL_STATE(160)] = 15524,
  [SMALL_STATE(161)] = 15569,
  [SMALL_STATE(162)] = 15614,
  [SMALL_STATE(163)] = 15659,
  [SMALL_STATE(164)] = 15704,
  [SMALL_STATE(165)] = 15755,
  [SMALL_STATE(166)] = 15800,
  [SMALL_STATE(167)] = 15845,
  [SMALL_STATE(168)] = 15890,
  [SMALL_STATE(169)] = 15935,
  [SMALL_STATE(170)] = 15980,
  [SMALL_STATE(171)] = 16025,
  [SMALL_STATE(172)] = 16070,
  [SMALL_STATE(173)] = 16105,
  [SMALL_STATE(174)] = 16150,
  [SMALL_STATE(175)] = 16185,
  [SMALL_STATE(176)] = 16230,
  [SMALL_STATE(177)] = 16275,
  [SMALL_STATE(178)] = 16320,
  [SMALL_STATE(179)] = 16365,
  [SMALL_STATE(180)] = 16410,
  [SMALL_STATE(181)] = 16455,
  [SMALL_STATE(182)] = 16503,
  [SMALL_STATE(183)] = 16551,
  [SMALL_STATE(184)] = 16596,
  [SMALL_STATE(185)] = 16625,
  [SMALL_STATE(186)] = 16656,
  [SMALL_STATE(187)] = 16685,
  [SMALL_STATE(188)] = 16736,
  [SMALL_STATE(189)] = 16767,
  [SMALL_STATE(190)] = 16796,
  [SMALL_STATE(191)] = 16825,
  [SMALL_STATE(192)] = 16870,
  [SMALL_STATE(193)] = 16915,
  [SMALL_STATE(194)] = 16944,
  [SMALL_STATE(195)] = 16989,
  [SMALL_STATE(196)] = 17018,
  [SMALL_STATE(197)] = 17069,
  [SMALL_STATE(198)] = 17116,
  [SMALL_STATE(199)] = 17161,
  [SMALL_STATE(200)] = 17206,
  [SMALL_STATE(201)] = 17251,
  [SMALL_STATE(202)] = 17280,
  [SMALL_STATE(203)] = 17308,
  [SMALL_STATE(204)] = 17346,
  [SMALL_STATE(205)] = 17374,
  [SMALL_STATE(206)] = 17402,
  [SMALL_STATE(207)] = 17430,
  [SMALL_STATE(208)] = 17458,
  [SMALL_STATE(209)] = 17486,
  [SMALL_STATE(210)] = 17514,
  [SMALL_STATE(211)] = 17542,
  [SMALL_STATE(212)] = 17570,
  [SMALL_STATE(213)] = 17598,
  [SMALL_STATE(214)] = 17626,
  [SMALL_STATE(215)] = 17654,
  [SMALL_STATE(216)] = 17682,
  [SMALL_STATE(217)] = 17710,
  [SMALL_STATE(218)] = 17738,
  [SMALL_STATE(219)] = 17766,
  [SMALL_STATE(220)] = 17794,
  [SMALL_STATE(221)] = 17822,
  [SMALL_STATE(222)] = 17850,
  [SMALL_STATE(223)] = 17878,
  [SMALL_STATE(224)] = 17906,
  [SMALL_STATE(225)] = 17934,
  [SMALL_STATE(226)] = 17962,
  [SMALL_STATE(227)] = 17990,
  [SMALL_STATE(228)] = 18018,
  [SMALL_STATE(229)] = 18058,
  [SMALL_STATE(230)] = 18087,
  [SMALL_STATE(231)] = 18114,
  [SMALL_STATE(232)] = 18138,
  [SMALL_STATE(233)] = 18162,
  [SMALL_STATE(234)] = 18188,
  [SMALL_STATE(235)] = 18209,
  [SMALL_STATE(236)] = 18230,
  [SMALL_STATE(237)] = 18255,
  [SMALL_STATE(238)] = 18284,
  [SMALL_STATE(239)] = 18311,
  [SMALL_STATE(240)] = 18332,
  [SMALL_STATE(241)] = 18355,
  [SMALL_STATE(242)] = 18376,
  [SMALL_STATE(243)] = 18397,
  [SMALL_STATE(244)] = 18418,
  [SMALL_STATE(245)] = 18439,
  [SMALL_STATE(246)] = 18460,
  [SMALL_STATE(247)] = 18487,
  [SMALL_STATE(248)] = 18510,
  [SMALL_STATE(249)] = 18533,
  [SMALL_STATE(250)] = 18554,
  [SMALL_STATE(251)] = 18575,
  [SMALL_STATE(252)] = 18596,
  [SMALL_STATE(253)] = 18617,
  [SMALL_STATE(254)] = 18638,
  [SMALL_STATE(255)] = 18665,
  [SMALL_STATE(256)] = 18692,
  [SMALL_STATE(257)] = 18715,
  [SMALL_STATE(258)] = 18742,
  [SMALL_STATE(259)] = 18769,
  [SMALL_STATE(260)] = 18790,
  [SMALL_STATE(261)] = 18815,
  [SMALL_STATE(262)] = 18842,
  [SMALL_STATE(263)] = 18863,
  [SMALL_STATE(264)] = 18884,
  [SMALL_STATE(265)] = 18907,
  [SMALL_STATE(266)] = 18938,
  [SMALL_STATE(267)] = 18961,
  [SMALL_STATE(268)] = 18982,
  [SMALL_STATE(269)] = 19003,
  [SMALL_STATE(270)] = 19024,
  [SMALL_STATE(271)] = 19047,
  [SMALL_STATE(272)] = 19069,
  [SMALL_STATE(273)] = 19091,
  [SMALL_STATE(274)] = 19113,
  [SMALL_STATE(275)] = 19135,
  [SMALL_STATE(276)] = 19157,
  [SMALL_STATE(277)] = 19179,
  [SMALL_STATE(278)] = 19201,
  [SMALL_STATE(279)] = 19223,
  [SMALL_STATE(280)] = 19245,
  [SMALL_STATE(281)] = 19267,
  [SMALL_STATE(282)] = 19289,
  [SMALL_STATE(283)] = 19311,
  [SMALL_STATE(284)] = 19333,
  [SMALL_STATE(285)] = 19355,
  [SMALL_STATE(286)] = 19381,
  [SMALL_STATE(287)] = 19403,
  [SMALL_STATE(288)] = 19425,
  [SMALL_STATE(289)] = 19447,
  [SMALL_STATE(290)] = 19469,
  [SMALL_STATE(291)] = 19491,
  [SMALL_STATE(292)] = 19513,
  [SMALL_STATE(293)] = 19535,
  [SMALL_STATE(294)] = 19557,
  [SMALL_STATE(295)] = 19579,
  [SMALL_STATE(296)] = 19601,
  [SMALL_STATE(297)] = 19623,
  [SMALL_STATE(298)] = 19645,
  [SMALL_STATE(299)] = 19669,
  [SMALL_STATE(300)] = 19691,
  [SMALL_STATE(301)] = 19718,
  [SMALL_STATE(302)] = 19745,
  [SMALL_STATE(303)] = 19766,
  [SMALL_STATE(304)] = 19793,
  [SMALL_STATE(305)] = 19820,
  [SMALL_STATE(306)] = 19841,
  [SMALL_STATE(307)] = 19868,
  [SMALL_STATE(308)] = 19895,
  [SMALL_STATE(309)] = 19916,
  [SMALL_STATE(310)] = 19935,
  [SMALL_STATE(311)] = 19954,
  [SMALL_STATE(312)] = 19979,
  [SMALL_STATE(313)] = 20000,
  [SMALL_STATE(314)] = 20021,
  [SMALL_STATE(315)] = 20040,
  [SMALL_STATE(316)] = 20059,
  [SMALL_STATE(317)] = 20078,
  [SMALL_STATE(318)] = 20099,
  [SMALL_STATE(319)] = 20126,
  [SMALL_STATE(320)] = 20151,
  [SMALL_STATE(321)] = 20178,
  [SMALL_STATE(322)] = 20197,
  [SMALL_STATE(323)] = 20224,
  [SMALL_STATE(324)] = 20251,
  [SMALL_STATE(325)] = 20270,
  [SMALL_STATE(326)] = 20297,
  [SMALL_STATE(327)] = 20324,
  [SMALL_STATE(328)] = 20343,
  [SMALL_STATE(329)] = 20362,
  [SMALL_STATE(330)] = 20381,
  [SMALL_STATE(331)] = 20408,
  [SMALL_STATE(332)] = 20427,
  [SMALL_STATE(333)] = 20446,
  [SMALL_STATE(334)] = 20465,
  [SMALL_STATE(335)] = 20492,
  [SMALL_STATE(336)] = 20511,
  [SMALL_STATE(337)] = 20530,
  [SMALL_STATE(338)] = 20555,
  [SMALL_STATE(339)] = 20574,
  [SMALL_STATE(340)] = 20593,
  [SMALL_STATE(341)] = 20612,
  [SMALL_STATE(342)] = 20635,
  [SMALL_STATE(343)] = 20654,
  [SMALL_STATE(344)] = 20679,
  [SMALL_STATE(345)] = 20706,
  [SMALL_STATE(346)] = 20727,
  [SMALL_STATE(347)] = 20752,
  [SMALL_STATE(348)] = 20779,
  [SMALL_STATE(349)] = 20806,
  [SMALL_STATE(350)] = 20827,
  [SMALL_STATE(351)] = 20848,
  [SMALL_STATE(352)] = 20873,
  [SMALL_STATE(353)] = 20894,
  [SMALL_STATE(354)] = 20912,
  [SMALL_STATE(355)] = 20934,
  [SMALL_STATE(356)] = 20956,
  [SMALL_STATE(357)] = 20980,
  [SMALL_STATE(358)] = 20998,
  [SMALL_STATE(359)] = 21022,
  [SMALL_STATE(360)] = 21046,
  [SMALL_STATE(361)] = 21070,
  [SMALL_STATE(362)] = 21092,
  [SMALL_STATE(363)] = 21112,
  [SMALL_STATE(364)] = 21136,
  [SMALL_STATE(365)] = 21156,
  [SMALL_STATE(366)] = 21180,
  [SMALL_STATE(367)] = 21198,
  [SMALL_STATE(368)] = 21218,
  [SMALL_STATE(369)] = 21240,
  [SMALL_STATE(370)] = 21258,
  [SMALL_STATE(371)] = 21282,
  [SMALL_STATE(372)] = 21306,
  [SMALL_STATE(373)] = 21330,
  [SMALL_STATE(374)] = 21354,
  [SMALL_STATE(375)] = 21376,
  [SMALL_STATE(376)] = 21400,
  [SMALL_STATE(377)] = 21418,
  [SMALL_STATE(378)] = 21442,
  [SMALL_STATE(379)] = 21460,
  [SMALL_STATE(380)] = 21482,
  [SMALL_STATE(381)] = 21503,
  [SMALL_STATE(382)] = 21524,
  [SMALL_STATE(383)] = 21543,
  [SMALL_STATE(384)] = 21564,
  [SMALL_STATE(385)] = 21585,
  [SMALL_STATE(386)] = 21604,
  [SMALL_STATE(387)] = 21623,
  [SMALL_STATE(388)] = 21642,
  [SMALL_STATE(389)] = 21661,
  [SMALL_STATE(390)] = 21682,
  [SMALL_STATE(391)] = 21703,
  [SMALL_STATE(392)] = 21724,
  [SMALL_STATE(393)] = 21745,
  [SMALL_STATE(394)] = 21766,
  [SMALL_STATE(395)] = 21787,
  [SMALL_STATE(396)] = 21808,
  [SMALL_STATE(397)] = 21829,
  [SMALL_STATE(398)] = 21850,
  [SMALL_STATE(399)] = 21871,
  [SMALL_STATE(400)] = 21892,
  [SMALL_STATE(401)] = 21913,
  [SMALL_STATE(402)] = 21934,
  [SMALL_STATE(403)] = 21955,
  [SMALL_STATE(404)] = 21976,
  [SMALL_STATE(405)] = 21995,
  [SMALL_STATE(406)] = 22014,
  [SMALL_STATE(407)] = 22035,
  [SMALL_STATE(408)] = 22056,
  [SMALL_STATE(409)] = 22077,
  [SMALL_STATE(410)] = 22098,
  [SMALL_STATE(411)] = 22119,
  [SMALL_STATE(412)] = 22140,
  [SMALL_STATE(413)] = 22159,
  [SMALL_STATE(414)] = 22180,
  [SMALL_STATE(415)] = 22201,
  [SMALL_STATE(416)] = 22222,
  [SMALL_STATE(417)] = 22243,
  [SMALL_STATE(418)] = 22264,
  [SMALL_STATE(419)] = 22285,
  [SMALL_STATE(420)] = 22304,
  [SMALL_STATE(421)] = 22325,
  [SMALL_STATE(422)] = 22344,
  [SMALL_STATE(423)] = 22365,
  [SMALL_STATE(424)] = 22384,
  [SMALL_STATE(425)] = 22405,
  [SMALL_STATE(426)] = 22426,
  [SMALL_STATE(427)] = 22447,
  [SMALL_STATE(428)] = 22468,
  [SMALL_STATE(429)] = 22489,
  [SMALL_STATE(430)] = 22510,
  [SMALL_STATE(431)] = 22531,
  [SMALL_STATE(432)] = 22552,
  [SMALL_STATE(433)] = 22571,
  [SMALL_STATE(434)] = 22592,
  [SMALL_STATE(435)] = 22613,
  [SMALL_STATE(436)] = 22634,
  [SMALL_STATE(437)] = 22655,
  [SMALL_STATE(438)] = 22676,
  [SMALL_STATE(439)] = 22697,
  [SMALL_STATE(440)] = 22718,
  [SMALL_STATE(441)] = 22739,
  [SMALL_STATE(442)] = 22760,
  [SMALL_STATE(443)] = 22781,
  [SMALL_STATE(444)] = 22802,
  [SMALL_STATE(445)] = 22823,
  [SMALL_STATE(446)] = 22844,
  [SMALL_STATE(447)] = 22865,
  [SMALL_STATE(448)] = 22886,
  [SMALL_STATE(449)] = 22907,
  [SMALL_STATE(450)] = 22928,
  [SMALL_STATE(451)] = 22949,
  [SMALL_STATE(452)] = 22970,
  [SMALL_STATE(453)] = 22991,
  [SMALL_STATE(454)] = 23012,
  [SMALL_STATE(455)] = 23033,
  [SMALL_STATE(456)] = 23054,
  [SMALL_STATE(457)] = 23075,
  [SMALL_STATE(458)] = 23096,
  [SMALL_STATE(459)] = 23117,
  [SMALL_STATE(460)] = 23138,
  [SMALL_STATE(461)] = 23159,
  [SMALL_STATE(462)] = 23180,
  [SMALL_STATE(463)] = 23201,
  [SMALL_STATE(464)] = 23222,
  [SMALL_STATE(465)] = 23243,
  [SMALL_STATE(466)] = 23264,
  [SMALL_STATE(467)] = 23285,
  [SMALL_STATE(468)] = 23306,
  [SMALL_STATE(469)] = 23327,
  [SMALL_STATE(470)] = 23348,
  [SMALL_STATE(471)] = 23369,
  [SMALL_STATE(472)] = 23388,
  [SMALL_STATE(473)] = 23409,
  [SMALL_STATE(474)] = 23430,
  [SMALL_STATE(475)] = 23449,
  [SMALL_STATE(476)] = 23470,
  [SMALL_STATE(477)] = 23491,
  [SMALL_STATE(478)] = 23512,
  [SMALL_STATE(479)] = 23533,
  [SMALL_STATE(480)] = 23554,
  [SMALL_STATE(481)] = 23575,
  [SMALL_STATE(482)] = 23596,
  [SMALL_STATE(483)] = 23617,
  [SMALL_STATE(484)] = 23638,
  [SMALL_STATE(485)] = 23659,
  [SMALL_STATE(486)] = 23680,
  [SMALL_STATE(487)] = 23701,
  [SMALL_STATE(488)] = 23722,
  [SMALL_STATE(489)] = 23743,
  [SMALL_STATE(490)] = 23764,
  [SMALL_STATE(491)] = 23785,
  [SMALL_STATE(492)] = 23804,
  [SMALL_STATE(493)] = 23825,
  [SMALL_STATE(494)] = 23846,
  [SMALL_STATE(495)] = 23865,
  [SMALL_STATE(496)] = 23886,
  [SMALL_STATE(497)] = 23907,
  [SMALL_STATE(498)] = 23928,
  [SMALL_STATE(499)] = 23949,
  [SMALL_STATE(500)] = 23970,
  [SMALL_STATE(501)] = 23991,
  [SMALL_STATE(502)] = 24012,
  [SMALL_STATE(503)] = 24033,
  [SMALL_STATE(504)] = 24054,
  [SMALL_STATE(505)] = 24075,
  [SMALL_STATE(506)] = 24096,
  [SMALL_STATE(507)] = 24117,
  [SMALL_STATE(508)] = 24138,
  [SMALL_STATE(509)] = 24156,
  [SMALL_STATE(510)] = 24172,
  [SMALL_STATE(511)] = 24190,
  [SMALL_STATE(512)] = 24208,
  [SMALL_STATE(513)] = 24224,
  [SMALL_STATE(514)] = 24242,
  [SMALL_STATE(515)] = 24260,
  [SMALL_STATE(516)] = 24278,
  [SMALL_STATE(517)] = 24296,
  [SMALL_STATE(518)] = 24314,
  [SMALL_STATE(519)] = 24332,
  [SMALL_STATE(520)] = 24348,
  [SMALL_STATE(521)] = 24366,
  [SMALL_STATE(522)] = 24384,
  [SMALL_STATE(523)] = 24400,
  [SMALL_STATE(524)] = 24416,
  [SMALL_STATE(525)] = 24432,
  [SMALL_STATE(526)] = 24448,
  [SMALL_STATE(527)] = 24464,
  [SMALL_STATE(528)] = 24480,
  [SMALL_STATE(529)] = 24496,
  [SMALL_STATE(530)] = 24514,
  [SMALL_STATE(531)] = 24532,
  [SMALL_STATE(532)] = 24550,
  [SMALL_STATE(533)] = 24566,
  [SMALL_STATE(534)] = 24584,
  [SMALL_STATE(535)] = 24600,
  [SMALL_STATE(536)] = 24616,
  [SMALL_STATE(537)] = 24634,
  [SMALL_STATE(538)] = 24652,
  [SMALL_STATE(539)] = 24670,
  [SMALL_STATE(540)] = 24688,
  [SMALL_STATE(541)] = 24706,
  [SMALL_STATE(542)] = 24724,
  [SMALL_STATE(543)] = 24742,
  [SMALL_STATE(544)] = 24758,
  [SMALL_STATE(545)] = 24776,
  [SMALL_STATE(546)] = 24794,
  [SMALL_STATE(547)] = 24812,
  [SMALL_STATE(548)] = 24828,
  [SMALL_STATE(549)] = 24846,
  [SMALL_STATE(550)] = 24864,
  [SMALL_STATE(551)] = 24880,
  [SMALL_STATE(552)] = 24898,
  [SMALL_STATE(553)] = 24916,
  [SMALL_STATE(554)] = 24934,
  [SMALL_STATE(555)] = 24952,
  [SMALL_STATE(556)] = 24970,
  [SMALL_STATE(557)] = 24988,
  [SMALL_STATE(558)] = 25006,
  [SMALL_STATE(559)] = 25022,
  [SMALL_STATE(560)] = 25040,
  [SMALL_STATE(561)] = 25058,
  [SMALL_STATE(562)] = 25076,
  [SMALL_STATE(563)] = 25094,
  [SMALL_STATE(564)] = 25112,
  [SMALL_STATE(565)] = 25130,
  [SMALL_STATE(566)] = 25146,
  [SMALL_STATE(567)] = 25164,
  [SMALL_STATE(568)] = 25182,
  [SMALL_STATE(569)] = 25200,
  [SMALL_STATE(570)] = 25218,
  [SMALL_STATE(571)] = 25236,
  [SMALL_STATE(572)] = 25254,
  [SMALL_STATE(573)] = 25272,
  [SMALL_STATE(574)] = 25290,
  [SMALL_STATE(575)] = 25308,
  [SMALL_STATE(576)] = 25326,
  [SMALL_STATE(577)] = 25342,
  [SMALL_STATE(578)] = 25360,
  [SMALL_STATE(579)] = 25378,
  [SMALL_STATE(580)] = 25393,
  [SMALL_STATE(581)] = 25408,
  [SMALL_STATE(582)] = 25423,
  [SMALL_STATE(583)] = 25438,
  [SMALL_STATE(584)] = 25453,
  [SMALL_STATE(585)] = 25468,
  [SMALL_STATE(586)] = 25483,
  [SMALL_STATE(587)] = 25498,
  [SMALL_STATE(588)] = 25513,
  [SMALL_STATE(589)] = 25528,
  [SMALL_STATE(590)] = 25543,
  [SMALL_STATE(591)] = 25558,
  [SMALL_STATE(592)] = 25573,
  [SMALL_STATE(593)] = 25588,
  [SMALL_STATE(594)] = 25603,
  [SMALL_STATE(595)] = 25618,
  [SMALL_STATE(596)] = 25633,
  [SMALL_STATE(597)] = 25648,
  [SMALL_STATE(598)] = 25663,
  [SMALL_STATE(599)] = 25678,
  [SMALL_STATE(600)] = 25693,
  [SMALL_STATE(601)] = 25708,
  [SMALL_STATE(602)] = 25723,
  [SMALL_STATE(603)] = 25738,
  [SMALL_STATE(604)] = 25753,
  [SMALL_STATE(605)] = 25768,
  [SMALL_STATE(606)] = 25783,
  [SMALL_STATE(607)] = 25798,
  [SMALL_STATE(608)] = 25813,
  [SMALL_STATE(609)] = 25828,
  [SMALL_STATE(610)] = 25843,
  [SMALL_STATE(611)] = 25858,
  [SMALL_STATE(612)] = 25873,
  [SMALL_STATE(613)] = 25888,
  [SMALL_STATE(614)] = 25903,
  [SMALL_STATE(615)] = 25918,
  [SMALL_STATE(616)] = 25933,
  [SMALL_STATE(617)] = 25948,
  [SMALL_STATE(618)] = 25963,
  [SMALL_STATE(619)] = 25978,
  [SMALL_STATE(620)] = 25993,
  [SMALL_STATE(621)] = 26008,
  [SMALL_STATE(622)] = 26023,
  [SMALL_STATE(623)] = 26038,
  [SMALL_STATE(624)] = 26053,
  [SMALL_STATE(625)] = 26068,
  [SMALL_STATE(626)] = 26083,
  [SMALL_STATE(627)] = 26098,
  [SMALL_STATE(628)] = 26113,
  [SMALL_STATE(629)] = 26128,
  [SMALL_STATE(630)] = 26143,
  [SMALL_STATE(631)] = 26158,
  [SMALL_STATE(632)] = 26173,
  [SMALL_STATE(633)] = 26188,
  [SMALL_STATE(634)] = 26203,
  [SMALL_STATE(635)] = 26218,
  [SMALL_STATE(636)] = 26233,
  [SMALL_STATE(637)] = 26248,
  [SMALL_STATE(638)] = 26263,
  [SMALL_STATE(639)] = 26278,
  [SMALL_STATE(640)] = 26293,
  [SMALL_STATE(641)] = 26308,
  [SMALL_STATE(642)] = 26323,
  [SMALL_STATE(643)] = 26338,
  [SMALL_STATE(644)] = 26353,
  [SMALL_STATE(645)] = 26368,
  [SMALL_STATE(646)] = 26383,
  [SMALL_STATE(647)] = 26398,
  [SMALL_STATE(648)] = 26413,
  [SMALL_STATE(649)] = 26428,
  [SMALL_STATE(650)] = 26443,
  [SMALL_STATE(651)] = 26458,
  [SMALL_STATE(652)] = 26473,
  [SMALL_STATE(653)] = 26488,
  [SMALL_STATE(654)] = 26503,
  [SMALL_STATE(655)] = 26518,
  [SMALL_STATE(656)] = 26533,
  [SMALL_STATE(657)] = 26548,
  [SMALL_STATE(658)] = 26563,
  [SMALL_STATE(659)] = 26578,
  [SMALL_STATE(660)] = 26593,
  [SMALL_STATE(661)] = 26608,
  [SMALL_STATE(662)] = 26623,
  [SMALL_STATE(663)] = 26638,
  [SMALL_STATE(664)] = 26653,
  [SMALL_STATE(665)] = 26668,
  [SMALL_STATE(666)] = 26683,
  [SMALL_STATE(667)] = 26698,
  [SMALL_STATE(668)] = 26713,
  [SMALL_STATE(669)] = 26728,
  [SMALL_STATE(670)] = 26743,
  [SMALL_STATE(671)] = 26758,
  [SMALL_STATE(672)] = 26773,
  [SMALL_STATE(673)] = 26788,
  [SMALL_STATE(674)] = 26803,
  [SMALL_STATE(675)] = 26818,
  [SMALL_STATE(676)] = 26833,
  [SMALL_STATE(677)] = 26848,
  [SMALL_STATE(678)] = 26863,
  [SMALL_STATE(679)] = 26878,
  [SMALL_STATE(680)] = 26893,
  [SMALL_STATE(681)] = 26908,
  [SMALL_STATE(682)] = 26923,
  [SMALL_STATE(683)] = 26938,
  [SMALL_STATE(684)] = 26953,
  [SMALL_STATE(685)] = 26968,
  [SMALL_STATE(686)] = 26983,
  [SMALL_STATE(687)] = 26998,
  [SMALL_STATE(688)] = 27013,
  [SMALL_STATE(689)] = 27028,
  [SMALL_STATE(690)] = 27043,
  [SMALL_STATE(691)] = 27058,
  [SMALL_STATE(692)] = 27073,
  [SMALL_STATE(693)] = 27088,
  [SMALL_STATE(694)] = 27103,
  [SMALL_STATE(695)] = 27118,
  [SMALL_STATE(696)] = 27133,
  [SMALL_STATE(697)] = 27148,
  [SMALL_STATE(698)] = 27163,
  [SMALL_STATE(699)] = 27178,
  [SMALL_STATE(700)] = 27193,
  [SMALL_STATE(701)] = 27208,
  [SMALL_STATE(702)] = 27223,
  [SMALL_STATE(703)] = 27238,
  [SMALL_STATE(704)] = 27253,
  [SMALL_STATE(705)] = 27268,
  [SMALL_STATE(706)] = 27283,
  [SMALL_STATE(707)] = 27298,
  [SMALL_STATE(708)] = 27313,
  [SMALL_STATE(709)] = 27328,
  [SMALL_STATE(710)] = 27343,
  [SMALL_STATE(711)] = 27358,
  [SMALL_STATE(712)] = 27373,
  [SMALL_STATE(713)] = 27388,
  [SMALL_STATE(714)] = 27403,
  [SMALL_STATE(715)] = 27418,
  [SMALL_STATE(716)] = 27433,
  [SMALL_STATE(717)] = 27448,
  [SMALL_STATE(718)] = 27463,
  [SMALL_STATE(719)] = 27478,
  [SMALL_STATE(720)] = 27493,
  [SMALL_STATE(721)] = 27508,
  [SMALL_STATE(722)] = 27523,
  [SMALL_STATE(723)] = 27538,
  [SMALL_STATE(724)] = 27553,
  [SMALL_STATE(725)] = 27568,
  [SMALL_STATE(726)] = 27583,
  [SMALL_STATE(727)] = 27598,
  [SMALL_STATE(728)] = 27613,
  [SMALL_STATE(729)] = 27628,
  [SMALL_STATE(730)] = 27643,
  [SMALL_STATE(731)] = 27658,
  [SMALL_STATE(732)] = 27673,
  [SMALL_STATE(733)] = 27688,
  [SMALL_STATE(734)] = 27703,
  [SMALL_STATE(735)] = 27718,
  [SMALL_STATE(736)] = 27733,
  [SMALL_STATE(737)] = 27748,
  [SMALL_STATE(738)] = 27763,
  [SMALL_STATE(739)] = 27778,
  [SMALL_STATE(740)] = 27793,
  [SMALL_STATE(741)] = 27808,
  [SMALL_STATE(742)] = 27823,
  [SMALL_STATE(743)] = 27838,
  [SMALL_STATE(744)] = 27853,
  [SMALL_STATE(745)] = 27868,
  [SMALL_STATE(746)] = 27883,
  [SMALL_STATE(747)] = 27898,
  [SMALL_STATE(748)] = 27913,
  [SMALL_STATE(749)] = 27928,
  [SMALL_STATE(750)] = 27943,
  [SMALL_STATE(751)] = 27958,
  [SMALL_STATE(752)] = 27973,
  [SMALL_STATE(753)] = 27988,
  [SMALL_STATE(754)] = 28003,
  [SMALL_STATE(755)] = 28018,
  [SMALL_STATE(756)] = 28033,
  [SMALL_STATE(757)] = 28048,
  [SMALL_STATE(758)] = 28063,
  [SMALL_STATE(759)] = 28078,
  [SMALL_STATE(760)] = 28093,
  [SMALL_STATE(761)] = 28108,
  [SMALL_STATE(762)] = 28123,
  [SMALL_STATE(763)] = 28138,
  [SMALL_STATE(764)] = 28153,
  [SMALL_STATE(765)] = 28168,
  [SMALL_STATE(766)] = 28183,
  [SMALL_STATE(767)] = 28198,
  [SMALL_STATE(768)] = 28213,
  [SMALL_STATE(769)] = 28228,
  [SMALL_STATE(770)] = 28243,
  [SMALL_STATE(771)] = 28258,
  [SMALL_STATE(772)] = 28273,
  [SMALL_STATE(773)] = 28288,
  [SMALL_STATE(774)] = 28303,
  [SMALL_STATE(775)] = 28318,
  [SMALL_STATE(776)] = 28333,
  [SMALL_STATE(777)] = 28348,
  [SMALL_STATE(778)] = 28363,
  [SMALL_STATE(779)] = 28378,
  [SMALL_STATE(780)] = 28393,
  [SMALL_STATE(781)] = 28408,
  [SMALL_STATE(782)] = 28423,
  [SMALL_STATE(783)] = 28438,
  [SMALL_STATE(784)] = 28453,
  [SMALL_STATE(785)] = 28468,
  [SMALL_STATE(786)] = 28483,
  [SMALL_STATE(787)] = 28498,
  [SMALL_STATE(788)] = 28513,
  [SMALL_STATE(789)] = 28528,
  [SMALL_STATE(790)] = 28543,
  [SMALL_STATE(791)] = 28558,
  [SMALL_STATE(792)] = 28573,
  [SMALL_STATE(793)] = 28588,
  [SMALL_STATE(794)] = 28603,
  [SMALL_STATE(795)] = 28618,
  [SMALL_STATE(796)] = 28633,
  [SMALL_STATE(797)] = 28648,
  [SMALL_STATE(798)] = 28663,
  [SMALL_STATE(799)] = 28678,
  [SMALL_STATE(800)] = 28693,
  [SMALL_STATE(801)] = 28708,
  [SMALL_STATE(802)] = 28723,
  [SMALL_STATE(803)] = 28738,
  [SMALL_STATE(804)] = 28753,
  [SMALL_STATE(805)] = 28768,
  [SMALL_STATE(806)] = 28783,
  [SMALL_STATE(807)] = 28798,
  [SMALL_STATE(808)] = 28813,
  [SMALL_STATE(809)] = 28828,
  [SMALL_STATE(810)] = 28843,
  [SMALL_STATE(811)] = 28858,
  [SMALL_STATE(812)] = 28873,
  [SMALL_STATE(813)] = 28888,
  [SMALL_STATE(814)] = 28903,
  [SMALL_STATE(815)] = 28918,
  [SMALL_STATE(816)] = 28933,
  [SMALL_STATE(817)] = 28948,
  [SMALL_STATE(818)] = 28963,
  [SMALL_STATE(819)] = 28978,
  [SMALL_STATE(820)] = 28993,
  [SMALL_STATE(821)] = 29008,
  [SMALL_STATE(822)] = 29023,
  [SMALL_STATE(823)] = 29038,
  [SMALL_STATE(824)] = 29053,
  [SMALL_STATE(825)] = 29068,
  [SMALL_STATE(826)] = 29083,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(714),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 1, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0), SHIFT_REPEAT(134),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0), SHIFT_REPEAT(123),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0), SHIFT_REPEAT(533),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0), SHIFT_REPEAT(797),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(769),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 5, 0, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 4, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_range, 3, 0, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 0),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 5, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, 0, 0),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_core(void) {
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
