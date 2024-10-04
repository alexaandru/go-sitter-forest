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
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 0
#define TOKEN_COUNT 147
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_line_token1 = 1,
  anon_sym_COLON = 2,
  sym_location_unknown = 3,
  anon_sym_LT = 4,
  sym_iso_reference = 5,
  sym_single_line_comment = 6,
  anon_sym_POUND = 7,
  anon_sym_LBRACE_DASH = 8,
  anon_sym_DASH_RBRACE = 9,
  anon_sym_def = 10,
  anon_sym_struct = 11,
  anon_sym_union = 12,
  anon_sym_COLON_EQ = 13,
  sym_int_const = 14,
  sym_floating_const = 15,
  sym_sym = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_void = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_const = 23,
  anon_sym_volatile = 24,
  anon_sym__Atomic = 25,
  anon_sym_STAR = 26,
  anon_sym_LPAREN_STAR_RPAREN = 27,
  anon_sym_restrict = 28,
  anon_sym_COMMA = 29,
  anon_sym_DOT_DOT_DOT = 30,
  aux_sym_integer_type_token1 = 31,
  sym_floating_type = 32,
  anon_sym_ail_ctype = 33,
  anon_sym_EQ = 34,
  anon_sym_glob = 35,
  anon_sym_pure = 36,
  anon_sym_memop = 37,
  anon_sym_let = 38,
  anon_sym_in = 39,
  anon_sym_if = 40,
  anon_sym_then = 41,
  anon_sym_else = 42,
  anon_sym_case = 43,
  anon_sym_of = 44,
  anon_sym_PIPE = 45,
  anon_sym_EQ_GT = 46,
  anon_sym_end = 47,
  anon_sym_pcall = 48,
  anon_sym_ccall = 49,
  anon_sym_unseq = 50,
  anon_sym_weak = 51,
  anon_sym_SEMI = 52,
  anon_sym_strong = 53,
  anon_sym_bound = 54,
  anon_sym_save = 55,
  anon_sym_run = 56,
  anon_sym_nd = 57,
  anon_sym_par = 58,
  anon_sym_eff = 59,
  anon_sym_undef = 60,
  anon_sym_error = 61,
  anon_sym_CivNULLcap = 62,
  anon_sym_signed = 63,
  anon_sym_unsigned = 64,
  anon_sym_array_shift = 65,
  anon_sym_member_shift = 66,
  anon_sym_DOT = 67,
  anon_sym_not = 68,
  anon_sym_DASH = 69,
  anon_sym_cfunction = 70,
  anon_sym_LBRACE = 71,
  anon_sym_RBRACE = 72,
  anon_sym_is_scalar = 73,
  anon_sym_is_integer = 74,
  anon_sym_is_signed_LPAREN = 75,
  anon_sym_is_unsigned_LPAREN = 76,
  anon_sym_are_compatible = 77,
  anon_sym_conv_loaded_int = 78,
  anon_sym_LBRACK_RBRACK = 79,
  anon_sym_COLON_COLON = 80,
  anon_sym_DeriveCap = 81,
  aux_sym_pure_memop_op_token1 = 82,
  anon_sym_CapAssignValue = 83,
  anon_sym_Ptr_tIntValue = 84,
  anon_sym_PtrEq = 85,
  anon_sym_PtrNe = 86,
  anon_sym_PtrLt = 87,
  anon_sym_PtrGt = 88,
  anon_sym_PtrLe = 89,
  anon_sym_PtrGe = 90,
  anon_sym_Ptrdiff = 91,
  anon_sym_IntFromPtr = 92,
  anon_sym_PtrFromInt = 93,
  anon_sym_PtrValidForDeref = 94,
  anon_sym_PtrWellAligned = 95,
  anon_sym_PtrArrayShift = 96,
  aux_sym_memop_op_token1 = 97,
  anon_sym_PtrMemberShift = 98,
  anon_sym__ = 99,
  anon_sym_unit = 100,
  anon_sym_boolean = 101,
  anon_sym_ctype = 102,
  anon_sym_loaded = 103,
  anon_sym_storable = 104,
  anon_sym_integer = 105,
  anon_sym_floating = 106,
  anon_sym_pointer = 107,
  anon_sym_array = 108,
  sym_memory_order = 109,
  anon_sym_create_readonly = 110,
  anon_sym_create = 111,
  anon_sym_alloc = 112,
  anon_sym_free = 113,
  anon_sym_kill = 114,
  anon_sym_store = 115,
  anon_sym_store_lock = 116,
  anon_sym_load = 117,
  anon_sym_seq_rmw = 118,
  anon_sym_seq_rmw_with_forward = 119,
  anon_sym_rmw = 120,
  anon_sym_fence = 121,
  anon_sym_neg = 122,
  sym_ub = 123,
  aux_sym_string_token1 = 124,
  anon_sym_Array = 125,
  anon_sym_Ivmax = 126,
  anon_sym_Ivmin = 127,
  anon_sym_Ivsizeof = 128,
  anon_sym_Ivalignof = 129,
  anon_sym_Specified = 130,
  anon_sym_Unspecified = 131,
  anon_sym_Fvfromint = 132,
  anon_sym_Ivfromfloat = 133,
  anon_sym_IvCOMPL = 134,
  anon_sym_IvAND = 135,
  anon_sym_IvOR = 136,
  anon_sym_IvXOR = 137,
  sym_binary_operator = 138,
  sym_bool_literal = 139,
  anon_sym_IvMaxAlignment = 140,
  anon_sym_NULL = 141,
  anon_sym_Cfunction = 142,
  anon_sym_Unit = 143,
  sym_impl = 144,
  anon_sym_ailname = 145,
  anon_sym_proc = 146,
  sym_source_file = 147,
  sym_multiline_comment = 148,
  sym_comment = 149,
  sym_declaration = 150,
  sym_def_aggregate_declaration = 151,
  sym_def_fields = 152,
  sym_def_field = 153,
  sym_core_ctype = 154,
  sym_ctype = 155,
  sym_ctype_star = 156,
  sym_params = 157,
  sym_integer_type = 158,
  sym_basic_type = 159,
  sym_glob_ctype_attribute = 160,
  sym_glob_declaration = 161,
  sym_expr = 162,
  sym_core_type = 163,
  sym_pexpr = 164,
  sym_list_pexpr = 165,
  sym_pure_memop_op = 166,
  sym_memop_op = 167,
  sym_pattern = 168,
  sym_list_pattern = 169,
  sym_name = 170,
  sym_core_base_type = 171,
  sym_core_object_type = 172,
  sym_action = 173,
  sym_paction = 174,
  sym_string = 175,
  sym_cstring = 176,
  sym_ctor = 177,
  sym_cabs_id = 178,
  sym_member = 179,
  sym_value = 180,
  sym_attribute = 181,
  sym_attribute_pair = 182,
  sym_proc_declaration = 183,
  sym_proc_full_declaration = 184,
  sym_proc_forward_declaration = 185,
  sym_def_declaration = 186,
  aux_sym_source_file_repeat1 = 187,
  aux_sym_def_fields_repeat1 = 188,
  aux_sym_params_repeat1 = 189,
  aux_sym_integer_type_repeat1 = 190,
  aux_sym_expr_repeat1 = 191,
  aux_sym_expr_repeat2 = 192,
  aux_sym_expr_repeat3 = 193,
  aux_sym_expr_repeat4 = 194,
  aux_sym_pexpr_repeat1 = 195,
  aux_sym_pexpr_repeat2 = 196,
  aux_sym_pattern_repeat1 = 197,
  aux_sym_core_base_type_repeat1 = 198,
  aux_sym_attribute_repeat1 = 199,
  aux_sym_proc_full_declaration_repeat1 = 200,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_COLON] = ":",
  [sym_location_unknown] = "location_unknown",
  [anon_sym_LT] = " <",
  [sym_iso_reference] = "iso_reference",
  [sym_single_line_comment] = "single_line_comment",
  [anon_sym_POUND] = "#",
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
  [sym_multiline_comment] = "multiline_comment",
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
  [sym_location_unknown] = sym_location_unknown,
  [anon_sym_LT] = anon_sym_LT,
  [sym_iso_reference] = sym_iso_reference,
  [sym_single_line_comment] = sym_single_line_comment,
  [anon_sym_POUND] = anon_sym_POUND,
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
  [sym_multiline_comment] = sym_multiline_comment,
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
  [sym_location_unknown] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_iso_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
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
  [sym_multiline_comment] = {
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
      if (eof) ADVANCE(842);
      ADVANCE_MAP(
        ' ', 3,
        '"', 5,
        '#', 850,
        '\'', 1287,
        '(', 1294,
        ')', 1295,
        '*', 1302,
        ',', 1305,
        '-', 1403,
        '.', 1399,
        '/', 1509,
        ':', 845,
        ';', 1377,
        '<', 1506,
        '=', 1353,
        '>', 1507,
        'A', 664,
        'B', 392,
        'C', 107,
        'D', 258,
        'E', 535,
        'F', 112,
        'I', 534,
        'N', 67,
        'P', 464,
        'S', 44,
        'T', 666,
        'U', 520,
        '[', 1291,
        '\\', 25,
        ']', 1292,
        '_', 1439,
        'a', 172,
        'b', 584,
        'c', 108,
        'd', 260,
        'e', 346,
        'f', 269,
        'g', 465,
        'i', 334,
        'k', 397,
        'l', 262,
        'm', 230,
        'n', 200,
        'o', 336,
        'p', 124,
        'r', 231,
        's', 116,
        't', 383,
        'u', 522,
        'v', 585,
        'w', 264,
        '{', 1407,
        '|', 1369,
        '}', 1408,
        0xa7, 836,
        '+', 1504,
        '^', 1504,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(849);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 3,
        '"', 5,
        '#', 850,
        '\'', 1287,
        '(', 1294,
        ')', 1295,
        '*', 1302,
        ',', 1305,
        '-', 1403,
        '.', 1399,
        '/', 1509,
        ':', 845,
        ';', 1377,
        '<', 1506,
        '=', 1353,
        '>', 1507,
        'A', 664,
        'B', 392,
        'C', 107,
        'D', 258,
        'E', 535,
        'F', 112,
        'I', 534,
        'N', 67,
        'P', 464,
        'S', 44,
        'T', 666,
        'U', 520,
        '[', 1291,
        '\\', 25,
        ']', 1292,
        '_', 1439,
        'a', 172,
        'b', 584,
        'c', 108,
        'd', 260,
        'e', 346,
        'f', 269,
        'g', 465,
        'i', 334,
        'k', 397,
        'l', 262,
        'm', 230,
        'n', 200,
        'o', 336,
        'p', 124,
        'r', 231,
        's', 116,
        't', 383,
        'u', 522,
        'v', 585,
        'w', 264,
        '{', 1407,
        '|', 1369,
        '}', 1408,
        0xa7, 836,
        '+', 1504,
        '^', 1504,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 3,
        '"', 5,
        '#', 850,
        '\'', 1287,
        '(', 1294,
        ')', 1295,
        '*', 1302,
        ',', 1305,
        '-', 1403,
        '.', 1399,
        '/', 1509,
        ':', 845,
        ';', 1377,
        '<', 847,
        '=', 1353,
        '>', 1507,
        'A', 664,
        'B', 392,
        'C', 107,
        'D', 258,
        'E', 535,
        'F', 112,
        'I', 534,
        'N', 67,
        'P', 464,
        'S', 44,
        'T', 666,
        'U', 520,
        '[', 1291,
        '\\', 25,
        ']', 1292,
        '_', 1439,
        'a', 172,
        'b', 584,
        'c', 108,
        'd', 260,
        'e', 346,
        'f', 269,
        'g', 465,
        'i', 334,
        'k', 397,
        'l', 262,
        'm', 230,
        'n', 200,
        'o', 336,
        'p', 124,
        'r', 231,
        's', 116,
        't', 383,
        'u', 522,
        'v', 585,
        'w', 264,
        '{', 1407,
        '|', 1369,
        '}', 1408,
        0xa7, 836,
        '+', 1504,
        '^', 1504,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1477);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(1287);
      if (lookahead == '(') ADVANCE(1294);
      if (lookahead == ')') ADVANCE(1295);
      if (lookahead == '*') ADVANCE(1302);
      if (lookahead == ',') ADVANCE(1305);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '[') ADVANCE(1290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\'', 1287,
        '(', 1293,
        ')', 1295,
        '+', 23,
        ',', 1305,
        '-', 1402,
        '.', 833,
        ':', 27,
        '<', 28,
        '=', 1353,
        'A', 1197,
        'B', 1046,
        'C', 1019,
        'E', 1126,
        'F', 914,
        'I', 1124,
        'N', 892,
        'P', 1089,
        'S', 876,
        'T', 1199,
        'U', 1117,
        '[', 1291,
        ']', 1292,
        '_', 864,
        'a', 1087,
        'b', 1263,
        'c', 911,
        'e', 1202,
        'i', 1014,
        'l', 977,
        'm', 968,
        'n', 1157,
        's', 1047,
        'u', 1118,
        '{', 1406,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\'', 1287,
        '(', 1293,
        ')', 1295,
        '+', 23,
        '-', 1402,
        '.', 833,
        ':', 26,
        '=', 1352,
        'A', 1197,
        'B', 1046,
        'C', 1019,
        'E', 1126,
        'F', 914,
        'I', 1124,
        'N', 892,
        'P', 1089,
        'S', 876,
        'T', 1199,
        'U', 1117,
        '[', 1291,
        ']', 1292,
        '_', 864,
        'a', 1087,
        'b', 1263,
        'c', 911,
        'e', 1202,
        'i', 1014,
        'l', 977,
        'm', 968,
        'n', 1157,
        's', 1048,
        'u', 1146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1413);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(1414);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '(', 1293,
        ')', 1295,
        '-', 17,
        ':', 844,
        'A', 1198,
        'F', 1268,
        'I', 1270,
        'S', 1183,
        'U', 1133,
        '[', 1291,
        ']', 1292,
        '_', 1440,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '(', 1293,
        ')', 1295,
        '-', 17,
        '[', 1290,
        'a', 1213,
        'b', 1168,
        'c', 1260,
        'f', 1101,
        'i', 1151,
        'l', 1177,
        'p', 1180,
        's', 1241,
        'u', 1138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '(', 1293,
        '-', 17,
        ':', 26,
        '=', 29,
        'A', 1198,
        'F', 1268,
        'I', 1270,
        'S', 1183,
        'U', 1133,
        '[', 1291,
        '_', 1440,
        's', 1258,
        'w', 995,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        ')', 1295,
        '-', 17,
        '.', 19,
        '_', 1307,
        'c', 1335,
        'd', 1331,
        'f', 1325,
        'l', 1336,
        's', 1341,
        'u', 1327,
        'v', 1332,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        ')', 1295,
        '-', 17,
        'A', 1242,
        'B', 1046,
        'C', 1042,
        'E', 1126,
        'I', 1125,
        'P', 1089,
        'S', 877,
        '[', 1290,
        'a', 1088,
        'b', 1263,
        'c', 1229,
        's', 1048,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(1303);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1422);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(1306);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(183);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(717);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(1504);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(1420);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(1420);
      if (lookahead == '=') ADVANCE(861);
      END_STATE();
    case 28:
      if (lookahead == '<') ADVANCE(837);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(1370);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(725);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        'A', 53,
        'C', 55,
        'M', 111,
        'O', 61,
        'X', 57,
        'a', 471,
        'f', 695,
        'm', 115,
        's', 394,
      );
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'A', 697,
        'E', 651,
        'F', 700,
        'G', 239,
        'L', 240,
        'M', 267,
        'N', 241,
        'V', 144,
        'W', 319,
        '_', 735,
        'd', 398,
      );
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(496);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(497);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(1498);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(320);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(613);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'H') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(550);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(556);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(1513);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(1496);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(1520);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(762);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(1500);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(1502);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(387);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(388);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(415);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'p') ADVANCE(493);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'V') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead == 'V') ADVANCE(156);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(424);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(832);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(834);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(835);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(571);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(721);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(807);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(648);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(512);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(616);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(674);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(575);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(418);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(718);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(720);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(443);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(453);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(781);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(724);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(727);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(728);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'f') ADVANCE(792);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(800);
      if (lookahead == 'h') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 't') ADVANCE(823);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(678);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(1467);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(783);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(1354);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(825);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(482);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(301);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(483);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(452);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(1523);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(1464);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(1300);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(714);
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(777);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(779);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(1383);
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1383);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1371);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1470);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1288);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1380);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1448);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1392);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1519);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1461);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1393);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1488);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1490);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1435);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1472);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1469);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(591);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(611);
      if (lookahead == 'k') ADVANCE(545);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(808);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1510);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1365);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1465);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 't') ADVANCE(1428);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1429);
      if (lookahead == 't') ADVANCE(1427);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1474);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1467);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1463);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1461);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1298);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1351);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1445);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(808);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(1362);
      if (lookahead == 'n') ADVANCE(1361);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(1362);
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(1368);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(853);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(1385);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(1386);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(1519);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(1431);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(1484);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(1486);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(1434);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(702);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(341);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(746);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(747);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(748);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(750);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(615);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(420);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(494);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(421);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(1475);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(1378);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(1454);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(554);
      if (lookahead == 'z') ADVANCE(275);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(543);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(578);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(528);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(560);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(562);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(566);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(437);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 390:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 391:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(729);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(754);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(806);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 454:
      if (lookahead == 'k') ADVANCE(1375);
      END_STATE();
    case 455:
      if (lookahead == 'k') ADVANCE(1468);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 's') ADVANCE(771);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(1466);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(1373);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(1372);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(1461);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(797);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(631);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(809);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(645);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(646);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(436);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1361);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(1382);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(1364);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(1482);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(1519);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(1443);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(1515);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(1404);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(846);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(539);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 't') ADVANCE(1441);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(1357);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(1421);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(1390);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 642:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 643:
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 644:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 645:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(693);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 650:
      if (lookahead == 'q') ADVANCE(93);
      END_STATE();
    case 651:
      if (lookahead == 'q') ADVANCE(1425);
      END_STATE();
    case 652:
      if (lookahead == 'q') ADVANCE(1374);
      END_STATE();
    case 653:
      if (lookahead == 'q') ADVANCE(73);
      END_STATE();
    case 654:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(1384);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(1388);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(1519);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(1456);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(1409);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(1432);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(1411);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(1452);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(791);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(812);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(736);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(1519);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(771);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(768);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(722);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(1359);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(1400);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(1517);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(1296);
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(1519);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(855);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(1461);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(1304);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(1492);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(1433);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(1494);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(1394);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(1396);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(1436);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(1511);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(1417);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 790:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 791:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 792:
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 793:
      if (lookahead == 'u') ADVANCE(539);
      END_STATE();
    case 794:
      if (lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 795:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 796:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 797:
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 798:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 799:
      if (lookahead == 'u') ADVANCE(785);
      END_STATE();
    case 800:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 801:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 802:
      if (lookahead == 'v') ADVANCE(423);
      END_STATE();
    case 803:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 804:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 805:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 806:
      if (lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 807:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 808:
      if (lookahead == 'w') ADVANCE(1473);
      END_STATE();
    case 809:
      if (lookahead == 'w') ADVANCE(1471);
      END_STATE();
    case 810:
      if (lookahead == 'w') ADVANCE(530);
      END_STATE();
    case 811:
      if (lookahead == 'w') ADVANCE(414);
      END_STATE();
    case 812:
      if (lookahead == 'w') ADVANCE(137);
      END_STATE();
    case 813:
      if (lookahead == 'x') ADVANCE(1480);
      END_STATE();
    case 814:
      if (lookahead == 'x') ADVANCE(1519);
      END_STATE();
    case 815:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 816:
      if (lookahead == 'x') ADVANCE(278);
      END_STATE();
    case 817:
      if (lookahead == 'x') ADVANCE(291);
      END_STATE();
    case 818:
      if (lookahead == 'y') ADVANCE(1478);
      END_STATE();
    case 819:
      if (lookahead == 'y') ADVANCE(1459);
      END_STATE();
    case 820:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 821:
      if (lookahead == 'y') ADVANCE(1462);
      END_STATE();
    case 822:
      if (lookahead == 'y') ADVANCE(1458);
      END_STATE();
    case 823:
      if (lookahead == 'y') ADVANCE(638);
      END_STATE();
    case 824:
      if (lookahead == 'y') ADVANCE(640);
      END_STATE();
    case 825:
      if (lookahead == 'y') ADVANCE(766);
      END_STATE();
    case 826:
      if (lookahead == 'y') ADVANCE(642);
      END_STATE();
    case 827:
      if (lookahead == 'y') ADVANCE(641);
      END_STATE();
    case 828:
      if (lookahead == 'y') ADVANCE(643);
      END_STATE();
    case 829:
      if (lookahead == 'y') ADVANCE(644);
      END_STATE();
    case 830:
      if (lookahead == 'z') ADVANCE(275);
      END_STATE();
    case 831:
      if (lookahead == 'z') ADVANCE(282);
      END_STATE();
    case 832:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1504);
      END_STATE();
    case 833:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 834:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1437);
      END_STATE();
    case 835:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1521);
      END_STATE();
    case 836:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 837:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 838:
      if (eof) ADVANCE(842);
      ADVANCE_MAP(
        '\'', 1287,
        '(', 1294,
        ')', 1295,
        '*', 1302,
        ',', 1305,
        '-', 17,
        ':', 844,
        '[', 1290,
        'a', 699,
        'b', 614,
        'c', 786,
        'd', 259,
        'e', 345,
        'f', 495,
        'g', 465,
        'i', 581,
        'l', 627,
        'p', 589,
        'r', 317,
        's', 756,
        'u', 553,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(838);
      END_STATE();
    case 839:
      if (eof) ADVANCE(842);
      ADVANCE_MAP(
        '(', 1293,
        ')', 1295,
        ',', 1305,
        '-', 1505,
        '.', 1398,
        '/', 1509,
        ':', 27,
        '<', 1507,
        '=', 1508,
        '>', 1507,
        'A', 752,
        'B', 392,
        'C', 382,
        'E', 535,
        'I', 576,
        'P', 463,
        'S', 43,
        '[', 1290,
        '\\', 25,
        ']', 1292,
        'a', 456,
        'b', 623,
        'c', 109,
        'd', 259,
        'f', 270,
        'g', 465,
        'i', 335,
        'k', 397,
        'l', 263,
        'm', 290,
        'n', 199,
        'p', 124,
        'r', 296,
        's', 117,
        'u', 536,
        '}', 1408,
        '*', 1504,
        '+', 1504,
        '^', 1504,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(863);
      END_STATE();
    case 840:
      if (eof) ADVANCE(842);
      ADVANCE_MAP(
        '(', 1293,
        ')', 1295,
        ',', 1305,
        '-', 1505,
        '/', 1509,
        ':', 26,
        '<', 1507,
        '>', 1507,
        '\\', 25,
        ']', 1292,
        'd', 259,
        'e', 485,
        'g', 465,
        'i', 521,
        'o', 336,
        'p', 670,
        'r', 295,
        't', 383,
        '|', 1369,
        '}', 1408,
        '*', 1504,
        '+', 1504,
        '=', 1504,
        '^', 1504,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(840);
      END_STATE();
    case 841:
      if (eof) ADVANCE(842);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(992);
      if (lookahead == 'g') ADVANCE(1092);
      if (lookahead == 'p') ADVANCE(1207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(841);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '_') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1420);
      if (lookahead == '=') ADVANCE(861);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_location_unknown);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(837);
      if (lookahead == '=') ADVANCE(1504);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_iso_reference);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_single_line_comment);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(866);
      if (lookahead == '_') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(863);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 884,
        'C', 886,
        'M', 912,
        'O', 889,
        'X', 887,
        'a', 1099,
        'f', 1211,
        'm', 916,
        's', 1070,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 884,
        'C', 886,
        'O', 889,
        'X', 887,
        'a', 1099,
        'f', 1211,
        'm', 916,
        's', 1070,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'D') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(891);
      if (lookahead == 'p') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'M') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'P') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1222);
      if (lookahead == 'f') ADVANCE(1267);
      if (lookahead == 'o') ADVANCE(1128);
      if (lookahead == 't') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead == 'v') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1276);
      if (lookahead == 'i') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1274);
      if (lookahead == 'i') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(989);
      if (lookahead == 'o') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(974);
      if (lookahead == 'i') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == 'r') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1363);
      if (lookahead == 's') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1264);
      if (lookahead == 'h') ADVANCE(928);
      if (lookahead == 'i') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1062);
      if (lookahead == 'w') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1283);
      if (lookahead == 't') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1233);
      if (lookahead == 's') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == 's') ADVANCE(942);
      if (lookahead == 'u') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'k') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1245);
      if (lookahead == 'v') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1120);
      if (lookahead == 't') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1210);
      if (lookahead == 'r') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1201);
      if (lookahead == 't') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1286);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1286);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1419);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'A') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == '_') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'b') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'g') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1314);
      if (lookahead == 'l') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'm') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'r') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 's') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1370);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '}') ADVANCE(852);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(851);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_is_signed_LPAREN);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_is_unsigned_LPAREN);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1422);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_memop_op_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1437);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(863);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(512);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(708);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(474);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(811);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == '>') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(837);
      if (lookahead == '=') ADVANCE(1504);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1504);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1370);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1504);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1520);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1521);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 839},
  [97] = {.lex_state = 839},
  [98] = {.lex_state = 839},
  [99] = {.lex_state = 839},
  [100] = {.lex_state = 839},
  [101] = {.lex_state = 839},
  [102] = {.lex_state = 839},
  [103] = {.lex_state = 839},
  [104] = {.lex_state = 839},
  [105] = {.lex_state = 839},
  [106] = {.lex_state = 839},
  [107] = {.lex_state = 839},
  [108] = {.lex_state = 839},
  [109] = {.lex_state = 839},
  [110] = {.lex_state = 839},
  [111] = {.lex_state = 839},
  [112] = {.lex_state = 839},
  [113] = {.lex_state = 839},
  [114] = {.lex_state = 839},
  [115] = {.lex_state = 839},
  [116] = {.lex_state = 839},
  [117] = {.lex_state = 839},
  [118] = {.lex_state = 839},
  [119] = {.lex_state = 839},
  [120] = {.lex_state = 839},
  [121] = {.lex_state = 839},
  [122] = {.lex_state = 839},
  [123] = {.lex_state = 839},
  [124] = {.lex_state = 839},
  [125] = {.lex_state = 839},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 838},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 838},
  [145] = {.lex_state = 838},
  [146] = {.lex_state = 838},
  [147] = {.lex_state = 838},
  [148] = {.lex_state = 838},
  [149] = {.lex_state = 838},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 838},
  [152] = {.lex_state = 838},
  [153] = {.lex_state = 838},
  [154] = {.lex_state = 838},
  [155] = {.lex_state = 838},
  [156] = {.lex_state = 838},
  [157] = {.lex_state = 838},
  [158] = {.lex_state = 838},
  [159] = {.lex_state = 838},
  [160] = {.lex_state = 838},
  [161] = {.lex_state = 838},
  [162] = {.lex_state = 838},
  [163] = {.lex_state = 838},
  [164] = {.lex_state = 838},
  [165] = {.lex_state = 838},
  [166] = {.lex_state = 838},
  [167] = {.lex_state = 838},
  [168] = {.lex_state = 838},
  [169] = {.lex_state = 838},
  [170] = {.lex_state = 838},
  [171] = {.lex_state = 838},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 838},
  [174] = {.lex_state = 838},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 838},
  [177] = {.lex_state = 838},
  [178] = {.lex_state = 838},
  [179] = {.lex_state = 838},
  [180] = {.lex_state = 838},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 839},
  [184] = {.lex_state = 839},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 839},
  [187] = {.lex_state = 839},
  [188] = {.lex_state = 839},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 839},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 839},
  [195] = {.lex_state = 839},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 840},
  [198] = {.lex_state = 840},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 839},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 840},
  [203] = {.lex_state = 840},
  [204] = {.lex_state = 840},
  [205] = {.lex_state = 840},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 840},
  [209] = {.lex_state = 840},
  [210] = {.lex_state = 840},
  [211] = {.lex_state = 840},
  [212] = {.lex_state = 840},
  [213] = {.lex_state = 840},
  [214] = {.lex_state = 840},
  [215] = {.lex_state = 840},
  [216] = {.lex_state = 840},
  [217] = {.lex_state = 840},
  [218] = {.lex_state = 840},
  [219] = {.lex_state = 840},
  [220] = {.lex_state = 840},
  [221] = {.lex_state = 840},
  [222] = {.lex_state = 840},
  [223] = {.lex_state = 840},
  [224] = {.lex_state = 840},
  [225] = {.lex_state = 840},
  [226] = {.lex_state = 840},
  [227] = {.lex_state = 840},
  [228] = {.lex_state = 840},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 838},
  [232] = {.lex_state = 840},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 840},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 841},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 838},
  [239] = {.lex_state = 838},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 838},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 839},
  [245] = {.lex_state = 840},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 839},
  [248] = {.lex_state = 839},
  [249] = {.lex_state = 839},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 839},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 839},
  [258] = {.lex_state = 838},
  [259] = {.lex_state = 838},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 838},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 841},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 838},
  [269] = {.lex_state = 838},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 840},
  [272] = {.lex_state = 840},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 840},
  [277] = {.lex_state = 840},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 840},
  [282] = {.lex_state = 840},
  [283] = {.lex_state = 840},
  [284] = {.lex_state = 840},
  [285] = {.lex_state = 840},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 838},
  [288] = {.lex_state = 840},
  [289] = {.lex_state = 840},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 840},
  [293] = {.lex_state = 840},
  [294] = {.lex_state = 840},
  [295] = {.lex_state = 840},
  [296] = {.lex_state = 840},
  [297] = {.lex_state = 840},
  [298] = {.lex_state = 840},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 838},
  [301] = {.lex_state = 840},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 840},
  [305] = {.lex_state = 840},
  [306] = {.lex_state = 840},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 840},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 840},
  [312] = {.lex_state = 838},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 841},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 841},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 838},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 840},
  [329] = {.lex_state = 840},
  [330] = {.lex_state = 838},
  [331] = {.lex_state = 840},
  [332] = {.lex_state = 840},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 840},
  [337] = {.lex_state = 840},
  [338] = {.lex_state = 840},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 838},
  [341] = {.lex_state = 840},
  [342] = {.lex_state = 840},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 841},
  [345] = {.lex_state = 838},
  [346] = {.lex_state = 840},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 840},
  [351] = {.lex_state = 838},
  [352] = {.lex_state = 840},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 840},
  [356] = {.lex_state = 840},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 7},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 840},
  [361] = {.lex_state = 840},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 7},
  [364] = {.lex_state = 840},
  [365] = {.lex_state = 840},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 7},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 840},
  [375] = {.lex_state = 838},
  [376] = {.lex_state = 7},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 840},
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
  [390] = {.lex_state = 840},
  [391] = {.lex_state = 840},
  [392] = {.lex_state = 840},
  [393] = {.lex_state = 840},
  [394] = {.lex_state = 840},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 840},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 840},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 840},
  [407] = {.lex_state = 840},
  [408] = {.lex_state = 840},
  [409] = {.lex_state = 840},
  [410] = {.lex_state = 840},
  [411] = {.lex_state = 840},
  [412] = {.lex_state = 840},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 840},
  [418] = {.lex_state = 840},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 839},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 840},
  [429] = {.lex_state = 840},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 840},
  [432] = {.lex_state = 840},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 840},
  [437] = {.lex_state = 840},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 840},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 840},
  [444] = {.lex_state = 840},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 840},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 840},
  [450] = {.lex_state = 839},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 840},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 840},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 840},
  [461] = {.lex_state = 840},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 840},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 840},
  [466] = {.lex_state = 840},
  [467] = {.lex_state = 840},
  [468] = {.lex_state = 840},
  [469] = {.lex_state = 840},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 840},
  [473] = {.lex_state = 840},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 839},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 840},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 840},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 840},
  [488] = {.lex_state = 840},
  [489] = {.lex_state = 840},
  [490] = {.lex_state = 840},
  [491] = {.lex_state = 840},
  [492] = {.lex_state = 840},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 840},
  [495] = {.lex_state = 840},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 840},
  [499] = {.lex_state = 840},
  [500] = {.lex_state = 840},
  [501] = {.lex_state = 840},
  [502] = {.lex_state = 840},
  [503] = {.lex_state = 840},
  [504] = {.lex_state = 840},
  [505] = {.lex_state = 840},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 839},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 15},
  [513] = {.lex_state = 839},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 8},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 839},
  [524] = {.lex_state = 13},
  [525] = {.lex_state = 7},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 839},
  [531] = {.lex_state = 8},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 15},
  [535] = {.lex_state = 839},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 13},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 8},
  [541] = {.lex_state = 15},
  [542] = {.lex_state = 8},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 15},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 839},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 8},
  [554] = {.lex_state = 8},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 8},
  [561] = {.lex_state = 8},
  [562] = {.lex_state = 8},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 8},
  [565] = {.lex_state = 8},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 8},
  [568] = {.lex_state = 8},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 8},
  [573] = {.lex_state = 15},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 11},
  [576] = {.lex_state = 7},
  [577] = {.lex_state = 7},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 11},
  [580] = {.lex_state = 11},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 7},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 8},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 839},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 15},
  [596] = {.lex_state = 7},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 11},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 15},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 8},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 11},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 11},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 7},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 15},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 7},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 839},
  [628] = {.lex_state = 11},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 11},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 839},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 11},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 11},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 15},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 7},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 15},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 11},
  [658] = {.lex_state = 15},
  [659] = {.lex_state = 7},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 11},
  [662] = {.lex_state = 15},
  [663] = {.lex_state = 15},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 11},
  [668] = {.lex_state = 11},
  [669] = {.lex_state = 11},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 11},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 7},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 15},
  [678] = {.lex_state = 7},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 15},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 11},
  [687] = {.lex_state = 11},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 8},
  [691] = {.lex_state = 7},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 839},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 7},
  [702] = {.lex_state = 7},
  [703] = {.lex_state = 15},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 15},
  [711] = {.lex_state = 18},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 15},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 7},
  [724] = {.lex_state = 11},
  [725] = {.lex_state = 7},
  [726] = {.lex_state = 15},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 839},
  [735] = {.lex_state = 11},
  [736] = {.lex_state = 11},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 13},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 15},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 11},
  [745] = {.lex_state = 11},
  [746] = {.lex_state = 15},
  [747] = {.lex_state = 11},
  [748] = {.lex_state = 839},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 15},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 15},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 15},
  [764] = {.lex_state = 15},
  [765] = {.lex_state = 15},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 15},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 7},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 15},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 7},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 11},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 15},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 7},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 15},
  [802] = {.lex_state = 11},
  [803] = {.lex_state = 13},
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
    [sym_multiline_comment] = STATE(421),
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_line_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_location_unknown] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_iso_reference] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_multiline_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(629),
    [sym_multiline_comment] = STATE(421),
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
    [anon_sym_def] = ACTIONS(7),
    [anon_sym_glob] = ACTIONS(9),
    [anon_sym_proc] = ACTIONS(11),
    [sym_multiline_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_union,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [121] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [242] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [360] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [478] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [596] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [714] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [832] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [950] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1068] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1186] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1304] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1422] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1537] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1652] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1767] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1882] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(428), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [1997] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(429), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2112] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(436), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2227] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(458), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2342] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(461), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2457] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(465), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2572] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(468), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2687] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(469), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2802] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(432), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [2917] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(487), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3032] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(494), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3147] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [3264] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [3381] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3496] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(472), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3611] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3726] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3841] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [3956] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4071] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4186] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4301] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4416] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4531] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4646] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4761] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4876] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [4991] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5106] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5221] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5336] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5451] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5566] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(505), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5681] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5796] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [5911] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [6026] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [6141] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [6256] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [6373] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [6488] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [6605] = 31,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [6722] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(437), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [6837] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(441), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [6952] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(431), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7067] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7182] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(443), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7297] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(444), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7412] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(447), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7527] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(449), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7642] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(453), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7757] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7872] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(460), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [7987] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8102] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(463), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8217] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(466), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8332] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8447] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(467), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8562] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(473), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8677] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(480), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8792] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(483), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [8907] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(488), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9022] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(489), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9137] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(490), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9252] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(491), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9367] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(492), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9482] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9597] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(495), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9712] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(498), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9827] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [9942] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(499), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10057] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(500), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10172] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(501), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10287] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10402] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(502), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10517] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(503), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10632] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(504), 1,
      sym_pexpr,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10747] = 30,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_multiline_comment,
    ACTIONS(19), 2,
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
    ACTIONS(17), 5,
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
  [10862] = 33,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [10964] = 33,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11066] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(518), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11165] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(533), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11264] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(547), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11363] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11462] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11561] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(549), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11660] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11759] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(543), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11858] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(506), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11957] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12056] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12155] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12254] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12353] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12452] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12551] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12650] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12749] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12848] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12947] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13046] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13145] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13244] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13343] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13442] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(539), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13541] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(545), 1,
      sym_expr,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13640] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(532), 1,
      sym_expr,
    ACTIONS(199), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13739] = 32,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(147), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13838] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [13892] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [13946] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [13999] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14052] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14105] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14155] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14205] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14255] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14305] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14355] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14405] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14455] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14505] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14555] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14605] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14655] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14707] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14759] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14808] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14857] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14906] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14952] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [14998] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15044] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(309), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(311), 1,
      aux_sym_memop_op_token1,
    STATE(150), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [15080] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15126] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15172] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15218] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15264] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15310] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15356] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15402] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15448] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15494] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15540] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15586] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15632] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15678] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15724] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15770] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15816] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15862] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15908] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [15954] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16000] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16046] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(309), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(311), 1,
      aux_sym_memop_op_token1,
    STATE(172), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [16082] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16128] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16174] = 16,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16226] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16272] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16318] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16364] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16410] = 13,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [16456] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16505] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16554] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(347), 1,
      sym_binary_operator,
    STATE(183), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [16584] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(184), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [16614] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16660] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(355), 1,
      sym_binary_operator,
    STATE(186), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [16690] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(359), 1,
      sym_binary_operator,
    STATE(187), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [16720] = 17,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(651), 1,
      sym_action,
  [16772] = 15,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
  [16820] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16866] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16912] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(363), 1,
      sym_binary_operator,
    STATE(192), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [16942] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [16988] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(194), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17018] = 17,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(611), 1,
      sym_action,
  [17070] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [17116] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(197), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17148] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(198), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17180] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [17226] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(200), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17256] = 14,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(327), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(333), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(258), 2,
      sym_ctype_star,
      sym_basic_type,
  [17302] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(202), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17331] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(203), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17360] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(204), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17389] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(399), 1,
      sym_binary_operator,
    STATE(205), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17418] = 11,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
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
  [17457] = 12,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(7), 1,
      anon_sym_def,
    ACTIONS(9), 1,
      anon_sym_glob,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(368), 1,
      sym_declaration,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(357), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(354), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [17498] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(416), 1,
      sym_binary_operator,
    STATE(208), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17527] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(363), 1,
      sym_binary_operator,
    STATE(209), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17556] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(420), 1,
      sym_binary_operator,
    STATE(210), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17585] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(211), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17614] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(212), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17643] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(213), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17672] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(214), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17701] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(347), 1,
      sym_binary_operator,
    STATE(215), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17730] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(216), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17759] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(217), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17788] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(218), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17817] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(219), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17846] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(428), 1,
      sym_binary_operator,
    STATE(220), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17875] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(432), 1,
      sym_binary_operator,
    STATE(221), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17904] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(222), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17933] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(355), 1,
      sym_binary_operator,
    STATE(223), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17962] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(359), 1,
      sym_binary_operator,
    STATE(224), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [17991] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(436), 1,
      sym_binary_operator,
    STATE(225), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [18020] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(440), 1,
      sym_binary_operator,
    STATE(226), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [18049] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(444), 1,
      sym_binary_operator,
    STATE(227), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [18078] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(448), 1,
      sym_binary_operator,
    STATE(228), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
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
  [18107] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      aux_sym_integer_type_token1,
    STATE(229), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(450), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18137] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      aux_sym_integer_type_token1,
    STATE(421), 1,
      sym_multiline_comment,
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
  [18165] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_restrict,
    STATE(231), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(463), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18192] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(448), 1,
      sym_binary_operator,
    STATE(232), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(446), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18217] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(469), 7,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
      aux_sym_integer_type_token1,
  [18242] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(379), 1,
      sym_binary_operator,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(375), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18268] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(235), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(475), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18290] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym_sym,
    STATE(344), 1,
      sym_def_field,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(236), 2,
      sym_comment,
      aux_sym_def_fields_repeat1,
    ACTIONS(479), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18318] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(237), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18340] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(486), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18364] = 10,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(477), 1,
      aux_sym_params_repeat1,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18396] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(240), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(500), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18418] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    STATE(241), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(502), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18442] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(242), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(500), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18464] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(243), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(506), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18486] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(325), 1,
      anon_sym_array,
    STATE(215), 1,
      sym_core_object_type,
    STATE(244), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(313), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(323), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18514] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(245), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18540] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(246), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18562] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(305), 1,
      anon_sym_array,
    STATE(247), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(564), 1,
      sym_core_object_type,
    ACTIONS(293), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(303), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18590] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(248), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(704), 1,
      sym_core_object_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18618] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(249), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(694), 1,
      sym_core_object_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18646] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(250), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(510), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18668] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(251), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(512), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18690] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(183), 1,
      sym_core_object_type,
    STATE(252), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18718] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(253), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(514), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18740] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(254), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(516), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18762] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(255), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(518), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18784] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(256), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(520), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18806] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(271), 1,
      anon_sym_array,
    STATE(257), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(650), 1,
      sym_core_object_type,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(269), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18834] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(522), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18858] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(259), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(526), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18882] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(260), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(530), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18904] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(526), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [18928] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(262), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18950] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(263), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18972] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(264), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18994] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(538), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19024] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(266), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(542), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [19046] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(267), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(544), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [19068] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(546), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [19092] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(550), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [19116] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(270), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(512), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [19138] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(420), 1,
      sym_binary_operator,
    STATE(271), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19161] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(373), 1,
      sym_binary_operator,
    STATE(272), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19184] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(556), 1,
      anon_sym_EQ,
    STATE(273), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(554), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19207] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(558), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19230] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(564), 1,
      anon_sym_EQ,
    STATE(275), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(562), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19253] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(276), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19276] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(277), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19299] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(278), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(566), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19322] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(572), 1,
      anon_sym_EQ,
    STATE(279), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(570), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19345] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(566), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19368] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(416), 1,
      sym_binary_operator,
    STATE(281), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19391] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(436), 1,
      sym_binary_operator,
    STATE(282), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19414] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(283), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19437] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(432), 1,
      sym_binary_operator,
    STATE(284), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19460] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(440), 1,
      sym_binary_operator,
    STATE(285), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19483] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(576), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(574), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19506] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(578), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19533] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(444), 1,
      sym_binary_operator,
    STATE(288), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19556] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(428), 1,
      sym_binary_operator,
    STATE(289), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19579] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(582), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(580), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19602] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(584), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19625] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(292), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(393), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19648] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(399), 1,
      sym_binary_operator,
    STATE(293), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(397), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19671] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(590), 1,
      anon_sym_COLON_COLON,
    ACTIONS(592), 1,
      sym_binary_operator,
    STATE(294), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(588), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19696] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(395), 1,
      sym_binary_operator,
    STATE(295), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(393), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19719] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(296), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(375), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19742] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(297), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19765] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(424), 1,
      sym_binary_operator,
    STATE(298), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19788] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(596), 1,
      anon_sym_EQ,
    STATE(299), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(594), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19811] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(300), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(598), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19833] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(451), 1,
      aux_sym_expr_repeat1,
  [19861] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(302), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(506), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19881] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(303), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(484), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19901] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(457), 1,
      aux_sym_expr_repeat1,
  [19929] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(459), 1,
      aux_sym_expr_repeat1,
  [19957] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(464), 1,
      aux_sym_expr_repeat1,
  [19985] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(307), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(512), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20005] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(435), 1,
      aux_sym_expr_repeat1,
  [20033] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(309), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(614), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20055] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(310), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(512), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20075] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20103] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [20129] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(622), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20151] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(626), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20173] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(315), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(518), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20193] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(316), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(514), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20213] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(317), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(520), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20233] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(318), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(516), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20253] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(319), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(532), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20273] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    STATE(320), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(448), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20295] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(321), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(534), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20315] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(322), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(542), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20335] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(323), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(628), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20357] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [20383] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(325), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(544), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20403] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(326), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(500), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20423] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(632), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20445] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20473] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20501] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    STATE(330), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [20527] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20555] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(332), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(640), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20579] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(333), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(500), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20599] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(334), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(508), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20619] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(642), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20641] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(493), 1,
      aux_sym_expr_repeat4,
  [20669] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20697] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20725] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(339), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(508), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20745] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [20771] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(438), 1,
      aux_sym_expr_repeat1,
  [20799] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(439), 1,
      aux_sym_expr_repeat1,
  [20827] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(343), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(658), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20849] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(344), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(662), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20871] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [20897] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [20925] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(347), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(475), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20945] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(348), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(530), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20965] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(349), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(510), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20985] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(446), 1,
      aux_sym_expr_repeat1,
  [21013] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [21039] = 9,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
    STATE(479), 1,
      aux_sym_expr_repeat1,
  [21067] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(353), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(672), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21086] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(354), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(674), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21105] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(355), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(676), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [21128] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [21153] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(357), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21172] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    STATE(358), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(684), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21193] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(455), 1,
      aux_sym_expr_repeat3,
  [21218] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [21243] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(361), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(694), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [21266] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(640), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(362), 2,
      sym_comment,
      aux_sym_expr_repeat1,
  [21287] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(482), 1,
      aux_sym_pattern_repeat1,
  [21312] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [21337] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [21362] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(366), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(711), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21381] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(713), 1,
      anon_sym_DeriveCap,
    STATE(367), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(652), 1,
      sym_pure_memop_op,
    ACTIONS(715), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [21404] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(368), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(717), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21423] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(684), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(369), 2,
      sym_comment,
      aux_sym_pattern_repeat1,
  [21444] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [21469] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(371), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(426), 1,
      aux_sym_pattern_repeat1,
  [21494] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(372), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(726), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21513] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(713), 1,
      anon_sym_DeriveCap,
    STATE(373), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(666), 1,
      sym_pure_memop_op,
    ACTIONS(715), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [21536] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(374), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(728), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21559] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(496), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [21582] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(485), 1,
      aux_sym_pattern_repeat1,
  [21607] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(497), 1,
      aux_sym_expr_repeat3,
  [21632] = 8,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
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
    STATE(421), 1,
      sym_multiline_comment,
  [21657] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21679] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(380), 2,
      sym_comment,
      aux_sym_params_repeat1,
  [21699] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(381), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym_pexpr_repeat2,
    STATE(421), 1,
      sym_multiline_comment,
  [21721] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(382), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21743] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(422), 1,
      aux_sym_proc_full_declaration_repeat1,
  [21765] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(384), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21787] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(423), 1,
      aux_sym_proc_full_declaration_repeat1,
  [21809] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(749), 1,
      anon_sym_PIPE,
    ACTIONS(752), 1,
      anon_sym_end,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(386), 2,
      sym_comment,
      aux_sym_expr_repeat2,
  [21829] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    ACTIONS(756), 1,
      anon_sym_ailname,
    STATE(387), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(425), 1,
      sym_attribute_pair,
  [21851] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(388), 2,
      sym_comment,
      aux_sym_expr_repeat3,
  [21871] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(389), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21893] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21915] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21937] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21959] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [21981] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22003] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_pexpr_repeat2,
    STATE(421), 1,
      sym_multiline_comment,
  [22025] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(396), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22047] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22069] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(398), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22091] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(399), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22113] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(400), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22135] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(401), 2,
      sym_comment,
      aux_sym_pexpr_repeat2,
  [22155] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(452), 1,
      aux_sym_core_base_type_repeat1,
  [22177] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    STATE(403), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    ACTIONS(788), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [22197] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22219] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(612), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(405), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(430), 1,
      aux_sym_pexpr_repeat1,
  [22241] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22263] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22285] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22307] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22329] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22351] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22373] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22395] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_expr_repeat4,
    STATE(421), 1,
      sym_multiline_comment,
  [22417] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(414), 2,
      sym_comment,
      aux_sym_expr_repeat4,
  [22437] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(415), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22459] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(474), 1,
      aux_sym_attribute_repeat1,
  [22481] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(819), 1,
      anon_sym_then,
    STATE(417), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22503] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(821), 1,
      anon_sym_of,
    STATE(418), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
  [22525] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(419), 1,
      sym_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(538), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [22545] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(420), 2,
      sym_comment,
      aux_sym_core_base_type_repeat1,
  [22565] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(832), 1,
      sym_impl,
    ACTIONS(830), 2,
      anon_sym_struct,
      anon_sym_union,
    STATE(421), 2,
      sym_multiline_comment,
      sym_comment,
  [22583] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(422), 2,
      sym_comment,
      aux_sym_proc_full_declaration_repeat1,
  [22603] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(422), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(423), 1,
      sym_comment,
  [22625] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(424), 1,
      sym_comment,
    STATE(484), 1,
      aux_sym_core_base_type_repeat1,
  [22647] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(416), 1,
      aux_sym_attribute_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(425), 1,
      sym_comment,
  [22669] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(426), 1,
      sym_comment,
  [22691] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(847), 1,
      sym_sym,
    ACTIONS(849), 1,
      anon_sym_LBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(427), 1,
      sym_comment,
    STATE(740), 1,
      sym_attribute,
  [22713] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(851), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(428), 1,
      sym_comment,
  [22735] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(851), 1,
      anon_sym_else,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(429), 1,
      sym_comment,
  [22757] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(67), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(430), 1,
      sym_comment,
    STATE(486), 1,
      aux_sym_pexpr_repeat1,
  [22779] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(853), 1,
      anon_sym_then,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(431), 1,
      sym_comment,
  [22801] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(855), 1,
      anon_sym_of,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(432), 1,
      sym_comment,
  [22823] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(433), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_core_base_type_repeat1,
  [22845] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(434), 1,
      sym_comment,
  [22867] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(435), 1,
      sym_comment,
  [22889] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(436), 1,
      sym_comment,
  [22911] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(437), 1,
      sym_comment,
  [22933] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(438), 1,
      sym_comment,
  [22955] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(439), 1,
      sym_comment,
  [22977] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(668), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(440), 1,
      sym_comment,
    STATE(445), 1,
      aux_sym_pexpr_repeat1,
  [22999] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(441), 1,
      sym_comment,
  [23021] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(69), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(442), 1,
      sym_comment,
    STATE(496), 1,
      aux_sym_expr_repeat2,
  [23043] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(865), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(443), 1,
      sym_comment,
  [23065] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(865), 1,
      anon_sym_else,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(444), 1,
      sym_comment,
  [23087] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(77), 1,
      anon_sym_end,
    ACTIONS(792), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(445), 1,
      sym_comment,
    STATE(486), 1,
      aux_sym_pexpr_repeat1,
  [23109] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(446), 1,
      sym_comment,
  [23131] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(447), 1,
      sym_comment,
  [23153] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(79), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(448), 1,
      sym_comment,
    STATE(454), 1,
      aux_sym_expr_repeat2,
  [23175] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(449), 1,
      sym_comment,
  [23197] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(450), 1,
      sym_comment,
    STATE(456), 1,
      sym_member,
  [23219] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(451), 1,
      sym_comment,
  [23241] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(452), 1,
      sym_comment,
  [23263] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(453), 1,
      sym_comment,
  [23285] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(83), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(454), 1,
      sym_comment,
  [23307] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_expr_repeat3,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(455), 1,
      sym_comment,
  [23329] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(456), 1,
      sym_comment,
    STATE(462), 1,
      aux_sym_pexpr_repeat2,
  [23351] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(457), 1,
      sym_comment,
  [23373] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(458), 1,
      sym_comment,
  [23395] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(459), 1,
      sym_comment,
  [23417] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(460), 1,
      sym_comment,
  [23439] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(461), 1,
      sym_comment,
  [23461] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_pexpr_repeat2,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(462), 1,
      sym_comment,
  [23483] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(463), 1,
      sym_comment,
  [23505] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(464), 1,
      sym_comment,
  [23527] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(465), 1,
      sym_comment,
  [23549] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(466), 1,
      sym_comment,
  [23571] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(467), 1,
      sym_comment,
  [23593] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(468), 1,
      sym_comment,
  [23615] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(469), 1,
      sym_comment,
  [23637] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(470), 1,
      sym_comment,
    STATE(471), 1,
      aux_sym_core_base_type_repeat1,
  [23659] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(471), 1,
      sym_comment,
  [23681] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(472), 1,
      sym_comment,
  [23703] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(895), 1,
      anon_sym_of,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(473), 1,
      sym_comment,
  [23725] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(474), 2,
      sym_comment,
      aux_sym_attribute_repeat1,
  [23745] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(475), 1,
      sym_comment,
    STATE(591), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [23765] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(476), 1,
      sym_comment,
    STATE(601), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [23785] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_params_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(477), 1,
      sym_comment,
  [23807] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(381), 1,
      sym_member,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(478), 1,
      sym_comment,
  [23829] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_expr_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(479), 1,
      sym_comment,
  [23851] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(906), 1,
      anon_sym_of,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(480), 1,
      sym_comment,
  [23873] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(481), 1,
      sym_comment,
    STATE(536), 1,
      sym_name,
    ACTIONS(823), 2,
      sym_sym,
      sym_impl,
  [23893] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(482), 1,
      sym_comment,
  [23915] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(910), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(483), 1,
      sym_comment,
  [23937] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_core_base_type_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(484), 1,
      sym_comment,
  [23959] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_pattern_repeat1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(485), 1,
      sym_comment,
  [23981] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(914), 1,
      anon_sym_PIPE,
    ACTIONS(917), 1,
      anon_sym_end,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(486), 2,
      sym_comment,
      aux_sym_pexpr_repeat1,
  [24001] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(487), 1,
      sym_comment,
  [24023] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(919), 1,
      anon_sym_then,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(488), 1,
      sym_comment,
  [24045] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(489), 1,
      sym_comment,
  [24067] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(490), 1,
      sym_comment,
  [24089] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(491), 1,
      sym_comment,
  [24111] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(927), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(492), 1,
      sym_comment,
  [24133] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_expr_repeat4,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(493), 1,
      sym_comment,
  [24155] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(931), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(494), 1,
      sym_comment,
  [24177] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(933), 1,
      anon_sym_then,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(495), 1,
      sym_comment,
  [24199] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(71), 1,
      anon_sym_end,
    ACTIONS(863), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(496), 1,
      sym_comment,
  [24221] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_expr_repeat3,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(497), 1,
      sym_comment,
  [24243] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(498), 1,
      sym_comment,
  [24265] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(499), 1,
      sym_comment,
  [24287] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(500), 1,
      sym_comment,
  [24309] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(501), 1,
      sym_comment,
  [24331] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(502), 1,
      sym_comment,
  [24353] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(503), 1,
      sym_comment,
  [24375] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(504), 1,
      sym_comment,
  [24397] = 7,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(604), 1,
      anon_sym_COLON_COLON,
    ACTIONS(606), 1,
      sym_binary_operator,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(505), 1,
      sym_comment,
  [24419] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(506), 1,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24439] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(756), 1,
      anon_sym_ailname,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(507), 1,
      sym_comment,
    STATE(514), 1,
      sym_attribute_pair,
  [24458] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(951), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(508), 1,
      sym_comment,
    STATE(753), 1,
      sym_cabs_id,
  [24477] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(953), 1,
      sym_int_const,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(509), 1,
      sym_comment,
  [24496] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(510), 1,
      sym_comment,
    STATE(608), 1,
      sym_core_ctype,
  [24515] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(955), 1,
      sym_sym,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(511), 1,
      sym_comment,
  [24534] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(959), 1,
      sym_sym,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(512), 1,
      sym_comment,
  [24553] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACK,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(513), 1,
      sym_comment,
  [24572] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(514), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [24589] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(515), 1,
      sym_comment,
    STATE(635), 1,
      sym_core_ctype,
  [24608] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(516), 1,
      sym_comment,
    STATE(578), 1,
      sym_core_ctype,
  [24627] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(517), 1,
      sym_comment,
    STATE(637), 1,
      sym_core_ctype,
  [24646] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(518), 1,
      sym_comment,
  [24665] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(967), 1,
      anon_sym_EQ,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(519), 1,
      sym_comment,
  [24684] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(971), 1,
      aux_sym_string_token1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(520), 1,
      sym_comment,
    STATE(578), 1,
      sym_string,
  [24703] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(521), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [24720] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(522), 1,
      sym_comment,
    STATE(641), 1,
      sym_core_ctype,
  [24739] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(523), 1,
      sym_comment,
    STATE(600), 1,
      sym_member,
  [24758] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(975), 1,
      anon_sym_EQ_GT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(524), 1,
      sym_comment,
  [24777] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(525), 1,
      sym_comment,
  [24796] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(526), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24813] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(979), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_core_ctype,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(527), 1,
      sym_comment,
  [24832] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(528), 1,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [24849] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(529), 1,
      sym_comment,
    STATE(619), 1,
      sym_core_ctype,
  [24868] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(530), 1,
      sym_comment,
    STATE(623), 1,
      sym_member,
  [24887] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(531), 1,
      sym_comment,
    ACTIONS(981), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [24904] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(910), 1,
      anon_sym_else,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(532), 1,
      sym_comment,
  [24923] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(983), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(533), 1,
      sym_comment,
  [24942] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(951), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(534), 1,
      sym_comment,
    STATE(634), 1,
      sym_cabs_id,
  [24961] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(869), 1,
      anon_sym_DOT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(528), 1,
      sym_member,
    STATE(535), 1,
      sym_comment,
  [24980] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(536), 1,
      sym_comment,
  [24999] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(686), 1,
      anon_sym_COLON_COLON,
    ACTIONS(987), 1,
      anon_sym_EQ_GT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(537), 1,
      sym_comment,
  [25018] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(538), 1,
      sym_comment,
  [25037] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(539), 1,
      sym_comment,
  [25056] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(991), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(540), 1,
      sym_comment,
  [25075] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(951), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(541), 1,
      sym_comment,
    STATE(587), 1,
      sym_cabs_id,
  [25094] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(993), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(542), 1,
      sym_comment,
  [25113] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(995), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(543), 1,
      sym_comment,
  [25132] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(997), 1,
      sym_sym,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(544), 1,
      sym_comment,
  [25151] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(545), 1,
      sym_comment,
  [25170] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1001), 1,
      aux_sym_string_token1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(546), 1,
      sym_comment,
    STATE(563), 1,
      sym_cstring,
  [25189] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(547), 1,
      sym_comment,
  [25208] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1003), 1,
      anon_sym_LBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(548), 1,
      sym_comment,
    STATE(723), 1,
      sym_glob_ctype_attribute,
  [25227] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    ACTIONS(931), 1,
      anon_sym_else,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(549), 1,
      sym_comment,
  [25246] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(971), 1,
      aux_sym_string_token1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(550), 1,
      sym_comment,
    STATE(721), 1,
      sym_string,
  [25265] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(551), 1,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [25282] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(552), 1,
      sym_comment,
    STATE(721), 1,
      sym_core_ctype,
  [25301] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1007), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(553), 1,
      sym_comment,
  [25320] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(554), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25337] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(555), 1,
      sym_comment,
    STATE(728), 1,
      sym_core_ctype,
  [25356] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(556), 1,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [25373] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(557), 1,
      sym_comment,
    STATE(730), 1,
      sym_core_ctype,
  [25392] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(558), 1,
      sym_comment,
    STATE(731), 1,
      sym_core_ctype,
  [25411] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(559), 1,
      sym_comment,
    STATE(732), 1,
      sym_core_ctype,
  [25430] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1011), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(560), 1,
      sym_comment,
  [25449] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(561), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25466] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(562), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25483] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(563), 1,
      sym_comment,
    ACTIONS(1013), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [25500] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(564), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25517] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(565), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25534] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(566), 1,
      sym_comment,
    STATE(784), 1,
      sym_core_ctype,
  [25553] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(567), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25570] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(568), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [25587] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(569), 1,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25604] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(570), 1,
      sym_comment,
    STATE(709), 1,
      sym_core_ctype,
  [25623] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(571), 1,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25640] = 6,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(969), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1017), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(572), 1,
      sym_comment,
  [25659] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1019), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(573), 1,
      sym_comment,
  [25675] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(574), 1,
      sym_comment,
  [25691] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1023), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(575), 1,
      sym_comment,
  [25707] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1025), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(576), 1,
      sym_comment,
  [25723] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1027), 1,
      sym_ub,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(577), 1,
      sym_comment,
  [25739] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(578), 1,
      sym_comment,
  [25755] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1029), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(579), 1,
      sym_comment,
  [25771] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1031), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(580), 1,
      sym_comment,
  [25787] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(581), 1,
      sym_comment,
  [25803] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(582), 1,
      sym_comment,
  [25819] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(583), 1,
      sym_comment,
  [25835] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1037), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(584), 1,
      sym_comment,
  [25851] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(585), 1,
      sym_comment,
  [25867] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(586), 1,
      sym_comment,
  [25883] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1043), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(587), 1,
      sym_comment,
  [25899] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(588), 1,
      sym_comment,
  [25915] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1045), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(589), 1,
      sym_comment,
  [25931] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1047), 1,
      anon_sym_LBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(590), 1,
      sym_comment,
  [25947] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(591), 1,
      sym_comment,
  [25963] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(592), 1,
      sym_comment,
  [25979] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(593), 1,
      sym_comment,
  [25995] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(594), 1,
      sym_comment,
  [26011] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1055), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(595), 1,
      sym_comment,
  [26027] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1057), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(596), 1,
      sym_comment,
  [26043] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(597), 1,
      sym_comment,
  [26059] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1059), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(598), 1,
      sym_comment,
  [26075] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(599), 1,
      sym_comment,
  [26091] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(600), 1,
      sym_comment,
  [26107] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(601), 1,
      sym_comment,
  [26123] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(602), 1,
      sym_comment,
  [26139] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1065), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(603), 1,
      sym_comment,
  [26155] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1067), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(604), 1,
      sym_comment,
  [26171] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1069), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(605), 1,
      sym_comment,
  [26187] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(606), 1,
      sym_comment,
  [26203] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(607), 1,
      sym_comment,
  [26219] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(608), 1,
      sym_comment,
  [26235] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1075), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(609), 1,
      sym_comment,
  [26251] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(610), 1,
      sym_comment,
  [26267] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(611), 1,
      sym_comment,
  [26283] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1079), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(612), 1,
      sym_comment,
  [26299] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1081), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(613), 1,
      sym_comment,
  [26315] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(614), 1,
      sym_comment,
  [26331] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(615), 1,
      sym_comment,
  [26347] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1087), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(616), 1,
      sym_comment,
  [26363] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(617), 1,
      sym_comment,
  [26379] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1089), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(618), 1,
      sym_comment,
  [26395] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1091), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(619), 1,
      sym_comment,
  [26411] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1093), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(620), 1,
      sym_comment,
  [26427] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(621), 1,
      sym_comment,
  [26443] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1097), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(622), 1,
      sym_comment,
  [26459] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(623), 1,
      sym_comment,
  [26475] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(624), 1,
      sym_comment,
  [26491] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(625), 1,
      sym_comment,
  [26507] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(626), 1,
      sym_comment,
  [26523] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1105), 1,
      anon_sym_DOT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(627), 1,
      sym_comment,
  [26539] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(628), 1,
      sym_comment,
  [26555] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1109), 1,
      ts_builtin_sym_end,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(629), 1,
      sym_comment,
  [26571] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(630), 1,
      sym_comment,
  [26587] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1113), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(631), 1,
      sym_comment,
  [26603] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1115), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(632), 1,
      sym_comment,
  [26619] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1117), 1,
      anon_sym_LBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(633), 1,
      sym_comment,
  [26635] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(634), 1,
      sym_comment,
  [26651] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(635), 1,
      sym_comment,
  [26667] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(636), 1,
      sym_comment,
  [26683] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1123), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(637), 1,
      sym_comment,
  [26699] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(638), 1,
      sym_comment,
  [26715] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(639), 1,
      sym_comment,
  [26731] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(640), 1,
      sym_comment,
  [26747] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(641), 1,
      sym_comment,
  [26763] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(642), 1,
      sym_comment,
  [26779] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(643), 1,
      sym_comment,
  [26795] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1133), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(644), 1,
      sym_comment,
  [26811] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1135), 1,
      anon_sym_eff,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(645), 1,
      sym_comment,
  [26827] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(646), 1,
      sym_comment,
  [26843] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(647), 1,
      sym_comment,
  [26859] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(648), 1,
      sym_comment,
  [26875] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(649), 1,
      sym_comment,
  [26891] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(650), 1,
      sym_comment,
  [26907] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(651), 1,
      sym_comment,
  [26923] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(652), 1,
      sym_comment,
  [26939] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1147), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(653), 1,
      sym_comment,
  [26955] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1149), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(654), 1,
      sym_comment,
  [26971] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1151), 1,
      anon_sym_eff,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(655), 1,
      sym_comment,
  [26987] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1153), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(656), 1,
      sym_comment,
  [27003] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1155), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(657), 1,
      sym_comment,
  [27019] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1157), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(658), 1,
      sym_comment,
  [27035] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1159), 1,
      sym_ub,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(659), 1,
      sym_comment,
  [27051] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1161), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(660), 1,
      sym_comment,
  [27067] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1163), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(661), 1,
      sym_comment,
  [27083] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1165), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(662), 1,
      sym_comment,
  [27099] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1167), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(663), 1,
      sym_comment,
  [27115] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(664), 1,
      sym_comment,
  [27131] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1171), 1,
      anon_sym_eff,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(665), 1,
      sym_comment,
  [27147] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(666), 1,
      sym_comment,
  [27163] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(667), 1,
      sym_comment,
  [27179] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(668), 1,
      sym_comment,
  [27195] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1179), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(669), 1,
      sym_comment,
  [27211] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(670), 1,
      sym_comment,
  [27227] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(671), 1,
      sym_comment,
  [27243] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1183), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(672), 1,
      sym_comment,
  [27259] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(673), 1,
      sym_comment,
  [27275] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(674), 1,
      sym_comment,
  [27291] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1189), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(675), 1,
      sym_comment,
  [27307] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1191), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(676), 1,
      sym_comment,
  [27323] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1193), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(677), 1,
      sym_comment,
  [27339] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1195), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(678), 1,
      sym_comment,
  [27355] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1197), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(679), 1,
      sym_comment,
  [27371] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(680), 1,
      sym_comment,
  [27387] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(681), 1,
      sym_comment,
  [27403] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(682), 1,
      sym_comment,
  [27419] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1203), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(683), 1,
      sym_comment,
  [27435] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(684), 1,
      sym_comment,
  [27451] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(685), 1,
      sym_comment,
  [27467] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1207), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(686), 1,
      sym_comment,
  [27483] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1209), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(687), 1,
      sym_comment,
  [27499] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(688), 1,
      sym_comment,
  [27515] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(689), 1,
      sym_comment,
  [27531] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1215), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(690), 1,
      sym_comment,
  [27547] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1217), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(691), 1,
      sym_comment,
  [27563] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1219), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(692), 1,
      sym_comment,
  [27579] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1221), 1,
      anon_sym_LBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(693), 1,
      sym_comment,
  [27595] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(694), 1,
      sym_comment,
  [27611] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1225), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(695), 1,
      sym_comment,
  [27627] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1227), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(696), 1,
      sym_comment,
  [27643] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1229), 1,
      anon_sym_ail_ctype,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(697), 1,
      sym_comment,
  [27659] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1231), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(698), 1,
      sym_comment,
  [27675] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1233), 1,
      anon_sym_in,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(699), 1,
      sym_comment,
  [27691] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1235), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(700), 1,
      sym_comment,
  [27707] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(701), 1,
      sym_comment,
  [27723] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(702), 1,
      sym_comment,
  [27739] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1241), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(703), 1,
      sym_comment,
  [27755] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(704), 1,
      sym_comment,
  [27771] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(705), 1,
      sym_comment,
  [27787] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(706), 1,
      sym_comment,
  [27803] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(707), 1,
      sym_comment,
  [27819] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(708), 1,
      sym_comment,
  [27835] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(709), 1,
      sym_comment,
  [27851] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1253), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(710), 1,
      sym_comment,
  [27867] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1255), 1,
      aux_sym_pure_memop_op_token1,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(711), 1,
      sym_comment,
  [27883] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(712), 1,
      sym_comment,
  [27899] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(713), 1,
      sym_comment,
  [27915] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1261), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(714), 1,
      sym_comment,
  [27931] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1263), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(715), 1,
      sym_comment,
  [27947] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1265), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(716), 1,
      sym_comment,
  [27963] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1267), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(717), 1,
      sym_comment,
  [27979] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(718), 1,
      sym_comment,
  [27995] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(719), 1,
      sym_comment,
  [28011] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(720), 1,
      sym_comment,
  [28027] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(721), 1,
      sym_comment,
  [28043] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(722), 1,
      sym_comment,
  [28059] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1277), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(723), 1,
      sym_comment,
  [28075] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1279), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(724), 1,
      sym_comment,
  [28091] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1281), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(725), 1,
      sym_comment,
  [28107] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1283), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(726), 1,
      sym_comment,
  [28123] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(727), 1,
      sym_comment,
  [28139] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(728), 1,
      sym_comment,
  [28155] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1287), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(729), 1,
      sym_comment,
  [28171] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(730), 1,
      sym_comment,
  [28187] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1289), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(731), 1,
      sym_comment,
  [28203] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(732), 1,
      sym_comment,
  [28219] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(733), 1,
      sym_comment,
  [28235] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1295), 1,
      anon_sym_DOT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(734), 1,
      sym_comment,
  [28251] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1297), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(735), 1,
      sym_comment,
  [28267] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1299), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(736), 1,
      sym_comment,
  [28283] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1301), 1,
      anon_sym_eff,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(737), 1,
      sym_comment,
  [28299] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1303), 1,
      anon_sym_EQ_GT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(738), 1,
      sym_comment,
  [28315] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(739), 1,
      sym_comment,
  [28331] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1307), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(740), 1,
      sym_comment,
  [28347] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(741), 1,
      sym_comment,
  [28363] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1311), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(742), 1,
      sym_comment,
  [28379] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(743), 1,
      sym_comment,
  [28395] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(744), 1,
      sym_comment,
  [28411] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1317), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(745), 1,
      sym_comment,
  [28427] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1319), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(746), 1,
      sym_comment,
  [28443] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1321), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(747), 1,
      sym_comment,
  [28459] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1323), 1,
      anon_sym_LBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(748), 1,
      sym_comment,
  [28475] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(749), 1,
      sym_comment,
  [28491] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1327), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(750), 1,
      sym_comment,
  [28507] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(751), 1,
      sym_comment,
  [28523] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(752), 1,
      sym_comment,
  [28539] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(753), 1,
      sym_comment,
  [28555] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(754), 1,
      sym_comment,
  [28571] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1337), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(755), 1,
      sym_comment,
  [28587] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(756), 1,
      sym_comment,
  [28603] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1341), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(757), 1,
      sym_comment,
  [28619] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(758), 1,
      sym_comment,
  [28635] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1345), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(759), 1,
      sym_comment,
  [28651] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1347), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(760), 1,
      sym_comment,
  [28667] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(761), 1,
      sym_comment,
  [28683] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(762), 1,
      sym_comment,
  [28699] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1353), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(763), 1,
      sym_comment,
  [28715] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1355), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(764), 1,
      sym_comment,
  [28731] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1357), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(765), 1,
      sym_comment,
  [28747] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(766), 1,
      sym_comment,
  [28763] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1361), 1,
      sym_memory_order,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(767), 1,
      sym_comment,
  [28779] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1363), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(768), 1,
      sym_comment,
  [28795] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(769), 1,
      sym_comment,
  [28811] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1367), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(770), 1,
      sym_comment,
  [28827] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1369), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(771), 1,
      sym_comment,
  [28843] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1371), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(772), 1,
      sym_comment,
  [28859] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(773), 1,
      sym_comment,
  [28875] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1375), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(774), 1,
      sym_comment,
  [28891] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1377), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(775), 1,
      sym_comment,
  [28907] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(776), 1,
      sym_comment,
  [28923] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1381), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(777), 1,
      sym_comment,
  [28939] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1383), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(778), 1,
      sym_comment,
  [28955] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1385), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(779), 1,
      sym_comment,
  [28971] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(780), 1,
      sym_comment,
  [28987] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1389), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(781), 1,
      sym_comment,
  [29003] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1391), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(782), 1,
      sym_comment,
  [29019] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(783), 1,
      sym_comment,
  [29035] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1395), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(784), 1,
      sym_comment,
  [29051] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(785), 1,
      sym_comment,
  [29067] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1399), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(786), 1,
      sym_comment,
  [29083] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(787), 1,
      sym_comment,
  [29099] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1401), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(788), 1,
      sym_comment,
  [29115] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1403), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(789), 1,
      sym_comment,
  [29131] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1405), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(790), 1,
      sym_comment,
  [29147] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(791), 1,
      sym_comment,
  [29163] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1409), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(792), 1,
      sym_comment,
  [29179] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(793), 1,
      sym_comment,
  [29195] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1413), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(794), 1,
      sym_comment,
  [29211] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(795), 1,
      sym_comment,
  [29227] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1417), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(796), 1,
      sym_comment,
  [29243] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1419), 1,
      anon_sym_COLON_EQ,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(797), 1,
      sym_comment,
  [29259] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(798), 1,
      sym_comment,
  [29275] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(799), 1,
      sym_comment,
  [29291] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1425), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(800), 1,
      sym_comment,
  [29307] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1427), 1,
      sym_sym,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(801), 1,
      sym_comment,
  [29323] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1429), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(802), 1,
      sym_comment,
  [29339] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1431), 1,
      anon_sym_EQ_GT,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(803), 1,
      sym_comment,
  [29355] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1433), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(804), 1,
      sym_comment,
  [29371] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(805), 1,
      sym_comment,
  [29387] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1435), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(806), 1,
      sym_comment,
  [29403] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1437), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(807), 1,
      sym_comment,
  [29419] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(808), 1,
      sym_comment,
  [29435] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1441), 1,
      anon_sym_eff,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(809), 1,
      sym_comment,
  [29451] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(810), 1,
      sym_comment,
  [29467] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1443), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(811), 1,
      sym_comment,
  [29483] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1445), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(812), 1,
      sym_comment,
  [29499] = 5,
    ACTIONS(3), 1,
      sym_single_line_comment,
    ACTIONS(5), 1,
      sym_multiline_comment,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_multiline_comment,
    STATE(813), 1,
      sym_comment,
  [29515] = 1,
    ACTIONS(1449), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 121,
  [SMALL_STATE(4)] = 242,
  [SMALL_STATE(5)] = 360,
  [SMALL_STATE(6)] = 478,
  [SMALL_STATE(7)] = 596,
  [SMALL_STATE(8)] = 714,
  [SMALL_STATE(9)] = 832,
  [SMALL_STATE(10)] = 950,
  [SMALL_STATE(11)] = 1068,
  [SMALL_STATE(12)] = 1186,
  [SMALL_STATE(13)] = 1304,
  [SMALL_STATE(14)] = 1422,
  [SMALL_STATE(15)] = 1537,
  [SMALL_STATE(16)] = 1652,
  [SMALL_STATE(17)] = 1767,
  [SMALL_STATE(18)] = 1882,
  [SMALL_STATE(19)] = 1997,
  [SMALL_STATE(20)] = 2112,
  [SMALL_STATE(21)] = 2227,
  [SMALL_STATE(22)] = 2342,
  [SMALL_STATE(23)] = 2457,
  [SMALL_STATE(24)] = 2572,
  [SMALL_STATE(25)] = 2687,
  [SMALL_STATE(26)] = 2802,
  [SMALL_STATE(27)] = 2917,
  [SMALL_STATE(28)] = 3032,
  [SMALL_STATE(29)] = 3147,
  [SMALL_STATE(30)] = 3264,
  [SMALL_STATE(31)] = 3381,
  [SMALL_STATE(32)] = 3496,
  [SMALL_STATE(33)] = 3611,
  [SMALL_STATE(34)] = 3726,
  [SMALL_STATE(35)] = 3841,
  [SMALL_STATE(36)] = 3956,
  [SMALL_STATE(37)] = 4071,
  [SMALL_STATE(38)] = 4186,
  [SMALL_STATE(39)] = 4301,
  [SMALL_STATE(40)] = 4416,
  [SMALL_STATE(41)] = 4531,
  [SMALL_STATE(42)] = 4646,
  [SMALL_STATE(43)] = 4761,
  [SMALL_STATE(44)] = 4876,
  [SMALL_STATE(45)] = 4991,
  [SMALL_STATE(46)] = 5106,
  [SMALL_STATE(47)] = 5221,
  [SMALL_STATE(48)] = 5336,
  [SMALL_STATE(49)] = 5451,
  [SMALL_STATE(50)] = 5566,
  [SMALL_STATE(51)] = 5681,
  [SMALL_STATE(52)] = 5796,
  [SMALL_STATE(53)] = 5911,
  [SMALL_STATE(54)] = 6026,
  [SMALL_STATE(55)] = 6141,
  [SMALL_STATE(56)] = 6256,
  [SMALL_STATE(57)] = 6373,
  [SMALL_STATE(58)] = 6488,
  [SMALL_STATE(59)] = 6605,
  [SMALL_STATE(60)] = 6722,
  [SMALL_STATE(61)] = 6837,
  [SMALL_STATE(62)] = 6952,
  [SMALL_STATE(63)] = 7067,
  [SMALL_STATE(64)] = 7182,
  [SMALL_STATE(65)] = 7297,
  [SMALL_STATE(66)] = 7412,
  [SMALL_STATE(67)] = 7527,
  [SMALL_STATE(68)] = 7642,
  [SMALL_STATE(69)] = 7757,
  [SMALL_STATE(70)] = 7872,
  [SMALL_STATE(71)] = 7987,
  [SMALL_STATE(72)] = 8102,
  [SMALL_STATE(73)] = 8217,
  [SMALL_STATE(74)] = 8332,
  [SMALL_STATE(75)] = 8447,
  [SMALL_STATE(76)] = 8562,
  [SMALL_STATE(77)] = 8677,
  [SMALL_STATE(78)] = 8792,
  [SMALL_STATE(79)] = 8907,
  [SMALL_STATE(80)] = 9022,
  [SMALL_STATE(81)] = 9137,
  [SMALL_STATE(82)] = 9252,
  [SMALL_STATE(83)] = 9367,
  [SMALL_STATE(84)] = 9482,
  [SMALL_STATE(85)] = 9597,
  [SMALL_STATE(86)] = 9712,
  [SMALL_STATE(87)] = 9827,
  [SMALL_STATE(88)] = 9942,
  [SMALL_STATE(89)] = 10057,
  [SMALL_STATE(90)] = 10172,
  [SMALL_STATE(91)] = 10287,
  [SMALL_STATE(92)] = 10402,
  [SMALL_STATE(93)] = 10517,
  [SMALL_STATE(94)] = 10632,
  [SMALL_STATE(95)] = 10747,
  [SMALL_STATE(96)] = 10862,
  [SMALL_STATE(97)] = 10964,
  [SMALL_STATE(98)] = 11066,
  [SMALL_STATE(99)] = 11165,
  [SMALL_STATE(100)] = 11264,
  [SMALL_STATE(101)] = 11363,
  [SMALL_STATE(102)] = 11462,
  [SMALL_STATE(103)] = 11561,
  [SMALL_STATE(104)] = 11660,
  [SMALL_STATE(105)] = 11759,
  [SMALL_STATE(106)] = 11858,
  [SMALL_STATE(107)] = 11957,
  [SMALL_STATE(108)] = 12056,
  [SMALL_STATE(109)] = 12155,
  [SMALL_STATE(110)] = 12254,
  [SMALL_STATE(111)] = 12353,
  [SMALL_STATE(112)] = 12452,
  [SMALL_STATE(113)] = 12551,
  [SMALL_STATE(114)] = 12650,
  [SMALL_STATE(115)] = 12749,
  [SMALL_STATE(116)] = 12848,
  [SMALL_STATE(117)] = 12947,
  [SMALL_STATE(118)] = 13046,
  [SMALL_STATE(119)] = 13145,
  [SMALL_STATE(120)] = 13244,
  [SMALL_STATE(121)] = 13343,
  [SMALL_STATE(122)] = 13442,
  [SMALL_STATE(123)] = 13541,
  [SMALL_STATE(124)] = 13640,
  [SMALL_STATE(125)] = 13739,
  [SMALL_STATE(126)] = 13838,
  [SMALL_STATE(127)] = 13892,
  [SMALL_STATE(128)] = 13946,
  [SMALL_STATE(129)] = 13999,
  [SMALL_STATE(130)] = 14052,
  [SMALL_STATE(131)] = 14105,
  [SMALL_STATE(132)] = 14155,
  [SMALL_STATE(133)] = 14205,
  [SMALL_STATE(134)] = 14255,
  [SMALL_STATE(135)] = 14305,
  [SMALL_STATE(136)] = 14355,
  [SMALL_STATE(137)] = 14405,
  [SMALL_STATE(138)] = 14455,
  [SMALL_STATE(139)] = 14505,
  [SMALL_STATE(140)] = 14555,
  [SMALL_STATE(141)] = 14605,
  [SMALL_STATE(142)] = 14655,
  [SMALL_STATE(143)] = 14707,
  [SMALL_STATE(144)] = 14759,
  [SMALL_STATE(145)] = 14808,
  [SMALL_STATE(146)] = 14857,
  [SMALL_STATE(147)] = 14906,
  [SMALL_STATE(148)] = 14952,
  [SMALL_STATE(149)] = 14998,
  [SMALL_STATE(150)] = 15044,
  [SMALL_STATE(151)] = 15080,
  [SMALL_STATE(152)] = 15126,
  [SMALL_STATE(153)] = 15172,
  [SMALL_STATE(154)] = 15218,
  [SMALL_STATE(155)] = 15264,
  [SMALL_STATE(156)] = 15310,
  [SMALL_STATE(157)] = 15356,
  [SMALL_STATE(158)] = 15402,
  [SMALL_STATE(159)] = 15448,
  [SMALL_STATE(160)] = 15494,
  [SMALL_STATE(161)] = 15540,
  [SMALL_STATE(162)] = 15586,
  [SMALL_STATE(163)] = 15632,
  [SMALL_STATE(164)] = 15678,
  [SMALL_STATE(165)] = 15724,
  [SMALL_STATE(166)] = 15770,
  [SMALL_STATE(167)] = 15816,
  [SMALL_STATE(168)] = 15862,
  [SMALL_STATE(169)] = 15908,
  [SMALL_STATE(170)] = 15954,
  [SMALL_STATE(171)] = 16000,
  [SMALL_STATE(172)] = 16046,
  [SMALL_STATE(173)] = 16082,
  [SMALL_STATE(174)] = 16128,
  [SMALL_STATE(175)] = 16174,
  [SMALL_STATE(176)] = 16226,
  [SMALL_STATE(177)] = 16272,
  [SMALL_STATE(178)] = 16318,
  [SMALL_STATE(179)] = 16364,
  [SMALL_STATE(180)] = 16410,
  [SMALL_STATE(181)] = 16456,
  [SMALL_STATE(182)] = 16505,
  [SMALL_STATE(183)] = 16554,
  [SMALL_STATE(184)] = 16584,
  [SMALL_STATE(185)] = 16614,
  [SMALL_STATE(186)] = 16660,
  [SMALL_STATE(187)] = 16690,
  [SMALL_STATE(188)] = 16720,
  [SMALL_STATE(189)] = 16772,
  [SMALL_STATE(190)] = 16820,
  [SMALL_STATE(191)] = 16866,
  [SMALL_STATE(192)] = 16912,
  [SMALL_STATE(193)] = 16942,
  [SMALL_STATE(194)] = 16988,
  [SMALL_STATE(195)] = 17018,
  [SMALL_STATE(196)] = 17070,
  [SMALL_STATE(197)] = 17116,
  [SMALL_STATE(198)] = 17148,
  [SMALL_STATE(199)] = 17180,
  [SMALL_STATE(200)] = 17226,
  [SMALL_STATE(201)] = 17256,
  [SMALL_STATE(202)] = 17302,
  [SMALL_STATE(203)] = 17331,
  [SMALL_STATE(204)] = 17360,
  [SMALL_STATE(205)] = 17389,
  [SMALL_STATE(206)] = 17418,
  [SMALL_STATE(207)] = 17457,
  [SMALL_STATE(208)] = 17498,
  [SMALL_STATE(209)] = 17527,
  [SMALL_STATE(210)] = 17556,
  [SMALL_STATE(211)] = 17585,
  [SMALL_STATE(212)] = 17614,
  [SMALL_STATE(213)] = 17643,
  [SMALL_STATE(214)] = 17672,
  [SMALL_STATE(215)] = 17701,
  [SMALL_STATE(216)] = 17730,
  [SMALL_STATE(217)] = 17759,
  [SMALL_STATE(218)] = 17788,
  [SMALL_STATE(219)] = 17817,
  [SMALL_STATE(220)] = 17846,
  [SMALL_STATE(221)] = 17875,
  [SMALL_STATE(222)] = 17904,
  [SMALL_STATE(223)] = 17933,
  [SMALL_STATE(224)] = 17962,
  [SMALL_STATE(225)] = 17991,
  [SMALL_STATE(226)] = 18020,
  [SMALL_STATE(227)] = 18049,
  [SMALL_STATE(228)] = 18078,
  [SMALL_STATE(229)] = 18107,
  [SMALL_STATE(230)] = 18137,
  [SMALL_STATE(231)] = 18165,
  [SMALL_STATE(232)] = 18192,
  [SMALL_STATE(233)] = 18217,
  [SMALL_STATE(234)] = 18242,
  [SMALL_STATE(235)] = 18268,
  [SMALL_STATE(236)] = 18290,
  [SMALL_STATE(237)] = 18318,
  [SMALL_STATE(238)] = 18340,
  [SMALL_STATE(239)] = 18364,
  [SMALL_STATE(240)] = 18396,
  [SMALL_STATE(241)] = 18418,
  [SMALL_STATE(242)] = 18442,
  [SMALL_STATE(243)] = 18464,
  [SMALL_STATE(244)] = 18486,
  [SMALL_STATE(245)] = 18514,
  [SMALL_STATE(246)] = 18540,
  [SMALL_STATE(247)] = 18562,
  [SMALL_STATE(248)] = 18590,
  [SMALL_STATE(249)] = 18618,
  [SMALL_STATE(250)] = 18646,
  [SMALL_STATE(251)] = 18668,
  [SMALL_STATE(252)] = 18690,
  [SMALL_STATE(253)] = 18718,
  [SMALL_STATE(254)] = 18740,
  [SMALL_STATE(255)] = 18762,
  [SMALL_STATE(256)] = 18784,
  [SMALL_STATE(257)] = 18806,
  [SMALL_STATE(258)] = 18834,
  [SMALL_STATE(259)] = 18858,
  [SMALL_STATE(260)] = 18882,
  [SMALL_STATE(261)] = 18904,
  [SMALL_STATE(262)] = 18928,
  [SMALL_STATE(263)] = 18950,
  [SMALL_STATE(264)] = 18972,
  [SMALL_STATE(265)] = 18994,
  [SMALL_STATE(266)] = 19024,
  [SMALL_STATE(267)] = 19046,
  [SMALL_STATE(268)] = 19068,
  [SMALL_STATE(269)] = 19092,
  [SMALL_STATE(270)] = 19116,
  [SMALL_STATE(271)] = 19138,
  [SMALL_STATE(272)] = 19161,
  [SMALL_STATE(273)] = 19184,
  [SMALL_STATE(274)] = 19207,
  [SMALL_STATE(275)] = 19230,
  [SMALL_STATE(276)] = 19253,
  [SMALL_STATE(277)] = 19276,
  [SMALL_STATE(278)] = 19299,
  [SMALL_STATE(279)] = 19322,
  [SMALL_STATE(280)] = 19345,
  [SMALL_STATE(281)] = 19368,
  [SMALL_STATE(282)] = 19391,
  [SMALL_STATE(283)] = 19414,
  [SMALL_STATE(284)] = 19437,
  [SMALL_STATE(285)] = 19460,
  [SMALL_STATE(286)] = 19483,
  [SMALL_STATE(287)] = 19506,
  [SMALL_STATE(288)] = 19533,
  [SMALL_STATE(289)] = 19556,
  [SMALL_STATE(290)] = 19579,
  [SMALL_STATE(291)] = 19602,
  [SMALL_STATE(292)] = 19625,
  [SMALL_STATE(293)] = 19648,
  [SMALL_STATE(294)] = 19671,
  [SMALL_STATE(295)] = 19696,
  [SMALL_STATE(296)] = 19719,
  [SMALL_STATE(297)] = 19742,
  [SMALL_STATE(298)] = 19765,
  [SMALL_STATE(299)] = 19788,
  [SMALL_STATE(300)] = 19811,
  [SMALL_STATE(301)] = 19833,
  [SMALL_STATE(302)] = 19861,
  [SMALL_STATE(303)] = 19881,
  [SMALL_STATE(304)] = 19901,
  [SMALL_STATE(305)] = 19929,
  [SMALL_STATE(306)] = 19957,
  [SMALL_STATE(307)] = 19985,
  [SMALL_STATE(308)] = 20005,
  [SMALL_STATE(309)] = 20033,
  [SMALL_STATE(310)] = 20055,
  [SMALL_STATE(311)] = 20075,
  [SMALL_STATE(312)] = 20103,
  [SMALL_STATE(313)] = 20129,
  [SMALL_STATE(314)] = 20151,
  [SMALL_STATE(315)] = 20173,
  [SMALL_STATE(316)] = 20193,
  [SMALL_STATE(317)] = 20213,
  [SMALL_STATE(318)] = 20233,
  [SMALL_STATE(319)] = 20253,
  [SMALL_STATE(320)] = 20273,
  [SMALL_STATE(321)] = 20295,
  [SMALL_STATE(322)] = 20315,
  [SMALL_STATE(323)] = 20335,
  [SMALL_STATE(324)] = 20357,
  [SMALL_STATE(325)] = 20383,
  [SMALL_STATE(326)] = 20403,
  [SMALL_STATE(327)] = 20423,
  [SMALL_STATE(328)] = 20445,
  [SMALL_STATE(329)] = 20473,
  [SMALL_STATE(330)] = 20501,
  [SMALL_STATE(331)] = 20527,
  [SMALL_STATE(332)] = 20555,
  [SMALL_STATE(333)] = 20579,
  [SMALL_STATE(334)] = 20599,
  [SMALL_STATE(335)] = 20619,
  [SMALL_STATE(336)] = 20641,
  [SMALL_STATE(337)] = 20669,
  [SMALL_STATE(338)] = 20697,
  [SMALL_STATE(339)] = 20725,
  [SMALL_STATE(340)] = 20745,
  [SMALL_STATE(341)] = 20771,
  [SMALL_STATE(342)] = 20799,
  [SMALL_STATE(343)] = 20827,
  [SMALL_STATE(344)] = 20849,
  [SMALL_STATE(345)] = 20871,
  [SMALL_STATE(346)] = 20897,
  [SMALL_STATE(347)] = 20925,
  [SMALL_STATE(348)] = 20945,
  [SMALL_STATE(349)] = 20965,
  [SMALL_STATE(350)] = 20985,
  [SMALL_STATE(351)] = 21013,
  [SMALL_STATE(352)] = 21039,
  [SMALL_STATE(353)] = 21067,
  [SMALL_STATE(354)] = 21086,
  [SMALL_STATE(355)] = 21105,
  [SMALL_STATE(356)] = 21128,
  [SMALL_STATE(357)] = 21153,
  [SMALL_STATE(358)] = 21172,
  [SMALL_STATE(359)] = 21193,
  [SMALL_STATE(360)] = 21218,
  [SMALL_STATE(361)] = 21243,
  [SMALL_STATE(362)] = 21266,
  [SMALL_STATE(363)] = 21287,
  [SMALL_STATE(364)] = 21312,
  [SMALL_STATE(365)] = 21337,
  [SMALL_STATE(366)] = 21362,
  [SMALL_STATE(367)] = 21381,
  [SMALL_STATE(368)] = 21404,
  [SMALL_STATE(369)] = 21423,
  [SMALL_STATE(370)] = 21444,
  [SMALL_STATE(371)] = 21469,
  [SMALL_STATE(372)] = 21494,
  [SMALL_STATE(373)] = 21513,
  [SMALL_STATE(374)] = 21536,
  [SMALL_STATE(375)] = 21559,
  [SMALL_STATE(376)] = 21582,
  [SMALL_STATE(377)] = 21607,
  [SMALL_STATE(378)] = 21632,
  [SMALL_STATE(379)] = 21657,
  [SMALL_STATE(380)] = 21679,
  [SMALL_STATE(381)] = 21699,
  [SMALL_STATE(382)] = 21721,
  [SMALL_STATE(383)] = 21743,
  [SMALL_STATE(384)] = 21765,
  [SMALL_STATE(385)] = 21787,
  [SMALL_STATE(386)] = 21809,
  [SMALL_STATE(387)] = 21829,
  [SMALL_STATE(388)] = 21851,
  [SMALL_STATE(389)] = 21871,
  [SMALL_STATE(390)] = 21893,
  [SMALL_STATE(391)] = 21915,
  [SMALL_STATE(392)] = 21937,
  [SMALL_STATE(393)] = 21959,
  [SMALL_STATE(394)] = 21981,
  [SMALL_STATE(395)] = 22003,
  [SMALL_STATE(396)] = 22025,
  [SMALL_STATE(397)] = 22047,
  [SMALL_STATE(398)] = 22069,
  [SMALL_STATE(399)] = 22091,
  [SMALL_STATE(400)] = 22113,
  [SMALL_STATE(401)] = 22135,
  [SMALL_STATE(402)] = 22155,
  [SMALL_STATE(403)] = 22177,
  [SMALL_STATE(404)] = 22197,
  [SMALL_STATE(405)] = 22219,
  [SMALL_STATE(406)] = 22241,
  [SMALL_STATE(407)] = 22263,
  [SMALL_STATE(408)] = 22285,
  [SMALL_STATE(409)] = 22307,
  [SMALL_STATE(410)] = 22329,
  [SMALL_STATE(411)] = 22351,
  [SMALL_STATE(412)] = 22373,
  [SMALL_STATE(413)] = 22395,
  [SMALL_STATE(414)] = 22417,
  [SMALL_STATE(415)] = 22437,
  [SMALL_STATE(416)] = 22459,
  [SMALL_STATE(417)] = 22481,
  [SMALL_STATE(418)] = 22503,
  [SMALL_STATE(419)] = 22525,
  [SMALL_STATE(420)] = 22545,
  [SMALL_STATE(421)] = 22565,
  [SMALL_STATE(422)] = 22583,
  [SMALL_STATE(423)] = 22603,
  [SMALL_STATE(424)] = 22625,
  [SMALL_STATE(425)] = 22647,
  [SMALL_STATE(426)] = 22669,
  [SMALL_STATE(427)] = 22691,
  [SMALL_STATE(428)] = 22713,
  [SMALL_STATE(429)] = 22735,
  [SMALL_STATE(430)] = 22757,
  [SMALL_STATE(431)] = 22779,
  [SMALL_STATE(432)] = 22801,
  [SMALL_STATE(433)] = 22823,
  [SMALL_STATE(434)] = 22845,
  [SMALL_STATE(435)] = 22867,
  [SMALL_STATE(436)] = 22889,
  [SMALL_STATE(437)] = 22911,
  [SMALL_STATE(438)] = 22933,
  [SMALL_STATE(439)] = 22955,
  [SMALL_STATE(440)] = 22977,
  [SMALL_STATE(441)] = 22999,
  [SMALL_STATE(442)] = 23021,
  [SMALL_STATE(443)] = 23043,
  [SMALL_STATE(444)] = 23065,
  [SMALL_STATE(445)] = 23087,
  [SMALL_STATE(446)] = 23109,
  [SMALL_STATE(447)] = 23131,
  [SMALL_STATE(448)] = 23153,
  [SMALL_STATE(449)] = 23175,
  [SMALL_STATE(450)] = 23197,
  [SMALL_STATE(451)] = 23219,
  [SMALL_STATE(452)] = 23241,
  [SMALL_STATE(453)] = 23263,
  [SMALL_STATE(454)] = 23285,
  [SMALL_STATE(455)] = 23307,
  [SMALL_STATE(456)] = 23329,
  [SMALL_STATE(457)] = 23351,
  [SMALL_STATE(458)] = 23373,
  [SMALL_STATE(459)] = 23395,
  [SMALL_STATE(460)] = 23417,
  [SMALL_STATE(461)] = 23439,
  [SMALL_STATE(462)] = 23461,
  [SMALL_STATE(463)] = 23483,
  [SMALL_STATE(464)] = 23505,
  [SMALL_STATE(465)] = 23527,
  [SMALL_STATE(466)] = 23549,
  [SMALL_STATE(467)] = 23571,
  [SMALL_STATE(468)] = 23593,
  [SMALL_STATE(469)] = 23615,
  [SMALL_STATE(470)] = 23637,
  [SMALL_STATE(471)] = 23659,
  [SMALL_STATE(472)] = 23681,
  [SMALL_STATE(473)] = 23703,
  [SMALL_STATE(474)] = 23725,
  [SMALL_STATE(475)] = 23745,
  [SMALL_STATE(476)] = 23765,
  [SMALL_STATE(477)] = 23785,
  [SMALL_STATE(478)] = 23807,
  [SMALL_STATE(479)] = 23829,
  [SMALL_STATE(480)] = 23851,
  [SMALL_STATE(481)] = 23873,
  [SMALL_STATE(482)] = 23893,
  [SMALL_STATE(483)] = 23915,
  [SMALL_STATE(484)] = 23937,
  [SMALL_STATE(485)] = 23959,
  [SMALL_STATE(486)] = 23981,
  [SMALL_STATE(487)] = 24001,
  [SMALL_STATE(488)] = 24023,
  [SMALL_STATE(489)] = 24045,
  [SMALL_STATE(490)] = 24067,
  [SMALL_STATE(491)] = 24089,
  [SMALL_STATE(492)] = 24111,
  [SMALL_STATE(493)] = 24133,
  [SMALL_STATE(494)] = 24155,
  [SMALL_STATE(495)] = 24177,
  [SMALL_STATE(496)] = 24199,
  [SMALL_STATE(497)] = 24221,
  [SMALL_STATE(498)] = 24243,
  [SMALL_STATE(499)] = 24265,
  [SMALL_STATE(500)] = 24287,
  [SMALL_STATE(501)] = 24309,
  [SMALL_STATE(502)] = 24331,
  [SMALL_STATE(503)] = 24353,
  [SMALL_STATE(504)] = 24375,
  [SMALL_STATE(505)] = 24397,
  [SMALL_STATE(506)] = 24419,
  [SMALL_STATE(507)] = 24439,
  [SMALL_STATE(508)] = 24458,
  [SMALL_STATE(509)] = 24477,
  [SMALL_STATE(510)] = 24496,
  [SMALL_STATE(511)] = 24515,
  [SMALL_STATE(512)] = 24534,
  [SMALL_STATE(513)] = 24553,
  [SMALL_STATE(514)] = 24572,
  [SMALL_STATE(515)] = 24589,
  [SMALL_STATE(516)] = 24608,
  [SMALL_STATE(517)] = 24627,
  [SMALL_STATE(518)] = 24646,
  [SMALL_STATE(519)] = 24665,
  [SMALL_STATE(520)] = 24684,
  [SMALL_STATE(521)] = 24703,
  [SMALL_STATE(522)] = 24720,
  [SMALL_STATE(523)] = 24739,
  [SMALL_STATE(524)] = 24758,
  [SMALL_STATE(525)] = 24777,
  [SMALL_STATE(526)] = 24796,
  [SMALL_STATE(527)] = 24813,
  [SMALL_STATE(528)] = 24832,
  [SMALL_STATE(529)] = 24849,
  [SMALL_STATE(530)] = 24868,
  [SMALL_STATE(531)] = 24887,
  [SMALL_STATE(532)] = 24904,
  [SMALL_STATE(533)] = 24923,
  [SMALL_STATE(534)] = 24942,
  [SMALL_STATE(535)] = 24961,
  [SMALL_STATE(536)] = 24980,
  [SMALL_STATE(537)] = 24999,
  [SMALL_STATE(538)] = 25018,
  [SMALL_STATE(539)] = 25037,
  [SMALL_STATE(540)] = 25056,
  [SMALL_STATE(541)] = 25075,
  [SMALL_STATE(542)] = 25094,
  [SMALL_STATE(543)] = 25113,
  [SMALL_STATE(544)] = 25132,
  [SMALL_STATE(545)] = 25151,
  [SMALL_STATE(546)] = 25170,
  [SMALL_STATE(547)] = 25189,
  [SMALL_STATE(548)] = 25208,
  [SMALL_STATE(549)] = 25227,
  [SMALL_STATE(550)] = 25246,
  [SMALL_STATE(551)] = 25265,
  [SMALL_STATE(552)] = 25282,
  [SMALL_STATE(553)] = 25301,
  [SMALL_STATE(554)] = 25320,
  [SMALL_STATE(555)] = 25337,
  [SMALL_STATE(556)] = 25356,
  [SMALL_STATE(557)] = 25373,
  [SMALL_STATE(558)] = 25392,
  [SMALL_STATE(559)] = 25411,
  [SMALL_STATE(560)] = 25430,
  [SMALL_STATE(561)] = 25449,
  [SMALL_STATE(562)] = 25466,
  [SMALL_STATE(563)] = 25483,
  [SMALL_STATE(564)] = 25500,
  [SMALL_STATE(565)] = 25517,
  [SMALL_STATE(566)] = 25534,
  [SMALL_STATE(567)] = 25553,
  [SMALL_STATE(568)] = 25570,
  [SMALL_STATE(569)] = 25587,
  [SMALL_STATE(570)] = 25604,
  [SMALL_STATE(571)] = 25623,
  [SMALL_STATE(572)] = 25640,
  [SMALL_STATE(573)] = 25659,
  [SMALL_STATE(574)] = 25675,
  [SMALL_STATE(575)] = 25691,
  [SMALL_STATE(576)] = 25707,
  [SMALL_STATE(577)] = 25723,
  [SMALL_STATE(578)] = 25739,
  [SMALL_STATE(579)] = 25755,
  [SMALL_STATE(580)] = 25771,
  [SMALL_STATE(581)] = 25787,
  [SMALL_STATE(582)] = 25803,
  [SMALL_STATE(583)] = 25819,
  [SMALL_STATE(584)] = 25835,
  [SMALL_STATE(585)] = 25851,
  [SMALL_STATE(586)] = 25867,
  [SMALL_STATE(587)] = 25883,
  [SMALL_STATE(588)] = 25899,
  [SMALL_STATE(589)] = 25915,
  [SMALL_STATE(590)] = 25931,
  [SMALL_STATE(591)] = 25947,
  [SMALL_STATE(592)] = 25963,
  [SMALL_STATE(593)] = 25979,
  [SMALL_STATE(594)] = 25995,
  [SMALL_STATE(595)] = 26011,
  [SMALL_STATE(596)] = 26027,
  [SMALL_STATE(597)] = 26043,
  [SMALL_STATE(598)] = 26059,
  [SMALL_STATE(599)] = 26075,
  [SMALL_STATE(600)] = 26091,
  [SMALL_STATE(601)] = 26107,
  [SMALL_STATE(602)] = 26123,
  [SMALL_STATE(603)] = 26139,
  [SMALL_STATE(604)] = 26155,
  [SMALL_STATE(605)] = 26171,
  [SMALL_STATE(606)] = 26187,
  [SMALL_STATE(607)] = 26203,
  [SMALL_STATE(608)] = 26219,
  [SMALL_STATE(609)] = 26235,
  [SMALL_STATE(610)] = 26251,
  [SMALL_STATE(611)] = 26267,
  [SMALL_STATE(612)] = 26283,
  [SMALL_STATE(613)] = 26299,
  [SMALL_STATE(614)] = 26315,
  [SMALL_STATE(615)] = 26331,
  [SMALL_STATE(616)] = 26347,
  [SMALL_STATE(617)] = 26363,
  [SMALL_STATE(618)] = 26379,
  [SMALL_STATE(619)] = 26395,
  [SMALL_STATE(620)] = 26411,
  [SMALL_STATE(621)] = 26427,
  [SMALL_STATE(622)] = 26443,
  [SMALL_STATE(623)] = 26459,
  [SMALL_STATE(624)] = 26475,
  [SMALL_STATE(625)] = 26491,
  [SMALL_STATE(626)] = 26507,
  [SMALL_STATE(627)] = 26523,
  [SMALL_STATE(628)] = 26539,
  [SMALL_STATE(629)] = 26555,
  [SMALL_STATE(630)] = 26571,
  [SMALL_STATE(631)] = 26587,
  [SMALL_STATE(632)] = 26603,
  [SMALL_STATE(633)] = 26619,
  [SMALL_STATE(634)] = 26635,
  [SMALL_STATE(635)] = 26651,
  [SMALL_STATE(636)] = 26667,
  [SMALL_STATE(637)] = 26683,
  [SMALL_STATE(638)] = 26699,
  [SMALL_STATE(639)] = 26715,
  [SMALL_STATE(640)] = 26731,
  [SMALL_STATE(641)] = 26747,
  [SMALL_STATE(642)] = 26763,
  [SMALL_STATE(643)] = 26779,
  [SMALL_STATE(644)] = 26795,
  [SMALL_STATE(645)] = 26811,
  [SMALL_STATE(646)] = 26827,
  [SMALL_STATE(647)] = 26843,
  [SMALL_STATE(648)] = 26859,
  [SMALL_STATE(649)] = 26875,
  [SMALL_STATE(650)] = 26891,
  [SMALL_STATE(651)] = 26907,
  [SMALL_STATE(652)] = 26923,
  [SMALL_STATE(653)] = 26939,
  [SMALL_STATE(654)] = 26955,
  [SMALL_STATE(655)] = 26971,
  [SMALL_STATE(656)] = 26987,
  [SMALL_STATE(657)] = 27003,
  [SMALL_STATE(658)] = 27019,
  [SMALL_STATE(659)] = 27035,
  [SMALL_STATE(660)] = 27051,
  [SMALL_STATE(661)] = 27067,
  [SMALL_STATE(662)] = 27083,
  [SMALL_STATE(663)] = 27099,
  [SMALL_STATE(664)] = 27115,
  [SMALL_STATE(665)] = 27131,
  [SMALL_STATE(666)] = 27147,
  [SMALL_STATE(667)] = 27163,
  [SMALL_STATE(668)] = 27179,
  [SMALL_STATE(669)] = 27195,
  [SMALL_STATE(670)] = 27211,
  [SMALL_STATE(671)] = 27227,
  [SMALL_STATE(672)] = 27243,
  [SMALL_STATE(673)] = 27259,
  [SMALL_STATE(674)] = 27275,
  [SMALL_STATE(675)] = 27291,
  [SMALL_STATE(676)] = 27307,
  [SMALL_STATE(677)] = 27323,
  [SMALL_STATE(678)] = 27339,
  [SMALL_STATE(679)] = 27355,
  [SMALL_STATE(680)] = 27371,
  [SMALL_STATE(681)] = 27387,
  [SMALL_STATE(682)] = 27403,
  [SMALL_STATE(683)] = 27419,
  [SMALL_STATE(684)] = 27435,
  [SMALL_STATE(685)] = 27451,
  [SMALL_STATE(686)] = 27467,
  [SMALL_STATE(687)] = 27483,
  [SMALL_STATE(688)] = 27499,
  [SMALL_STATE(689)] = 27515,
  [SMALL_STATE(690)] = 27531,
  [SMALL_STATE(691)] = 27547,
  [SMALL_STATE(692)] = 27563,
  [SMALL_STATE(693)] = 27579,
  [SMALL_STATE(694)] = 27595,
  [SMALL_STATE(695)] = 27611,
  [SMALL_STATE(696)] = 27627,
  [SMALL_STATE(697)] = 27643,
  [SMALL_STATE(698)] = 27659,
  [SMALL_STATE(699)] = 27675,
  [SMALL_STATE(700)] = 27691,
  [SMALL_STATE(701)] = 27707,
  [SMALL_STATE(702)] = 27723,
  [SMALL_STATE(703)] = 27739,
  [SMALL_STATE(704)] = 27755,
  [SMALL_STATE(705)] = 27771,
  [SMALL_STATE(706)] = 27787,
  [SMALL_STATE(707)] = 27803,
  [SMALL_STATE(708)] = 27819,
  [SMALL_STATE(709)] = 27835,
  [SMALL_STATE(710)] = 27851,
  [SMALL_STATE(711)] = 27867,
  [SMALL_STATE(712)] = 27883,
  [SMALL_STATE(713)] = 27899,
  [SMALL_STATE(714)] = 27915,
  [SMALL_STATE(715)] = 27931,
  [SMALL_STATE(716)] = 27947,
  [SMALL_STATE(717)] = 27963,
  [SMALL_STATE(718)] = 27979,
  [SMALL_STATE(719)] = 27995,
  [SMALL_STATE(720)] = 28011,
  [SMALL_STATE(721)] = 28027,
  [SMALL_STATE(722)] = 28043,
  [SMALL_STATE(723)] = 28059,
  [SMALL_STATE(724)] = 28075,
  [SMALL_STATE(725)] = 28091,
  [SMALL_STATE(726)] = 28107,
  [SMALL_STATE(727)] = 28123,
  [SMALL_STATE(728)] = 28139,
  [SMALL_STATE(729)] = 28155,
  [SMALL_STATE(730)] = 28171,
  [SMALL_STATE(731)] = 28187,
  [SMALL_STATE(732)] = 28203,
  [SMALL_STATE(733)] = 28219,
  [SMALL_STATE(734)] = 28235,
  [SMALL_STATE(735)] = 28251,
  [SMALL_STATE(736)] = 28267,
  [SMALL_STATE(737)] = 28283,
  [SMALL_STATE(738)] = 28299,
  [SMALL_STATE(739)] = 28315,
  [SMALL_STATE(740)] = 28331,
  [SMALL_STATE(741)] = 28347,
  [SMALL_STATE(742)] = 28363,
  [SMALL_STATE(743)] = 28379,
  [SMALL_STATE(744)] = 28395,
  [SMALL_STATE(745)] = 28411,
  [SMALL_STATE(746)] = 28427,
  [SMALL_STATE(747)] = 28443,
  [SMALL_STATE(748)] = 28459,
  [SMALL_STATE(749)] = 28475,
  [SMALL_STATE(750)] = 28491,
  [SMALL_STATE(751)] = 28507,
  [SMALL_STATE(752)] = 28523,
  [SMALL_STATE(753)] = 28539,
  [SMALL_STATE(754)] = 28555,
  [SMALL_STATE(755)] = 28571,
  [SMALL_STATE(756)] = 28587,
  [SMALL_STATE(757)] = 28603,
  [SMALL_STATE(758)] = 28619,
  [SMALL_STATE(759)] = 28635,
  [SMALL_STATE(760)] = 28651,
  [SMALL_STATE(761)] = 28667,
  [SMALL_STATE(762)] = 28683,
  [SMALL_STATE(763)] = 28699,
  [SMALL_STATE(764)] = 28715,
  [SMALL_STATE(765)] = 28731,
  [SMALL_STATE(766)] = 28747,
  [SMALL_STATE(767)] = 28763,
  [SMALL_STATE(768)] = 28779,
  [SMALL_STATE(769)] = 28795,
  [SMALL_STATE(770)] = 28811,
  [SMALL_STATE(771)] = 28827,
  [SMALL_STATE(772)] = 28843,
  [SMALL_STATE(773)] = 28859,
  [SMALL_STATE(774)] = 28875,
  [SMALL_STATE(775)] = 28891,
  [SMALL_STATE(776)] = 28907,
  [SMALL_STATE(777)] = 28923,
  [SMALL_STATE(778)] = 28939,
  [SMALL_STATE(779)] = 28955,
  [SMALL_STATE(780)] = 28971,
  [SMALL_STATE(781)] = 28987,
  [SMALL_STATE(782)] = 29003,
  [SMALL_STATE(783)] = 29019,
  [SMALL_STATE(784)] = 29035,
  [SMALL_STATE(785)] = 29051,
  [SMALL_STATE(786)] = 29067,
  [SMALL_STATE(787)] = 29083,
  [SMALL_STATE(788)] = 29099,
  [SMALL_STATE(789)] = 29115,
  [SMALL_STATE(790)] = 29131,
  [SMALL_STATE(791)] = 29147,
  [SMALL_STATE(792)] = 29163,
  [SMALL_STATE(793)] = 29179,
  [SMALL_STATE(794)] = 29195,
  [SMALL_STATE(795)] = 29211,
  [SMALL_STATE(796)] = 29227,
  [SMALL_STATE(797)] = 29243,
  [SMALL_STATE(798)] = 29259,
  [SMALL_STATE(799)] = 29275,
  [SMALL_STATE(800)] = 29291,
  [SMALL_STATE(801)] = 29307,
  [SMALL_STATE(802)] = 29323,
  [SMALL_STATE(803)] = 29339,
  [SMALL_STATE(804)] = 29355,
  [SMALL_STATE(805)] = 29371,
  [SMALL_STATE(806)] = 29387,
  [SMALL_STATE(807)] = 29403,
  [SMALL_STATE(808)] = 29419,
  [SMALL_STATE(809)] = 29435,
  [SMALL_STATE(810)] = 29451,
  [SMALL_STATE(811)] = 29467,
  [SMALL_STATE(812)] = 29483,
  [SMALL_STATE(813)] = 29499,
  [SMALL_STATE(814)] = 29515,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
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
