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
#define STATE_COUNT 815
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 144
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_line_token1 = 1,
  anon_sym_COLON = 2,
  anon_sym_LT = 3,
  sym_single_line_comment = 4,
  anon_sym_LBRACE_DASH = 5,
  anon_sym_DASH_RBRACE = 6,
  anon_sym_def = 7,
  anon_sym_struct = 8,
  anon_sym_union = 9,
  anon_sym_COLON_EQ = 10,
  sym_int_const = 11,
  sym_floating_const = 12,
  sym_sym = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_void = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_const = 20,
  anon_sym_volatile = 21,
  anon_sym__Atomic = 22,
  anon_sym_STAR = 23,
  anon_sym_LPAREN_STAR_RPAREN = 24,
  anon_sym_restrict = 25,
  anon_sym_COMMA = 26,
  anon_sym_DOT_DOT_DOT = 27,
  aux_sym_integer_type_token1 = 28,
  sym_floating_type = 29,
  anon_sym_ail_ctype = 30,
  anon_sym_EQ = 31,
  anon_sym_glob = 32,
  anon_sym_pure = 33,
  anon_sym_memop = 34,
  anon_sym_let = 35,
  anon_sym_in = 36,
  anon_sym_if = 37,
  anon_sym_then = 38,
  anon_sym_else = 39,
  anon_sym_case = 40,
  anon_sym_of = 41,
  anon_sym_PIPE = 42,
  anon_sym_EQ_GT = 43,
  anon_sym_end = 44,
  anon_sym_pcall = 45,
  anon_sym_ccall = 46,
  anon_sym_unseq = 47,
  anon_sym_weak = 48,
  anon_sym_SEMI = 49,
  anon_sym_strong = 50,
  anon_sym_bound = 51,
  anon_sym_save = 52,
  anon_sym_run = 53,
  anon_sym_nd = 54,
  anon_sym_par = 55,
  anon_sym_eff = 56,
  anon_sym_undef = 57,
  anon_sym_error = 58,
  anon_sym_CivNULLcap = 59,
  anon_sym_signed = 60,
  anon_sym_unsigned = 61,
  anon_sym_array_shift = 62,
  anon_sym_member_shift = 63,
  anon_sym_DOT = 64,
  anon_sym_not = 65,
  anon_sym_DASH = 66,
  anon_sym_cfunction = 67,
  anon_sym_LBRACE = 68,
  anon_sym_RBRACE = 69,
  anon_sym_is_scalar = 70,
  anon_sym_is_integer = 71,
  anon_sym_is_signed_LPAREN = 72,
  anon_sym_is_unsigned_LPAREN = 73,
  anon_sym_are_compatible = 74,
  anon_sym_conv_loaded_int = 75,
  anon_sym_LBRACK_RBRACK = 76,
  anon_sym_COLON_COLON = 77,
  anon_sym_DeriveCap = 78,
  aux_sym_pure_memop_op_token1 = 79,
  anon_sym_CapAssignValue = 80,
  anon_sym_Ptr_tIntValue = 81,
  anon_sym_PtrEq = 82,
  anon_sym_PtrNe = 83,
  anon_sym_PtrLt = 84,
  anon_sym_PtrGt = 85,
  anon_sym_PtrLe = 86,
  anon_sym_PtrGe = 87,
  anon_sym_Ptrdiff = 88,
  anon_sym_IntFromPtr = 89,
  anon_sym_PtrFromInt = 90,
  anon_sym_PtrValidForDeref = 91,
  anon_sym_PtrWellAligned = 92,
  anon_sym_PtrArrayShift = 93,
  aux_sym_memop_op_token1 = 94,
  anon_sym_PtrMemberShift = 95,
  anon_sym__ = 96,
  anon_sym_unit = 97,
  anon_sym_boolean = 98,
  anon_sym_ctype = 99,
  anon_sym_loaded = 100,
  anon_sym_storable = 101,
  anon_sym_integer = 102,
  anon_sym_floating = 103,
  anon_sym_pointer = 104,
  anon_sym_array = 105,
  sym_memory_order = 106,
  anon_sym_create_readonly = 107,
  anon_sym_create = 108,
  anon_sym_alloc = 109,
  anon_sym_free = 110,
  anon_sym_kill = 111,
  anon_sym_store = 112,
  anon_sym_store_lock = 113,
  anon_sym_load = 114,
  anon_sym_seq_rmw = 115,
  anon_sym_seq_rmw_with_forward = 116,
  anon_sym_rmw = 117,
  anon_sym_fence = 118,
  anon_sym_neg = 119,
  sym_ub = 120,
  aux_sym_string_token1 = 121,
  anon_sym_Array = 122,
  anon_sym_Ivmax = 123,
  anon_sym_Ivmin = 124,
  anon_sym_Ivsizeof = 125,
  anon_sym_Ivalignof = 126,
  anon_sym_Specified = 127,
  anon_sym_Unspecified = 128,
  anon_sym_Fvfromint = 129,
  anon_sym_Ivfromfloat = 130,
  anon_sym_IvCOMPL = 131,
  anon_sym_IvAND = 132,
  anon_sym_IvOR = 133,
  anon_sym_IvXOR = 134,
  sym_binary_operator = 135,
  sym_bool_literal = 136,
  anon_sym_IvMaxAlignment = 137,
  anon_sym_NULL = 138,
  anon_sym_Cfunction = 139,
  anon_sym_Unit = 140,
  sym_impl = 141,
  anon_sym_ailname = 142,
  anon_sym_proc = 143,
  sym_source_file = 144,
  sym_comment = 145,
  sym_declaration = 146,
  sym_def_aggregate_declaration = 147,
  sym_def_fields = 148,
  sym_def_field = 149,
  sym_core_ctype = 150,
  sym_ctype = 151,
  sym_ctype_star = 152,
  sym_params = 153,
  sym_integer_type = 154,
  sym_basic_type = 155,
  sym_glob_ctype_attribute = 156,
  sym_glob_declaration = 157,
  sym_expr = 158,
  sym_core_type = 159,
  sym_pexpr = 160,
  sym_list_pexpr = 161,
  sym_pure_memop_op = 162,
  sym_memop_op = 163,
  sym_pattern = 164,
  sym_list_pattern = 165,
  sym_name = 166,
  sym_core_base_type = 167,
  sym_core_object_type = 168,
  sym_action = 169,
  sym_paction = 170,
  sym_string = 171,
  sym_cstring = 172,
  sym_ctor = 173,
  sym_cabs_id = 174,
  sym_member = 175,
  sym_value = 176,
  sym_attribute = 177,
  sym_attribute_pair = 178,
  sym_proc_declaration = 179,
  sym_proc_full_declaration = 180,
  sym_proc_forward_declaration = 181,
  sym_def_declaration = 182,
  aux_sym_source_file_repeat1 = 183,
  aux_sym_def_fields_repeat1 = 184,
  aux_sym_params_repeat1 = 185,
  aux_sym_integer_type_repeat1 = 186,
  aux_sym_expr_repeat1 = 187,
  aux_sym_expr_repeat2 = 188,
  aux_sym_expr_repeat3 = 189,
  aux_sym_expr_repeat4 = 190,
  aux_sym_pexpr_repeat1 = 191,
  aux_sym_pexpr_repeat2 = 192,
  aux_sym_pattern_repeat1 = 193,
  aux_sym_core_base_type_repeat1 = 194,
  aux_sym_attribute_repeat1 = 195,
  aux_sym_proc_full_declaration_repeat1 = 196,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = " <",
  [sym_single_line_comment] = "single_line_comment",
  [anon_sym_LBRACE_DASH] = "{-",
  [anon_sym_DASH_RBRACE] = "-}",
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
  [anon_sym_COMMA] = ",",
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
  [sym_comment] = "comment",
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
  [aux_sym_line_token1] = aux_sym_line_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [sym_single_line_comment] = sym_single_line_comment,
  [anon_sym_LBRACE_DASH] = anon_sym_LBRACE_DASH,
  [anon_sym_DASH_RBRACE] = anon_sym_DASH_RBRACE,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_comment] = sym_comment,
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
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COMMA] = {
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
  [sym_comment] = {
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
  [8] = 4,
  [9] = 9,
  [10] = 5,
  [11] = 6,
  [12] = 9,
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
  [29] = 14,
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
  [50] = 25,
  [51] = 51,
  [52] = 52,
  [53] = 30,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 51,
  [59] = 52,
  [60] = 32,
  [61] = 61,
  [62] = 62,
  [63] = 17,
  [64] = 18,
  [65] = 19,
  [66] = 20,
  [67] = 23,
  [68] = 27,
  [69] = 33,
  [70] = 35,
  [71] = 37,
  [72] = 41,
  [73] = 42,
  [74] = 43,
  [75] = 46,
  [76] = 26,
  [77] = 15,
  [78] = 28,
  [79] = 62,
  [80] = 57,
  [81] = 22,
  [82] = 34,
  [83] = 36,
  [84] = 48,
  [85] = 85,
  [86] = 54,
  [87] = 85,
  [88] = 21,
  [89] = 38,
  [90] = 47,
  [91] = 55,
  [92] = 24,
  [93] = 44,
  [94] = 39,
  [95] = 61,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 99,
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
  [116] = 101,
  [117] = 108,
  [118] = 110,
  [119] = 113,
  [120] = 120,
  [121] = 115,
  [122] = 100,
  [123] = 98,
  [124] = 103,
  [125] = 120,
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
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 137,
  [140] = 131,
  [141] = 138,
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
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 147,
  [162] = 162,
  [163] = 152,
  [164] = 164,
  [165] = 164,
  [166] = 166,
  [167] = 158,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 164,
  [172] = 150,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 169,
  [177] = 159,
  [178] = 156,
  [179] = 160,
  [180] = 162,
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
  [193] = 191,
  [194] = 194,
  [195] = 188,
  [196] = 190,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 190,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 192,
  [210] = 210,
  [211] = 211,
  [212] = 194,
  [213] = 213,
  [214] = 200,
  [215] = 183,
  [216] = 184,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 186,
  [224] = 187,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 228,
  [233] = 233,
  [234] = 198,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 197,
  [246] = 246,
  [247] = 244,
  [248] = 248,
  [249] = 248,
  [250] = 250,
  [251] = 251,
  [252] = 244,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 248,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 210,
  [272] = 222,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 219,
  [277] = 217,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 208,
  [282] = 225,
  [283] = 203,
  [284] = 221,
  [285] = 226,
  [286] = 286,
  [287] = 287,
  [288] = 227,
  [289] = 220,
  [290] = 290,
  [291] = 291,
  [292] = 211,
  [293] = 205,
  [294] = 294,
  [295] = 204,
  [296] = 218,
  [297] = 202,
  [298] = 213,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 243,
  [303] = 237,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 270,
  [308] = 308,
  [309] = 309,
  [310] = 251,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 255,
  [316] = 253,
  [317] = 256,
  [318] = 254,
  [319] = 263,
  [320] = 228,
  [321] = 264,
  [322] = 266,
  [323] = 323,
  [324] = 324,
  [325] = 267,
  [326] = 242,
  [327] = 327,
  [328] = 306,
  [329] = 304,
  [330] = 312,
  [331] = 305,
  [332] = 332,
  [333] = 240,
  [334] = 246,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 336,
  [339] = 262,
  [340] = 312,
  [341] = 341,
  [342] = 337,
  [343] = 343,
  [344] = 344,
  [345] = 324,
  [346] = 341,
  [347] = 235,
  [348] = 260,
  [349] = 250,
  [350] = 308,
  [351] = 351,
  [352] = 301,
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
  [364] = 360,
  [365] = 356,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 363,
  [372] = 372,
  [373] = 367,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 359,
  [378] = 378,
  [379] = 379,
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
  [408] = 379,
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
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 424,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 396,
  [439] = 400,
  [440] = 405,
  [441] = 409,
  [442] = 442,
  [443] = 428,
  [444] = 429,
  [445] = 430,
  [446] = 435,
  [447] = 436,
  [448] = 442,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 381,
  [457] = 382,
  [458] = 458,
  [459] = 389,
  [460] = 391,
  [461] = 461,
  [462] = 395,
  [463] = 397,
  [464] = 399,
  [465] = 449,
  [466] = 404,
  [467] = 411,
  [468] = 468,
  [469] = 469,
  [470] = 424,
  [471] = 434,
  [472] = 437,
  [473] = 432,
  [474] = 474,
  [475] = 475,
  [476] = 475,
  [477] = 477,
  [478] = 450,
  [479] = 451,
  [480] = 418,
  [481] = 419,
  [482] = 426,
  [483] = 483,
  [484] = 434,
  [485] = 485,
  [486] = 486,
  [487] = 453,
  [488] = 431,
  [489] = 410,
  [490] = 461,
  [491] = 390,
  [492] = 392,
  [493] = 413,
  [494] = 483,
  [495] = 417,
  [496] = 454,
  [497] = 455,
  [498] = 407,
  [499] = 458,
  [500] = 393,
  [501] = 412,
  [502] = 468,
  [503] = 406,
  [504] = 394,
  [505] = 469,
  [506] = 506,
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
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 523,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 508,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 536,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 533,
  [544] = 512,
  [545] = 518,
  [546] = 546,
  [547] = 539,
  [548] = 548,
  [549] = 532,
  [550] = 520,
  [551] = 521,
  [552] = 516,
  [553] = 542,
  [554] = 192,
  [555] = 510,
  [556] = 556,
  [557] = 515,
  [558] = 522,
  [559] = 559,
  [560] = 519,
  [561] = 194,
  [562] = 200,
  [563] = 563,
  [564] = 183,
  [565] = 184,
  [566] = 517,
  [567] = 186,
  [568] = 187,
  [569] = 569,
  [570] = 559,
  [571] = 571,
  [572] = 540,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
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
  [601] = 591,
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
  [623] = 600,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 597,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 621,
  [644] = 644,
  [645] = 645,
  [646] = 610,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 611,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 602,
  [657] = 657,
  [658] = 658,
  [659] = 577,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 652,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 647,
  [672] = 585,
  [673] = 673,
  [674] = 640,
  [675] = 675,
  [676] = 660,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 592,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 615,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 632,
  [693] = 693,
  [694] = 650,
  [695] = 653,
  [696] = 589,
  [697] = 697,
  [698] = 604,
  [699] = 613,
  [700] = 616,
  [701] = 678,
  [702] = 702,
  [703] = 703,
  [704] = 650,
  [705] = 617,
  [706] = 586,
  [707] = 599,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 688,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 606,
  [721] = 578,
  [722] = 581,
  [723] = 723,
  [724] = 724,
  [725] = 702,
  [726] = 726,
  [727] = 714,
  [728] = 608,
  [729] = 729,
  [730] = 635,
  [731] = 641,
  [732] = 709,
  [733] = 733,
  [734] = 627,
  [735] = 579,
  [736] = 598,
  [737] = 737,
  [738] = 738,
  [739] = 664,
  [740] = 740,
  [741] = 607,
  [742] = 593,
  [743] = 625,
  [744] = 744,
  [745] = 580,
  [746] = 703,
  [747] = 575,
  [748] = 748,
  [749] = 715,
  [750] = 644,
  [751] = 689,
  [752] = 626,
  [753] = 634,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 681,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 713,
  [762] = 762,
  [763] = 573,
  [764] = 716,
  [765] = 658,
  [766] = 708,
  [767] = 603,
  [768] = 760,
  [769] = 769,
  [770] = 670,
  [771] = 684,
  [772] = 710,
  [773] = 762,
  [774] = 774,
  [775] = 733,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 776,
  [781] = 781,
  [782] = 717,
  [783] = 769,
  [784] = 637,
  [785] = 785,
  [786] = 584,
  [787] = 638,
  [788] = 777,
  [789] = 789,
  [790] = 636,
  [791] = 778,
  [792] = 644,
  [793] = 793,
  [794] = 794,
  [795] = 718,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 774,
  [800] = 789,
  [801] = 781,
  [802] = 631,
  [803] = 738,
  [804] = 594,
  [805] = 647,
  [806] = 719,
  [807] = 793,
  [808] = 796,
  [809] = 809,
  [810] = 588,
  [811] = 811,
  [812] = 794,
  [813] = 593,
  [814] = 814,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(828);
      ADVANCE_MAP(
        ' ', 3,
        '"', 4,
        '\'', 1270,
        '(', 1277,
        ')', 1278,
        '*', 1285,
        ',', 1288,
        '-', 1386,
        '.', 1382,
        '/', 1492,
        ':', 831,
        ';', 1360,
        '<', 1489,
        '=', 1336,
        '>', 1490,
        'A', 653,
        'B', 389,
        'C', 106,
        'D', 255,
        'E', 528,
        'F', 111,
        'I', 527,
        'N', 66,
        'P', 460,
        'S', 43,
        'T', 655,
        'U', 515,
        '[', 1274,
        '\\', 24,
        ']', 1275,
        '_', 1422,
        'a', 170,
        'b', 576,
        'c', 107,
        'd', 257,
        'e', 343,
        'f', 266,
        'g', 461,
        'i', 331,
        'k', 394,
        'l', 259,
        'm', 227,
        'n', 197,
        'o', 333,
        'p', 123,
        'r', 228,
        's', 115,
        't', 380,
        'u', 517,
        'v', 577,
        'w', 261,
        '{', 1390,
        '|', 1352,
        '}', 1391,
        '+', 1487,
        '^', 1487,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(833);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 3,
        '"', 4,
        '\'', 1270,
        '(', 1277,
        ')', 1278,
        '*', 1285,
        ',', 1288,
        '-', 1386,
        '.', 1382,
        '/', 1492,
        ':', 831,
        ';', 1360,
        '<', 1489,
        '=', 1336,
        '>', 1490,
        'A', 653,
        'B', 389,
        'C', 106,
        'D', 255,
        'E', 528,
        'F', 111,
        'I', 527,
        'N', 66,
        'P', 460,
        'S', 43,
        'T', 655,
        'U', 515,
        '[', 1274,
        '\\', 24,
        ']', 1275,
        '_', 1422,
        'a', 170,
        'b', 576,
        'c', 107,
        'd', 257,
        'e', 343,
        'f', 266,
        'g', 461,
        'i', 331,
        'k', 394,
        'l', 259,
        'm', 227,
        'n', 197,
        'o', 333,
        'p', 123,
        'r', 228,
        's', 115,
        't', 380,
        'u', 517,
        'v', 577,
        'w', 261,
        '{', 1390,
        '|', 1352,
        '}', 1391,
        '+', 1487,
        '^', 1487,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 3,
        '"', 4,
        '\'', 1270,
        '(', 1277,
        ')', 1278,
        '*', 1285,
        ',', 1288,
        '-', 1386,
        '.', 1382,
        '/', 1492,
        ':', 831,
        ';', 1360,
        '<', 832,
        '=', 1336,
        '>', 1490,
        'A', 653,
        'B', 389,
        'C', 106,
        'D', 255,
        'E', 528,
        'F', 111,
        'I', 527,
        'N', 66,
        'P', 460,
        'S', 43,
        'T', 655,
        'U', 515,
        '[', 1274,
        '\\', 24,
        ']', 1275,
        '_', 1422,
        'a', 170,
        'b', 576,
        'c', 107,
        'd', 257,
        'e', 343,
        'f', 266,
        'g', 461,
        'i', 331,
        'k', 394,
        'l', 259,
        'm', 227,
        'n', 197,
        'o', 333,
        'p', 123,
        'r', 228,
        's', 115,
        't', 380,
        'u', 517,
        'v', 577,
        'w', 261,
        '{', 1390,
        '|', 1352,
        '}', 1391,
        '+', 1487,
        '^', 1487,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1460);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(1270);
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1278);
      if (lookahead == '*') ADVANCE(1285);
      if (lookahead == ',') ADVANCE(1288);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '[') ADVANCE(1273);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\'', 1270,
        '(', 1276,
        ')', 1278,
        '+', 22,
        ',', 1288,
        '-', 1385,
        '.', 820,
        ':', 26,
        '<', 27,
        '=', 1336,
        'A', 1180,
        'B', 1029,
        'C', 1002,
        'E', 1109,
        'F', 897,
        'I', 1107,
        'N', 875,
        'P', 1072,
        'S', 859,
        'T', 1182,
        'U', 1100,
        '[', 1274,
        ']', 1275,
        '_', 847,
        'a', 1070,
        'b', 1246,
        'c', 894,
        'e', 1185,
        'i', 997,
        'l', 960,
        'm', 951,
        'n', 1140,
        's', 1030,
        'u', 1101,
        '{', 1389,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\'', 1270,
        '(', 1276,
        ')', 1278,
        '+', 22,
        '-', 1385,
        '.', 820,
        ':', 25,
        '=', 1335,
        'A', 1180,
        'B', 1029,
        'C', 1002,
        'E', 1109,
        'F', 897,
        'I', 1107,
        'N', 875,
        'P', 1072,
        'S', 859,
        'T', 1182,
        'U', 1100,
        '[', 1274,
        ']', 1275,
        '_', 847,
        'a', 1070,
        'b', 1246,
        'c', 894,
        'e', 1185,
        'i', 997,
        'l', 960,
        'm', 951,
        'n', 1140,
        's', 1031,
        'u', 1129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(1396);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1397);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '(', 1276,
        ')', 1278,
        '-', 16,
        ':', 830,
        'A', 1181,
        'F', 1251,
        'I', 1253,
        'S', 1166,
        'U', 1116,
        '[', 1274,
        ']', 1275,
        '_', 1423,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '(', 1276,
        ')', 1278,
        '-', 16,
        '[', 1273,
        'a', 1196,
        'b', 1151,
        'c', 1243,
        'f', 1084,
        'i', 1134,
        'l', 1160,
        'p', 1163,
        's', 1224,
        'u', 1121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '(', 1276,
        '-', 16,
        ':', 25,
        '=', 28,
        'A', 1181,
        'F', 1251,
        'I', 1253,
        'S', 1166,
        'U', 1116,
        '[', 1274,
        '_', 1423,
        's', 1241,
        'w', 978,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        ')', 1278,
        '-', 16,
        '.', 18,
        '_', 1290,
        'c', 1318,
        'd', 1314,
        'f', 1308,
        'l', 1319,
        's', 1324,
        'u', 1310,
        'v', 1315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        ')', 1278,
        '-', 16,
        'A', 1225,
        'B', 1029,
        'C', 1025,
        'E', 1109,
        'I', 1108,
        'P', 1072,
        'S', 860,
        '[', 1273,
        'a', 1071,
        'b', 1246,
        'c', 1212,
        's', 1031,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(1286);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1405);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(1289);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(179);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(706);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(1487);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(1403);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(1403);
      if (lookahead == '=') ADVANCE(844);
      END_STATE();
    case 27:
      if (lookahead == '<') ADVANCE(823);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(1353);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(714);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        'A', 52,
        'C', 54,
        'M', 110,
        'O', 60,
        'X', 56,
        'a', 467,
        'f', 684,
        'm', 114,
        's', 391,
      );
      END_STATE();
    case 33:
      ADVANCE_MAP(
        'A', 686,
        'E', 640,
        'F', 689,
        'G', 236,
        'L', 237,
        'M', 264,
        'N', 238,
        'V', 143,
        'W', 316,
        '_', 724,
        'd', 395,
      );
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(491);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(492);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(1481);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(317);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(604);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 42:
      if (lookahead == 'H') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(541);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(547);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(1496);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(1479);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(1503);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(751);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(1483);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(1485);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(384);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(385);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'p') ADVANCE(488);
      END_STATE();
    case 66:
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'V') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == 'V') ADVANCE(155);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(421);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(819);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(821);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(822);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(563);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(710);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(795);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(507);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(402);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(663);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(482);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(677);
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(414);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(707);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(558);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(709);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(449);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(770);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(713);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(169);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(716);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(717);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 'f') ADVANCE(780);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(789);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(788);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'v') ADVANCE(345);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(805);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == 'i') ADVANCE(817);
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(806);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 'u') ADVANCE(667);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(809);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(1337);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(812);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(473);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(474);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(448);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(1506);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(1447);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(1283);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(748);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(731);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(1366);
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(1366);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(1354);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(1453);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1271);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1363);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1431);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1375);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1502);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1444);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1376);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1471);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1473);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1418);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(1455);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1452);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(582);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(609);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(796);
      if (lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(1348);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(1339);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead == 't') ADVANCE(1411);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1412);
      if (lookahead == 't') ADVANCE(1410);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1457);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1332);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1505);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1433);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1334);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1398);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(796);
      if (lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'n') ADVANCE(1344);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 332:
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(1351);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(836);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(1368);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(1369);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(1502);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(1414);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(1467);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(1469);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(1417);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(431);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(691);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(735);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(736);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(737);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(739);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(606);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(489);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(418);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(424);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(1458);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(1361);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(1437);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(545);
      if (lookahead == 'z') ADVANCE(272);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(561);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(570);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(523);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(551);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(553);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(556);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(557);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(572);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(569);
      END_STATE();
    case 379:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 380:
      if (lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 381:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(434);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(771);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(747);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(794);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(600);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 450:
      if (lookahead == 'k') ADVANCE(1358);
      END_STATE();
    case 451:
      if (lookahead == 'k') ADVANCE(1451);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(1449);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(1356);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(1355);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(1444);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(808);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(593);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(783);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(784);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(620);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(797);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(634);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(1344);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(1365);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(1347);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1465);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(1502);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(1426);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(1498);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(1387);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(790);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(792);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 't') ADVANCE(814);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == 't') ADVANCE(1424);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(781);
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 624:
      if (lookahead == 'p') ADVANCE(1340);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(1404);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(1373);
      END_STATE();
    case 627:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 628:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 629:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 630:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 633:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(682);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 639:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 640:
      if (lookahead == 'q') ADVANCE(1408);
      END_STATE();
    case 641:
      if (lookahead == 'q') ADVANCE(1357);
      END_STATE();
    case 642:
      if (lookahead == 'q') ADVANCE(72);
      END_STATE();
    case 643:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(1367);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(1371);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(1502);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(1439);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(1415);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(1394);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(1435);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(799);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(1502);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(1342);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(1383);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(1500);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(1279);
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(1502);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(838);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(1444);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(1287);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(1475);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(1416);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(1477);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(1377);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(1419);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(1494);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(1421);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(1400);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(756);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 778:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 779:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 780:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 781:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 782:
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 783:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 784:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 785:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 786:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 787:
      if (lookahead == 'u') ADVANCE(772);
      END_STATE();
    case 788:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 789:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 790:
      if (lookahead == 'v') ADVANCE(420);
      END_STATE();
    case 791:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 792:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 793:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 794:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 795:
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 796:
      if (lookahead == 'w') ADVANCE(1456);
      END_STATE();
    case 797:
      if (lookahead == 'w') ADVANCE(1454);
      END_STATE();
    case 798:
      if (lookahead == 'w') ADVANCE(411);
      END_STATE();
    case 799:
      if (lookahead == 'w') ADVANCE(136);
      END_STATE();
    case 800:
      if (lookahead == 'x') ADVANCE(1463);
      END_STATE();
    case 801:
      if (lookahead == 'x') ADVANCE(1502);
      END_STATE();
    case 802:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 803:
      if (lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 804:
      if (lookahead == 'x') ADVANCE(286);
      END_STATE();
    case 805:
      if (lookahead == 'y') ADVANCE(1461);
      END_STATE();
    case 806:
      if (lookahead == 'y') ADVANCE(1442);
      END_STATE();
    case 807:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 808:
      if (lookahead == 'y') ADVANCE(1445);
      END_STATE();
    case 809:
      if (lookahead == 'y') ADVANCE(1441);
      END_STATE();
    case 810:
      if (lookahead == 'y') ADVANCE(627);
      END_STATE();
    case 811:
      if (lookahead == 'y') ADVANCE(629);
      END_STATE();
    case 812:
      if (lookahead == 'y') ADVANCE(755);
      END_STATE();
    case 813:
      if (lookahead == 'y') ADVANCE(631);
      END_STATE();
    case 814:
      if (lookahead == 'y') ADVANCE(630);
      END_STATE();
    case 815:
      if (lookahead == 'y') ADVANCE(632);
      END_STATE();
    case 816:
      if (lookahead == 'y') ADVANCE(633);
      END_STATE();
    case 817:
      if (lookahead == 'z') ADVANCE(272);
      END_STATE();
    case 818:
      if (lookahead == 'z') ADVANCE(277);
      END_STATE();
    case 819:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1487);
      END_STATE();
    case 820:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      END_STATE();
    case 821:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1420);
      END_STATE();
    case 822:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1504);
      END_STATE();
    case 823:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 824:
      if (eof) ADVANCE(828);
      ADVANCE_MAP(
        '\'', 1270,
        '(', 1277,
        ')', 1278,
        '*', 1285,
        ',', 1288,
        '-', 16,
        ':', 830,
        '[', 1273,
        'a', 688,
        'b', 603,
        'c', 774,
        'd', 256,
        'e', 342,
        'f', 490,
        'g', 461,
        'i', 573,
        'l', 616,
        'p', 580,
        'r', 314,
        's', 745,
        'u', 544,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(824);
      END_STATE();
    case 825:
      if (eof) ADVANCE(828);
      ADVANCE_MAP(
        '(', 1276,
        ')', 1278,
        ',', 1288,
        '-', 1488,
        '.', 1381,
        '/', 1492,
        ':', 26,
        '<', 1490,
        '=', 1491,
        '>', 1490,
        'A', 741,
        'B', 389,
        'C', 379,
        'E', 528,
        'I', 568,
        'P', 459,
        'S', 42,
        '[', 1273,
        '\\', 24,
        ']', 1275,
        'a', 452,
        'b', 612,
        'c', 108,
        'd', 256,
        'f', 267,
        'g', 461,
        'i', 332,
        'k', 394,
        'l', 260,
        'm', 288,
        'n', 196,
        'p', 123,
        'r', 293,
        's', 116,
        'u', 529,
        '}', 1391,
        '*', 1487,
        '+', 1487,
        '^', 1487,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(846);
      END_STATE();
    case 826:
      if (eof) ADVANCE(828);
      ADVANCE_MAP(
        '(', 1276,
        ')', 1278,
        ',', 1288,
        '-', 1488,
        '/', 1492,
        ':', 25,
        '<', 1490,
        '>', 1490,
        '\\', 24,
        ']', 1275,
        'd', 256,
        'e', 480,
        'g', 461,
        'i', 516,
        'o', 333,
        'p', 660,
        'r', 292,
        't', 380,
        '|', 1352,
        '}', 1391,
        '*', 1487,
        '+', 1487,
        '=', 1487,
        '^', 1487,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(826);
      END_STATE();
    case 827:
      if (eof) ADVANCE(828);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(975);
      if (lookahead == 'g') ADVANCE(1075);
      if (lookahead == 'p') ADVANCE(1190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(827);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '_') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1403);
      if (lookahead == '=') ADVANCE(844);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(823);
      if (lookahead == '=') ADVANCE(1487);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_single_line_comment);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '_') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(847);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 867,
        'C', 869,
        'M', 895,
        'O', 872,
        'X', 870,
        'a', 1082,
        'f', 1194,
        'm', 899,
        's', 1053,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 867,
        'C', 869,
        'O', 872,
        'X', 870,
        'a', 1082,
        'f', 1194,
        'm', 899,
        's', 1053,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'D') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(874);
      if (lookahead == 'p') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'M') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'P') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1250);
      if (lookahead == 'o') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1081);
      if (lookahead == 'v') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1257);
      if (lookahead == 'i') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(972);
      if (lookahead == 'o') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(910);
      if (lookahead == 'i') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(957);
      if (lookahead == 'i') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'r') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1346);
      if (lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1247);
      if (lookahead == 'h') ADVANCE(911);
      if (lookahead == 'i') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'w') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1266);
      if (lookahead == 't') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1216);
      if (lookahead == 's') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead == 'u') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'k') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1032);
      if (lookahead == 'r') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == 'v') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1103);
      if (lookahead == 't') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1193);
      if (lookahead == 'r') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1184);
      if (lookahead == 't') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1402);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'A') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == '_') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'b') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'g') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1297);
      if (lookahead == 'l') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'm') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'r') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 's') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1353);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '}') ADVANCE(835);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(834);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_is_signed_LPAREN);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_is_unsigned_LPAREN);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1405);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_memop_op_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1420);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(846);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(507);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(697);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(469);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(798);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == '>') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(823);
      if (lookahead == '=') ADVANCE(1487);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1487);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1353);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1487);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1503);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1504);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 825},
  [97] = {.lex_state = 825},
  [98] = {.lex_state = 825},
  [99] = {.lex_state = 825},
  [100] = {.lex_state = 825},
  [101] = {.lex_state = 825},
  [102] = {.lex_state = 825},
  [103] = {.lex_state = 825},
  [104] = {.lex_state = 825},
  [105] = {.lex_state = 825},
  [106] = {.lex_state = 825},
  [107] = {.lex_state = 825},
  [108] = {.lex_state = 825},
  [109] = {.lex_state = 825},
  [110] = {.lex_state = 825},
  [111] = {.lex_state = 825},
  [112] = {.lex_state = 825},
  [113] = {.lex_state = 825},
  [114] = {.lex_state = 825},
  [115] = {.lex_state = 825},
  [116] = {.lex_state = 825},
  [117] = {.lex_state = 825},
  [118] = {.lex_state = 825},
  [119] = {.lex_state = 825},
  [120] = {.lex_state = 825},
  [121] = {.lex_state = 825},
  [122] = {.lex_state = 825},
  [123] = {.lex_state = 825},
  [124] = {.lex_state = 825},
  [125] = {.lex_state = 825},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 824},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 824},
  [145] = {.lex_state = 824},
  [146] = {.lex_state = 824},
  [147] = {.lex_state = 824},
  [148] = {.lex_state = 824},
  [149] = {.lex_state = 824},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 824},
  [152] = {.lex_state = 824},
  [153] = {.lex_state = 824},
  [154] = {.lex_state = 824},
  [155] = {.lex_state = 824},
  [156] = {.lex_state = 824},
  [157] = {.lex_state = 824},
  [158] = {.lex_state = 824},
  [159] = {.lex_state = 824},
  [160] = {.lex_state = 824},
  [161] = {.lex_state = 824},
  [162] = {.lex_state = 824},
  [163] = {.lex_state = 824},
  [164] = {.lex_state = 824},
  [165] = {.lex_state = 824},
  [166] = {.lex_state = 824},
  [167] = {.lex_state = 824},
  [168] = {.lex_state = 824},
  [169] = {.lex_state = 824},
  [170] = {.lex_state = 824},
  [171] = {.lex_state = 824},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 824},
  [174] = {.lex_state = 824},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 824},
  [177] = {.lex_state = 824},
  [178] = {.lex_state = 824},
  [179] = {.lex_state = 824},
  [180] = {.lex_state = 824},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 825},
  [184] = {.lex_state = 825},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 825},
  [187] = {.lex_state = 825},
  [188] = {.lex_state = 825},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 825},
  [193] = {.lex_state = 13},
  [194] = {.lex_state = 825},
  [195] = {.lex_state = 825},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 826},
  [198] = {.lex_state = 826},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 825},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 826},
  [203] = {.lex_state = 826},
  [204] = {.lex_state = 826},
  [205] = {.lex_state = 826},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 826},
  [209] = {.lex_state = 826},
  [210] = {.lex_state = 826},
  [211] = {.lex_state = 826},
  [212] = {.lex_state = 826},
  [213] = {.lex_state = 826},
  [214] = {.lex_state = 826},
  [215] = {.lex_state = 826},
  [216] = {.lex_state = 826},
  [217] = {.lex_state = 826},
  [218] = {.lex_state = 826},
  [219] = {.lex_state = 826},
  [220] = {.lex_state = 826},
  [221] = {.lex_state = 826},
  [222] = {.lex_state = 826},
  [223] = {.lex_state = 826},
  [224] = {.lex_state = 826},
  [225] = {.lex_state = 826},
  [226] = {.lex_state = 826},
  [227] = {.lex_state = 826},
  [228] = {.lex_state = 826},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 824},
  [232] = {.lex_state = 826},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 826},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 827},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 824},
  [239] = {.lex_state = 824},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 824},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 825},
  [245] = {.lex_state = 826},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 825},
  [248] = {.lex_state = 825},
  [249] = {.lex_state = 825},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 825},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 825},
  [258] = {.lex_state = 824},
  [259] = {.lex_state = 824},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 824},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 827},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 824},
  [269] = {.lex_state = 824},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 826},
  [272] = {.lex_state = 826},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 826},
  [277] = {.lex_state = 826},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 826},
  [282] = {.lex_state = 826},
  [283] = {.lex_state = 826},
  [284] = {.lex_state = 826},
  [285] = {.lex_state = 826},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 824},
  [288] = {.lex_state = 826},
  [289] = {.lex_state = 826},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 826},
  [293] = {.lex_state = 826},
  [294] = {.lex_state = 826},
  [295] = {.lex_state = 826},
  [296] = {.lex_state = 826},
  [297] = {.lex_state = 826},
  [298] = {.lex_state = 826},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 824},
  [301] = {.lex_state = 826},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 826},
  [305] = {.lex_state = 826},
  [306] = {.lex_state = 826},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 826},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 826},
  [312] = {.lex_state = 824},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 827},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 827},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 824},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 826},
  [329] = {.lex_state = 826},
  [330] = {.lex_state = 824},
  [331] = {.lex_state = 826},
  [332] = {.lex_state = 826},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 826},
  [337] = {.lex_state = 826},
  [338] = {.lex_state = 826},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 824},
  [341] = {.lex_state = 826},
  [342] = {.lex_state = 826},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 827},
  [345] = {.lex_state = 824},
  [346] = {.lex_state = 826},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 826},
  [351] = {.lex_state = 824},
  [352] = {.lex_state = 826},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 826},
  [356] = {.lex_state = 826},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 826},
  [361] = {.lex_state = 826},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 826},
  [365] = {.lex_state = 826},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 826},
  [375] = {.lex_state = 824},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 14},
  [379] = {.lex_state = 826},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 826},
  [391] = {.lex_state = 826},
  [392] = {.lex_state = 826},
  [393] = {.lex_state = 826},
  [394] = {.lex_state = 826},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 826},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 826},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 826},
  [407] = {.lex_state = 826},
  [408] = {.lex_state = 826},
  [409] = {.lex_state = 826},
  [410] = {.lex_state = 826},
  [411] = {.lex_state = 826},
  [412] = {.lex_state = 826},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 826},
  [418] = {.lex_state = 826},
  [419] = {.lex_state = 14},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 825},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 14},
  [428] = {.lex_state = 826},
  [429] = {.lex_state = 826},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 826},
  [432] = {.lex_state = 826},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 826},
  [437] = {.lex_state = 826},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 826},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 826},
  [444] = {.lex_state = 826},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 826},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 826},
  [450] = {.lex_state = 825},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 826},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 826},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 826},
  [461] = {.lex_state = 826},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 826},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 826},
  [466] = {.lex_state = 826},
  [467] = {.lex_state = 826},
  [468] = {.lex_state = 826},
  [469] = {.lex_state = 826},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 826},
  [473] = {.lex_state = 826},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 14},
  [476] = {.lex_state = 14},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 825},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 826},
  [481] = {.lex_state = 14},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 826},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 826},
  [488] = {.lex_state = 826},
  [489] = {.lex_state = 826},
  [490] = {.lex_state = 826},
  [491] = {.lex_state = 826},
  [492] = {.lex_state = 826},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 826},
  [495] = {.lex_state = 826},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 826},
  [499] = {.lex_state = 826},
  [500] = {.lex_state = 826},
  [501] = {.lex_state = 826},
  [502] = {.lex_state = 826},
  [503] = {.lex_state = 826},
  [504] = {.lex_state = 826},
  [505] = {.lex_state = 826},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 14},
  [509] = {.lex_state = 825},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 14},
  [512] = {.lex_state = 14},
  [513] = {.lex_state = 825},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 7},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 825},
  [524] = {.lex_state = 12},
  [525] = {.lex_state = 6},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 825},
  [531] = {.lex_state = 7},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 14},
  [535] = {.lex_state = 825},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 12},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 7},
  [541] = {.lex_state = 14},
  [542] = {.lex_state = 7},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 14},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 825},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 7},
  [554] = {.lex_state = 7},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 7},
  [561] = {.lex_state = 7},
  [562] = {.lex_state = 7},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 7},
  [565] = {.lex_state = 7},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 7},
  [568] = {.lex_state = 7},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 7},
  [573] = {.lex_state = 14},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 6},
  [577] = {.lex_state = 6},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 6},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 7},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 825},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 14},
  [596] = {.lex_state = 6},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 10},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 14},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 7},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 10},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 6},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 14},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 6},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 825},
  [628] = {.lex_state = 10},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 10},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 825},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 14},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 6},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 14},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 10},
  [658] = {.lex_state = 14},
  [659] = {.lex_state = 6},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 14},
  [663] = {.lex_state = 14},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 10},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 6},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 14},
  [678] = {.lex_state = 6},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 14},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 10},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 7},
  [691] = {.lex_state = 6},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 825},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 6},
  [702] = {.lex_state = 6},
  [703] = {.lex_state = 14},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 14},
  [711] = {.lex_state = 17},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 14},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 6},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 6},
  [726] = {.lex_state = 14},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 825},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 12},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 14},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 14},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 825},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 14},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 14},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 14},
  [764] = {.lex_state = 14},
  [765] = {.lex_state = 14},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 14},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 6},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 14},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 6},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 14},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 6},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 14},
  [802] = {.lex_state = 10},
  [803] = {.lex_state = 12},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_line_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(3),
    [anon_sym_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_DASH_RBRACE] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(629),
    [sym_comment] = STATE(1),
    [sym_declaration] = STATE(368),
    [sym_def_aggregate_declaration] = STATE(354),
    [sym_glob_declaration] = STATE(354),
    [sym_proc_declaration] = STATE(354),
    [sym_proc_full_declaration] = STATE(357),
    [sym_proc_forward_declaration] = STATE(357),
    [sym_def_declaration] = STATE(354),
    [aux_sym_source_file_repeat1] = STATE(207),
    [sym_single_line_comment] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
    [anon_sym_glob] = ACTIONS(7),
    [anon_sym_proc] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(2), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(337), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [117] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(61), 1,
      anon_sym_struct,
    ACTIONS(63), 1,
      anon_sym_union,
    STATE(3), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(342), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [234] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(346), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [348] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(329), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [462] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(331), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [576] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(328), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [690] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(341), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [804] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(308), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [918] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(304), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1032] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(305), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1146] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(350), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1260] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(306), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1374] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(14), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(226), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1485] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(15), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(418), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1596] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(16), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(332), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1707] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(17), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(352), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1818] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(18), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(428), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [1929] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(19), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(429), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2040] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(20), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(436), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2151] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(21), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(458), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2262] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(22), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(461), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2373] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(23), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(465), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2484] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(24), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(468), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2595] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(25), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(469), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2706] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(26), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(432), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2817] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(27), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(487), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [2928] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(28), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(494), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3039] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_memop,
    ACTIONS(97), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(103), 1,
      anon_sym_undef,
    ACTIONS(105), 1,
      anon_sym_error,
    ACTIONS(107), 1,
      anon_sym_CivNULLcap,
    ACTIONS(109), 1,
      anon_sym_array_shift,
    ACTIONS(111), 1,
      anon_sym_member_shift,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_are_compatible,
    ACTIONS(121), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(123), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(125), 1,
      anon_sym_NULL,
    ACTIONS(127), 1,
      anon_sym_Cfunction,
    STATE(29), 1,
      sym_comment,
    STATE(285), 1,
      sym_pexpr,
    STATE(296), 1,
      sym_core_ctype,
    ACTIONS(87), 2,
      sym_sym,
      sym_impl,
    ACTIONS(117), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(272), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(113), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(85), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3150] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_memop,
    ACTIONS(97), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(103), 1,
      anon_sym_undef,
    ACTIONS(105), 1,
      anon_sym_error,
    ACTIONS(107), 1,
      anon_sym_CivNULLcap,
    ACTIONS(109), 1,
      anon_sym_array_shift,
    ACTIONS(111), 1,
      anon_sym_member_shift,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_are_compatible,
    ACTIONS(121), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(123), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(125), 1,
      anon_sym_NULL,
    ACTIONS(127), 1,
      anon_sym_Cfunction,
    STATE(30), 1,
      sym_comment,
    STATE(276), 1,
      sym_pexpr,
    STATE(296), 1,
      sym_core_ctype,
    ACTIONS(87), 2,
      sym_sym,
      sym_impl,
    ACTIONS(117), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(272), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(113), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(85), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3261] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(31), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(311), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3372] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(32), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(472), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3483] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(33), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(328), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3594] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(34), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(390), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3705] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(35), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(391), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3816] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(36), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(392), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [3927] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(37), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(364), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4038] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(38), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(393), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4149] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(39), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(394), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4260] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(40), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(361), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4371] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(41), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(397), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4482] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(42), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(404), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4593] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(43), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(365), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4704] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(44), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(406), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4815] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(45), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(355), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [4926] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(46), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(411), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5037] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(47), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(412), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5148] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(48), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(338), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5259] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(49), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(374), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5370] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(50), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(505), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5481] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(51), 1,
      sym_comment,
    STATE(211), 1,
      sym_pexpr,
    STATE(218), 1,
      sym_core_ctype,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5592] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(52), 1,
      sym_comment,
    STATE(217), 1,
      sym_pexpr,
    STATE(218), 1,
      sym_core_ctype,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5703] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(53), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(219), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5814] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(54), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(407), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [5925] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(55), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(408), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6036] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_memop,
    ACTIONS(97), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(103), 1,
      anon_sym_undef,
    ACTIONS(105), 1,
      anon_sym_error,
    ACTIONS(107), 1,
      anon_sym_CivNULLcap,
    ACTIONS(109), 1,
      anon_sym_array_shift,
    ACTIONS(111), 1,
      anon_sym_member_shift,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_are_compatible,
    ACTIONS(121), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(123), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(125), 1,
      anon_sym_NULL,
    ACTIONS(127), 1,
      anon_sym_Cfunction,
    STATE(56), 1,
      sym_comment,
    STATE(294), 1,
      sym_pexpr,
    STATE(296), 1,
      sym_core_ctype,
    ACTIONS(87), 2,
      sym_sym,
      sym_impl,
    ACTIONS(117), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(272), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(113), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(85), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6147] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(57), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(410), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6258] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_memop,
    ACTIONS(97), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(103), 1,
      anon_sym_undef,
    ACTIONS(105), 1,
      anon_sym_error,
    ACTIONS(107), 1,
      anon_sym_CivNULLcap,
    ACTIONS(109), 1,
      anon_sym_array_shift,
    ACTIONS(111), 1,
      anon_sym_member_shift,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_are_compatible,
    ACTIONS(121), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(123), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(125), 1,
      anon_sym_NULL,
    ACTIONS(127), 1,
      anon_sym_Cfunction,
    STATE(58), 1,
      sym_comment,
    STATE(292), 1,
      sym_pexpr,
    STATE(296), 1,
      sym_core_ctype,
    ACTIONS(87), 2,
      sym_sym,
      sym_impl,
    ACTIONS(117), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(272), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(113), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(85), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6369] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_memop,
    ACTIONS(97), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(103), 1,
      anon_sym_undef,
    ACTIONS(105), 1,
      anon_sym_error,
    ACTIONS(107), 1,
      anon_sym_CivNULLcap,
    ACTIONS(109), 1,
      anon_sym_array_shift,
    ACTIONS(111), 1,
      anon_sym_member_shift,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_are_compatible,
    ACTIONS(121), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(123), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(125), 1,
      anon_sym_NULL,
    ACTIONS(127), 1,
      anon_sym_Cfunction,
    STATE(59), 1,
      sym_comment,
    STATE(277), 1,
      sym_pexpr,
    STATE(296), 1,
      sym_core_ctype,
    ACTIONS(87), 2,
      sym_sym,
      sym_impl,
    ACTIONS(117), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(272), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(113), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(85), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6480] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(60), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(437), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6591] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(61), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(441), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6702] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(62), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(431), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6813] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(63), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(301), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [6924] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(64), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(443), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7035] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(65), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(444), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7146] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(66), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(447), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7257] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(67), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(449), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7368] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(68), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(453), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7479] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(69), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(306), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7590] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(70), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(460), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7701] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(71), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(360), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7812] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(72), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(463), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [7923] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(73), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(466), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8034] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(74), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(356), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8145] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(75), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(467), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8256] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(76), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(473), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8367] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(77), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(480), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8478] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(78), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(483), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8589] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(79), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(488), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8700] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(80), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(489), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8811] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(81), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(490), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [8922] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(82), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(491), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9033] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(83), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(492), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9144] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(84), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(336), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9255] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(85), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(495), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9366] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(86), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(498), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9477] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(87), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(417), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9588] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(88), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(499), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9699] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(89), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(500), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9810] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(90), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(501), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [9921] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(91), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(379), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [10032] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(92), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(502), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [10143] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(93), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(503), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [10254] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(94), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(504), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [10365] = 29,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(95), 1,
      sym_comment,
    STATE(218), 1,
      sym_core_ctype,
    STATE(409), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(222), 2,
      sym_list_pexpr,
      sym_value,
    STATE(656), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
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
  [10476] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(96), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(359), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [10572] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(377), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [10668] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(98), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(518), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [10761] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(99), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(533), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [10854] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(100), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(547), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [10947] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(101), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(262), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11040] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(102), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(343), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11133] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(103), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(549), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11226] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(104), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(309), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11319] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(105), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(543), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11412] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(106), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(506), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11505] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(107), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(327), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11598] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(108), 1,
      sym_comment,
    STATE(242), 1,
      sym_expr,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11691] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(109), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(313), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11784] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(110), 1,
      sym_comment,
    STATE(251), 1,
      sym_expr,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11877] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(111), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(403), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11970] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(112), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(323), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12063] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(113), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(255), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12156] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(114), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(335), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12249] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(115), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(266), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12342] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(116), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(339), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12435] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(117), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(326), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12528] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(118), 1,
      sym_comment,
    STATE(310), 1,
      sym_expr,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12621] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(119), 1,
      sym_comment,
    STATE(315), 1,
      sym_expr,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12714] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(120), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(321), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12807] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(121), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(322), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12900] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(122), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(539), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12993] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(123), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(545), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13086] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_pure,
    ACTIONS(187), 1,
      anon_sym_memop,
    ACTIONS(189), 1,
      anon_sym_let,
    ACTIONS(191), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_case,
    ACTIONS(195), 1,
      anon_sym_pcall,
    ACTIONS(197), 1,
      anon_sym_ccall,
    ACTIONS(201), 1,
      anon_sym_bound,
    ACTIONS(203), 1,
      anon_sym_save,
    ACTIONS(205), 1,
      anon_sym_run,
    ACTIONS(207), 1,
      anon_sym_create_readonly,
    ACTIONS(209), 1,
      anon_sym_create,
    ACTIONS(211), 1,
      anon_sym_alloc,
    ACTIONS(213), 1,
      anon_sym_free,
    ACTIONS(215), 1,
      anon_sym_kill,
    ACTIONS(217), 1,
      anon_sym_store,
    ACTIONS(219), 1,
      anon_sym_store_lock,
    ACTIONS(221), 1,
      anon_sym_load,
    ACTIONS(223), 1,
      anon_sym_seq_rmw,
    ACTIONS(225), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(227), 1,
      anon_sym_rmw,
    ACTIONS(229), 1,
      anon_sym_fence,
    ACTIONS(231), 1,
      anon_sym_neg,
    STATE(124), 1,
      sym_comment,
    STATE(316), 1,
      sym_action,
    STATE(318), 1,
      sym_paction,
    STATE(532), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13179] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_pure,
    ACTIONS(135), 1,
      anon_sym_memop,
    ACTIONS(137), 1,
      anon_sym_let,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_case,
    ACTIONS(143), 1,
      anon_sym_pcall,
    ACTIONS(145), 1,
      anon_sym_ccall,
    ACTIONS(149), 1,
      anon_sym_bound,
    ACTIONS(151), 1,
      anon_sym_save,
    ACTIONS(153), 1,
      anon_sym_run,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    ACTIONS(179), 1,
      anon_sym_neg,
    STATE(125), 1,
      sym_comment,
    STATE(253), 1,
      sym_action,
    STATE(254), 1,
      sym_paction,
    STATE(264), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13272] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(126), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(542), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(239), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(55), 13,
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
  [13320] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(553), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(243), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(55), 13,
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
  [13368] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(128), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(371), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13415] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(376), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13462] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(363), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13509] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(131), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(519), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13553] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(132), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(537), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13597] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(525), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13641] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(134), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(524), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13685] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(135), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(358), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13729] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(136), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(370), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13773] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(137), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(572), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13817] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(138), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(280), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(245), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13861] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(139), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(540), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13905] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(140), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(560), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13949] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(141), 1,
      sym_comment,
    STATE(279), 1,
      sym_list_pattern,
    STATE(280), 1,
      sym_pattern,
    STATE(754), 1,
      sym_ctor,
    ACTIONS(233), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
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
  [13993] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_eff,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(142), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(548), 1,
      sym_core_type,
    STATE(748), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14039] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_sym,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      anon_sym_loaded,
    ACTIONS(285), 1,
      anon_sym_array,
    STATE(143), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(402), 1,
      sym_core_base_type,
    ACTIONS(273), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(283), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(279), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14085] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(470), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14128] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(433), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14171] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(424), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14214] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_loaded,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(147), 1,
      sym_comment,
    STATE(273), 1,
      sym_core_base_type,
    STATE(554), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(299), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14254] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(148), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(571), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14294] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(149), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(618), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14334] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(309), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(311), 1,
      aux_sym_memop_op_token1,
    STATE(150), 1,
      sym_comment,
    STATE(592), 1,
      sym_memop_op,
    ACTIONS(307), 12,
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
  [14364] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(151), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(779), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14404] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_loaded,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_comment,
    STATE(290), 1,
      sym_core_base_type,
    STATE(554), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(299), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14444] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(596), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14484] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(154), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(691), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14524] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(155), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(385), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14564] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(584), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14604] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(157), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(622), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14644] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      anon_sym_loaded,
    ACTIONS(325), 1,
      anon_sym_array,
    STATE(158), 1,
      sym_comment,
    STATE(204), 1,
      sym_core_base_type,
    STATE(209), 1,
      sym_core_object_type,
    ACTIONS(313), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(323), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(319), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14684] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(159), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(275), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14724] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(160), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(278), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14764] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(161), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(273), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14804] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_loaded,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(162), 1,
      sym_comment,
    STATE(299), 1,
      sym_core_base_type,
    STATE(554), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(299), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14844] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(163), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(290), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14884] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(164), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(805), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14924] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(165), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(671), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [14964] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(166), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(415), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15004] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(167), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(295), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15044] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(168), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(693), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15084] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(169), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(773), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15124] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(170), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(675), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15164] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(171), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(647), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15204] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(309), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(311), 1,
      aux_sym_memop_op_token1,
    STATE(172), 1,
      sym_comment,
    STATE(682), 1,
      sym_memop_op,
    ACTIONS(307), 12,
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
  [15234] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(173), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(797), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15274] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(174), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(569), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15314] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(175), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_ctype,
    STATE(268), 1,
      sym_integer_type,
    STATE(685), 1,
      sym_params,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [15360] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(176), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(762), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15400] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_loaded,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(177), 1,
      sym_comment,
    STATE(275), 1,
      sym_core_base_type,
    STATE(554), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(299), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15440] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(178), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(786), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15480] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_loaded,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(179), 1,
      sym_comment,
    STATE(278), 1,
      sym_core_base_type,
    STATE(554), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(299), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15520] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_loaded,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(180), 1,
      sym_comment,
    STATE(192), 1,
      sym_core_object_type,
    STATE(299), 1,
      sym_core_base_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(265), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15560] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    ACTIONS(341), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(181), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(287), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [15603] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    ACTIONS(343), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(182), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(287), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [15646] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(347), 1,
      sym_binary_operator,
    STATE(183), 1,
      sym_comment,
    ACTIONS(345), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [15670] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(184), 1,
      sym_comment,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [15694] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(185), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(287), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [15734] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(355), 1,
      sym_binary_operator,
    STATE(186), 1,
      sym_comment,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [15758] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(359), 1,
      sym_binary_operator,
    STATE(187), 1,
      sym_comment,
    ACTIONS(357), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [15782] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    STATE(188), 1,
      sym_comment,
    STATE(651), 1,
      sym_action,
  [15828] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(189), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(258), 1,
      sym_basic_type,
    STATE(261), 1,
      sym_ctype_star,
    STATE(268), 1,
      sym_integer_type,
    STATE(375), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
  [15870] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(190), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(330), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [15910] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(191), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(345), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [15950] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(363), 1,
      sym_binary_operator,
    STATE(192), 1,
      sym_comment,
    ACTIONS(361), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [15974] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(193), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(324), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16014] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(194), 1,
      sym_comment,
    ACTIONS(365), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16038] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(155), 1,
      anon_sym_create_readonly,
    ACTIONS(157), 1,
      anon_sym_create,
    ACTIONS(159), 1,
      anon_sym_alloc,
    ACTIONS(161), 1,
      anon_sym_free,
    ACTIONS(163), 1,
      anon_sym_kill,
    ACTIONS(165), 1,
      anon_sym_store,
    ACTIONS(167), 1,
      anon_sym_store_lock,
    ACTIONS(169), 1,
      anon_sym_load,
    ACTIONS(171), 1,
      anon_sym_seq_rmw,
    ACTIONS(173), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(175), 1,
      anon_sym_rmw,
    ACTIONS(177), 1,
      anon_sym_fence,
    STATE(195), 1,
      sym_comment,
    STATE(611), 1,
      sym_action,
  [16084] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(196), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(312), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16124] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(197), 1,
      sym_comment,
    ACTIONS(369), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16150] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(198), 1,
      sym_comment,
    ACTIONS(375), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16176] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(199), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(351), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16216] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(200), 1,
      sym_comment,
    ACTIONS(381), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16240] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(329), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym__Atomic,
    ACTIONS(337), 1,
      aux_sym_integer_type_token1,
    ACTIONS(339), 1,
      sym_floating_type,
    STATE(201), 1,
      sym_comment,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(268), 1,
      sym_integer_type,
    STATE(340), 1,
      sym_ctype,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16280] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(202), 1,
      sym_comment,
    ACTIONS(385), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16303] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(203), 1,
      sym_comment,
    ACTIONS(389), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16326] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(204), 1,
      sym_comment,
    ACTIONS(393), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16349] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(399), 1,
      sym_binary_operator,
    STATE(205), 1,
      sym_comment,
    ACTIONS(397), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16372] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      anon_sym_def,
    ACTIONS(406), 1,
      anon_sym_glob,
    ACTIONS(409), 1,
      anon_sym_proc,
    STATE(368), 1,
      sym_declaration,
    STATE(206), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(357), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(354), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [16405] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_glob,
    ACTIONS(9), 1,
      anon_sym_proc,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(368), 1,
      sym_declaration,
    STATE(357), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(354), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [16440] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(416), 1,
      sym_binary_operator,
    STATE(208), 1,
      sym_comment,
    ACTIONS(414), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16463] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(363), 1,
      sym_binary_operator,
    STATE(209), 1,
      sym_comment,
    ACTIONS(361), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16486] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(420), 1,
      sym_binary_operator,
    STATE(210), 1,
      sym_comment,
    ACTIONS(418), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16509] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(211), 1,
      sym_comment,
    ACTIONS(393), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16532] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(212), 1,
      sym_comment,
    ACTIONS(365), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16555] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(213), 1,
      sym_comment,
    ACTIONS(422), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16578] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(214), 1,
      sym_comment,
    ACTIONS(381), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16601] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(347), 1,
      sym_binary_operator,
    STATE(215), 1,
      sym_comment,
    ACTIONS(345), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16624] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(216), 1,
      sym_comment,
    ACTIONS(349), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16647] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(217), 1,
      sym_comment,
    ACTIONS(385), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16670] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(218), 1,
      sym_comment,
    ACTIONS(375), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16693] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(219), 1,
      sym_comment,
    ACTIONS(422), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16716] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(428), 1,
      sym_binary_operator,
    STATE(220), 1,
      sym_comment,
    ACTIONS(426), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16739] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(432), 1,
      sym_binary_operator,
    STATE(221), 1,
      sym_comment,
    ACTIONS(430), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16762] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(222), 1,
      sym_comment,
    ACTIONS(369), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16785] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(355), 1,
      sym_binary_operator,
    STATE(223), 1,
      sym_comment,
    ACTIONS(353), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16808] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(359), 1,
      sym_binary_operator,
    STATE(224), 1,
      sym_comment,
    ACTIONS(357), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16831] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(436), 1,
      sym_binary_operator,
    STATE(225), 1,
      sym_comment,
    ACTIONS(434), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16854] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(440), 1,
      sym_binary_operator,
    STATE(226), 1,
      sym_comment,
    ACTIONS(438), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16877] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(444), 1,
      sym_binary_operator,
    STATE(227), 1,
      sym_comment,
    ACTIONS(442), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16900] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(448), 1,
      sym_binary_operator,
    STATE(228), 1,
      sym_comment,
    ACTIONS(446), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16923] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      aux_sym_integer_type_token1,
    STATE(229), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(450), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [16947] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      aux_sym_integer_type_token1,
    STATE(230), 2,
      sym_comment,
      aux_sym_integer_type_repeat1,
    ACTIONS(456), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [16969] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_restrict,
    STATE(231), 1,
      sym_comment,
    ACTIONS(463), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [16990] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(448), 1,
      sym_binary_operator,
    STATE(232), 1,
      sym_comment,
    ACTIONS(446), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17009] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_comment,
    ACTIONS(469), 7,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
      aux_sym_integer_type_token1,
  [17028] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(379), 1,
      sym_binary_operator,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_comment,
    ACTIONS(375), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17048] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(235), 1,
      sym_comment,
    ACTIONS(475), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17064] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym_sym,
    STATE(344), 1,
      sym_def_field,
    STATE(236), 2,
      sym_comment,
      aux_sym_def_fields_repeat1,
    ACTIONS(479), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [17086] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(237), 1,
      sym_comment,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17102] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_comment,
    ACTIONS(486), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17120] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      sym_comment,
    STATE(477), 1,
      aux_sym_params_repeat1,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [17146] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(240), 1,
      sym_comment,
    ACTIONS(500), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17162] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    STATE(241), 1,
      sym_comment,
    ACTIONS(502), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17180] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(242), 1,
      sym_comment,
    ACTIONS(500), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17196] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(243), 1,
      sym_comment,
    ACTIONS(506), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17212] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(325), 1,
      anon_sym_array,
    STATE(215), 1,
      sym_core_object_type,
    STATE(244), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(323), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [17234] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(245), 1,
      sym_comment,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17254] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(246), 1,
      sym_comment,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17270] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(247), 1,
      sym_comment,
    STATE(564), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [17292] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(248), 1,
      sym_comment,
    STATE(704), 1,
      sym_core_object_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [17314] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(249), 1,
      sym_comment,
    STATE(694), 1,
      sym_core_object_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [17336] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(250), 1,
      sym_comment,
    ACTIONS(510), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17352] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(251), 1,
      sym_comment,
    ACTIONS(512), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17368] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(183), 1,
      sym_core_object_type,
    STATE(252), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [17390] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(253), 1,
      sym_comment,
    ACTIONS(514), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17406] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(254), 1,
      sym_comment,
    ACTIONS(516), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17422] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(255), 1,
      sym_comment,
    ACTIONS(518), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17438] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(256), 1,
      sym_comment,
    ACTIONS(520), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17454] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(257), 1,
      sym_comment,
    STATE(650), 1,
      sym_core_object_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [17476] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      sym_comment,
    ACTIONS(522), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17494] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(259), 1,
      sym_comment,
    ACTIONS(526), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17512] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(260), 1,
      sym_comment,
    ACTIONS(530), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17528] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_comment,
    ACTIONS(526), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17546] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(262), 1,
      sym_comment,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17562] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(263), 1,
      sym_comment,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17578] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(264), 1,
      sym_comment,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17594] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 1,
      sym_sym,
    STATE(236), 1,
      aux_sym_def_fields_repeat1,
    STATE(265), 1,
      sym_comment,
    STATE(344), 1,
      sym_def_field,
    ACTIONS(538), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [17618] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(266), 1,
      sym_comment,
    ACTIONS(542), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17634] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(267), 1,
      sym_comment,
    ACTIONS(544), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17650] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_comment,
    ACTIONS(546), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17668] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_comment,
    ACTIONS(550), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [17686] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(270), 1,
      sym_comment,
    ACTIONS(512), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [17702] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(420), 1,
      sym_binary_operator,
    STATE(271), 1,
      sym_comment,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17719] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(272), 1,
      sym_comment,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17736] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(556), 1,
      anon_sym_EQ,
    STATE(273), 1,
      sym_comment,
    ACTIONS(554), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17753] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_comment,
    ACTIONS(558), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17770] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(564), 1,
      anon_sym_EQ,
    STATE(275), 1,
      sym_comment,
    ACTIONS(562), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17787] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(276), 1,
      sym_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17804] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(277), 1,
      sym_comment,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17821] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(278), 1,
      sym_comment,
    ACTIONS(566), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17838] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(572), 1,
      anon_sym_EQ,
    STATE(279), 1,
      sym_comment,
    ACTIONS(570), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17855] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_comment,
    ACTIONS(566), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17872] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(416), 1,
      sym_binary_operator,
    STATE(281), 1,
      sym_comment,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17889] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(436), 1,
      sym_binary_operator,
    STATE(282), 1,
      sym_comment,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17906] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(283), 1,
      sym_comment,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17923] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(432), 1,
      sym_binary_operator,
    STATE(284), 1,
      sym_comment,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17940] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(440), 1,
      sym_binary_operator,
    STATE(285), 1,
      sym_comment,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17957] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(576), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_comment,
    ACTIONS(574), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [17974] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(578), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17995] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(444), 1,
      sym_binary_operator,
    STATE(288), 1,
      sym_comment,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18012] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(428), 1,
      sym_binary_operator,
    STATE(289), 1,
      sym_comment,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18029] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(582), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_comment,
    ACTIONS(580), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [18046] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_comment,
    ACTIONS(584), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [18063] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(292), 1,
      sym_comment,
    ACTIONS(393), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18080] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(399), 1,
      sym_binary_operator,
    STATE(293), 1,
      sym_comment,
    ACTIONS(397), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18097] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(590), 1,
      anon_sym_COLON_COLON,
    ACTIONS(592), 1,
      sym_binary_operator,
    STATE(294), 1,
      sym_comment,
    ACTIONS(588), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18116] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(295), 1,
      sym_comment,
    ACTIONS(393), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18133] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(296), 1,
      sym_comment,
    ACTIONS(375), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18150] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(297), 1,
      sym_comment,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18167] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(298), 1,
      sym_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18184] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(596), 1,
      anon_sym_EQ,
    STATE(299), 1,
      sym_comment,
    ACTIONS(594), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [18201] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(300), 1,
      sym_comment,
    ACTIONS(598), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18217] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(301), 1,
      sym_comment,
    STATE(451), 1,
      aux_sym_expr_repeat1,
  [18239] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(302), 1,
      sym_comment,
    ACTIONS(506), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18253] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(303), 1,
      sym_comment,
    ACTIONS(484), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18267] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_comment,
    STATE(457), 1,
      aux_sym_expr_repeat1,
  [18289] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(305), 1,
      sym_comment,
    STATE(459), 1,
      aux_sym_expr_repeat1,
  [18311] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym_comment,
    STATE(464), 1,
      aux_sym_expr_repeat1,
  [18333] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(307), 1,
      sym_comment,
    ACTIONS(512), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18347] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym_comment,
    STATE(435), 1,
      aux_sym_expr_repeat1,
  [18369] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(309), 1,
      sym_comment,
    ACTIONS(614), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18385] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(310), 1,
      sym_comment,
    ACTIONS(512), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18399] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym_expr_repeat1,
  [18421] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18441] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      sym_comment,
    ACTIONS(622), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18457] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_comment,
    ACTIONS(626), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [18473] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(315), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18487] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(316), 1,
      sym_comment,
    ACTIONS(514), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18501] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(317), 1,
      sym_comment,
    ACTIONS(520), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18515] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(318), 1,
      sym_comment,
    ACTIONS(516), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18529] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(319), 1,
      sym_comment,
    ACTIONS(532), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18543] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    STATE(320), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [18559] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(321), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18573] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(322), 1,
      sym_comment,
    ACTIONS(542), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18587] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(323), 1,
      sym_comment,
    ACTIONS(628), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18603] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18623] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(325), 1,
      sym_comment,
    ACTIONS(544), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18637] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(326), 1,
      sym_comment,
    ACTIONS(500), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18651] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      sym_comment,
    ACTIONS(632), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18667] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      sym_comment,
    STATE(399), 1,
      aux_sym_expr_repeat1,
  [18689] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_comment,
    STATE(382), 1,
      aux_sym_expr_repeat1,
  [18711] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    STATE(330), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18731] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(331), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_expr_repeat1,
  [18753] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(332), 1,
      sym_comment,
    ACTIONS(640), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18771] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(333), 1,
      sym_comment,
    ACTIONS(500), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18785] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(334), 1,
      sym_comment,
    ACTIONS(508), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18799] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      sym_comment,
    ACTIONS(642), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18815] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      sym_comment,
    STATE(493), 1,
      aux_sym_expr_repeat4,
  [18837] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      sym_comment,
    STATE(400), 1,
      aux_sym_expr_repeat1,
  [18859] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_expr_repeat4,
  [18881] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(339), 1,
      sym_comment,
    ACTIONS(508), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [18895] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18915] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_expr_repeat1,
  [18937] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      sym_comment,
    STATE(439), 1,
      aux_sym_expr_repeat1,
  [18959] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(343), 1,
      sym_comment,
    ACTIONS(658), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18975] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(344), 1,
      sym_comment,
    ACTIONS(662), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [18991] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [19011] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_expr_repeat1,
  [19033] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(347), 1,
      sym_comment,
    ACTIONS(475), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19047] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(348), 1,
      sym_comment,
    ACTIONS(530), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19061] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(349), 1,
      sym_comment,
    ACTIONS(510), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19075] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      sym_comment,
    STATE(446), 1,
      aux_sym_expr_repeat1,
  [19097] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [19117] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(352), 1,
      sym_comment,
    STATE(479), 1,
      aux_sym_expr_repeat1,
  [19139] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(353), 1,
      sym_comment,
    ACTIONS(672), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19152] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(354), 1,
      sym_comment,
    ACTIONS(674), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19165] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(355), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19182] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      sym_comment,
  [19201] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(357), 1,
      sym_comment,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19214] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    STATE(358), 1,
      sym_comment,
    ACTIONS(684), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19229] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      sym_comment,
    STATE(455), 1,
      aux_sym_expr_repeat3,
  [19248] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      sym_comment,
  [19267] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(361), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [19284] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(640), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(362), 2,
      sym_comment,
      aux_sym_expr_repeat1,
  [19299] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      sym_comment,
    STATE(482), 1,
      aux_sym_pattern_repeat1,
  [19318] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      sym_comment,
  [19337] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      sym_comment,
  [19356] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(366), 1,
      sym_comment,
    ACTIONS(711), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19369] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(713), 1,
      anon_sym_DeriveCap,
    STATE(367), 1,
      sym_comment,
    STATE(652), 1,
      sym_pure_memop_op,
    ACTIONS(715), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [19386] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(368), 1,
      sym_comment,
    ACTIONS(717), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19399] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(684), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(369), 2,
      sym_comment,
      aux_sym_pattern_repeat1,
  [19414] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym_pattern_repeat1,
  [19433] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(371), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_pattern_repeat1,
  [19452] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(372), 1,
      sym_comment,
    ACTIONS(726), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19465] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(713), 1,
      anon_sym_DeriveCap,
    STATE(373), 1,
      sym_comment,
    STATE(666), 1,
      sym_pure_memop_op,
    ACTIONS(715), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [19482] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(374), 1,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19499] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [19516] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_comment,
    STATE(485), 1,
      aux_sym_pattern_repeat1,
  [19535] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym_comment,
    STATE(497), 1,
      aux_sym_expr_repeat3,
  [19554] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(732), 1,
      sym_sym,
    STATE(265), 1,
      aux_sym_def_fields_repeat1,
    STATE(344), 1,
      sym_def_field,
    STATE(353), 1,
      sym_def_fields,
    STATE(378), 1,
      sym_comment,
  [19573] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      sym_comment,
  [19589] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(380), 2,
      sym_comment,
      aux_sym_params_repeat1,
  [19603] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(381), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym_pexpr_repeat2,
  [19619] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(382), 1,
      sym_comment,
  [19635] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_comment,
    STATE(422), 1,
      aux_sym_proc_full_declaration_repeat1,
  [19651] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(384), 1,
      sym_comment,
  [19667] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym_comment,
    STATE(423), 1,
      aux_sym_proc_full_declaration_repeat1,
  [19683] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(749), 1,
      anon_sym_PIPE,
    ACTIONS(752), 1,
      anon_sym_end,
    STATE(386), 2,
      sym_comment,
      aux_sym_expr_repeat2,
  [19697] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    ACTIONS(756), 1,
      anon_sym_ailname,
    STATE(387), 1,
      sym_comment,
    STATE(425), 1,
      sym_attribute_pair,
  [19713] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(388), 2,
      sym_comment,
      aux_sym_expr_repeat3,
  [19727] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(389), 1,
      sym_comment,
  [19743] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      sym_comment,
  [19759] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_comment,
  [19775] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      sym_comment,
  [19791] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_comment,
  [19807] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      sym_comment,
  [19823] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_pexpr_repeat2,
  [19839] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(396), 1,
      sym_comment,
  [19855] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_comment,
  [19871] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(398), 1,
      sym_comment,
  [19887] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(399), 1,
      sym_comment,
  [19903] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(400), 1,
      sym_comment,
  [19919] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(401), 2,
      sym_comment,
      aux_sym_pexpr_repeat2,
  [19933] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      sym_comment,
    STATE(452), 1,
      aux_sym_core_base_type_repeat1,
  [19949] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    STATE(403), 1,
      sym_comment,
    ACTIONS(788), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [19963] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_comment,
  [19979] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(612), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(405), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_pexpr_repeat1,
  [19995] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      sym_comment,
  [20011] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      sym_comment,
  [20027] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      sym_comment,
  [20043] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_comment,
  [20059] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      sym_comment,
  [20075] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_comment,
  [20091] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      sym_comment,
  [20107] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_expr_repeat4,
  [20123] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(414), 2,
      sym_comment,
      aux_sym_expr_repeat4,
  [20137] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(415), 1,
      sym_comment,
  [20153] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      sym_comment,
    STATE(474), 1,
      aux_sym_attribute_repeat1,
  [20169] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(819), 1,
      anon_sym_then,
    STATE(417), 1,
      sym_comment,
  [20185] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(821), 1,
      anon_sym_of,
    STATE(418), 1,
      sym_comment,
  [20201] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(419), 1,
      sym_comment,
    STATE(538), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [20215] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(420), 2,
      sym_comment,
      aux_sym_core_base_type_repeat1,
  [20229] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(832), 1,
      sym_impl,
    STATE(421), 1,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_struct,
      anon_sym_union,
  [20243] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(422), 2,
      sym_comment,
      aux_sym_proc_full_declaration_repeat1,
  [20257] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(423), 1,
      sym_comment,
  [20273] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_comment,
    STATE(484), 1,
      aux_sym_core_base_type_repeat1,
  [20289] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(416), 1,
      aux_sym_attribute_repeat1,
    STATE(425), 1,
      sym_comment,
  [20305] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(426), 1,
      sym_comment,
  [20321] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(847), 1,
      sym_sym,
    ACTIONS(849), 1,
      anon_sym_LBRACK,
    STATE(427), 1,
      sym_comment,
    STATE(740), 1,
      sym_attribute,
  [20337] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(851), 1,
      anon_sym_in,
    STATE(428), 1,
      sym_comment,
  [20353] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(851), 1,
      anon_sym_else,
    STATE(429), 1,
      sym_comment,
  [20369] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(67), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(430), 1,
      sym_comment,
    STATE(486), 1,
      aux_sym_pexpr_repeat1,
  [20385] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(853), 1,
      anon_sym_then,
    STATE(431), 1,
      sym_comment,
  [20401] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(855), 1,
      anon_sym_of,
    STATE(432), 1,
      sym_comment,
  [20417] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_core_base_type_repeat1,
  [20433] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(434), 1,
      sym_comment,
  [20449] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(435), 1,
      sym_comment,
  [20465] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(436), 1,
      sym_comment,
  [20481] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(437), 1,
      sym_comment,
  [20497] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(438), 1,
      sym_comment,
  [20513] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(439), 1,
      sym_comment,
  [20529] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(668), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(440), 1,
      sym_comment,
    STATE(445), 1,
      aux_sym_pexpr_repeat1,
  [20545] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_comment,
  [20561] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(69), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(442), 1,
      sym_comment,
    STATE(496), 1,
      aux_sym_expr_repeat2,
  [20577] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(865), 1,
      anon_sym_in,
    STATE(443), 1,
      sym_comment,
  [20593] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(865), 1,
      anon_sym_else,
    STATE(444), 1,
      sym_comment,
  [20609] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(77), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(445), 1,
      sym_comment,
    STATE(486), 1,
      aux_sym_pexpr_repeat1,
  [20625] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(446), 1,
      sym_comment,
  [20641] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(447), 1,
      sym_comment,
  [20657] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(79), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(448), 1,
      sym_comment,
    STATE(454), 1,
      aux_sym_expr_repeat2,
  [20673] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym_comment,
  [20689] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(450), 1,
      sym_comment,
    STATE(456), 1,
      sym_member,
  [20705] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(451), 1,
      sym_comment,
  [20721] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(452), 1,
      sym_comment,
  [20737] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_comment,
  [20753] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(83), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
    STATE(454), 1,
      sym_comment,
  [20769] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_expr_repeat3,
    STATE(455), 1,
      sym_comment,
  [20785] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_comment,
    STATE(462), 1,
      aux_sym_pexpr_repeat2,
  [20801] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(457), 1,
      sym_comment,
  [20817] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      sym_comment,
  [20833] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(459), 1,
      sym_comment,
  [20849] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym_comment,
  [20865] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(461), 1,
      sym_comment,
  [20881] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_pexpr_repeat2,
    STATE(462), 1,
      sym_comment,
  [20897] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_comment,
  [20913] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(464), 1,
      sym_comment,
  [20929] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_comment,
  [20945] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_comment,
  [20961] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_comment,
  [20977] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      sym_comment,
  [20993] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      sym_comment,
  [21009] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_comment,
    STATE(471), 1,
      aux_sym_core_base_type_repeat1,
  [21025] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(471), 1,
      sym_comment,
  [21041] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(472), 1,
      sym_comment,
  [21057] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(895), 1,
      anon_sym_of,
    STATE(473), 1,
      sym_comment,
  [21073] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(474), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [21087] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(475), 1,
      sym_comment,
    STATE(591), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [21101] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(476), 1,
      sym_comment,
    STATE(601), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [21115] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_params_repeat1,
    STATE(477), 1,
      sym_comment,
  [21131] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(381), 1,
      sym_member,
    STATE(478), 1,
      sym_comment,
  [21147] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(479), 1,
      sym_comment,
  [21163] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(906), 1,
      anon_sym_of,
    STATE(480), 1,
      sym_comment,
  [21179] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(481), 1,
      sym_comment,
    STATE(536), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [21193] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(482), 1,
      sym_comment,
  [21209] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(910), 1,
      anon_sym_in,
    STATE(483), 1,
      sym_comment,
  [21225] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(484), 1,
      sym_comment,
  [21241] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(485), 1,
      sym_comment,
  [21257] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(914), 1,
      anon_sym_PIPE,
    ACTIONS(917), 1,
      anon_sym_end,
    STATE(486), 2,
      sym_comment,
      aux_sym_pexpr_repeat1,
  [21271] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      sym_comment,
  [21287] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(919), 1,
      anon_sym_then,
    STATE(488), 1,
      sym_comment,
  [21303] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(489), 1,
      sym_comment,
  [21319] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      sym_comment,
  [21335] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(491), 1,
      sym_comment,
  [21351] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      sym_comment,
  [21367] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_expr_repeat4,
    STATE(493), 1,
      sym_comment,
  [21383] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(931), 1,
      anon_sym_in,
    STATE(494), 1,
      sym_comment,
  [21399] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(933), 1,
      anon_sym_then,
    STATE(495), 1,
      sym_comment,
  [21415] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(71), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
    STATE(496), 1,
      sym_comment,
  [21431] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_expr_repeat3,
    STATE(497), 1,
      sym_comment,
  [21447] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      sym_comment,
  [21463] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(499), 1,
      sym_comment,
  [21479] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    STATE(500), 1,
      sym_comment,
  [21495] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(501), 1,
      sym_comment,
  [21511] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      sym_comment,
  [21527] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    STATE(503), 1,
      sym_comment,
  [21543] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    STATE(504), 1,
      sym_comment,
  [21559] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      sym_comment,
  [21575] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(506), 1,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21589] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(756), 1,
      anon_sym_ailname,
    STATE(507), 1,
      sym_comment,
    STATE(514), 1,
      sym_attribute_pair,
  [21602] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(951), 1,
      sym_sym,
    STATE(508), 1,
      sym_comment,
    STATE(753), 1,
      sym_cabs_id,
  [21615] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(953), 1,
      sym_int_const,
    STATE(509), 1,
      sym_comment,
  [21628] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(510), 1,
      sym_comment,
    STATE(608), 1,
      sym_core_ctype,
  [21641] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(955), 1,
      sym_sym,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_comment,
  [21654] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(959), 1,
      sym_sym,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      sym_comment,
  [21667] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACK,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(513), 1,
      sym_comment,
  [21680] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(514), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [21691] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(515), 1,
      sym_comment,
    STATE(635), 1,
      sym_core_ctype,
  [21704] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(516), 1,
      sym_comment,
    STATE(578), 1,
      sym_core_ctype,
  [21717] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(517), 1,
      sym_comment,
    STATE(637), 1,
      sym_core_ctype,
  [21730] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(518), 1,
      sym_comment,
  [21743] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(967), 1,
      anon_sym_EQ,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    STATE(519), 1,
      sym_comment,
  [21756] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(971), 1,
      aux_sym_string_token1,
    STATE(520), 1,
      sym_comment,
    STATE(578), 1,
      sym_string,
  [21769] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(521), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [21780] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(522), 1,
      sym_comment,
    STATE(641), 1,
      sym_core_ctype,
  [21793] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(523), 1,
      sym_comment,
    STATE(600), 1,
      sym_member,
  [21806] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(975), 1,
      anon_sym_EQ_GT,
    STATE(524), 1,
      sym_comment,
  [21819] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    STATE(525), 1,
      sym_comment,
  [21832] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(526), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21843] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(979), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_core_ctype,
    STATE(527), 1,
      sym_comment,
  [21856] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(528), 1,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [21867] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(529), 1,
      sym_comment,
    STATE(619), 1,
      sym_core_ctype,
  [21880] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(530), 1,
      sym_comment,
    STATE(623), 1,
      sym_member,
  [21893] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(531), 1,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [21904] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(910), 1,
      anon_sym_else,
    STATE(532), 1,
      sym_comment,
  [21917] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(983), 1,
      anon_sym_in,
    STATE(533), 1,
      sym_comment,
  [21930] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(951), 1,
      sym_sym,
    STATE(534), 1,
      sym_comment,
    STATE(634), 1,
      sym_cabs_id,
  [21943] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(528), 1,
      sym_member,
    STATE(535), 1,
      sym_comment,
  [21956] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(536), 1,
      sym_comment,
  [21969] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(987), 1,
      anon_sym_EQ_GT,
    STATE(537), 1,
      sym_comment,
  [21982] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      sym_comment,
  [21995] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(539), 1,
      sym_comment,
  [22008] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(991), 1,
      anon_sym_EQ,
    STATE(540), 1,
      sym_comment,
  [22021] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(951), 1,
      sym_sym,
    STATE(541), 1,
      sym_comment,
    STATE(587), 1,
      sym_cabs_id,
  [22034] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(993), 1,
      anon_sym_EQ,
    STATE(542), 1,
      sym_comment,
  [22047] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(995), 1,
      anon_sym_in,
    STATE(543), 1,
      sym_comment,
  [22060] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(997), 1,
      sym_sym,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      sym_comment,
  [22073] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(545), 1,
      sym_comment,
  [22086] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1001), 1,
      aux_sym_string_token1,
    STATE(546), 1,
      sym_comment,
    STATE(563), 1,
      sym_cstring,
  [22099] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(547), 1,
      sym_comment,
  [22112] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1003), 1,
      anon_sym_LBRACK,
    STATE(548), 1,
      sym_comment,
    STATE(723), 1,
      sym_glob_ctype_attribute,
  [22125] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(931), 1,
      anon_sym_else,
    STATE(549), 1,
      sym_comment,
  [22138] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(971), 1,
      aux_sym_string_token1,
    STATE(550), 1,
      sym_comment,
    STATE(721), 1,
      sym_string,
  [22151] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(551), 1,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [22162] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(552), 1,
      sym_comment,
    STATE(721), 1,
      sym_core_ctype,
  [22175] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1007), 1,
      anon_sym_EQ,
    STATE(553), 1,
      sym_comment,
  [22188] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(554), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22199] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(555), 1,
      sym_comment,
    STATE(728), 1,
      sym_core_ctype,
  [22212] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(556), 1,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [22223] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(557), 1,
      sym_comment,
    STATE(730), 1,
      sym_core_ctype,
  [22236] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(558), 1,
      sym_comment,
    STATE(731), 1,
      sym_core_ctype,
  [22249] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(559), 1,
      sym_comment,
    STATE(732), 1,
      sym_core_ctype,
  [22262] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1011), 1,
      anon_sym_EQ,
    STATE(560), 1,
      sym_comment,
  [22275] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(561), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22286] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(562), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22297] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(563), 1,
      sym_comment,
    ACTIONS(1013), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [22308] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(564), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22319] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(565), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22330] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(566), 1,
      sym_comment,
    STATE(784), 1,
      sym_core_ctype,
  [22343] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(567), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22354] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(568), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [22365] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(569), 1,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22376] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(570), 1,
      sym_comment,
    STATE(709), 1,
      sym_core_ctype,
  [22389] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    STATE(571), 1,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22400] = 4,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1017), 1,
      anon_sym_EQ,
    STATE(572), 1,
      sym_comment,
  [22413] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1019), 1,
      sym_sym,
    STATE(573), 1,
      sym_comment,
  [22423] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(574), 1,
      sym_comment,
  [22433] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1023), 1,
      anon_sym_COLON,
    STATE(575), 1,
      sym_comment,
  [22443] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1025), 1,
      anon_sym_COLON_EQ,
    STATE(576), 1,
      sym_comment,
  [22453] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1027), 1,
      sym_ub,
    STATE(577), 1,
      sym_comment,
  [22463] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(578), 1,
      sym_comment,
  [22473] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1029), 1,
      anon_sym_COLON,
    STATE(579), 1,
      sym_comment,
  [22483] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1031), 1,
      anon_sym_COLON,
    STATE(580), 1,
      sym_comment,
  [22493] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      sym_comment,
  [22503] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(582), 1,
      sym_comment,
  [22513] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    STATE(583), 1,
      sym_comment,
  [22523] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1037), 1,
      anon_sym_COLON_EQ,
    STATE(584), 1,
      sym_comment,
  [22533] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    STATE(585), 1,
      sym_comment,
  [22543] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    STATE(586), 1,
      sym_comment,
  [22553] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1043), 1,
      anon_sym_EQ,
    STATE(587), 1,
      sym_comment,
  [22563] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      sym_comment,
  [22573] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1045), 1,
      sym_memory_order,
    STATE(589), 1,
      sym_comment,
  [22583] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1047), 1,
      anon_sym_LBRACK,
    STATE(590), 1,
      sym_comment,
  [22593] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      sym_comment,
  [22603] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(592), 1,
      sym_comment,
  [22613] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    STATE(593), 1,
      sym_comment,
  [22623] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
    STATE(594), 1,
      sym_comment,
  [22633] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1055), 1,
      sym_sym,
    STATE(595), 1,
      sym_comment,
  [22643] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1057), 1,
      anon_sym_COLON_EQ,
    STATE(596), 1,
      sym_comment,
  [22653] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym_comment,
  [22663] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1059), 1,
      anon_sym_COLON,
    STATE(598), 1,
      sym_comment,
  [22673] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    STATE(599), 1,
      sym_comment,
  [22683] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(600), 1,
      sym_comment,
  [22693] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      sym_comment,
  [22703] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(602), 1,
      sym_comment,
  [22713] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1065), 1,
      sym_memory_order,
    STATE(603), 1,
      sym_comment,
  [22723] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1067), 1,
      anon_sym_in,
    STATE(604), 1,
      sym_comment,
  [22733] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1069), 1,
      sym_sym,
    STATE(605), 1,
      sym_comment,
  [22743] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      sym_comment,
  [22753] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      sym_comment,
  [22763] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      sym_comment,
  [22773] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1075), 1,
      anon_sym_EQ,
    STATE(609), 1,
      sym_comment,
  [22783] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      sym_comment,
  [22793] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      sym_comment,
  [22803] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1079), 1,
      anon_sym_COLON,
    STATE(612), 1,
      sym_comment,
  [22813] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1081), 1,
      anon_sym_in,
    STATE(613), 1,
      sym_comment,
  [22823] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      sym_comment,
  [22833] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    STATE(615), 1,
      sym_comment,
  [22843] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1087), 1,
      sym_memory_order,
    STATE(616), 1,
      sym_comment,
  [22853] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      sym_comment,
  [22863] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1089), 1,
      anon_sym_COLON_EQ,
    STATE(618), 1,
      sym_comment,
  [22873] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(619), 1,
      sym_comment,
  [22883] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1093), 1,
      sym_sym,
    STATE(620), 1,
      sym_comment,
  [22893] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      sym_comment,
  [22903] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1097), 1,
      anon_sym_COLON_EQ,
    STATE(622), 1,
      sym_comment,
  [22913] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(623), 1,
      sym_comment,
  [22923] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      sym_comment,
  [22933] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
    STATE(625), 1,
      sym_comment,
  [22943] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      sym_comment,
  [22953] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1105), 1,
      anon_sym_DOT,
    STATE(627), 1,
      sym_comment,
  [22963] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    STATE(628), 1,
      sym_comment,
  [22973] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
    STATE(629), 1,
      sym_comment,
  [22983] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(630), 1,
      sym_comment,
  [22993] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1113), 1,
      anon_sym_COLON,
    STATE(631), 1,
      sym_comment,
  [23003] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1115), 1,
      anon_sym_in,
    STATE(632), 1,
      sym_comment,
  [23013] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1117), 1,
      anon_sym_LBRACK,
    STATE(633), 1,
      sym_comment,
  [23023] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_comment,
  [23033] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(635), 1,
      sym_comment,
  [23043] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    STATE(636), 1,
      sym_comment,
  [23053] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(637), 1,
      sym_comment,
  [23063] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      sym_comment,
  [23073] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      sym_comment,
  [23083] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
    STATE(640), 1,
      sym_comment,
  [23093] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    STATE(641), 1,
      sym_comment,
  [23103] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    STATE(642), 1,
      sym_comment,
  [23113] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      sym_comment,
  [23123] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1133), 1,
      sym_sym,
    STATE(644), 1,
      sym_comment,
  [23133] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1135), 1,
      anon_sym_eff,
    STATE(645), 1,
      sym_comment,
  [23143] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_comment,
  [23153] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(647), 1,
      sym_comment,
  [23163] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON_EQ,
    STATE(648), 1,
      sym_comment,
  [23173] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(649), 1,
      sym_comment,
  [23183] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      sym_comment,
  [23193] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      sym_comment,
  [23203] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(652), 1,
      sym_comment,
  [23213] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1147), 1,
      sym_memory_order,
    STATE(653), 1,
      sym_comment,
  [23223] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1149), 1,
      sym_sym,
    STATE(654), 1,
      sym_comment,
  [23233] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1151), 1,
      anon_sym_eff,
    STATE(655), 1,
      sym_comment,
  [23243] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1153), 1,
      anon_sym_LPAREN,
    STATE(656), 1,
      sym_comment,
  [23253] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1155), 1,
      anon_sym_COLON,
    STATE(657), 1,
      sym_comment,
  [23263] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1157), 1,
      sym_sym,
    STATE(658), 1,
      sym_comment,
  [23273] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1159), 1,
      sym_ub,
    STATE(659), 1,
      sym_comment,
  [23283] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1161), 1,
      sym_memory_order,
    STATE(660), 1,
      sym_comment,
  [23293] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1163), 1,
      anon_sym_COLON,
    STATE(661), 1,
      sym_comment,
  [23303] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1165), 1,
      sym_sym,
    STATE(662), 1,
      sym_comment,
  [23313] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1167), 1,
      sym_sym,
    STATE(663), 1,
      sym_comment,
  [23323] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
    STATE(664), 1,
      sym_comment,
  [23333] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1171), 1,
      anon_sym_eff,
    STATE(665), 1,
      sym_comment,
  [23343] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    STATE(666), 1,
      sym_comment,
  [23353] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON,
    STATE(667), 1,
      sym_comment,
  [23363] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    STATE(668), 1,
      sym_comment,
  [23373] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1179), 1,
      anon_sym_COLON,
    STATE(669), 1,
      sym_comment,
  [23383] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
    STATE(670), 1,
      sym_comment,
  [23393] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
    STATE(671), 1,
      sym_comment,
  [23403] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1183), 1,
      anon_sym_COLON,
    STATE(672), 1,
      sym_comment,
  [23413] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    STATE(673), 1,
      sym_comment,
  [23423] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    STATE(674), 1,
      sym_comment,
  [23433] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1189), 1,
      anon_sym_COLON_EQ,
    STATE(675), 1,
      sym_comment,
  [23443] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1191), 1,
      sym_memory_order,
    STATE(676), 1,
      sym_comment,
  [23453] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1193), 1,
      sym_sym,
    STATE(677), 1,
      sym_comment,
  [23463] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1195), 1,
      anon_sym_LBRACE,
    STATE(678), 1,
      sym_comment,
  [23473] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1197), 1,
      anon_sym_LPAREN,
    STATE(679), 1,
      sym_comment,
  [23483] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    STATE(680), 1,
      sym_comment,
  [23493] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(681), 1,
      sym_comment,
  [23503] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      sym_comment,
  [23513] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1203), 1,
      sym_sym,
    STATE(683), 1,
      sym_comment,
  [23523] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
    STATE(684), 1,
      sym_comment,
  [23533] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      sym_comment,
  [23543] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1207), 1,
      anon_sym_COLON,
    STATE(686), 1,
      sym_comment,
  [23553] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1209), 1,
      anon_sym_COLON,
    STATE(687), 1,
      sym_comment,
  [23563] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
    STATE(688), 1,
      sym_comment,
  [23573] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(689), 1,
      sym_comment,
  [23583] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    STATE(690), 1,
      sym_comment,
  [23593] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1217), 1,
      anon_sym_COLON_EQ,
    STATE(691), 1,
      sym_comment,
  [23603] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1219), 1,
      anon_sym_in,
    STATE(692), 1,
      sym_comment,
  [23613] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1221), 1,
      anon_sym_LBRACK,
    STATE(693), 1,
      sym_comment,
  [23623] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      sym_comment,
  [23633] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1225), 1,
      sym_memory_order,
    STATE(695), 1,
      sym_comment,
  [23643] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1227), 1,
      sym_memory_order,
    STATE(696), 1,
      sym_comment,
  [23653] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1229), 1,
      anon_sym_ail_ctype,
    STATE(697), 1,
      sym_comment,
  [23663] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1231), 1,
      anon_sym_in,
    STATE(698), 1,
      sym_comment,
  [23673] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1233), 1,
      anon_sym_in,
    STATE(699), 1,
      sym_comment,
  [23683] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1235), 1,
      sym_memory_order,
    STATE(700), 1,
      sym_comment,
  [23693] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(701), 1,
      sym_comment,
  [23703] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
    STATE(702), 1,
      sym_comment,
  [23713] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1241), 1,
      sym_sym,
    STATE(703), 1,
      sym_comment,
  [23723] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      sym_comment,
  [23733] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(705), 1,
      sym_comment,
  [23743] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(706), 1,
      sym_comment,
  [23753] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
    STATE(707), 1,
      sym_comment,
  [23763] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
    STATE(708), 1,
      sym_comment,
  [23773] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(709), 1,
      sym_comment,
  [23783] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1253), 1,
      sym_sym,
    STATE(710), 1,
      sym_comment,
  [23793] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1255), 1,
      aux_sym_pure_memop_op_token1,
    STATE(711), 1,
      sym_comment,
  [23803] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(712), 1,
      sym_comment,
  [23813] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(713), 1,
      sym_comment,
  [23823] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1261), 1,
      anon_sym_LPAREN,
    STATE(714), 1,
      sym_comment,
  [23833] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1263), 1,
      anon_sym_LPAREN,
    STATE(715), 1,
      sym_comment,
  [23843] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1265), 1,
      sym_sym,
    STATE(716), 1,
      sym_comment,
  [23853] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1267), 1,
      anon_sym_LPAREN,
    STATE(717), 1,
      sym_comment,
  [23863] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
    STATE(718), 1,
      sym_comment,
  [23873] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(719), 1,
      sym_comment,
  [23883] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(720), 1,
      sym_comment,
  [23893] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(721), 1,
      sym_comment,
  [23903] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    STATE(722), 1,
      sym_comment,
  [23913] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1277), 1,
      anon_sym_COLON_EQ,
    STATE(723), 1,
      sym_comment,
  [23923] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    STATE(724), 1,
      sym_comment,
  [23933] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1281), 1,
      anon_sym_LBRACE,
    STATE(725), 1,
      sym_comment,
  [23943] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1283), 1,
      sym_sym,
    STATE(726), 1,
      sym_comment,
  [23953] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    STATE(727), 1,
      sym_comment,
  [23963] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(728), 1,
      sym_comment,
  [23973] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1287), 1,
      anon_sym_LPAREN,
    STATE(729), 1,
      sym_comment,
  [23983] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(730), 1,
      sym_comment,
  [23993] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1289), 1,
      anon_sym_COMMA,
    STATE(731), 1,
      sym_comment,
  [24003] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    STATE(732), 1,
      sym_comment,
  [24013] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(733), 1,
      sym_comment,
  [24023] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1295), 1,
      anon_sym_DOT,
    STATE(734), 1,
      sym_comment,
  [24033] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1297), 1,
      anon_sym_COLON,
    STATE(735), 1,
      sym_comment,
  [24043] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    STATE(736), 1,
      sym_comment,
  [24053] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1301), 1,
      anon_sym_eff,
    STATE(737), 1,
      sym_comment,
  [24063] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1303), 1,
      anon_sym_EQ_GT,
    STATE(738), 1,
      sym_comment,
  [24073] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
    STATE(739), 1,
      sym_comment,
  [24083] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1307), 1,
      sym_sym,
    STATE(740), 1,
      sym_comment,
  [24093] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    STATE(741), 1,
      sym_comment,
  [24103] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1311), 1,
      anon_sym_LPAREN,
    STATE(742), 1,
      sym_comment,
  [24113] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    STATE(743), 1,
      sym_comment,
  [24123] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    STATE(744), 1,
      sym_comment,
  [24133] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1317), 1,
      anon_sym_COLON,
    STATE(745), 1,
      sym_comment,
  [24143] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1319), 1,
      sym_sym,
    STATE(746), 1,
      sym_comment,
  [24153] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1321), 1,
      anon_sym_COLON,
    STATE(747), 1,
      sym_comment,
  [24163] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1323), 1,
      anon_sym_LBRACK,
    STATE(748), 1,
      sym_comment,
  [24173] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    STATE(749), 1,
      sym_comment,
  [24183] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1327), 1,
      sym_sym,
    STATE(750), 1,
      sym_comment,
  [24193] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
    STATE(751), 1,
      sym_comment,
  [24203] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(752), 1,
      sym_comment,
  [24213] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(753), 1,
      sym_comment,
  [24223] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
    STATE(754), 1,
      sym_comment,
  [24233] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1337), 1,
      anon_sym_RBRACK,
    STATE(755), 1,
      sym_comment,
  [24243] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(756), 1,
      sym_comment,
  [24253] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1341), 1,
      anon_sym_LPAREN,
    STATE(757), 1,
      sym_comment,
  [24263] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
    STATE(758), 1,
      sym_comment,
  [24273] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1345), 1,
      sym_sym,
    STATE(759), 1,
      sym_comment,
  [24283] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1347), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_comment,
  [24293] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(761), 1,
      sym_comment,
  [24303] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
    STATE(762), 1,
      sym_comment,
  [24313] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1353), 1,
      sym_sym,
    STATE(763), 1,
      sym_comment,
  [24323] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1355), 1,
      sym_sym,
    STATE(764), 1,
      sym_comment,
  [24333] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1357), 1,
      sym_sym,
    STATE(765), 1,
      sym_comment,
  [24343] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
    STATE(766), 1,
      sym_comment,
  [24353] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1361), 1,
      sym_memory_order,
    STATE(767), 1,
      sym_comment,
  [24363] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1363), 1,
      anon_sym_LPAREN,
    STATE(768), 1,
      sym_comment,
  [24373] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
    STATE(769), 1,
      sym_comment,
  [24383] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1367), 1,
      anon_sym_LPAREN,
    STATE(770), 1,
      sym_comment,
  [24393] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
    STATE(771), 1,
      sym_comment,
  [24403] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1371), 1,
      sym_sym,
    STATE(772), 1,
      sym_comment,
  [24413] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
    STATE(773), 1,
      sym_comment,
  [24423] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1375), 1,
      anon_sym_LPAREN,
    STATE(774), 1,
      sym_comment,
  [24433] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1377), 1,
      anon_sym_LPAREN,
    STATE(775), 1,
      sym_comment,
  [24443] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
    STATE(776), 1,
      sym_comment,
  [24453] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1381), 1,
      anon_sym_LPAREN,
    STATE(777), 1,
      sym_comment,
  [24463] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1383), 1,
      anon_sym_LPAREN,
    STATE(778), 1,
      sym_comment,
  [24473] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1385), 1,
      anon_sym_COLON_EQ,
    STATE(779), 1,
      sym_comment,
  [24483] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
    STATE(780), 1,
      sym_comment,
  [24493] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1389), 1,
      sym_sym,
    STATE(781), 1,
      sym_comment,
  [24503] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(782), 1,
      sym_comment,
  [24513] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
    STATE(783), 1,
      sym_comment,
  [24523] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(784), 1,
      sym_comment,
  [24533] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(785), 1,
      sym_comment,
  [24543] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1399), 1,
      anon_sym_COLON_EQ,
    STATE(786), 1,
      sym_comment,
  [24553] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(787), 1,
      sym_comment,
  [24563] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
    STATE(788), 1,
      sym_comment,
  [24573] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1403), 1,
      anon_sym_LPAREN,
    STATE(789), 1,
      sym_comment,
  [24583] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1405), 1,
      anon_sym_COLON,
    STATE(790), 1,
      sym_comment,
  [24593] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
    STATE(791), 1,
      sym_comment,
  [24603] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1409), 1,
      sym_sym,
    STATE(792), 1,
      sym_comment,
  [24613] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(793), 1,
      sym_comment,
  [24623] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1413), 1,
      anon_sym_LPAREN,
    STATE(794), 1,
      sym_comment,
  [24633] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
    STATE(795), 1,
      sym_comment,
  [24643] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1417), 1,
      anon_sym_LPAREN,
    STATE(796), 1,
      sym_comment,
  [24653] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1419), 1,
      anon_sym_COLON_EQ,
    STATE(797), 1,
      sym_comment,
  [24663] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(798), 1,
      sym_comment,
  [24673] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
    STATE(799), 1,
      sym_comment,
  [24683] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1425), 1,
      anon_sym_LPAREN,
    STATE(800), 1,
      sym_comment,
  [24693] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1427), 1,
      sym_sym,
    STATE(801), 1,
      sym_comment,
  [24703] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1429), 1,
      anon_sym_COLON,
    STATE(802), 1,
      sym_comment,
  [24713] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1431), 1,
      anon_sym_EQ_GT,
    STATE(803), 1,
      sym_comment,
  [24723] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1433), 1,
      anon_sym_LPAREN,
    STATE(804), 1,
      sym_comment,
  [24733] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(805), 1,
      sym_comment,
  [24743] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1435), 1,
      anon_sym_LPAREN,
    STATE(806), 1,
      sym_comment,
  [24753] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1437), 1,
      anon_sym_LPAREN,
    STATE(807), 1,
      sym_comment,
  [24763] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(808), 1,
      sym_comment,
  [24773] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1441), 1,
      anon_sym_eff,
    STATE(809), 1,
      sym_comment,
  [24783] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(810), 1,
      sym_comment,
  [24793] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1443), 1,
      anon_sym_LPAREN,
    STATE(811), 1,
      sym_comment,
  [24803] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
    STATE(812), 1,
      sym_comment,
  [24813] = 3,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
    STATE(813), 1,
      sym_comment,
  [24823] = 1,
    ACTIONS(1449), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 234,
  [SMALL_STATE(5)] = 348,
  [SMALL_STATE(6)] = 462,
  [SMALL_STATE(7)] = 576,
  [SMALL_STATE(8)] = 690,
  [SMALL_STATE(9)] = 804,
  [SMALL_STATE(10)] = 918,
  [SMALL_STATE(11)] = 1032,
  [SMALL_STATE(12)] = 1146,
  [SMALL_STATE(13)] = 1260,
  [SMALL_STATE(14)] = 1374,
  [SMALL_STATE(15)] = 1485,
  [SMALL_STATE(16)] = 1596,
  [SMALL_STATE(17)] = 1707,
  [SMALL_STATE(18)] = 1818,
  [SMALL_STATE(19)] = 1929,
  [SMALL_STATE(20)] = 2040,
  [SMALL_STATE(21)] = 2151,
  [SMALL_STATE(22)] = 2262,
  [SMALL_STATE(23)] = 2373,
  [SMALL_STATE(24)] = 2484,
  [SMALL_STATE(25)] = 2595,
  [SMALL_STATE(26)] = 2706,
  [SMALL_STATE(27)] = 2817,
  [SMALL_STATE(28)] = 2928,
  [SMALL_STATE(29)] = 3039,
  [SMALL_STATE(30)] = 3150,
  [SMALL_STATE(31)] = 3261,
  [SMALL_STATE(32)] = 3372,
  [SMALL_STATE(33)] = 3483,
  [SMALL_STATE(34)] = 3594,
  [SMALL_STATE(35)] = 3705,
  [SMALL_STATE(36)] = 3816,
  [SMALL_STATE(37)] = 3927,
  [SMALL_STATE(38)] = 4038,
  [SMALL_STATE(39)] = 4149,
  [SMALL_STATE(40)] = 4260,
  [SMALL_STATE(41)] = 4371,
  [SMALL_STATE(42)] = 4482,
  [SMALL_STATE(43)] = 4593,
  [SMALL_STATE(44)] = 4704,
  [SMALL_STATE(45)] = 4815,
  [SMALL_STATE(46)] = 4926,
  [SMALL_STATE(47)] = 5037,
  [SMALL_STATE(48)] = 5148,
  [SMALL_STATE(49)] = 5259,
  [SMALL_STATE(50)] = 5370,
  [SMALL_STATE(51)] = 5481,
  [SMALL_STATE(52)] = 5592,
  [SMALL_STATE(53)] = 5703,
  [SMALL_STATE(54)] = 5814,
  [SMALL_STATE(55)] = 5925,
  [SMALL_STATE(56)] = 6036,
  [SMALL_STATE(57)] = 6147,
  [SMALL_STATE(58)] = 6258,
  [SMALL_STATE(59)] = 6369,
  [SMALL_STATE(60)] = 6480,
  [SMALL_STATE(61)] = 6591,
  [SMALL_STATE(62)] = 6702,
  [SMALL_STATE(63)] = 6813,
  [SMALL_STATE(64)] = 6924,
  [SMALL_STATE(65)] = 7035,
  [SMALL_STATE(66)] = 7146,
  [SMALL_STATE(67)] = 7257,
  [SMALL_STATE(68)] = 7368,
  [SMALL_STATE(69)] = 7479,
  [SMALL_STATE(70)] = 7590,
  [SMALL_STATE(71)] = 7701,
  [SMALL_STATE(72)] = 7812,
  [SMALL_STATE(73)] = 7923,
  [SMALL_STATE(74)] = 8034,
  [SMALL_STATE(75)] = 8145,
  [SMALL_STATE(76)] = 8256,
  [SMALL_STATE(77)] = 8367,
  [SMALL_STATE(78)] = 8478,
  [SMALL_STATE(79)] = 8589,
  [SMALL_STATE(80)] = 8700,
  [SMALL_STATE(81)] = 8811,
  [SMALL_STATE(82)] = 8922,
  [SMALL_STATE(83)] = 9033,
  [SMALL_STATE(84)] = 9144,
  [SMALL_STATE(85)] = 9255,
  [SMALL_STATE(86)] = 9366,
  [SMALL_STATE(87)] = 9477,
  [SMALL_STATE(88)] = 9588,
  [SMALL_STATE(89)] = 9699,
  [SMALL_STATE(90)] = 9810,
  [SMALL_STATE(91)] = 9921,
  [SMALL_STATE(92)] = 10032,
  [SMALL_STATE(93)] = 10143,
  [SMALL_STATE(94)] = 10254,
  [SMALL_STATE(95)] = 10365,
  [SMALL_STATE(96)] = 10476,
  [SMALL_STATE(97)] = 10572,
  [SMALL_STATE(98)] = 10668,
  [SMALL_STATE(99)] = 10761,
  [SMALL_STATE(100)] = 10854,
  [SMALL_STATE(101)] = 10947,
  [SMALL_STATE(102)] = 11040,
  [SMALL_STATE(103)] = 11133,
  [SMALL_STATE(104)] = 11226,
  [SMALL_STATE(105)] = 11319,
  [SMALL_STATE(106)] = 11412,
  [SMALL_STATE(107)] = 11505,
  [SMALL_STATE(108)] = 11598,
  [SMALL_STATE(109)] = 11691,
  [SMALL_STATE(110)] = 11784,
  [SMALL_STATE(111)] = 11877,
  [SMALL_STATE(112)] = 11970,
  [SMALL_STATE(113)] = 12063,
  [SMALL_STATE(114)] = 12156,
  [SMALL_STATE(115)] = 12249,
  [SMALL_STATE(116)] = 12342,
  [SMALL_STATE(117)] = 12435,
  [SMALL_STATE(118)] = 12528,
  [SMALL_STATE(119)] = 12621,
  [SMALL_STATE(120)] = 12714,
  [SMALL_STATE(121)] = 12807,
  [SMALL_STATE(122)] = 12900,
  [SMALL_STATE(123)] = 12993,
  [SMALL_STATE(124)] = 13086,
  [SMALL_STATE(125)] = 13179,
  [SMALL_STATE(126)] = 13272,
  [SMALL_STATE(127)] = 13320,
  [SMALL_STATE(128)] = 13368,
  [SMALL_STATE(129)] = 13415,
  [SMALL_STATE(130)] = 13462,
  [SMALL_STATE(131)] = 13509,
  [SMALL_STATE(132)] = 13553,
  [SMALL_STATE(133)] = 13597,
  [SMALL_STATE(134)] = 13641,
  [SMALL_STATE(135)] = 13685,
  [SMALL_STATE(136)] = 13729,
  [SMALL_STATE(137)] = 13773,
  [SMALL_STATE(138)] = 13817,
  [SMALL_STATE(139)] = 13861,
  [SMALL_STATE(140)] = 13905,
  [SMALL_STATE(141)] = 13949,
  [SMALL_STATE(142)] = 13993,
  [SMALL_STATE(143)] = 14039,
  [SMALL_STATE(144)] = 14085,
  [SMALL_STATE(145)] = 14128,
  [SMALL_STATE(146)] = 14171,
  [SMALL_STATE(147)] = 14214,
  [SMALL_STATE(148)] = 14254,
  [SMALL_STATE(149)] = 14294,
  [SMALL_STATE(150)] = 14334,
  [SMALL_STATE(151)] = 14364,
  [SMALL_STATE(152)] = 14404,
  [SMALL_STATE(153)] = 14444,
  [SMALL_STATE(154)] = 14484,
  [SMALL_STATE(155)] = 14524,
  [SMALL_STATE(156)] = 14564,
  [SMALL_STATE(157)] = 14604,
  [SMALL_STATE(158)] = 14644,
  [SMALL_STATE(159)] = 14684,
  [SMALL_STATE(160)] = 14724,
  [SMALL_STATE(161)] = 14764,
  [SMALL_STATE(162)] = 14804,
  [SMALL_STATE(163)] = 14844,
  [SMALL_STATE(164)] = 14884,
  [SMALL_STATE(165)] = 14924,
  [SMALL_STATE(166)] = 14964,
  [SMALL_STATE(167)] = 15004,
  [SMALL_STATE(168)] = 15044,
  [SMALL_STATE(169)] = 15084,
  [SMALL_STATE(170)] = 15124,
  [SMALL_STATE(171)] = 15164,
  [SMALL_STATE(172)] = 15204,
  [SMALL_STATE(173)] = 15234,
  [SMALL_STATE(174)] = 15274,
  [SMALL_STATE(175)] = 15314,
  [SMALL_STATE(176)] = 15360,
  [SMALL_STATE(177)] = 15400,
  [SMALL_STATE(178)] = 15440,
  [SMALL_STATE(179)] = 15480,
  [SMALL_STATE(180)] = 15520,
  [SMALL_STATE(181)] = 15560,
  [SMALL_STATE(182)] = 15603,
  [SMALL_STATE(183)] = 15646,
  [SMALL_STATE(184)] = 15670,
  [SMALL_STATE(185)] = 15694,
  [SMALL_STATE(186)] = 15734,
  [SMALL_STATE(187)] = 15758,
  [SMALL_STATE(188)] = 15782,
  [SMALL_STATE(189)] = 15828,
  [SMALL_STATE(190)] = 15870,
  [SMALL_STATE(191)] = 15910,
  [SMALL_STATE(192)] = 15950,
  [SMALL_STATE(193)] = 15974,
  [SMALL_STATE(194)] = 16014,
  [SMALL_STATE(195)] = 16038,
  [SMALL_STATE(196)] = 16084,
  [SMALL_STATE(197)] = 16124,
  [SMALL_STATE(198)] = 16150,
  [SMALL_STATE(199)] = 16176,
  [SMALL_STATE(200)] = 16216,
  [SMALL_STATE(201)] = 16240,
  [SMALL_STATE(202)] = 16280,
  [SMALL_STATE(203)] = 16303,
  [SMALL_STATE(204)] = 16326,
  [SMALL_STATE(205)] = 16349,
  [SMALL_STATE(206)] = 16372,
  [SMALL_STATE(207)] = 16405,
  [SMALL_STATE(208)] = 16440,
  [SMALL_STATE(209)] = 16463,
  [SMALL_STATE(210)] = 16486,
  [SMALL_STATE(211)] = 16509,
  [SMALL_STATE(212)] = 16532,
  [SMALL_STATE(213)] = 16555,
  [SMALL_STATE(214)] = 16578,
  [SMALL_STATE(215)] = 16601,
  [SMALL_STATE(216)] = 16624,
  [SMALL_STATE(217)] = 16647,
  [SMALL_STATE(218)] = 16670,
  [SMALL_STATE(219)] = 16693,
  [SMALL_STATE(220)] = 16716,
  [SMALL_STATE(221)] = 16739,
  [SMALL_STATE(222)] = 16762,
  [SMALL_STATE(223)] = 16785,
  [SMALL_STATE(224)] = 16808,
  [SMALL_STATE(225)] = 16831,
  [SMALL_STATE(226)] = 16854,
  [SMALL_STATE(227)] = 16877,
  [SMALL_STATE(228)] = 16900,
  [SMALL_STATE(229)] = 16923,
  [SMALL_STATE(230)] = 16947,
  [SMALL_STATE(231)] = 16969,
  [SMALL_STATE(232)] = 16990,
  [SMALL_STATE(233)] = 17009,
  [SMALL_STATE(234)] = 17028,
  [SMALL_STATE(235)] = 17048,
  [SMALL_STATE(236)] = 17064,
  [SMALL_STATE(237)] = 17086,
  [SMALL_STATE(238)] = 17102,
  [SMALL_STATE(239)] = 17120,
  [SMALL_STATE(240)] = 17146,
  [SMALL_STATE(241)] = 17162,
  [SMALL_STATE(242)] = 17180,
  [SMALL_STATE(243)] = 17196,
  [SMALL_STATE(244)] = 17212,
  [SMALL_STATE(245)] = 17234,
  [SMALL_STATE(246)] = 17254,
  [SMALL_STATE(247)] = 17270,
  [SMALL_STATE(248)] = 17292,
  [SMALL_STATE(249)] = 17314,
  [SMALL_STATE(250)] = 17336,
  [SMALL_STATE(251)] = 17352,
  [SMALL_STATE(252)] = 17368,
  [SMALL_STATE(253)] = 17390,
  [SMALL_STATE(254)] = 17406,
  [SMALL_STATE(255)] = 17422,
  [SMALL_STATE(256)] = 17438,
  [SMALL_STATE(257)] = 17454,
  [SMALL_STATE(258)] = 17476,
  [SMALL_STATE(259)] = 17494,
  [SMALL_STATE(260)] = 17512,
  [SMALL_STATE(261)] = 17528,
  [SMALL_STATE(262)] = 17546,
  [SMALL_STATE(263)] = 17562,
  [SMALL_STATE(264)] = 17578,
  [SMALL_STATE(265)] = 17594,
  [SMALL_STATE(266)] = 17618,
  [SMALL_STATE(267)] = 17634,
  [SMALL_STATE(268)] = 17650,
  [SMALL_STATE(269)] = 17668,
  [SMALL_STATE(270)] = 17686,
  [SMALL_STATE(271)] = 17702,
  [SMALL_STATE(272)] = 17719,
  [SMALL_STATE(273)] = 17736,
  [SMALL_STATE(274)] = 17753,
  [SMALL_STATE(275)] = 17770,
  [SMALL_STATE(276)] = 17787,
  [SMALL_STATE(277)] = 17804,
  [SMALL_STATE(278)] = 17821,
  [SMALL_STATE(279)] = 17838,
  [SMALL_STATE(280)] = 17855,
  [SMALL_STATE(281)] = 17872,
  [SMALL_STATE(282)] = 17889,
  [SMALL_STATE(283)] = 17906,
  [SMALL_STATE(284)] = 17923,
  [SMALL_STATE(285)] = 17940,
  [SMALL_STATE(286)] = 17957,
  [SMALL_STATE(287)] = 17974,
  [SMALL_STATE(288)] = 17995,
  [SMALL_STATE(289)] = 18012,
  [SMALL_STATE(290)] = 18029,
  [SMALL_STATE(291)] = 18046,
  [SMALL_STATE(292)] = 18063,
  [SMALL_STATE(293)] = 18080,
  [SMALL_STATE(294)] = 18097,
  [SMALL_STATE(295)] = 18116,
  [SMALL_STATE(296)] = 18133,
  [SMALL_STATE(297)] = 18150,
  [SMALL_STATE(298)] = 18167,
  [SMALL_STATE(299)] = 18184,
  [SMALL_STATE(300)] = 18201,
  [SMALL_STATE(301)] = 18217,
  [SMALL_STATE(302)] = 18239,
  [SMALL_STATE(303)] = 18253,
  [SMALL_STATE(304)] = 18267,
  [SMALL_STATE(305)] = 18289,
  [SMALL_STATE(306)] = 18311,
  [SMALL_STATE(307)] = 18333,
  [SMALL_STATE(308)] = 18347,
  [SMALL_STATE(309)] = 18369,
  [SMALL_STATE(310)] = 18385,
  [SMALL_STATE(311)] = 18399,
  [SMALL_STATE(312)] = 18421,
  [SMALL_STATE(313)] = 18441,
  [SMALL_STATE(314)] = 18457,
  [SMALL_STATE(315)] = 18473,
  [SMALL_STATE(316)] = 18487,
  [SMALL_STATE(317)] = 18501,
  [SMALL_STATE(318)] = 18515,
  [SMALL_STATE(319)] = 18529,
  [SMALL_STATE(320)] = 18543,
  [SMALL_STATE(321)] = 18559,
  [SMALL_STATE(322)] = 18573,
  [SMALL_STATE(323)] = 18587,
  [SMALL_STATE(324)] = 18603,
  [SMALL_STATE(325)] = 18623,
  [SMALL_STATE(326)] = 18637,
  [SMALL_STATE(327)] = 18651,
  [SMALL_STATE(328)] = 18667,
  [SMALL_STATE(329)] = 18689,
  [SMALL_STATE(330)] = 18711,
  [SMALL_STATE(331)] = 18731,
  [SMALL_STATE(332)] = 18753,
  [SMALL_STATE(333)] = 18771,
  [SMALL_STATE(334)] = 18785,
  [SMALL_STATE(335)] = 18799,
  [SMALL_STATE(336)] = 18815,
  [SMALL_STATE(337)] = 18837,
  [SMALL_STATE(338)] = 18859,
  [SMALL_STATE(339)] = 18881,
  [SMALL_STATE(340)] = 18895,
  [SMALL_STATE(341)] = 18915,
  [SMALL_STATE(342)] = 18937,
  [SMALL_STATE(343)] = 18959,
  [SMALL_STATE(344)] = 18975,
  [SMALL_STATE(345)] = 18991,
  [SMALL_STATE(346)] = 19011,
  [SMALL_STATE(347)] = 19033,
  [SMALL_STATE(348)] = 19047,
  [SMALL_STATE(349)] = 19061,
  [SMALL_STATE(350)] = 19075,
  [SMALL_STATE(351)] = 19097,
  [SMALL_STATE(352)] = 19117,
  [SMALL_STATE(353)] = 19139,
  [SMALL_STATE(354)] = 19152,
  [SMALL_STATE(355)] = 19165,
  [SMALL_STATE(356)] = 19182,
  [SMALL_STATE(357)] = 19201,
  [SMALL_STATE(358)] = 19214,
  [SMALL_STATE(359)] = 19229,
  [SMALL_STATE(360)] = 19248,
  [SMALL_STATE(361)] = 19267,
  [SMALL_STATE(362)] = 19284,
  [SMALL_STATE(363)] = 19299,
  [SMALL_STATE(364)] = 19318,
  [SMALL_STATE(365)] = 19337,
  [SMALL_STATE(366)] = 19356,
  [SMALL_STATE(367)] = 19369,
  [SMALL_STATE(368)] = 19386,
  [SMALL_STATE(369)] = 19399,
  [SMALL_STATE(370)] = 19414,
  [SMALL_STATE(371)] = 19433,
  [SMALL_STATE(372)] = 19452,
  [SMALL_STATE(373)] = 19465,
  [SMALL_STATE(374)] = 19482,
  [SMALL_STATE(375)] = 19499,
  [SMALL_STATE(376)] = 19516,
  [SMALL_STATE(377)] = 19535,
  [SMALL_STATE(378)] = 19554,
  [SMALL_STATE(379)] = 19573,
  [SMALL_STATE(380)] = 19589,
  [SMALL_STATE(381)] = 19603,
  [SMALL_STATE(382)] = 19619,
  [SMALL_STATE(383)] = 19635,
  [SMALL_STATE(384)] = 19651,
  [SMALL_STATE(385)] = 19667,
  [SMALL_STATE(386)] = 19683,
  [SMALL_STATE(387)] = 19697,
  [SMALL_STATE(388)] = 19713,
  [SMALL_STATE(389)] = 19727,
  [SMALL_STATE(390)] = 19743,
  [SMALL_STATE(391)] = 19759,
  [SMALL_STATE(392)] = 19775,
  [SMALL_STATE(393)] = 19791,
  [SMALL_STATE(394)] = 19807,
  [SMALL_STATE(395)] = 19823,
  [SMALL_STATE(396)] = 19839,
  [SMALL_STATE(397)] = 19855,
  [SMALL_STATE(398)] = 19871,
  [SMALL_STATE(399)] = 19887,
  [SMALL_STATE(400)] = 19903,
  [SMALL_STATE(401)] = 19919,
  [SMALL_STATE(402)] = 19933,
  [SMALL_STATE(403)] = 19949,
  [SMALL_STATE(404)] = 19963,
  [SMALL_STATE(405)] = 19979,
  [SMALL_STATE(406)] = 19995,
  [SMALL_STATE(407)] = 20011,
  [SMALL_STATE(408)] = 20027,
  [SMALL_STATE(409)] = 20043,
  [SMALL_STATE(410)] = 20059,
  [SMALL_STATE(411)] = 20075,
  [SMALL_STATE(412)] = 20091,
  [SMALL_STATE(413)] = 20107,
  [SMALL_STATE(414)] = 20123,
  [SMALL_STATE(415)] = 20137,
  [SMALL_STATE(416)] = 20153,
  [SMALL_STATE(417)] = 20169,
  [SMALL_STATE(418)] = 20185,
  [SMALL_STATE(419)] = 20201,
  [SMALL_STATE(420)] = 20215,
  [SMALL_STATE(421)] = 20229,
  [SMALL_STATE(422)] = 20243,
  [SMALL_STATE(423)] = 20257,
  [SMALL_STATE(424)] = 20273,
  [SMALL_STATE(425)] = 20289,
  [SMALL_STATE(426)] = 20305,
  [SMALL_STATE(427)] = 20321,
  [SMALL_STATE(428)] = 20337,
  [SMALL_STATE(429)] = 20353,
  [SMALL_STATE(430)] = 20369,
  [SMALL_STATE(431)] = 20385,
  [SMALL_STATE(432)] = 20401,
  [SMALL_STATE(433)] = 20417,
  [SMALL_STATE(434)] = 20433,
  [SMALL_STATE(435)] = 20449,
  [SMALL_STATE(436)] = 20465,
  [SMALL_STATE(437)] = 20481,
  [SMALL_STATE(438)] = 20497,
  [SMALL_STATE(439)] = 20513,
  [SMALL_STATE(440)] = 20529,
  [SMALL_STATE(441)] = 20545,
  [SMALL_STATE(442)] = 20561,
  [SMALL_STATE(443)] = 20577,
  [SMALL_STATE(444)] = 20593,
  [SMALL_STATE(445)] = 20609,
  [SMALL_STATE(446)] = 20625,
  [SMALL_STATE(447)] = 20641,
  [SMALL_STATE(448)] = 20657,
  [SMALL_STATE(449)] = 20673,
  [SMALL_STATE(450)] = 20689,
  [SMALL_STATE(451)] = 20705,
  [SMALL_STATE(452)] = 20721,
  [SMALL_STATE(453)] = 20737,
  [SMALL_STATE(454)] = 20753,
  [SMALL_STATE(455)] = 20769,
  [SMALL_STATE(456)] = 20785,
  [SMALL_STATE(457)] = 20801,
  [SMALL_STATE(458)] = 20817,
  [SMALL_STATE(459)] = 20833,
  [SMALL_STATE(460)] = 20849,
  [SMALL_STATE(461)] = 20865,
  [SMALL_STATE(462)] = 20881,
  [SMALL_STATE(463)] = 20897,
  [SMALL_STATE(464)] = 20913,
  [SMALL_STATE(465)] = 20929,
  [SMALL_STATE(466)] = 20945,
  [SMALL_STATE(467)] = 20961,
  [SMALL_STATE(468)] = 20977,
  [SMALL_STATE(469)] = 20993,
  [SMALL_STATE(470)] = 21009,
  [SMALL_STATE(471)] = 21025,
  [SMALL_STATE(472)] = 21041,
  [SMALL_STATE(473)] = 21057,
  [SMALL_STATE(474)] = 21073,
  [SMALL_STATE(475)] = 21087,
  [SMALL_STATE(476)] = 21101,
  [SMALL_STATE(477)] = 21115,
  [SMALL_STATE(478)] = 21131,
  [SMALL_STATE(479)] = 21147,
  [SMALL_STATE(480)] = 21163,
  [SMALL_STATE(481)] = 21179,
  [SMALL_STATE(482)] = 21193,
  [SMALL_STATE(483)] = 21209,
  [SMALL_STATE(484)] = 21225,
  [SMALL_STATE(485)] = 21241,
  [SMALL_STATE(486)] = 21257,
  [SMALL_STATE(487)] = 21271,
  [SMALL_STATE(488)] = 21287,
  [SMALL_STATE(489)] = 21303,
  [SMALL_STATE(490)] = 21319,
  [SMALL_STATE(491)] = 21335,
  [SMALL_STATE(492)] = 21351,
  [SMALL_STATE(493)] = 21367,
  [SMALL_STATE(494)] = 21383,
  [SMALL_STATE(495)] = 21399,
  [SMALL_STATE(496)] = 21415,
  [SMALL_STATE(497)] = 21431,
  [SMALL_STATE(498)] = 21447,
  [SMALL_STATE(499)] = 21463,
  [SMALL_STATE(500)] = 21479,
  [SMALL_STATE(501)] = 21495,
  [SMALL_STATE(502)] = 21511,
  [SMALL_STATE(503)] = 21527,
  [SMALL_STATE(504)] = 21543,
  [SMALL_STATE(505)] = 21559,
  [SMALL_STATE(506)] = 21575,
  [SMALL_STATE(507)] = 21589,
  [SMALL_STATE(508)] = 21602,
  [SMALL_STATE(509)] = 21615,
  [SMALL_STATE(510)] = 21628,
  [SMALL_STATE(511)] = 21641,
  [SMALL_STATE(512)] = 21654,
  [SMALL_STATE(513)] = 21667,
  [SMALL_STATE(514)] = 21680,
  [SMALL_STATE(515)] = 21691,
  [SMALL_STATE(516)] = 21704,
  [SMALL_STATE(517)] = 21717,
  [SMALL_STATE(518)] = 21730,
  [SMALL_STATE(519)] = 21743,
  [SMALL_STATE(520)] = 21756,
  [SMALL_STATE(521)] = 21769,
  [SMALL_STATE(522)] = 21780,
  [SMALL_STATE(523)] = 21793,
  [SMALL_STATE(524)] = 21806,
  [SMALL_STATE(525)] = 21819,
  [SMALL_STATE(526)] = 21832,
  [SMALL_STATE(527)] = 21843,
  [SMALL_STATE(528)] = 21856,
  [SMALL_STATE(529)] = 21867,
  [SMALL_STATE(530)] = 21880,
  [SMALL_STATE(531)] = 21893,
  [SMALL_STATE(532)] = 21904,
  [SMALL_STATE(533)] = 21917,
  [SMALL_STATE(534)] = 21930,
  [SMALL_STATE(535)] = 21943,
  [SMALL_STATE(536)] = 21956,
  [SMALL_STATE(537)] = 21969,
  [SMALL_STATE(538)] = 21982,
  [SMALL_STATE(539)] = 21995,
  [SMALL_STATE(540)] = 22008,
  [SMALL_STATE(541)] = 22021,
  [SMALL_STATE(542)] = 22034,
  [SMALL_STATE(543)] = 22047,
  [SMALL_STATE(544)] = 22060,
  [SMALL_STATE(545)] = 22073,
  [SMALL_STATE(546)] = 22086,
  [SMALL_STATE(547)] = 22099,
  [SMALL_STATE(548)] = 22112,
  [SMALL_STATE(549)] = 22125,
  [SMALL_STATE(550)] = 22138,
  [SMALL_STATE(551)] = 22151,
  [SMALL_STATE(552)] = 22162,
  [SMALL_STATE(553)] = 22175,
  [SMALL_STATE(554)] = 22188,
  [SMALL_STATE(555)] = 22199,
  [SMALL_STATE(556)] = 22212,
  [SMALL_STATE(557)] = 22223,
  [SMALL_STATE(558)] = 22236,
  [SMALL_STATE(559)] = 22249,
  [SMALL_STATE(560)] = 22262,
  [SMALL_STATE(561)] = 22275,
  [SMALL_STATE(562)] = 22286,
  [SMALL_STATE(563)] = 22297,
  [SMALL_STATE(564)] = 22308,
  [SMALL_STATE(565)] = 22319,
  [SMALL_STATE(566)] = 22330,
  [SMALL_STATE(567)] = 22343,
  [SMALL_STATE(568)] = 22354,
  [SMALL_STATE(569)] = 22365,
  [SMALL_STATE(570)] = 22376,
  [SMALL_STATE(571)] = 22389,
  [SMALL_STATE(572)] = 22400,
  [SMALL_STATE(573)] = 22413,
  [SMALL_STATE(574)] = 22423,
  [SMALL_STATE(575)] = 22433,
  [SMALL_STATE(576)] = 22443,
  [SMALL_STATE(577)] = 22453,
  [SMALL_STATE(578)] = 22463,
  [SMALL_STATE(579)] = 22473,
  [SMALL_STATE(580)] = 22483,
  [SMALL_STATE(581)] = 22493,
  [SMALL_STATE(582)] = 22503,
  [SMALL_STATE(583)] = 22513,
  [SMALL_STATE(584)] = 22523,
  [SMALL_STATE(585)] = 22533,
  [SMALL_STATE(586)] = 22543,
  [SMALL_STATE(587)] = 22553,
  [SMALL_STATE(588)] = 22563,
  [SMALL_STATE(589)] = 22573,
  [SMALL_STATE(590)] = 22583,
  [SMALL_STATE(591)] = 22593,
  [SMALL_STATE(592)] = 22603,
  [SMALL_STATE(593)] = 22613,
  [SMALL_STATE(594)] = 22623,
  [SMALL_STATE(595)] = 22633,
  [SMALL_STATE(596)] = 22643,
  [SMALL_STATE(597)] = 22653,
  [SMALL_STATE(598)] = 22663,
  [SMALL_STATE(599)] = 22673,
  [SMALL_STATE(600)] = 22683,
  [SMALL_STATE(601)] = 22693,
  [SMALL_STATE(602)] = 22703,
  [SMALL_STATE(603)] = 22713,
  [SMALL_STATE(604)] = 22723,
  [SMALL_STATE(605)] = 22733,
  [SMALL_STATE(606)] = 22743,
  [SMALL_STATE(607)] = 22753,
  [SMALL_STATE(608)] = 22763,
  [SMALL_STATE(609)] = 22773,
  [SMALL_STATE(610)] = 22783,
  [SMALL_STATE(611)] = 22793,
  [SMALL_STATE(612)] = 22803,
  [SMALL_STATE(613)] = 22813,
  [SMALL_STATE(614)] = 22823,
  [SMALL_STATE(615)] = 22833,
  [SMALL_STATE(616)] = 22843,
  [SMALL_STATE(617)] = 22853,
  [SMALL_STATE(618)] = 22863,
  [SMALL_STATE(619)] = 22873,
  [SMALL_STATE(620)] = 22883,
  [SMALL_STATE(621)] = 22893,
  [SMALL_STATE(622)] = 22903,
  [SMALL_STATE(623)] = 22913,
  [SMALL_STATE(624)] = 22923,
  [SMALL_STATE(625)] = 22933,
  [SMALL_STATE(626)] = 22943,
  [SMALL_STATE(627)] = 22953,
  [SMALL_STATE(628)] = 22963,
  [SMALL_STATE(629)] = 22973,
  [SMALL_STATE(630)] = 22983,
  [SMALL_STATE(631)] = 22993,
  [SMALL_STATE(632)] = 23003,
  [SMALL_STATE(633)] = 23013,
  [SMALL_STATE(634)] = 23023,
  [SMALL_STATE(635)] = 23033,
  [SMALL_STATE(636)] = 23043,
  [SMALL_STATE(637)] = 23053,
  [SMALL_STATE(638)] = 23063,
  [SMALL_STATE(639)] = 23073,
  [SMALL_STATE(640)] = 23083,
  [SMALL_STATE(641)] = 23093,
  [SMALL_STATE(642)] = 23103,
  [SMALL_STATE(643)] = 23113,
  [SMALL_STATE(644)] = 23123,
  [SMALL_STATE(645)] = 23133,
  [SMALL_STATE(646)] = 23143,
  [SMALL_STATE(647)] = 23153,
  [SMALL_STATE(648)] = 23163,
  [SMALL_STATE(649)] = 23173,
  [SMALL_STATE(650)] = 23183,
  [SMALL_STATE(651)] = 23193,
  [SMALL_STATE(652)] = 23203,
  [SMALL_STATE(653)] = 23213,
  [SMALL_STATE(654)] = 23223,
  [SMALL_STATE(655)] = 23233,
  [SMALL_STATE(656)] = 23243,
  [SMALL_STATE(657)] = 23253,
  [SMALL_STATE(658)] = 23263,
  [SMALL_STATE(659)] = 23273,
  [SMALL_STATE(660)] = 23283,
  [SMALL_STATE(661)] = 23293,
  [SMALL_STATE(662)] = 23303,
  [SMALL_STATE(663)] = 23313,
  [SMALL_STATE(664)] = 23323,
  [SMALL_STATE(665)] = 23333,
  [SMALL_STATE(666)] = 23343,
  [SMALL_STATE(667)] = 23353,
  [SMALL_STATE(668)] = 23363,
  [SMALL_STATE(669)] = 23373,
  [SMALL_STATE(670)] = 23383,
  [SMALL_STATE(671)] = 23393,
  [SMALL_STATE(672)] = 23403,
  [SMALL_STATE(673)] = 23413,
  [SMALL_STATE(674)] = 23423,
  [SMALL_STATE(675)] = 23433,
  [SMALL_STATE(676)] = 23443,
  [SMALL_STATE(677)] = 23453,
  [SMALL_STATE(678)] = 23463,
  [SMALL_STATE(679)] = 23473,
  [SMALL_STATE(680)] = 23483,
  [SMALL_STATE(681)] = 23493,
  [SMALL_STATE(682)] = 23503,
  [SMALL_STATE(683)] = 23513,
  [SMALL_STATE(684)] = 23523,
  [SMALL_STATE(685)] = 23533,
  [SMALL_STATE(686)] = 23543,
  [SMALL_STATE(687)] = 23553,
  [SMALL_STATE(688)] = 23563,
  [SMALL_STATE(689)] = 23573,
  [SMALL_STATE(690)] = 23583,
  [SMALL_STATE(691)] = 23593,
  [SMALL_STATE(692)] = 23603,
  [SMALL_STATE(693)] = 23613,
  [SMALL_STATE(694)] = 23623,
  [SMALL_STATE(695)] = 23633,
  [SMALL_STATE(696)] = 23643,
  [SMALL_STATE(697)] = 23653,
  [SMALL_STATE(698)] = 23663,
  [SMALL_STATE(699)] = 23673,
  [SMALL_STATE(700)] = 23683,
  [SMALL_STATE(701)] = 23693,
  [SMALL_STATE(702)] = 23703,
  [SMALL_STATE(703)] = 23713,
  [SMALL_STATE(704)] = 23723,
  [SMALL_STATE(705)] = 23733,
  [SMALL_STATE(706)] = 23743,
  [SMALL_STATE(707)] = 23753,
  [SMALL_STATE(708)] = 23763,
  [SMALL_STATE(709)] = 23773,
  [SMALL_STATE(710)] = 23783,
  [SMALL_STATE(711)] = 23793,
  [SMALL_STATE(712)] = 23803,
  [SMALL_STATE(713)] = 23813,
  [SMALL_STATE(714)] = 23823,
  [SMALL_STATE(715)] = 23833,
  [SMALL_STATE(716)] = 23843,
  [SMALL_STATE(717)] = 23853,
  [SMALL_STATE(718)] = 23863,
  [SMALL_STATE(719)] = 23873,
  [SMALL_STATE(720)] = 23883,
  [SMALL_STATE(721)] = 23893,
  [SMALL_STATE(722)] = 23903,
  [SMALL_STATE(723)] = 23913,
  [SMALL_STATE(724)] = 23923,
  [SMALL_STATE(725)] = 23933,
  [SMALL_STATE(726)] = 23943,
  [SMALL_STATE(727)] = 23953,
  [SMALL_STATE(728)] = 23963,
  [SMALL_STATE(729)] = 23973,
  [SMALL_STATE(730)] = 23983,
  [SMALL_STATE(731)] = 23993,
  [SMALL_STATE(732)] = 24003,
  [SMALL_STATE(733)] = 24013,
  [SMALL_STATE(734)] = 24023,
  [SMALL_STATE(735)] = 24033,
  [SMALL_STATE(736)] = 24043,
  [SMALL_STATE(737)] = 24053,
  [SMALL_STATE(738)] = 24063,
  [SMALL_STATE(739)] = 24073,
  [SMALL_STATE(740)] = 24083,
  [SMALL_STATE(741)] = 24093,
  [SMALL_STATE(742)] = 24103,
  [SMALL_STATE(743)] = 24113,
  [SMALL_STATE(744)] = 24123,
  [SMALL_STATE(745)] = 24133,
  [SMALL_STATE(746)] = 24143,
  [SMALL_STATE(747)] = 24153,
  [SMALL_STATE(748)] = 24163,
  [SMALL_STATE(749)] = 24173,
  [SMALL_STATE(750)] = 24183,
  [SMALL_STATE(751)] = 24193,
  [SMALL_STATE(752)] = 24203,
  [SMALL_STATE(753)] = 24213,
  [SMALL_STATE(754)] = 24223,
  [SMALL_STATE(755)] = 24233,
  [SMALL_STATE(756)] = 24243,
  [SMALL_STATE(757)] = 24253,
  [SMALL_STATE(758)] = 24263,
  [SMALL_STATE(759)] = 24273,
  [SMALL_STATE(760)] = 24283,
  [SMALL_STATE(761)] = 24293,
  [SMALL_STATE(762)] = 24303,
  [SMALL_STATE(763)] = 24313,
  [SMALL_STATE(764)] = 24323,
  [SMALL_STATE(765)] = 24333,
  [SMALL_STATE(766)] = 24343,
  [SMALL_STATE(767)] = 24353,
  [SMALL_STATE(768)] = 24363,
  [SMALL_STATE(769)] = 24373,
  [SMALL_STATE(770)] = 24383,
  [SMALL_STATE(771)] = 24393,
  [SMALL_STATE(772)] = 24403,
  [SMALL_STATE(773)] = 24413,
  [SMALL_STATE(774)] = 24423,
  [SMALL_STATE(775)] = 24433,
  [SMALL_STATE(776)] = 24443,
  [SMALL_STATE(777)] = 24453,
  [SMALL_STATE(778)] = 24463,
  [SMALL_STATE(779)] = 24473,
  [SMALL_STATE(780)] = 24483,
  [SMALL_STATE(781)] = 24493,
  [SMALL_STATE(782)] = 24503,
  [SMALL_STATE(783)] = 24513,
  [SMALL_STATE(784)] = 24523,
  [SMALL_STATE(785)] = 24533,
  [SMALL_STATE(786)] = 24543,
  [SMALL_STATE(787)] = 24553,
  [SMALL_STATE(788)] = 24563,
  [SMALL_STATE(789)] = 24573,
  [SMALL_STATE(790)] = 24583,
  [SMALL_STATE(791)] = 24593,
  [SMALL_STATE(792)] = 24603,
  [SMALL_STATE(793)] = 24613,
  [SMALL_STATE(794)] = 24623,
  [SMALL_STATE(795)] = 24633,
  [SMALL_STATE(796)] = 24643,
  [SMALL_STATE(797)] = 24653,
  [SMALL_STATE(798)] = 24663,
  [SMALL_STATE(799)] = 24673,
  [SMALL_STATE(800)] = 24683,
  [SMALL_STATE(801)] = 24693,
  [SMALL_STATE(802)] = 24703,
  [SMALL_STATE(803)] = 24713,
  [SMALL_STATE(804)] = 24723,
  [SMALL_STATE(805)] = 24733,
  [SMALL_STATE(806)] = 24743,
  [SMALL_STATE(807)] = 24753,
  [SMALL_STATE(808)] = 24763,
  [SMALL_STATE(809)] = 24773,
  [SMALL_STATE(810)] = 24783,
  [SMALL_STATE(811)] = 24793,
  [SMALL_STATE(812)] = 24803,
  [SMALL_STATE(813)] = 24813,
  [SMALL_STATE(814)] = 24823,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(663),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(642),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4, 0, 0),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0), SHIFT_REPEAT(134),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0), SHIFT_REPEAT(106),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0), SHIFT_REPEAT(535),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0), SHIFT_REPEAT(605),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(759),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1, 0, 0),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 4, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 5, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, 0, 0),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
