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
#define STATE_COUNT 832
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 150
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_filename = 1,
  aux_sym_line_token1 = 2,
  anon_sym_COLON = 3,
  anon_sym_LT = 4,
  anon_sym_COMMA = 5,
  anon_sym_GT = 6,
  anon_sym_DASH = 7,
  sym_location_unknown = 8,
  sym_location_other = 9,
  anon_sym_LBRACE_DASH_POUND = 10,
  anon_sym_POUND_DASH_RBRACE = 11,
  sym_single_line_comment = 12,
  sym_multiline_comment = 13,
  sym_iso_ref = 14,
  anon_sym_def = 15,
  anon_sym_struct = 16,
  anon_sym_union = 17,
  anon_sym_COLON_EQ = 18,
  sym_int_const = 19,
  sym_floating_const = 20,
  sym_sym = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_void = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_const = 28,
  anon_sym_volatile = 29,
  anon_sym__Atomic = 30,
  anon_sym_STAR = 31,
  anon_sym_LPAREN_STAR_RPAREN = 32,
  anon_sym_restrict = 33,
  anon_sym_DOT_DOT_DOT = 34,
  aux_sym_integer_type_token1 = 35,
  sym_floating_type = 36,
  anon_sym_ail_ctype = 37,
  anon_sym_EQ = 38,
  anon_sym_glob = 39,
  anon_sym_pure = 40,
  anon_sym_memop = 41,
  anon_sym_let = 42,
  anon_sym_in = 43,
  anon_sym_if = 44,
  anon_sym_then = 45,
  anon_sym_else = 46,
  anon_sym_case = 47,
  anon_sym_of = 48,
  anon_sym_PIPE = 49,
  anon_sym_EQ_GT = 50,
  anon_sym_end = 51,
  anon_sym_pcall = 52,
  anon_sym_ccall = 53,
  anon_sym_unseq = 54,
  anon_sym_weak = 55,
  anon_sym_SEMI = 56,
  anon_sym_strong = 57,
  anon_sym_bound = 58,
  anon_sym_save = 59,
  anon_sym_run = 60,
  anon_sym_nd = 61,
  anon_sym_par = 62,
  anon_sym_eff = 63,
  anon_sym_undef = 64,
  anon_sym_error = 65,
  anon_sym_CivNULLcap = 66,
  anon_sym_signed = 67,
  anon_sym_unsigned = 68,
  anon_sym_array_shift = 69,
  anon_sym_member_shift = 70,
  anon_sym_DOT = 71,
  anon_sym_not = 72,
  anon_sym_cfunction = 73,
  anon_sym_LBRACE = 74,
  anon_sym_RBRACE = 75,
  anon_sym_is_scalar = 76,
  anon_sym_is_integer = 77,
  anon_sym_is_signed_LPAREN = 78,
  anon_sym_is_unsigned_LPAREN = 79,
  anon_sym_are_compatible = 80,
  anon_sym_conv_loaded_int = 81,
  anon_sym_LBRACK_RBRACK = 82,
  anon_sym_COLON_COLON = 83,
  anon_sym_DeriveCap = 84,
  aux_sym_pure_memop_op_token1 = 85,
  anon_sym_CapAssignValue = 86,
  anon_sym_Ptr_tIntValue = 87,
  anon_sym_PtrEq = 88,
  anon_sym_PtrNe = 89,
  anon_sym_PtrLt = 90,
  anon_sym_PtrGt = 91,
  anon_sym_PtrLe = 92,
  anon_sym_PtrGe = 93,
  anon_sym_Ptrdiff = 94,
  anon_sym_IntFromPtr = 95,
  anon_sym_PtrFromInt = 96,
  anon_sym_PtrValidForDeref = 97,
  anon_sym_PtrWellAligned = 98,
  anon_sym_PtrArrayShift = 99,
  aux_sym_memop_op_token1 = 100,
  anon_sym_PtrMemberShift = 101,
  anon_sym__ = 102,
  anon_sym_unit = 103,
  anon_sym_boolean = 104,
  anon_sym_ctype = 105,
  anon_sym_loaded = 106,
  anon_sym_storable = 107,
  anon_sym_integer = 108,
  anon_sym_floating = 109,
  anon_sym_pointer = 110,
  anon_sym_array = 111,
  sym_memory_order = 112,
  anon_sym_create_readonly = 113,
  anon_sym_create = 114,
  anon_sym_alloc = 115,
  anon_sym_free = 116,
  anon_sym_kill = 117,
  anon_sym_store = 118,
  anon_sym_store_lock = 119,
  anon_sym_load = 120,
  anon_sym_seq_rmw = 121,
  anon_sym_seq_rmw_with_forward = 122,
  anon_sym_rmw = 123,
  anon_sym_fence = 124,
  anon_sym_neg = 125,
  sym_ub = 126,
  aux_sym_string_token1 = 127,
  anon_sym_Array = 128,
  anon_sym_Ivmax = 129,
  anon_sym_Ivmin = 130,
  anon_sym_Ivsizeof = 131,
  anon_sym_Ivalignof = 132,
  anon_sym_Specified = 133,
  anon_sym_Unspecified = 134,
  anon_sym_Fvfromint = 135,
  anon_sym_Ivfromfloat = 136,
  anon_sym_IvCOMPL = 137,
  anon_sym_IvAND = 138,
  anon_sym_IvOR = 139,
  anon_sym_IvXOR = 140,
  sym_binary_operator = 141,
  sym_bool_literal = 142,
  anon_sym_IvMaxAlignment = 143,
  anon_sym_NULL = 144,
  anon_sym_Cfunction = 145,
  anon_sym_Unit = 146,
  sym_impl = 147,
  anon_sym_ailname = 148,
  anon_sym_proc = 149,
  sym_source_file = 150,
  sym_line = 151,
  sym_column = 152,
  sym_position = 153,
  sym_location_range = 154,
  sym_location = 155,
  sym_declaration = 156,
  sym_def_aggregate_declaration = 157,
  sym_def_fields = 158,
  sym_def_field = 159,
  sym_core_ctype = 160,
  sym_ctype = 161,
  sym_ctype_star = 162,
  sym_params = 163,
  sym_integer_type = 164,
  sym_basic_type = 165,
  sym_glob_ctype_attribute = 166,
  sym_glob_declaration = 167,
  sym_expr = 168,
  sym_core_type = 169,
  sym_pexpr = 170,
  sym_list_pexpr = 171,
  sym_pure_memop_op = 172,
  sym_memop_op = 173,
  sym_pattern = 174,
  sym_list_pattern = 175,
  sym_name = 176,
  sym_core_base_type = 177,
  sym_core_object_type = 178,
  sym_action = 179,
  sym_paction = 180,
  sym_string = 181,
  sym_cstring = 182,
  sym_ctor = 183,
  sym_cabs_id = 184,
  sym_member = 185,
  sym_value = 186,
  sym_attribute = 187,
  sym_attribute_pair = 188,
  sym_proc_declaration = 189,
  sym_proc_full_declaration = 190,
  sym_proc_forward_declaration = 191,
  sym_def_declaration = 192,
  aux_sym_source_file_repeat1 = 193,
  aux_sym_def_fields_repeat1 = 194,
  aux_sym_params_repeat1 = 195,
  aux_sym_integer_type_repeat1 = 196,
  aux_sym_expr_repeat1 = 197,
  aux_sym_expr_repeat2 = 198,
  aux_sym_expr_repeat3 = 199,
  aux_sym_expr_repeat4 = 200,
  aux_sym_pexpr_repeat1 = 201,
  aux_sym_pexpr_repeat2 = 202,
  aux_sym_pattern_repeat1 = 203,
  aux_sym_core_base_type_repeat1 = 204,
  aux_sym_attribute_repeat1 = 205,
  aux_sym_proc_full_declaration_repeat1 = 206,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_filename] = "filename",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [sym_location_unknown] = "location_unknown",
  [sym_location_other] = "location_other",
  [anon_sym_LBRACE_DASH_POUND] = "{-#",
  [anon_sym_POUND_DASH_RBRACE] = "#-}",
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_location_unknown] = sym_location_unknown,
  [sym_location_other] = sym_location_other,
  [anon_sym_LBRACE_DASH_POUND] = anon_sym_LBRACE_DASH_POUND,
  [anon_sym_POUND_DASH_RBRACE] = anon_sym_POUND_DASH_RBRACE,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_location_unknown] = {
    .visible = true,
    .named = true,
  },
  [sym_location_other] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_DASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DASH_RBRACE] = {
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
  field_column = 1,
  field_end = 2,
  field_end_cursor = 3,
  field_filename = 4,
  field_line = 5,
  field_start = 6,
  field_start_cursor = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_column] = "column",
  [field_end] = "end",
  [field_end_cursor] = "end_cursor",
  [field_filename] = "filename",
  [field_line] = "line",
  [field_start] = "start",
  [field_start_cursor] = "start_cursor",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 3},
  [4] = {.index = 8, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_end, 3},
    {field_start, 1},
  [2] =
    {field_column, 4},
    {field_filename, 0},
    {field_line, 2},
  [5] =
    {field_end, 3},
    {field_start, 1},
    {field_start_cursor, 5},
  [8] =
    {field_end, 3},
    {field_end_cursor, 7},
    {field_start, 1},
    {field_start_cursor, 5},
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
  [9] = 4,
  [10] = 8,
  [11] = 5,
  [12] = 6,
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
  [27] = 14,
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
  [41] = 15,
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
  [54] = 32,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 52,
  [61] = 53,
  [62] = 34,
  [63] = 58,
  [64] = 19,
  [65] = 20,
  [66] = 21,
  [67] = 22,
  [68] = 25,
  [69] = 29,
  [70] = 35,
  [71] = 37,
  [72] = 39,
  [73] = 43,
  [74] = 44,
  [75] = 45,
  [76] = 48,
  [77] = 31,
  [78] = 17,
  [79] = 30,
  [80] = 28,
  [81] = 59,
  [82] = 24,
  [83] = 36,
  [84] = 38,
  [85] = 50,
  [86] = 16,
  [87] = 55,
  [88] = 56,
  [89] = 23,
  [90] = 40,
  [91] = 49,
  [92] = 57,
  [93] = 26,
  [94] = 46,
  [95] = 95,
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
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 99,
  [111] = 107,
  [112] = 112,
  [113] = 101,
  [114] = 103,
  [115] = 115,
  [116] = 106,
  [117] = 117,
  [118] = 98,
  [119] = 119,
  [120] = 120,
  [121] = 115,
  [122] = 100,
  [123] = 123,
  [124] = 124,
  [125] = 124,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 128,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 135,
  [139] = 139,
  [140] = 140,
  [141] = 140,
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
  [157] = 154,
  [158] = 158,
  [159] = 159,
  [160] = 148,
  [161] = 161,
  [162] = 162,
  [163] = 161,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 152,
  [169] = 158,
  [170] = 159,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 147,
  [175] = 152,
  [176] = 176,
  [177] = 162,
  [178] = 149,
  [179] = 151,
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
  [195] = 191,
  [196] = 185,
  [197] = 191,
  [198] = 198,
  [199] = 187,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 192,
  [205] = 201,
  [206] = 183,
  [207] = 198,
  [208] = 193,
  [209] = 209,
  [210] = 210,
  [211] = 186,
  [212] = 194,
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
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 236,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 190,
  [256] = 247,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 189,
  [263] = 263,
  [264] = 236,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 247,
  [271] = 271,
  [272] = 272,
  [273] = 221,
  [274] = 274,
  [275] = 275,
  [276] = 210,
  [277] = 223,
  [278] = 222,
  [279] = 226,
  [280] = 215,
  [281] = 281,
  [282] = 224,
  [283] = 209,
  [284] = 216,
  [285] = 214,
  [286] = 220,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 225,
  [294] = 202,
  [295] = 217,
  [296] = 219,
  [297] = 213,
  [298] = 298,
  [299] = 218,
  [300] = 300,
  [301] = 301,
  [302] = 300,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 240,
  [311] = 241,
  [312] = 227,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 306,
  [318] = 318,
  [319] = 319,
  [320] = 258,
  [321] = 257,
  [322] = 322,
  [323] = 323,
  [324] = 252,
  [325] = 301,
  [326] = 263,
  [327] = 327,
  [328] = 238,
  [329] = 234,
  [330] = 249,
  [331] = 251,
  [332] = 305,
  [333] = 316,
  [334] = 253,
  [335] = 254,
  [336] = 336,
  [337] = 260,
  [338] = 261,
  [339] = 267,
  [340] = 250,
  [341] = 341,
  [342] = 269,
  [343] = 235,
  [344] = 307,
  [345] = 345,
  [346] = 314,
  [347] = 304,
  [348] = 314,
  [349] = 319,
  [350] = 322,
  [351] = 351,
  [352] = 244,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 359,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 365,
  [375] = 353,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 360,
  [381] = 371,
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
  [396] = 386,
  [397] = 391,
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
  [409] = 405,
  [410] = 408,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 400,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 398,
  [429] = 403,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 413,
  [435] = 435,
  [436] = 414,
  [437] = 430,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 401,
  [447] = 447,
  [448] = 448,
  [449] = 416,
  [450] = 450,
  [451] = 402,
  [452] = 452,
  [453] = 453,
  [454] = 411,
  [455] = 417,
  [456] = 456,
  [457] = 384,
  [458] = 418,
  [459] = 382,
  [460] = 460,
  [461] = 385,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 426,
  [468] = 404,
  [469] = 462,
  [470] = 470,
  [471] = 471,
  [472] = 452,
  [473] = 415,
  [474] = 474,
  [475] = 435,
  [476] = 438,
  [477] = 477,
  [478] = 388,
  [479] = 479,
  [480] = 480,
  [481] = 440,
  [482] = 482,
  [483] = 406,
  [484] = 421,
  [485] = 392,
  [486] = 486,
  [487] = 487,
  [488] = 407,
  [489] = 482,
  [490] = 393,
  [491] = 447,
  [492] = 412,
  [493] = 441,
  [494] = 383,
  [495] = 398,
  [496] = 460,
  [497] = 403,
  [498] = 394,
  [499] = 448,
  [500] = 500,
  [501] = 395,
  [502] = 422,
  [503] = 486,
  [504] = 504,
  [505] = 464,
  [506] = 442,
  [507] = 423,
  [508] = 424,
  [509] = 389,
  [510] = 479,
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
  [522] = 192,
  [523] = 201,
  [524] = 183,
  [525] = 198,
  [526] = 193,
  [527] = 186,
  [528] = 194,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 514,
  [535] = 515,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 532,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 516,
  [558] = 529,
  [559] = 542,
  [560] = 555,
  [561] = 561,
  [562] = 556,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 545,
  [567] = 563,
  [568] = 564,
  [569] = 569,
  [570] = 544,
  [571] = 546,
  [572] = 569,
  [573] = 552,
  [574] = 554,
  [575] = 575,
  [576] = 513,
  [577] = 577,
  [578] = 578,
  [579] = 553,
  [580] = 580,
  [581] = 575,
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
  [602] = 601,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 586,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 605,
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
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 627,
  [638] = 608,
  [639] = 639,
  [640] = 630,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 628,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 654,
  [662] = 662,
  [663] = 663,
  [664] = 586,
  [665] = 665,
  [666] = 666,
  [667] = 589,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 584,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 596,
  [684] = 598,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 597,
  [692] = 668,
  [693] = 693,
  [694] = 686,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 682,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 704,
  [711] = 711,
  [712] = 712,
  [713] = 711,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 654,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 632,
  [724] = 662,
  [725] = 703,
  [726] = 726,
  [727] = 677,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 592,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 604,
  [736] = 648,
  [737] = 650,
  [738] = 585,
  [739] = 621,
  [740] = 623,
  [741] = 651,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 732,
  [746] = 746,
  [747] = 747,
  [748] = 624,
  [749] = 626,
  [750] = 750,
  [751] = 751,
  [752] = 643,
  [753] = 753,
  [754] = 696,
  [755] = 743,
  [756] = 756,
  [757] = 757,
  [758] = 722,
  [759] = 759,
  [760] = 722,
  [761] = 761,
  [762] = 655,
  [763] = 756,
  [764] = 665,
  [765] = 700,
  [766] = 726,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 587,
  [771] = 634,
  [772] = 772,
  [773] = 750,
  [774] = 774,
  [775] = 775,
  [776] = 660,
  [777] = 733,
  [778] = 778,
  [779] = 774,
  [780] = 599,
  [781] = 589,
  [782] = 782,
  [783] = 712,
  [784] = 784,
  [785] = 785,
  [786] = 671,
  [787] = 678,
  [788] = 709,
  [789] = 728,
  [790] = 669,
  [791] = 791,
  [792] = 615,
  [793] = 680,
  [794] = 603,
  [795] = 610,
  [796] = 622,
  [797] = 734,
  [798] = 714,
  [799] = 706,
  [800] = 800,
  [801] = 801,
  [802] = 625,
  [803] = 791,
  [804] = 804,
  [805] = 656,
  [806] = 806,
  [807] = 666,
  [808] = 730,
  [809] = 746,
  [810] = 769,
  [811] = 761,
  [812] = 785,
  [813] = 681,
  [814] = 814,
  [815] = 778,
  [816] = 816,
  [817] = 613,
  [818] = 716,
  [819] = 702,
  [820] = 816,
  [821] = 687,
  [822] = 759,
  [823] = 823,
  [824] = 633,
  [825] = 699,
  [826] = 717,
  [827] = 827,
  [828] = 718,
  [829] = 635,
  [830] = 830,
  [831] = 831,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(877);
      ADVANCE_MAP(
        '"', 14,
        '#', 28,
        '\'', 1333,
        '(', 1340,
        ')', 1341,
        '*', 1348,
        ',', 887,
        '-', 890,
        '.', 1444,
        '/', 1550,
        ':', 884,
        ';', 1422,
        '<', 885,
        '=', 1398,
        '>', 889,
        'A', 692,
        'B', 412,
        'C', 123,
        'D', 276,
        'E', 557,
        'F', 128,
        'I', 556,
        'N', 83,
        'P', 486,
        'S', 60,
        'T', 694,
        'U', 543,
        '[', 1337,
        '\\', 39,
        ']', 1338,
        '_', 1481,
        'a', 189,
        'b', 609,
        'c', 124,
        'd', 278,
        'e', 365,
        'f', 287,
        'g', 487,
        'i', 353,
        'k', 417,
        'l', 280,
        'm', 248,
        'n', 218,
        'o', 355,
        'p', 140,
        'r', 249,
        's', 132,
        't', 402,
        'u', 545,
        'v', 610,
        'w', 282,
        '{', 1449,
        '|', 1414,
        '}', 1450,
        '+', 1546,
        '^', 1546,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(896);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(872);
      if (lookahead == '#') ADVANCE(894);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '}') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '}') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(871);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(498);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(521);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1519);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 28,
        '(', 1339,
        ',', 887,
        '-', 890,
        ':', 40,
        '=', 43,
        '>', 888,
        'A', 1244,
        'F', 1314,
        'I', 1316,
        'S', 1229,
        'U', 1179,
        '[', 1337,
        '_', 1482,
        's', 1304,
        'w', 1041,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '-') ADVANCE(879);
      if (lookahead == '{') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(880);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\'', 1333,
        '(', 1340,
        ')', 1341,
        '*', 1348,
        ',', 887,
        '-', 29,
        '[', 1336,
        'a', 1259,
        'b', 1214,
        'c', 1306,
        'f', 1147,
        'i', 1197,
        'l', 1223,
        'p', 1226,
        's', 1287,
        'u', 1184,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\'', 1333,
        '(', 1340,
        ')', 1341,
        '*', 1348,
        ',', 887,
        '-', 29,
        '[', 1336,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\'', 1333,
        '(', 1339,
        ')', 1341,
        '+', 37,
        ',', 887,
        '-', 891,
        '.', 867,
        ':', 41,
        '<', 886,
        '=', 1398,
        '>', 888,
        'A', 1243,
        'B', 1092,
        'C', 1065,
        'E', 1172,
        'F', 960,
        'I', 1170,
        'N', 938,
        'P', 1135,
        'S', 922,
        'T', 1245,
        'U', 1163,
        '[', 1337,
        ']', 1338,
        '_', 910,
        'a', 1133,
        'b', 1309,
        'c', 957,
        'e', 1248,
        'i', 1060,
        'l', 1023,
        'm', 1014,
        'n', 1203,
        's', 1093,
        'u', 1164,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\'', 1333,
        '(', 1339,
        ')', 1341,
        '+', 37,
        '-', 891,
        '.', 867,
        ':', 40,
        '<', 42,
        '=', 1397,
        'A', 1243,
        'B', 1092,
        'C', 1065,
        'E', 1172,
        'F', 960,
        'I', 1170,
        'N', 938,
        'P', 1135,
        'S', 922,
        'T', 1245,
        'U', 1163,
        '[', 1337,
        ']', 1338,
        '_', 910,
        'a', 1133,
        'b', 1309,
        'c', 957,
        'e', 1248,
        'i', 1060,
        'l', 1023,
        'm', 1014,
        'n', 1203,
        's', 1094,
        'u', 1192,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(1455);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(1456);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '(', 1339,
        ')', 1341,
        ',', 887,
        '-', 1547,
        '/', 1550,
        ':', 40,
        '<', 1548,
        '>', 1548,
        '\\', 39,
        ']', 1338,
        'e', 507,
        'i', 544,
        'o', 355,
        'r', 313,
        't', 402,
        '{', 30,
        '|', 1414,
        '}', 1450,
        '*', 1546,
        '+', 1546,
        '=', 1546,
        '^', 1546,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '(', 1339,
        ')', 1341,
        '-', 29,
        ':', 883,
        'A', 1244,
        'F', 1314,
        'I', 1316,
        'S', 1229,
        'U', 1179,
        '[', 1337,
        ']', 1338,
        '_', 1482,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        ')', 1341,
        '-', 29,
        '.', 32,
        '_', 1352,
        'c', 1380,
        'd', 1376,
        'f', 1370,
        'l', 1381,
        's', 1386,
        'u', 1372,
        'v', 1377,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        ')', 1341,
        '-', 29,
        'A', 1288,
        'B', 1092,
        'C', 1088,
        'E', 1172,
        'I', 1171,
        'P', 1135,
        'S', 923,
        '[', 1336,
        'a', 1134,
        'b', 1309,
        'c', 1275,
        's', 1094,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(1349);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '{') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1464);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(1351);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(745);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(1546);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(1462);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(1462);
      if (lookahead == '=') ADVANCE(907);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(870);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(1415);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(892);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(753);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        'A', 69,
        'C', 71,
        'M', 127,
        'O', 77,
        'X', 73,
        'a', 493,
        'f', 723,
        'm', 131,
        's', 414,
      );
      END_STATE();
    case 50:
      ADVANCE_MAP(
        'A', 725,
        'E', 678,
        'F', 728,
        'G', 257,
        'L', 258,
        'M', 285,
        'N', 259,
        'V', 160,
        'W', 338,
        '_', 763,
        'd', 418,
      );
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(518);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(519);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(1540);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(339);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(639);
      END_STATE();
    case 58:
      if (lookahead == 'F') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 59:
      if (lookahead == 'H') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(573);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(579);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(1554);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(1538);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(203);
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
      if (lookahead == 'O') ADVANCE(1561);
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
      if (lookahead == 'P') ADVANCE(790);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(1542);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(1544);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(406);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(407);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead == 'p') ADVANCE(515);
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
      if (lookahead == '_') ADVANCE(444);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(864);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(868);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(869);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(595);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(749);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(182);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(837);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(675);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(535);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(642);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(374);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(599);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(702);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(746);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(748);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(209);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(463);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(474);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(810);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(752);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(755);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(756);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(822);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(830);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(845);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(843);
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 't') ADVANCE(625);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 'i') ADVANCE(860);
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(850);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(706);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(788);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(803);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(814);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(1399);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(855);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(500);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(433);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(501);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(504);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(319);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(505);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(473);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(1564);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(1506);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(1346);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(829);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(648);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(652);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(805);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(802);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(804);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(808);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(761);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(1416);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(1512);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(1334);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(1425);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(1490);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(1437);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(1560);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(1503);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(1438);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(1530);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(1532);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(1477);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(1514);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(1511);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(337);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(838);
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1551);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == 't') ADVANCE(1470);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1471);
      if (lookahead == 't') ADVANCE(1469);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1468);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1516);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1505);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1394);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1560);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1503);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1492);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1466);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1465);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1457);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1487);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'm') ADVANCE(838);
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(1407);
      if (lookahead == 'n') ADVANCE(1406);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(1407);
      if (lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(1413);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(899);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(1430);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(1431);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(1560);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(1473);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(1526);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(1528);
      END_STATE();
    case 363:
      if (lookahead == 'f') ADVANCE(1476);
      END_STATE();
    case 364:
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 365:
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 366:
      if (lookahead == 'f') ADVANCE(430);
      if (lookahead == 'w') ADVANCE(454);
      END_STATE();
    case 367:
      if (lookahead == 'f') ADVANCE(730);
      END_STATE();
    case 368:
      if (lookahead == 'f') ADVANCE(360);
      END_STATE();
    case 369:
      if (lookahead == 'f') ADVANCE(774);
      END_STATE();
    case 370:
      if (lookahead == 'f') ADVANCE(775);
      END_STATE();
    case 371:
      if (lookahead == 'f') ADVANCE(776);
      END_STATE();
    case 372:
      if (lookahead == 'f') ADVANCE(778);
      END_STATE();
    case 373:
      if (lookahead == 'f') ADVANCE(438);
      END_STATE();
    case 374:
      if (lookahead == 'f') ADVANCE(641);
      END_STATE();
    case 375:
      if (lookahead == 'f') ADVANCE(440);
      END_STATE();
    case 376:
      if (lookahead == 'f') ADVANCE(516);
      END_STATE();
    case 377:
      if (lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 378:
      if (lookahead == 'f') ADVANCE(447);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(1517);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(1423);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(1496);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(577);
      if (lookahead == 'z') ADVANCE(293);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(567);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(602);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(551);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(583);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(585);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(588);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(589);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 398:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 399:
      if (lookahead == 'g') ADVANCE(604);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(601);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(429);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(453);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(836);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 475:
      if (lookahead == 'k') ADVANCE(1420);
      END_STATE();
    case 476:
      if (lookahead == 'k') ADVANCE(1510);
      END_STATE();
    case 477:
      if (lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(1508);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(1418);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(1417);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(1503);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(851);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(633);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(738);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(827);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(660);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(839);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(673);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(614);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(456);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(1406);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(1427);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(1524);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(904);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(1560);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(1485);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(1556);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(623);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(800);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(809);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(840);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == 't') ADVANCE(1483);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(1402);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(1463);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(1435);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 667:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(721);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 677:
      if (lookahead == 'q') ADVANCE(109);
      END_STATE();
    case 678:
      if (lookahead == 'q') ADVANCE(1467);
      END_STATE();
    case 679:
      if (lookahead == 'q') ADVANCE(1419);
      END_STATE();
    case 680:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 681:
      if (lookahead == 'q') ADVANCE(106);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(1429);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(1433);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(1560);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(1498);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(1474);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(1453);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(1494);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(1560);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(768);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 749:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 751:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 752:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(1558);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(1342);
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(1395);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(1560);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(1503);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(1534);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(1475);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(1536);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(1439);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(1441);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(1478);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(1552);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(1480);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(1459);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(795);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(854);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 820:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 821:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 822:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 823:
      if (lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 824:
      if (lookahead == 'u') ADVANCE(666);
      END_STATE();
    case 825:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 826:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 827:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 828:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 829:
      if (lookahead == 'u') ADVANCE(812);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 831:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 832:
      if (lookahead == 'v') ADVANCE(443);
      END_STATE();
    case 833:
      if (lookahead == 'v') ADVANCE(256);
      END_STATE();
    case 834:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 835:
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 836:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 837:
      if (lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 838:
      if (lookahead == 'w') ADVANCE(1515);
      END_STATE();
    case 839:
      if (lookahead == 'w') ADVANCE(1513);
      END_STATE();
    case 840:
      if (lookahead == 'w') ADVANCE(608);
      END_STATE();
    case 841:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 842:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 843:
      if (lookahead == 'x') ADVANCE(1522);
      END_STATE();
    case 844:
      if (lookahead == 'x') ADVANCE(1560);
      END_STATE();
    case 845:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 846:
      if (lookahead == 'x') ADVANCE(296);
      END_STATE();
    case 847:
      if (lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 848:
      if (lookahead == 'y') ADVANCE(1520);
      END_STATE();
    case 849:
      if (lookahead == 'y') ADVANCE(1501);
      END_STATE();
    case 850:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 851:
      if (lookahead == 'y') ADVANCE(1504);
      END_STATE();
    case 852:
      if (lookahead == 'y') ADVANCE(1500);
      END_STATE();
    case 853:
      if (lookahead == 'y') ADVANCE(665);
      END_STATE();
    case 854:
      if (lookahead == 'y') ADVANCE(667);
      END_STATE();
    case 855:
      if (lookahead == 'y') ADVANCE(794);
      END_STATE();
    case 856:
      if (lookahead == 'y') ADVANCE(669);
      END_STATE();
    case 857:
      if (lookahead == 'y') ADVANCE(668);
      END_STATE();
    case 858:
      if (lookahead == 'y') ADVANCE(670);
      END_STATE();
    case 859:
      if (lookahead == 'y') ADVANCE(671);
      END_STATE();
    case 860:
      if (lookahead == 'z') ADVANCE(293);
      END_STATE();
    case 861:
      if (lookahead == 'z') ADVANCE(298);
      END_STATE();
    case 862:
      if (lookahead == '}') ADVANCE(895);
      END_STATE();
    case 863:
      if (lookahead == 0xa7) ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 864:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1546);
      END_STATE();
    case 865:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 866:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 867:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      END_STATE();
    case 868:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1479);
      END_STATE();
    case 869:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1562);
      END_STATE();
    case 870:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 871:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 872:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(5);
      END_STATE();
    case 873:
      if (eof) ADVANCE(877);
      ADVANCE_MAP(
        '\'', 1333,
        '(', 1340,
        ')', 1341,
        '*', 1348,
        ',', 887,
        '-', 29,
        ':', 883,
        '[', 1336,
        'd', 277,
        'g', 487,
        'p', 699,
        'r', 336,
        '{', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(873);
      END_STATE();
    case 874:
      if (eof) ADVANCE(877);
      ADVANCE_MAP(
        '(', 1339,
        ')', 1341,
        ',', 887,
        '-', 1547,
        '.', 1443,
        '/', 1550,
        ':', 41,
        '<', 1548,
        '=', 1549,
        '>', 1548,
        'A', 780,
        'B', 412,
        'C', 401,
        'E', 557,
        'I', 600,
        'P', 485,
        'S', 59,
        '[', 1336,
        '\\', 39,
        ']', 1338,
        'a', 478,
        'b', 649,
        'c', 125,
        'd', 277,
        'f', 288,
        'g', 487,
        'i', 354,
        'k', 417,
        'l', 281,
        'm', 309,
        'n', 217,
        'p', 140,
        'r', 314,
        's', 133,
        'u', 558,
        '{', 30,
        '}', 1450,
        '*', 1546,
        '+', 1546,
        '^', 1546,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(909);
      END_STATE();
    case 875:
      if (eof) ADVANCE(877);
      ADVANCE_MAP(
        '(', 1339,
        ')', 1341,
        ',', 887,
        '-', 1547,
        '/', 1550,
        ':', 40,
        '<', 1548,
        '>', 1548,
        '[', 1336,
        '\\', 39,
        ']', 1338,
        'a', 727,
        'b', 638,
        'c', 816,
        'd', 277,
        'e', 364,
        'f', 517,
        'g', 487,
        'i', 605,
        'l', 653,
        'o', 355,
        'p', 613,
        'r', 313,
        's', 784,
        't', 402,
        'u', 576,
        '{', 30,
        '|', 1414,
        '}', 1450,
        '*', 1546,
        '+', 1546,
        '=', 1546,
        '^', 1546,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(875);
      END_STATE();
    case 876:
      if (eof) ADVANCE(877);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(1038);
      if (lookahead == 'g') ADVANCE(1138);
      if (lookahead == 'p') ADVANCE(1253);
      if (lookahead == '{') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(876);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '\n') ADVANCE(896);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '-') ADVANCE(878);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(880);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(880);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '_') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1462);
      if (lookahead == '=') ADVANCE(907);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(870);
      if (lookahead == '=') ADVANCE(1546);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'o') ADVANCE(806);
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1546);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_location_unknown);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_location_other);
      if (lookahead == '>') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      if (lookahead == ' ') ADVANCE(863);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_single_line_comment);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_multiline_comment);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_iso_ref);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(912);
      if (lookahead == '_') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(909);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 930,
        'C', 932,
        'M', 958,
        'O', 935,
        'X', 933,
        'a', 1145,
        'f', 1257,
        'm', 962,
        's', 1116,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 930,
        'C', 932,
        'O', 935,
        'X', 933,
        'a', 1145,
        'f', 1257,
        'm', 962,
        's', 1116,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'D') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'M') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'P') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1268);
      if (lookahead == 'f') ADVANCE(1313);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == 't') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1144);
      if (lookahead == 'v') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1322);
      if (lookahead == 'i') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1320);
      if (lookahead == 'i') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1035);
      if (lookahead == 'o') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(973);
      if (lookahead == 'i') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'r') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1408);
      if (lookahead == 's') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1310);
      if (lookahead == 'h') ADVANCE(974);
      if (lookahead == 'i') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1108);
      if (lookahead == 'w') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1329);
      if (lookahead == 't') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 's') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead == 's') ADVANCE(988);
      if (lookahead == 'u') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'k') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1095);
      if (lookahead == 'r') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1291);
      if (lookahead == 'v') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == 't') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1256);
      if (lookahead == 'r') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1247);
      if (lookahead == 't') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1332);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1332);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1461);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'A') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == '_') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'b') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'g') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1359);
      if (lookahead == 'l') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'm') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'r') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 's') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1415);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_is_signed_LPAREN);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_is_unsigned_LPAREN);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1464);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_memop_op_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1479);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(909);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(535);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(736);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(729);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(495);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(841);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == '>') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1546);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1415);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1546);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1562);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 874},
  [97] = {.lex_state = 874},
  [98] = {.lex_state = 874},
  [99] = {.lex_state = 874},
  [100] = {.lex_state = 874},
  [101] = {.lex_state = 874},
  [102] = {.lex_state = 874},
  [103] = {.lex_state = 874},
  [104] = {.lex_state = 874},
  [105] = {.lex_state = 874},
  [106] = {.lex_state = 874},
  [107] = {.lex_state = 874},
  [108] = {.lex_state = 874},
  [109] = {.lex_state = 874},
  [110] = {.lex_state = 874},
  [111] = {.lex_state = 874},
  [112] = {.lex_state = 874},
  [113] = {.lex_state = 874},
  [114] = {.lex_state = 874},
  [115] = {.lex_state = 874},
  [116] = {.lex_state = 874},
  [117] = {.lex_state = 874},
  [118] = {.lex_state = 874},
  [119] = {.lex_state = 874},
  [120] = {.lex_state = 874},
  [121] = {.lex_state = 874},
  [122] = {.lex_state = 874},
  [123] = {.lex_state = 874},
  [124] = {.lex_state = 874},
  [125] = {.lex_state = 874},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 24},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 24},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 17},
  [143] = {.lex_state = 875},
  [144] = {.lex_state = 875},
  [145] = {.lex_state = 875},
  [146] = {.lex_state = 875},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 875},
  [149] = {.lex_state = 875},
  [150] = {.lex_state = 875},
  [151] = {.lex_state = 875},
  [152] = {.lex_state = 875},
  [153] = {.lex_state = 875},
  [154] = {.lex_state = 875},
  [155] = {.lex_state = 875},
  [156] = {.lex_state = 875},
  [157] = {.lex_state = 875},
  [158] = {.lex_state = 875},
  [159] = {.lex_state = 875},
  [160] = {.lex_state = 875},
  [161] = {.lex_state = 875},
  [162] = {.lex_state = 875},
  [163] = {.lex_state = 875},
  [164] = {.lex_state = 875},
  [165] = {.lex_state = 875},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 875},
  [168] = {.lex_state = 875},
  [169] = {.lex_state = 875},
  [170] = {.lex_state = 875},
  [171] = {.lex_state = 875},
  [172] = {.lex_state = 875},
  [173] = {.lex_state = 875},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 875},
  [176] = {.lex_state = 875},
  [177] = {.lex_state = 875},
  [178] = {.lex_state = 875},
  [179] = {.lex_state = 875},
  [180] = {.lex_state = 875},
  [181] = {.lex_state = 25},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 874},
  [184] = {.lex_state = 25},
  [185] = {.lex_state = 874},
  [186] = {.lex_state = 874},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 23},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 25},
  [192] = {.lex_state = 874},
  [193] = {.lex_state = 874},
  [194] = {.lex_state = 874},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 874},
  [197] = {.lex_state = 25},
  [198] = {.lex_state = 874},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 874},
  [202] = {.lex_state = 23},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 23},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 23},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 23},
  [216] = {.lex_state = 23},
  [217] = {.lex_state = 23},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 875},
  [233] = {.lex_state = 873},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 874},
  [237] = {.lex_state = 876},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 874},
  [247] = {.lex_state = 874},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 875},
  [256] = {.lex_state = 874},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 876},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 875},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 874},
  [265] = {.lex_state = 17},
  [266] = {.lex_state = 17},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 874},
  [271] = {.lex_state = 875},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 875},
  [274] = {.lex_state = 19},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 875},
  [277] = {.lex_state = 875},
  [278] = {.lex_state = 875},
  [279] = {.lex_state = 875},
  [280] = {.lex_state = 875},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 875},
  [283] = {.lex_state = 875},
  [284] = {.lex_state = 875},
  [285] = {.lex_state = 875},
  [286] = {.lex_state = 875},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 19},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 875},
  [294] = {.lex_state = 875},
  [295] = {.lex_state = 875},
  [296] = {.lex_state = 875},
  [297] = {.lex_state = 875},
  [298] = {.lex_state = 19},
  [299] = {.lex_state = 875},
  [300] = {.lex_state = 875},
  [301] = {.lex_state = 17},
  [302] = {.lex_state = 875},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 875},
  [305] = {.lex_state = 875},
  [306] = {.lex_state = 875},
  [307] = {.lex_state = 875},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 873},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 876},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 17},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 875},
  [317] = {.lex_state = 875},
  [318] = {.lex_state = 876},
  [319] = {.lex_state = 875},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 875},
  [323] = {.lex_state = 876},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 17},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 875},
  [333] = {.lex_state = 875},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 875},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 17},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 875},
  [345] = {.lex_state = 875},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 875},
  [348] = {.lex_state = 17},
  [349] = {.lex_state = 875},
  [350] = {.lex_state = 875},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 15},
  [356] = {.lex_state = 17},
  [357] = {.lex_state = 875},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 19},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 19},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 875},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 875},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 15},
  [370] = {.lex_state = 19},
  [371] = {.lex_state = 875},
  [372] = {.lex_state = 26},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 875},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 875},
  [379] = {.lex_state = 19},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 875},
  [382] = {.lex_state = 875},
  [383] = {.lex_state = 875},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 875},
  [386] = {.lex_state = 875},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 23},
  [393] = {.lex_state = 875},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 875},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 875},
  [401] = {.lex_state = 874},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 875},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 875},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 875},
  [415] = {.lex_state = 875},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 875},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 875},
  [421] = {.lex_state = 875},
  [422] = {.lex_state = 875},
  [423] = {.lex_state = 875},
  [424] = {.lex_state = 875},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 875},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 875},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 875},
  [436] = {.lex_state = 875},
  [437] = {.lex_state = 875},
  [438] = {.lex_state = 875},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 26},
  [441] = {.lex_state = 875},
  [442] = {.lex_state = 875},
  [443] = {.lex_state = 26},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 874},
  [447] = {.lex_state = 875},
  [448] = {.lex_state = 26},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 875},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 875},
  [460] = {.lex_state = 875},
  [461] = {.lex_state = 875},
  [462] = {.lex_state = 875},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 875},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 875},
  [468] = {.lex_state = 875},
  [469] = {.lex_state = 875},
  [470] = {.lex_state = 874},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 875},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 875},
  [476] = {.lex_state = 875},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 23},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 26},
  [482] = {.lex_state = 875},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 875},
  [485] = {.lex_state = 23},
  [486] = {.lex_state = 875},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 875},
  [490] = {.lex_state = 875},
  [491] = {.lex_state = 875},
  [492] = {.lex_state = 875},
  [493] = {.lex_state = 875},
  [494] = {.lex_state = 875},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 875},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 26},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 875},
  [503] = {.lex_state = 875},
  [504] = {.lex_state = 16},
  [505] = {.lex_state = 875},
  [506] = {.lex_state = 875},
  [507] = {.lex_state = 875},
  [508] = {.lex_state = 875},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 23},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 874},
  [513] = {.lex_state = 20},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 874},
  [517] = {.lex_state = 16},
  [518] = {.lex_state = 16},
  [519] = {.lex_state = 874},
  [520] = {.lex_state = 26},
  [521] = {.lex_state = 15},
  [522] = {.lex_state = 20},
  [523] = {.lex_state = 20},
  [524] = {.lex_state = 20},
  [525] = {.lex_state = 20},
  [526] = {.lex_state = 20},
  [527] = {.lex_state = 20},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 19},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 26},
  [537] = {.lex_state = 15},
  [538] = {.lex_state = 15},
  [539] = {.lex_state = 16},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 15},
  [544] = {.lex_state = 20},
  [545] = {.lex_state = 26},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 874},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 26},
  [556] = {.lex_state = 20},
  [557] = {.lex_state = 874},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 26},
  [561] = {.lex_state = 15},
  [562] = {.lex_state = 20},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 26},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 874},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 19},
  [591] = {.lex_state = 19},
  [592] = {.lex_state = 24},
  [593] = {.lex_state = 24},
  [594] = {.lex_state = 874},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 24},
  [597] = {.lex_state = 24},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 24},
  [602] = {.lex_state = 24},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 26},
  [607] = {.lex_state = 26},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 20},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 19},
  [615] = {.lex_state = 24},
  [616] = {.lex_state = 24},
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
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 24},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 874},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 26},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 19},
  [643] = {.lex_state = 874},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 24},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 26},
  [654] = {.lex_state = 26},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 26},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 26},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 24},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 26},
  [666] = {.lex_state = 24},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 26},
  [670] = {.lex_state = 19},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 26},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 24},
  [676] = {.lex_state = 20},
  [677] = {.lex_state = 20},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 19},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 24},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 26},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 26},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 26},
  [691] = {.lex_state = 24},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 24},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 24},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 24},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 24},
  [706] = {.lex_state = 26},
  [707] = {.lex_state = 19},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 26},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 26},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 19},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 24},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 20},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 24},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 26},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 874},
  [753] = {.lex_state = 874},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 15},
  [757] = {.lex_state = 24},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 15},
  [764] = {.lex_state = 26},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 31},
  [768] = {.lex_state = 24},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 19},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 24},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 26},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 26},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 26},
  [791] = {.lex_state = 19},
  [792] = {.lex_state = 24},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 26},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 26},
  [800] = {.lex_state = 874},
  [801] = {.lex_state = 24},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 19},
  [804] = {.lex_state = 19},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 19},
  [807] = {.lex_state = 24},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 26},
  [815] = {.lex_state = 26},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 24},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 24},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 26},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 24},
  [831] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_location] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_line_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(3),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(747),
    [sym_location] = STATE(1),
    [sym_declaration] = STATE(373),
    [sym_def_aggregate_declaration] = STATE(363),
    [sym_glob_declaration] = STATE(363),
    [sym_proc_declaration] = STATE(363),
    [sym_proc_full_declaration] = STATE(358),
    [sym_proc_forward_declaration] = STATE(358),
    [sym_def_declaration] = STATE(363),
    [aux_sym_source_file_repeat1] = STATE(228),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(3),
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_union,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(322), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(350), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(319), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(332), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(317), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(344), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(300), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(349), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(302), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(305), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(508), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(15), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(506), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(489), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(491), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(345), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(347), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(485), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(490), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(386), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(412), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(415), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(420), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(422), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(424), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(426), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(468), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(479), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(430), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_memop,
    ACTIONS(103), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_case,
    ACTIONS(109), 1,
      anon_sym_undef,
    ACTIONS(111), 1,
      anon_sym_error,
    ACTIONS(113), 1,
      anon_sym_CivNULLcap,
    ACTIONS(115), 1,
      anon_sym_array_shift,
    ACTIONS(117), 1,
      anon_sym_member_shift,
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
    STATE(283), 1,
      sym_core_ctype,
    ACTIONS(93), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(276), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(119), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(91), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(33), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(336), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(464), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(344), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(435), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(436), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(438), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(374), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(441), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(442), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(367), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(455), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(484), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(371), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(486), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(357), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(507), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(383), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(316), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_memop,
    ACTIONS(103), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_case,
    ACTIONS(109), 1,
      anon_sym_undef,
    ACTIONS(111), 1,
      anon_sym_error,
    ACTIONS(113), 1,
      anon_sym_CivNULLcap,
    ACTIONS(115), 1,
      anon_sym_array_shift,
    ACTIONS(117), 1,
      anon_sym_member_shift,
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
    STATE(51), 1,
      sym_location,
    STATE(271), 1,
      sym_pexpr,
    STATE(283), 1,
      sym_core_ctype,
    ACTIONS(93), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(276), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(119), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(91), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(217), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(53), 1,
      sym_location,
    STATE(209), 1,
      sym_core_ctype,
    STATE(218), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(223), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(213), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(459), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(460), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(461), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(462), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_memop,
    ACTIONS(103), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_case,
    ACTIONS(109), 1,
      anon_sym_undef,
    ACTIONS(111), 1,
      anon_sym_error,
    ACTIONS(113), 1,
      anon_sym_CivNULLcap,
    ACTIONS(115), 1,
      anon_sym_array_shift,
    ACTIONS(117), 1,
      anon_sym_member_shift,
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
    STATE(60), 1,
      sym_location,
    STATE(283), 1,
      sym_core_ctype,
    STATE(295), 1,
      sym_pexpr,
    ACTIONS(93), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(276), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(119), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(91), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_memop,
    ACTIONS(103), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_case,
    ACTIONS(109), 1,
      anon_sym_undef,
    ACTIONS(111), 1,
      anon_sym_error,
    ACTIONS(113), 1,
      anon_sym_CivNULLcap,
    ACTIONS(115), 1,
      anon_sym_array_shift,
    ACTIONS(117), 1,
      anon_sym_member_shift,
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
    STATE(283), 1,
      sym_core_ctype,
    STATE(299), 1,
      sym_pexpr,
    ACTIONS(93), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(276), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(119), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(91), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(505), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(385), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(304), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(392), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(393), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(396), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(400), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(404), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(414), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(417), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(421), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(381), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(423), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(437), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(447), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(510), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(467), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(469), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(473), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(475), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(476), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(333), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(482), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_memop,
    ACTIONS(103), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_case,
    ACTIONS(109), 1,
      anon_sym_undef,
    ACTIONS(111), 1,
      anon_sym_error,
    ACTIONS(113), 1,
      anon_sym_CivNULLcap,
    ACTIONS(115), 1,
      anon_sym_array_shift,
    ACTIONS(117), 1,
      anon_sym_member_shift,
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
    STATE(87), 1,
      sym_location,
    STATE(283), 1,
      sym_core_ctype,
    STATE(297), 1,
      sym_pexpr,
    ACTIONS(93), 2,
      sym_sym,
      sym_impl,
    ACTIONS(121), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(276), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(119), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(91), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(382), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(492), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(493), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(494), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(496), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(502), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(503), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_memop,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_case,
    ACTIONS(39), 1,
      anon_sym_undef,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_CivNULLcap,
    ACTIONS(45), 1,
      anon_sym_array_shift,
    ACTIONS(47), 1,
      anon_sym_member_shift,
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
    STATE(378), 1,
      sym_pexpr,
    ACTIONS(23), 2,
      sym_sym,
      sym_impl,
    ACTIONS(51), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(210), 2,
      sym_list_pexpr,
      sym_value,
    STATE(674), 2,
      sym_name,
      sym_ctor,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(49), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(21), 5,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(380), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
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
  [11148] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(269), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(99), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(542), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11344] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(541), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(101), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(249), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11540] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(327), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(254), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(104), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(480), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [11834] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(432), 1,
      sym_expr,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(250), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(107), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(321), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12128] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(108), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(529), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12226] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(109), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(558), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12324] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(110), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(559), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12422] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(111), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(257), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12520] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(112), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(303), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12618] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(113), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(330), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12716] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(335), 1,
      sym_expr,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(115), 1,
      sym_location,
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(337), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(203), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [12912] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(340), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(117), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(315), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13108] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(310), 1,
      sym_action,
    STATE(311), 1,
      sym_paction,
    STATE(342), 1,
      sym_expr,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(119), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(308), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13304] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(120), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(351), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13402] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(121), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(260), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13500] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(122), 1,
      sym_location,
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(532), 1,
      sym_expr,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(151), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [13598] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
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
  [13696] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(515), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(240), 1,
      sym_action,
    STATE(241), 1,
      sym_paction,
    STATE(535), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(126), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(570), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(127), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(544), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(292), 1,
      sym_list_pattern,
    STATE(359), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(361), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(370), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(131), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(368), 1,
      sym_pattern,
    STATE(583), 1,
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
  [14203] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(132), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(521), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(543), 1,
      sym_pattern,
    STATE(583), 1,
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
  [14301] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(134), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(531), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(135), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(576), 1,
      sym_pattern,
    STATE(583), 1,
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
  [14399] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(136), 1,
      sym_location,
    STATE(275), 1,
      sym_pattern,
    STATE(292), 1,
      sym_list_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(137), 1,
      sym_location,
    STATE(275), 1,
      sym_pattern,
    STATE(292), 1,
      sym_list_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(138), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(513), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(139), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(364), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(140), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(562), 1,
      sym_pattern,
    STATE(583), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(141), 1,
      sym_location,
    STATE(292), 1,
      sym_list_pattern,
    STATE(556), 1,
      sym_pattern,
    STATE(583), 1,
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
  [14693] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(387), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(577), 1,
      sym_core_type,
    STATE(800), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(398), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(495), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(428), 1,
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
  [14939] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(299), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(301), 1,
      aux_sym_memop_op_token1,
    STATE(147), 1,
      sym_location,
    STATE(700), 1,
      sym_memop_op,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(297), 12,
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
  [14974] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_loaded,
    ACTIONS(315), 1,
      anon_sym_array,
    STATE(148), 1,
      sym_location,
    STATE(287), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(303), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(313), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(309), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15019] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
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
  [15064] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(533), 1,
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
  [15109] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(791), 1,
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
  [15154] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(612), 1,
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
  [15199] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(614), 1,
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
  [15244] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
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
  [15289] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
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
  [15334] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(636), 1,
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
  [15379] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_loaded,
    ACTIONS(329), 1,
      anon_sym_array,
    STATE(157), 1,
      sym_location,
    STATE(204), 1,
      sym_core_object_type,
    STATE(215), 1,
      sym_core_base_type,
    ACTIONS(317), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(327), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(323), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15424] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(298), 1,
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
  [15469] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(291), 1,
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
  [15514] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(287), 1,
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
  [15559] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(161), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(288), 1,
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
  [15604] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(162), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(290), 1,
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
  [15649] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_loaded,
    ACTIONS(315), 1,
      anon_sym_array,
    STATE(163), 1,
      sym_location,
    STATE(288), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(303), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(313), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(309), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15694] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(164), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(679), 1,
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
  [15739] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(707), 1,
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
  [15784] = 15,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(166), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(266), 1,
      sym_ctype,
    STATE(729), 1,
      sym_params,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [15835] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(167), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(772), 1,
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
  [15880] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(168), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(586), 1,
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
  [15925] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_loaded,
    ACTIONS(315), 1,
      anon_sym_array,
    STATE(169), 1,
      sym_location,
    STATE(298), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(303), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(313), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(309), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [15970] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_loaded,
    ACTIONS(315), 1,
      anon_sym_array,
    STATE(170), 1,
      sym_location,
    STATE(291), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(303), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(313), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(309), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16015] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(450), 1,
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
  [16060] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(172), 1,
      sym_location,
    STATE(192), 1,
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
  [16105] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(530), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(299), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(301), 1,
      aux_sym_memop_op_token1,
    STATE(174), 1,
      sym_location,
    STATE(765), 1,
      sym_memop_op,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(297), 12,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(664), 1,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(670), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_loaded,
    ACTIONS(315), 1,
      anon_sym_array,
    STATE(177), 1,
      sym_location,
    STATE(290), 1,
      sym_core_base_type,
    STATE(522), 1,
      sym_core_object_type,
    ACTIONS(303), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(313), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(309), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [16320] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(780), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_loaded,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(179), 1,
      sym_location,
    STATE(192), 1,
      sym_core_object_type,
    STATE(803), 1,
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
  [16410] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(192), 1,
      sym_core_object_type,
    STATE(721), 1,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    ACTIONS(345), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(181), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(272), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16503] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    ACTIONS(347), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(182), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(272), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16551] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(183), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16580] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(184), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(272), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16625] = 16,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(185), 1,
      sym_location,
    STATE(628), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16676] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(355), 1,
      sym_binary_operator,
    STATE(186), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16705] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(187), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(325), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16750] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(188), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(341), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16795] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      sym_binary_operator,
    STATE(189), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(357), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16826] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(190), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(363), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [16857] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(191), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(314), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [16902] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(371), 1,
      sym_binary_operator,
    STATE(192), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(369), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16931] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(375), 1,
      sym_binary_operator,
    STATE(193), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16960] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(194), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(377), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [16989] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(195), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(346), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17034] = 16,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(646), 1,
      sym_action,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17085] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(197), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(348), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17130] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(198), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(381), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17159] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(199), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(301), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(248), 2,
      sym_ctype_star,
      sym_basic_type,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17204] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(333), 1,
      anon_sym_void,
    ACTIONS(339), 1,
      anon_sym__Atomic,
    ACTIONS(341), 1,
      aux_sym_integer_type_token1,
    ACTIONS(343), 1,
      sym_floating_type,
    STATE(200), 1,
      sym_location,
    STATE(230), 1,
      aux_sym_integer_type_repeat1,
    STATE(239), 1,
      sym_integer_type,
    STATE(243), 1,
      sym_ctype_star,
    STATE(248), 1,
      sym_basic_type,
    STATE(356), 1,
      sym_ctype,
    ACTIONS(331), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(337), 2,
      anon_sym_const,
      anon_sym_volatile,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [17251] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [17280] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(202), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(389), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      anon_sym_def,
    ACTIONS(398), 1,
      anon_sym_glob,
    ACTIONS(401), 1,
      anon_sym_proc,
    STATE(373), 1,
      sym_declaration,
    STATE(203), 2,
      sym_location,
      aux_sym_source_file_repeat1,
    STATE(358), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    STATE(363), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [17346] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(371), 1,
      sym_binary_operator,
    STATE(204), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(369), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(387), 1,
      sym_binary_operator,
    STATE(205), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(385), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(351), 1,
      sym_binary_operator,
    STATE(206), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(349), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(383), 1,
      sym_binary_operator,
    STATE(207), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(381), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(375), 1,
      sym_binary_operator,
    STATE(208), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(373), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(209), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(363), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(361), 1,
      sym_binary_operator,
    STATE(210), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(357), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(355), 1,
      sym_binary_operator,
    STATE(211), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(353), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(379), 1,
      sym_binary_operator,
    STATE(212), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(377), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(406), 1,
      sym_binary_operator,
    STATE(213), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(404), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(410), 1,
      sym_binary_operator,
    STATE(214), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(408), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(215), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(412), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(418), 1,
      sym_binary_operator,
    STATE(216), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(416), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(217), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(412), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(418), 1,
      sym_binary_operator,
    STATE(218), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(416), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(422), 1,
      sym_binary_operator,
    STATE(219), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(420), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(426), 1,
      sym_binary_operator,
    STATE(220), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(424), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(430), 1,
      sym_binary_operator,
    STATE(221), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(428), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(222), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(432), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(223), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(432), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(438), 1,
      sym_binary_operator,
    STATE(224), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(436), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(442), 1,
      sym_binary_operator,
    STATE(225), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(440), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(446), 1,
      sym_binary_operator,
    STATE(226), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(444), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(450), 1,
      sym_binary_operator,
    STATE(227), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(448), 11,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
      anon_sym_LBRACE_DASH_POUND,
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
    STATE(373), 1,
      sym_declaration,
    STATE(358), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    STATE(363), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [18058] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_integer_type_token1,
    STATE(229), 2,
      sym_location,
      aux_sym_integer_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(454), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18085] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      aux_sym_integer_type_token1,
    STATE(229), 1,
      aux_sym_integer_type_repeat1,
    STATE(230), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(461), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18114] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(467), 7,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      aux_sym_integer_type_token1,
  [18138] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18162] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
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
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18188] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(234), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18209] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(235), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18230] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(329), 1,
      anon_sym_array,
    STATE(207), 1,
      sym_core_object_type,
    STATE(236), 1,
      sym_location,
    ACTIONS(317), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(327), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18257] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 1,
      sym_sym,
    STATE(237), 1,
      sym_location,
    STATE(259), 1,
      aux_sym_def_fields_repeat1,
    STATE(323), 1,
      sym_def_field,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(483), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18286] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(238), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(487), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18307] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    STATE(239), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(489), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18330] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(240), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18351] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(241), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18372] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(497), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18395] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(243), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(497), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18418] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(244), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(501), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18439] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(503), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18462] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(315), 1,
      anon_sym_array,
    STATE(246), 1,
      sym_location,
    STATE(525), 1,
      sym_core_object_type,
    ACTIONS(303), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(313), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [18489] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(247), 1,
      sym_location,
    STATE(589), 1,
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
  [18516] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(507), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18539] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(249), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18560] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(250), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(511), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18581] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(251), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18602] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(252), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18623] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(253), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(517), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18644] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(254), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(517), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18665] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(367), 1,
      sym_binary_operator,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(255), 1,
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
  [18690] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(256), 1,
      sym_location,
    STATE(667), 1,
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
  [18717] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(257), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(521), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18738] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(258), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(521), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18759] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 1,
      sym_sym,
    STATE(323), 1,
      sym_def_field,
    STATE(259), 2,
      sym_location,
      aux_sym_def_fields_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(525), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [18786] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(260), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(530), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18807] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(261), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18828] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      sym_binary_operator,
    STATE(262), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [18853] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(263), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(534), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18874] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(198), 1,
      sym_core_object_type,
    STATE(264), 1,
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
  [18901] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(536), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18924] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_location,
    STATE(445), 1,
      aux_sym_params_repeat1,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [18955] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(267), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(550), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [18976] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(552), 6,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [18999] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(269), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(556), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_glob,
      anon_sym_SEMI,
      anon_sym_proc,
  [19020] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(270), 1,
      sym_location,
    STATE(781), 1,
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
  [19047] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(560), 1,
      anon_sym_COLON_COLON,
    ACTIONS(562), 1,
      sym_binary_operator,
    STATE(271), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(558), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19071] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19097] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(430), 1,
      sym_binary_operator,
    STATE(273), 1,
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
  [19119] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(566), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19141] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(572), 1,
      anon_sym_EQ,
    STATE(275), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(570), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19163] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(361), 1,
      sym_binary_operator,
    STATE(276), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [19185] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(277), 1,
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
  [19207] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(434), 1,
      sym_binary_operator,
    STATE(278), 1,
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
  [19229] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(446), 1,
      sym_binary_operator,
    STATE(279), 1,
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
  [19251] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(280), 1,
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
  [19273] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(576), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(574), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19295] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(438), 1,
      sym_binary_operator,
    STATE(282), 1,
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
  [19317] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(367), 1,
      sym_binary_operator,
    STATE(283), 1,
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
  [19339] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(418), 1,
      sym_binary_operator,
    STATE(284), 1,
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
  [19361] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(410), 1,
      sym_binary_operator,
    STATE(285), 1,
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
  [19383] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(426), 1,
      sym_binary_operator,
    STATE(286), 1,
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
  [19405] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(580), 1,
      anon_sym_EQ,
    STATE(287), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(578), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19427] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(584), 1,
      anon_sym_EQ,
    STATE(288), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(582), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19449] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(588), 1,
      anon_sym_EQ,
    STATE(289), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(586), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19471] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(592), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(590), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19493] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(572), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(570), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19515] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(596), 1,
      anon_sym_EQ,
    STATE(292), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(594), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19537] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(442), 1,
      sym_binary_operator,
    STATE(293), 1,
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
  [19559] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(391), 1,
      sym_binary_operator,
    STATE(294), 1,
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
  [19581] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(414), 1,
      sym_binary_operator,
    STATE(295), 1,
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
  [19603] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(422), 1,
      sym_binary_operator,
    STATE(296), 1,
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
  [19625] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(406), 1,
      sym_binary_operator,
    STATE(297), 1,
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
  [19647] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(600), 1,
      anon_sym_EQ,
    STATE(298), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(598), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [19669] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(418), 1,
      sym_binary_operator,
    STATE(299), 1,
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
  [19691] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(300), 1,
      sym_location,
    STATE(501), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19718] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19743] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_location,
    STATE(395), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19770] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(303), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(614), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19791] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(304), 1,
      sym_location,
    STATE(402), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19818] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym_location,
    STATE(410), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19845] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(306), 1,
      sym_location,
    STATE(413), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19872] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_location,
    STATE(418), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [19899] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(308), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(622), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19920] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(309), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(624), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [19941] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(310), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(493), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [19960] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(311), 1,
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
  [19979] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    STATE(312), 1,
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
  [20000] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(313), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(628), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20021] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20046] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(315), 1,
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
  [20067] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      sym_location,
    STATE(388), 1,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20094] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(317), 1,
      sym_location,
    STATE(434), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20121] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(318), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(640), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20142] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      sym_location,
    STATE(389), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20169] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(320), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(521), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20188] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(321), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(521), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20207] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      sym_location,
    STATE(411), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20234] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(323), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(648), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [20255] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(324), 1,
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
  [20274] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20299] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(326), 1,
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
  [20318] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(652), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20339] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(328), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(487), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20358] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(329), 1,
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
  [20377] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(330), 1,
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
  [20396] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(331), 1,
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
  [20415] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_location,
    STATE(408), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20442] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_location,
    STATE(478), 1,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20469] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(334), 1,
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
  [20488] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(335), 1,
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
  [20507] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_location,
    STATE(456), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20534] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(337), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(530), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20553] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(338), 1,
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
  [20572] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(339), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(550), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20591] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(340), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(511), 5,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
  [20610] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20635] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(342), 1,
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
  [20654] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(343), 1,
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
  [20673] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      sym_location,
    STATE(458), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20700] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(345), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(664), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [20723] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      anon_sym_SQUOTE,
    STATE(346), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20748] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(347), 1,
      sym_location,
    STATE(451), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20775] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_SQUOTE,
    STATE(348), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20800] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      sym_location,
    STATE(509), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20827] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      sym_location,
    STATE(454), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20854] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(351), 1,
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
  [20875] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(352), 1,
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
  [20894] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(676), 1,
      anon_sym_DeriveCap,
    STATE(353), 1,
      sym_location,
    STATE(684), 1,
      sym_pure_memop_op,
    ACTIONS(678), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20916] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(354), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(680), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [20934] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(684), 1,
      anon_sym_DASH,
    STATE(355), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(682), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND_DASH_RBRACE,
  [20954] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_location,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20976] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(357), 1,
      sym_location,
    ACTIONS(686), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [20998] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(358), 1,
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
  [21016] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    STATE(359), 1,
      sym_location,
    STATE(452), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21040] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      sym_location,
    STATE(407), 1,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21064] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    STATE(361), 1,
      sym_location,
    STATE(472), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21088] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(362), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(700), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21106] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(363), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(702), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21124] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      sym_location,
    STATE(419), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21148] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21172] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(713), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(366), 2,
      sym_location,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21192] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(367), 1,
      sym_location,
    ACTIONS(715), 2,
      anon_sym_PIPE,
      anon_sym_end,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21214] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    STATE(368), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(713), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [21234] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(719), 1,
      anon_sym_DASH,
    STATE(369), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(717), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND_DASH_RBRACE,
  [21254] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_location,
    STATE(465), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21278] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21302] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(727), 1,
      sym_sym,
    STATE(237), 1,
      aux_sym_def_fields_repeat1,
    STATE(323), 1,
      sym_def_field,
    STATE(372), 1,
      sym_location,
    STATE(377), 1,
      sym_def_fields,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21326] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(373), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(729), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21344] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21368] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(676), 1,
      anon_sym_DeriveCap,
    STATE(375), 1,
      sym_location,
    STATE(598), 1,
      sym_pure_memop_op,
    ACTIONS(678), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21390] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(664), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(376), 2,
      sym_location,
      aux_sym_expr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21410] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(377), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
    ACTIONS(738), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [21428] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(378), 1,
      sym_location,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21450] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(742), 1,
      anon_sym_LT,
    STATE(379), 1,
      sym_location,
    STATE(600), 1,
      sym_location_range,
    ACTIONS(744), 2,
      sym_location_unknown,
      sym_location_other,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21472] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      sym_location,
    STATE(488), 1,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21496] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21520] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21541] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21562] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(612), 1,
      anon_sym_end,
    ACTIONS(754), 1,
      anon_sym_PIPE,
    STATE(384), 1,
      sym_location,
    STATE(394), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21583] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21604] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(386), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21625] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      sym_location,
    STATE(487), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21646] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_location,
    STATE(390), 1,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21667] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(389), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21688] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(390), 2,
      sym_location,
      aux_sym_expr_repeat4,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21707] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(769), 1,
      anon_sym_PIPE,
    STATE(391), 1,
      sym_location,
    STATE(483), 1,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21728] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(771), 1,
      anon_sym_in,
    STATE(392), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21749] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(771), 1,
      anon_sym_else,
    STATE(393), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21770] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(83), 1,
      anon_sym_end,
    ACTIONS(754), 1,
      anon_sym_PIPE,
    STATE(394), 1,
      sym_location,
    STATE(466), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21791] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(395), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21812] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(396), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21833] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(85), 1,
      anon_sym_end,
    ACTIONS(769), 1,
      anon_sym_PIPE,
    STATE(397), 1,
      sym_location,
    STATE(406), 1,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21854] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      sym_location,
    STATE(403), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21875] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(399), 2,
      sym_location,
      aux_sym_params_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21894] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21915] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(401), 1,
      sym_location,
    STATE(409), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21936] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(402), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21957] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_location,
    STATE(477), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21978] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [21999] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      sym_location,
    STATE(449), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22020] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(87), 1,
      anon_sym_end,
    ACTIONS(769), 1,
      anon_sym_PIPE,
    STATE(406), 1,
      sym_location,
    STATE(431), 1,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22041] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      sym_location,
    STATE(433), 1,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22062] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(408), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22083] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(409), 1,
      sym_location,
    STATE(416), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22104] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(410), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22125] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(411), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22146] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22167] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(413), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22188] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22209] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22230] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(416), 1,
      sym_location,
    STATE(474), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22251] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22272] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(418), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22293] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_pattern_repeat1,
    STATE(419), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22314] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22335] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22356] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22377] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22398] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22419] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    STATE(425), 1,
      sym_location,
    STATE(500), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22440] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(812), 1,
      anon_sym_then,
    STATE(426), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22461] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(427), 2,
      sym_location,
      aux_sym_proc_full_declaration_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22480] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_location,
    STATE(429), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22501] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym_location,
    STATE(477), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22522] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(823), 1,
      anon_sym_of,
    STATE(430), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22543] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(825), 1,
      anon_sym_PIPE,
    ACTIONS(828), 1,
      anon_sym_end,
    STATE(431), 2,
      sym_location,
      aux_sym_expr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22562] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(432), 1,
      sym_location,
    ACTIONS(830), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22581] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(433), 2,
      sym_location,
      aux_sym_expr_repeat3,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22600] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(434), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22621] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22642] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22663] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(837), 1,
      anon_sym_of,
    STATE(437), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22684] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(839), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22705] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(439), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22726] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(440), 1,
      sym_location,
    STATE(608), 1,
      sym_name,
    ACTIONS(845), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22745] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22766] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22787] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(851), 1,
      sym_sym,
    ACTIONS(853), 1,
      anon_sym_LBRACK,
    STATE(443), 1,
      sym_location,
    STATE(690), 1,
      sym_attribute,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22808] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(444), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22829] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_params_repeat1,
    STATE(445), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22850] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(405), 1,
      sym_member,
    STATE(446), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22871] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(861), 1,
      anon_sym_of,
    STATE(447), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22892] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(448), 1,
      sym_location,
    STATE(534), 1,
      sym_name,
    ACTIONS(845), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22911] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(449), 1,
      sym_location,
    STATE(474), 1,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22932] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(450), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22953] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(451), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22974] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      aux_sym_pattern_repeat1,
    STATE(452), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [22995] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    ACTIONS(869), 1,
      anon_sym_ailname,
    STATE(453), 1,
      sym_location,
    STATE(471), 1,
      sym_attribute_pair,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23016] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(454), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23037] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23058] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(456), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23079] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(604), 1,
      anon_sym_end,
    ACTIONS(754), 1,
      anon_sym_PIPE,
    STATE(457), 1,
      sym_location,
    STATE(498), 1,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23100] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(458), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23121] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(459), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23142] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23163] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(461), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23184] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23205] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      aux_sym_proc_full_declaration_repeat1,
    STATE(463), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23226] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(464), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23247] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_pattern_repeat1,
    STATE(465), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23268] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(883), 1,
      anon_sym_PIPE,
    ACTIONS(886), 1,
      anon_sym_end,
    STATE(466), 2,
      sym_location,
      aux_sym_pexpr_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23287] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(888), 1,
      anon_sym_then,
    STATE(467), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23308] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23329] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23350] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(894), 1,
      sym_impl,
    STATE(470), 1,
      sym_location,
    ACTIONS(892), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23369] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
    STATE(425), 1,
      aux_sym_attribute_repeat1,
    STATE(471), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23390] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      aux_sym_pattern_repeat1,
    STATE(472), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23411] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23432] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(474), 2,
      sym_location,
      aux_sym_pexpr_repeat2,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23451] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23472] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23493] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    STATE(477), 2,
      sym_location,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23512] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_expr_repeat4,
    STATE(478), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23533] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(918), 1,
      anon_sym_in,
    STATE(479), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23554] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    STATE(480), 1,
      sym_location,
    ACTIONS(920), 2,
      anon_sym_PIPE,
      anon_sym_end,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23573] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(481), 1,
      sym_location,
    STATE(638), 1,
      sym_name,
    ACTIONS(845), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23592] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(924), 1,
      anon_sym_then,
    STATE(482), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23613] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(769), 1,
      anon_sym_PIPE,
    STATE(431), 1,
      aux_sym_expr_repeat2,
    STATE(483), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23634] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23655] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(926), 1,
      anon_sym_in,
    STATE(485), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23676] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23697] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      aux_sym_core_base_type_repeat1,
    STATE(487), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23718] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_expr_repeat3,
    STATE(488), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23739] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(932), 1,
      anon_sym_then,
    STATE(489), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23760] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(926), 1,
      anon_sym_else,
    STATE(490), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23781] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(934), 1,
      anon_sym_of,
    STATE(491), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23802] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23823] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(493), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23844] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    STATE(494), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23865] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_location,
    STATE(497), 1,
      aux_sym_core_base_type_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23886] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(496), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23907] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      aux_sym_core_base_type_repeat1,
    STATE(497), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23928] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(71), 1,
      anon_sym_end,
    ACTIONS(754), 1,
      anon_sym_PIPE,
    STATE(466), 1,
      aux_sym_pexpr_repeat1,
    STATE(498), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23949] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(499), 1,
      sym_location,
    STATE(514), 1,
      sym_name,
    ACTIONS(845), 2,
      sym_sym,
      sym_impl,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23968] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RBRACK,
    STATE(500), 2,
      sym_location,
      aux_sym_attribute_repeat1,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [23987] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(501), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24008] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24029] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    STATE(503), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24050] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(957), 1,
      sym_filename,
    ACTIONS(959), 1,
      anon_sym_POUND_DASH_RBRACE,
    STATE(504), 1,
      sym_location,
    STATE(537), 1,
      sym_position,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24071] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    STATE(505), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24092] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(506), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24113] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24134] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(508), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24155] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_expr_repeat1,
    STATE(509), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24176] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      sym_binary_operator,
    ACTIONS(969), 1,
      anon_sym_in,
    STATE(510), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24197] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(511), 1,
      sym_location,
    ACTIONS(905), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24213] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_LBRACK,
    STATE(512), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24231] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(975), 1,
      anon_sym_EQ,
    ACTIONS(977), 1,
      anon_sym_COLON_COLON,
    STATE(513), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24249] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24267] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(515), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24285] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(516), 1,
      sym_location,
    STATE(630), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24303] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(957), 1,
      sym_filename,
    STATE(517), 1,
      sym_location,
    STATE(715), 1,
      sym_position,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24321] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(957), 1,
      sym_filename,
    STATE(518), 1,
      sym_location,
    STATE(782), 1,
      sym_position,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24339] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(981), 1,
      sym_int_const,
    STATE(519), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24357] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(983), 1,
      sym_sym,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24375] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    ACTIONS(987), 1,
      anon_sym_EQ_GT,
    STATE(521), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24393] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(522), 1,
      sym_location,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24409] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(523), 1,
      sym_location,
    ACTIONS(385), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24425] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(524), 1,
      sym_location,
    ACTIONS(349), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24441] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(525), 1,
      sym_location,
    ACTIONS(381), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24457] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(526), 1,
      sym_location,
    ACTIONS(373), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24473] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(527), 1,
      sym_location,
    ACTIONS(353), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24489] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(528), 1,
      sym_location,
    ACTIONS(377), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24505] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(918), 1,
      anon_sym_else,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    STATE(529), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24523] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(530), 1,
      sym_location,
    ACTIONS(914), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24539] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    STATE(531), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24557] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(532), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24575] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(533), 1,
      sym_location,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24591] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24609] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(535), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24627] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(995), 1,
      sym_sym,
    STATE(536), 1,
      sym_location,
    STATE(676), 1,
      sym_cabs_id,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24645] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(997), 1,
      anon_sym_DASH,
    ACTIONS(999), 1,
      anon_sym_POUND_DASH_RBRACE,
    STATE(537), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24663] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1001), 1,
      aux_sym_line_token1,
    STATE(538), 1,
      sym_location,
    STATE(775), 1,
      sym_line,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24681] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(957), 1,
      sym_filename,
    STATE(539), 1,
      sym_location,
    STATE(591), 1,
      sym_position,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24699] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(540), 1,
      sym_location,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24715] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(541), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24733] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    ACTIONS(1003), 1,
      anon_sym_in,
    STATE(542), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24751] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(694), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1005), 1,
      anon_sym_EQ_GT,
    STATE(543), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24769] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(977), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1007), 1,
      anon_sym_EQ,
    STATE(544), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24787] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1009), 1,
      sym_sym,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24805] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(546), 1,
      sym_location,
    STATE(809), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24823] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(869), 1,
      anon_sym_ailname,
    STATE(547), 1,
      sym_location,
    STATE(549), 1,
      sym_attribute_pair,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24841] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(548), 1,
      sym_location,
    ACTIONS(1013), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24857] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(549), 1,
      sym_location,
    ACTIONS(951), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24873] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(550), 1,
      sym_location,
    ACTIONS(1015), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24889] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(511), 1,
      sym_member,
    STATE(551), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24907] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(552), 1,
      sym_location,
    STATE(624), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24925] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(553), 1,
      sym_location,
    STATE(625), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24943] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(554), 1,
      sym_location,
    STATE(626), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24961] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(995), 1,
      sym_sym,
    STATE(555), 1,
      sym_location,
    STATE(741), 1,
      sym_cabs_id,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24979] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(977), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1017), 1,
      anon_sym_EQ,
    STATE(556), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [24997] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(557), 1,
      sym_location,
    STATE(640), 1,
      sym_member,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25015] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    ACTIONS(969), 1,
      anon_sym_else,
    STATE(558), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25033] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(922), 1,
      anon_sym_SEMI,
    ACTIONS(1019), 1,
      anon_sym_in,
    STATE(559), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25051] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(995), 1,
      sym_sym,
    STATE(560), 1,
      sym_location,
    STATE(651), 1,
      sym_cabs_id,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25069] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1021), 1,
      aux_sym_line_token1,
    STATE(355), 1,
      sym_column,
    STATE(561), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25087] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(977), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1023), 1,
      anon_sym_EQ,
    STATE(562), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25105] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1025), 1,
      aux_sym_string_token1,
    STATE(563), 1,
      sym_location,
    STATE(621), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25123] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(564), 1,
      sym_location,
    ACTIONS(1027), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25139] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1029), 1,
      anon_sym_SQUOTE,
    STATE(318), 1,
      sym_core_ctype,
    STATE(565), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25157] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1031), 1,
      sym_sym,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25175] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1025), 1,
      aux_sym_string_token1,
    STATE(567), 1,
      sym_location,
    STATE(739), 1,
      sym_string,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25193] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(568), 1,
      sym_location,
    ACTIONS(1035), 2,
      anon_sym_signed,
      anon_sym_unsigned,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25209] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(569), 1,
      sym_location,
    STATE(739), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25227] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(977), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1037), 1,
      anon_sym_EQ,
    STATE(570), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25245] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(571), 1,
      sym_location,
    STATE(746), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25263] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(572), 1,
      sym_location,
    STATE(621), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25281] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(573), 1,
      sym_location,
    STATE(748), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25299] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(574), 1,
      sym_location,
    STATE(749), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25317] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(575), 1,
      sym_location,
    STATE(750), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25335] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(977), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1039), 1,
      anon_sym_EQ,
    STATE(576), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25353] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1041), 1,
      anon_sym_LBRACK,
    STATE(577), 1,
      sym_location,
    STATE(642), 1,
      sym_glob_ctype_attribute,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25371] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(578), 1,
      sym_location,
    STATE(645), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25389] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(579), 1,
      sym_location,
    STATE(802), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25407] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1043), 1,
      aux_sym_string_token1,
    STATE(548), 1,
      sym_cstring,
    STATE(580), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25425] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(581), 1,
      sym_location,
    STATE(773), 1,
      sym_core_ctype,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25443] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(582), 1,
      sym_location,
    ACTIONS(1045), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25459] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
    STATE(583), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25474] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
    STATE(584), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25489] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25504] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    STATE(586), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25519] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25534] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1055), 1,
      anon_sym_EQ,
    STATE(588), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25549] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25564] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1059), 1,
      anon_sym_COLON_EQ,
    STATE(590), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25579] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1061), 1,
      anon_sym_GT,
    STATE(591), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25594] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1063), 1,
      anon_sym_COLON,
    STATE(592), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25609] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    STATE(593), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25624] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1067), 1,
      anon_sym_LBRACK,
    STATE(594), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25639] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25654] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1071), 1,
      anon_sym_COLON,
    STATE(596), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25669] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1073), 1,
      anon_sym_COLON,
    STATE(597), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25684] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    STATE(598), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25699] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    STATE(599), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25714] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1079), 1,
      anon_sym_POUND_DASH_RBRACE,
    STATE(600), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25729] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    STATE(601), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25744] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1083), 1,
      anon_sym_COLON,
    STATE(602), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25759] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(603), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25774] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
    STATE(604), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25789] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25804] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1089), 1,
      sym_sym,
    STATE(606), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25819] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1091), 1,
      sym_sym,
    STATE(607), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25834] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25849] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1093), 1,
      anon_sym_EQ,
    STATE(609), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25864] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
    STATE(610), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25879] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1097), 1,
      anon_sym_eff,
    STATE(611), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25894] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
    STATE(612), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25909] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(613), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25924] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1101), 1,
      anon_sym_COLON_EQ,
    STATE(614), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25939] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1103), 1,
      anon_sym_COLON,
    STATE(615), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25954] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1105), 1,
      anon_sym_COLON,
    STATE(616), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25969] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1107), 1,
      anon_sym_eff,
    STATE(617), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25984] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [25999] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26014] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(620), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26029] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(621), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26044] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1113), 1,
      anon_sym_LPAREN,
    STATE(622), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26059] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26074] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26089] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(625), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26104] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1119), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26119] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26134] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26149] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
    STATE(629), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26164] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(630), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26179] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    STATE(631), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26194] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1127), 1,
      anon_sym_COLON,
    STATE(632), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26209] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1129), 1,
      anon_sym_LPAREN,
    STATE(633), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26224] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26239] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
    STATE(635), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26254] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1133), 1,
      anon_sym_LBRACK,
    STATE(636), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26269] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26284] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26299] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1135), 1,
      sym_sym,
    STATE(639), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26314] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(640), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26329] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1137), 1,
      anon_sym_ail_ctype,
    STATE(641), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26344] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1139), 1,
      anon_sym_COLON_EQ,
    STATE(642), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26359] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1141), 1,
      anon_sym_DOT,
    STATE(643), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26374] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    STATE(644), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26389] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1145), 1,
      anon_sym_RBRACK,
    STATE(645), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26404] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26419] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1149), 1,
      anon_sym_LPAREN,
    STATE(647), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26434] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1151), 1,
      anon_sym_LPAREN,
    STATE(648), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26449] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1153), 1,
      anon_sym_COLON,
    STATE(649), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26464] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
    STATE(650), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26479] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26494] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1159), 1,
      anon_sym_eff,
    STATE(652), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26509] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1161), 1,
      sym_sym,
    STATE(653), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26524] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1163), 1,
      sym_sym,
    STATE(654), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26539] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26554] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26569] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1165), 1,
      anon_sym_eff,
    STATE(657), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26584] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1167), 1,
      anon_sym_LPAREN,
    STATE(658), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26599] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1169), 1,
      sym_sym,
    STATE(659), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26614] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26629] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1173), 1,
      sym_sym,
    STATE(661), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26644] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(662), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26659] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    STATE(663), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26674] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    STATE(664), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26689] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1179), 1,
      sym_sym,
    STATE(665), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26704] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1181), 1,
      anon_sym_COLON,
    STATE(666), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26719] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26734] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
    STATE(668), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26749] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1187), 1,
      sym_sym,
    STATE(669), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26764] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1189), 1,
      anon_sym_COLON_EQ,
    STATE(670), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26779] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(671), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26794] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26809] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1195), 1,
      sym_sym,
    STATE(673), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26824] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1197), 1,
      anon_sym_LPAREN,
    STATE(674), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26839] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1199), 1,
      anon_sym_COLON,
    STATE(675), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26854] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1201), 1,
      anon_sym_EQ,
    STATE(676), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26869] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1203), 1,
      sym_ub,
    STATE(677), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26884] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
    STATE(678), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26899] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1207), 1,
      anon_sym_COLON_EQ,
    STATE(679), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26914] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
    STATE(680), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26929] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
    STATE(681), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26944] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(682), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26959] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1215), 1,
      anon_sym_COLON,
    STATE(683), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26974] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [26989] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1219), 1,
      sym_sym,
    STATE(685), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27004] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1221), 1,
      sym_memory_order,
    STATE(686), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27019] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
    STATE(687), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27034] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1225), 1,
      sym_sym,
    STATE(688), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27049] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    STATE(689), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27064] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1229), 1,
      sym_sym,
    STATE(690), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27079] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1231), 1,
      anon_sym_COLON,
    STATE(691), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27094] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1233), 1,
      anon_sym_LPAREN,
    STATE(692), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27109] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1235), 1,
      anon_sym_COLON,
    STATE(693), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27124] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1237), 1,
      sym_memory_order,
    STATE(694), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27139] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1239), 1,
      anon_sym_eff,
    STATE(695), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27154] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1241), 1,
      anon_sym_LBRACE,
    STATE(696), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27169] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    STATE(697), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27184] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1245), 1,
      anon_sym_RBRACK,
    STATE(698), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27199] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
    STATE(699), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27214] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    STATE(700), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27229] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1251), 1,
      anon_sym_LPAREN,
    STATE(701), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27244] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1253), 1,
      anon_sym_COLON,
    STATE(702), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27259] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1255), 1,
      anon_sym_LPAREN,
    STATE(703), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27274] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1257), 1,
      anon_sym_in,
    STATE(704), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27289] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1259), 1,
      anon_sym_COLON,
    STATE(705), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27304] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1261), 1,
      sym_sym,
    STATE(706), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27319] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1263), 1,
      anon_sym_COLON_EQ,
    STATE(707), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27334] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(708), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27349] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1265), 1,
      anon_sym_LPAREN,
    STATE(709), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27364] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1267), 1,
      anon_sym_in,
    STATE(710), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27379] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1269), 1,
      sym_memory_order,
    STATE(711), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27394] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1271), 1,
      sym_sym,
    STATE(712), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27409] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1273), 1,
      sym_memory_order,
    STATE(713), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27424] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1275), 1,
      sym_memory_order,
    STATE(714), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27439] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1277), 1,
      anon_sym_POUND_DASH_RBRACE,
    STATE(715), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27454] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1279), 1,
      anon_sym_in,
    STATE(716), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27469] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1281), 1,
      anon_sym_in,
    STATE(717), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27484] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1283), 1,
      sym_memory_order,
    STATE(718), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27499] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1285), 1,
      sym_sym,
    STATE(719), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27514] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(720), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27529] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1287), 1,
      anon_sym_COLON_EQ,
    STATE(721), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27544] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
    STATE(722), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27559] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1291), 1,
      anon_sym_COLON,
    STATE(723), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27574] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(724), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27589] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    STATE(725), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27604] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
    STATE(726), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27619] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1299), 1,
      sym_ub,
    STATE(727), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27634] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
    STATE(728), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27649] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(729), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27664] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
    STATE(730), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27679] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1305), 1,
      anon_sym_COLON,
    STATE(731), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27694] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
    STATE(732), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27709] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1309), 1,
      anon_sym_LPAREN,
    STATE(733), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27724] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1311), 1,
      sym_sym,
    STATE(734), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27739] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    STATE(735), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27754] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
    STATE(736), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27769] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1317), 1,
      anon_sym_LPAREN,
    STATE(737), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27784] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27799] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(739), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27814] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27829] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(741), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27844] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1325), 1,
      anon_sym_RBRACK,
    STATE(742), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27859] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1327), 1,
      anon_sym_LBRACE,
    STATE(743), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27874] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    STATE(744), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27889] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
    STATE(745), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27904] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(746), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27919] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1333), 1,
      ts_builtin_sym_end,
    STATE(747), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27934] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(748), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27949] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    STATE(749), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27964] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    STATE(750), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27979] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1339), 1,
      anon_sym_LPAREN,
    STATE(751), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [27994] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1341), 1,
      anon_sym_DOT,
    STATE(752), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28009] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1343), 1,
      anon_sym_LBRACK,
    STATE(753), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28024] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1345), 1,
      anon_sym_LBRACE,
    STATE(754), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28039] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1347), 1,
      anon_sym_LBRACE,
    STATE(755), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28054] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1349), 1,
      anon_sym_EQ_GT,
    STATE(756), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28069] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1351), 1,
      anon_sym_COLON,
    STATE(757), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28084] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(758), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28099] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(759), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28114] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1357), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28129] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
    STATE(761), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28144] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(762), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28159] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1361), 1,
      anon_sym_EQ_GT,
    STATE(763), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28174] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1363), 1,
      sym_sym,
    STATE(764), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28189] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(765), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28204] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1367), 1,
      anon_sym_LPAREN,
    STATE(766), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28219] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1369), 1,
      aux_sym_pure_memop_op_token1,
    STATE(767), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28234] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1371), 1,
      anon_sym_COLON,
    STATE(768), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28249] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
    STATE(769), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28264] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(770), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28279] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(771), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28294] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1377), 1,
      anon_sym_COLON_EQ,
    STATE(772), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28309] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(773), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28324] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(774), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28339] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1383), 1,
      anon_sym_COLON,
    STATE(775), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28354] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28369] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1387), 1,
      anon_sym_LPAREN,
    STATE(777), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28384] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1389), 1,
      sym_sym,
    STATE(778), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28399] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(779), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28414] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
    STATE(780), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28429] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(781), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28444] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    STATE(782), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28459] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1399), 1,
      sym_sym,
    STATE(783), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28474] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(784), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28489] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1403), 1,
      sym_memory_order,
    STATE(785), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28504] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
    STATE(786), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28519] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1407), 1,
      anon_sym_LPAREN,
    STATE(787), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28534] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1409), 1,
      anon_sym_LPAREN,
    STATE(788), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28549] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(789), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28564] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1413), 1,
      sym_sym,
    STATE(790), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28579] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1415), 1,
      anon_sym_COLON_EQ,
    STATE(791), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28594] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1417), 1,
      anon_sym_COLON,
    STATE(792), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28609] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1419), 1,
      anon_sym_LPAREN,
    STATE(793), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28624] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1421), 1,
      anon_sym_LPAREN,
    STATE(794), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28639] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
    STATE(795), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28654] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1425), 1,
      anon_sym_LPAREN,
    STATE(796), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28669] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1427), 1,
      sym_sym,
    STATE(797), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28684] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1429), 1,
      sym_memory_order,
    STATE(798), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28699] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1431), 1,
      sym_sym,
    STATE(799), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28714] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1433), 1,
      anon_sym_LBRACK,
    STATE(800), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28729] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1435), 1,
      anon_sym_COLON,
    STATE(801), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28744] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    STATE(802), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28759] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1439), 1,
      anon_sym_COLON_EQ,
    STATE(803), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28774] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1441), 1,
      anon_sym_COLON_EQ,
    STATE(804), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28789] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(805), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28804] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1443), 1,
      anon_sym_COLON_EQ,
    STATE(806), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28819] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1445), 1,
      anon_sym_COLON,
    STATE(807), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28834] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
    STATE(808), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28849] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(809), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28864] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    STATE(810), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28879] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1451), 1,
      anon_sym_LPAREN,
    STATE(811), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28894] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1453), 1,
      sym_memory_order,
    STATE(812), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28909] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
    STATE(813), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28924] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1457), 1,
      sym_sym,
    STATE(814), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28939] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1459), 1,
      sym_sym,
    STATE(815), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28954] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1461), 1,
      anon_sym_LPAREN,
    STATE(816), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28969] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
    STATE(817), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28984] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1465), 1,
      anon_sym_in,
    STATE(818), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [28999] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1467), 1,
      anon_sym_COLON,
    STATE(819), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29014] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1469), 1,
      anon_sym_LPAREN,
    STATE(820), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29029] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1471), 1,
      anon_sym_LPAREN,
    STATE(821), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29044] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    STATE(822), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29059] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1475), 1,
      anon_sym_COLON,
    STATE(823), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29074] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1477), 1,
      anon_sym_LPAREN,
    STATE(824), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29089] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1479), 1,
      anon_sym_LPAREN,
    STATE(825), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29104] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1481), 1,
      anon_sym_in,
    STATE(826), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29119] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1483), 1,
      sym_sym,
    STATE(827), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29134] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1485), 1,
      sym_memory_order,
    STATE(828), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29149] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1487), 1,
      anon_sym_LPAREN,
    STATE(829), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29164] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    ACTIONS(1489), 1,
      anon_sym_COLON,
    STATE(830), 1,
      sym_location,
    ACTIONS(5), 3,
      sym_single_line_comment,
      sym_multiline_comment,
      sym_iso_ref,
  [29179] = 1,
    ACTIONS(1491), 1,
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
  [SMALL_STATE(148)] = 14974,
  [SMALL_STATE(149)] = 15019,
  [SMALL_STATE(150)] = 15064,
  [SMALL_STATE(151)] = 15109,
  [SMALL_STATE(152)] = 15154,
  [SMALL_STATE(153)] = 15199,
  [SMALL_STATE(154)] = 15244,
  [SMALL_STATE(155)] = 15289,
  [SMALL_STATE(156)] = 15334,
  [SMALL_STATE(157)] = 15379,
  [SMALL_STATE(158)] = 15424,
  [SMALL_STATE(159)] = 15469,
  [SMALL_STATE(160)] = 15514,
  [SMALL_STATE(161)] = 15559,
  [SMALL_STATE(162)] = 15604,
  [SMALL_STATE(163)] = 15649,
  [SMALL_STATE(164)] = 15694,
  [SMALL_STATE(165)] = 15739,
  [SMALL_STATE(166)] = 15784,
  [SMALL_STATE(167)] = 15835,
  [SMALL_STATE(168)] = 15880,
  [SMALL_STATE(169)] = 15925,
  [SMALL_STATE(170)] = 15970,
  [SMALL_STATE(171)] = 16015,
  [SMALL_STATE(172)] = 16060,
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
  [SMALL_STATE(184)] = 16580,
  [SMALL_STATE(185)] = 16625,
  [SMALL_STATE(186)] = 16676,
  [SMALL_STATE(187)] = 16705,
  [SMALL_STATE(188)] = 16750,
  [SMALL_STATE(189)] = 16795,
  [SMALL_STATE(190)] = 16826,
  [SMALL_STATE(191)] = 16857,
  [SMALL_STATE(192)] = 16902,
  [SMALL_STATE(193)] = 16931,
  [SMALL_STATE(194)] = 16960,
  [SMALL_STATE(195)] = 16989,
  [SMALL_STATE(196)] = 17034,
  [SMALL_STATE(197)] = 17085,
  [SMALL_STATE(198)] = 17130,
  [SMALL_STATE(199)] = 17159,
  [SMALL_STATE(200)] = 17204,
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
  [SMALL_STATE(230)] = 18085,
  [SMALL_STATE(231)] = 18114,
  [SMALL_STATE(232)] = 18138,
  [SMALL_STATE(233)] = 18162,
  [SMALL_STATE(234)] = 18188,
  [SMALL_STATE(235)] = 18209,
  [SMALL_STATE(236)] = 18230,
  [SMALL_STATE(237)] = 18257,
  [SMALL_STATE(238)] = 18286,
  [SMALL_STATE(239)] = 18307,
  [SMALL_STATE(240)] = 18330,
  [SMALL_STATE(241)] = 18351,
  [SMALL_STATE(242)] = 18372,
  [SMALL_STATE(243)] = 18395,
  [SMALL_STATE(244)] = 18418,
  [SMALL_STATE(245)] = 18439,
  [SMALL_STATE(246)] = 18462,
  [SMALL_STATE(247)] = 18489,
  [SMALL_STATE(248)] = 18516,
  [SMALL_STATE(249)] = 18539,
  [SMALL_STATE(250)] = 18560,
  [SMALL_STATE(251)] = 18581,
  [SMALL_STATE(252)] = 18602,
  [SMALL_STATE(253)] = 18623,
  [SMALL_STATE(254)] = 18644,
  [SMALL_STATE(255)] = 18665,
  [SMALL_STATE(256)] = 18690,
  [SMALL_STATE(257)] = 18717,
  [SMALL_STATE(258)] = 18738,
  [SMALL_STATE(259)] = 18759,
  [SMALL_STATE(260)] = 18786,
  [SMALL_STATE(261)] = 18807,
  [SMALL_STATE(262)] = 18828,
  [SMALL_STATE(263)] = 18853,
  [SMALL_STATE(264)] = 18874,
  [SMALL_STATE(265)] = 18901,
  [SMALL_STATE(266)] = 18924,
  [SMALL_STATE(267)] = 18955,
  [SMALL_STATE(268)] = 18976,
  [SMALL_STATE(269)] = 18999,
  [SMALL_STATE(270)] = 19020,
  [SMALL_STATE(271)] = 19047,
  [SMALL_STATE(272)] = 19071,
  [SMALL_STATE(273)] = 19097,
  [SMALL_STATE(274)] = 19119,
  [SMALL_STATE(275)] = 19141,
  [SMALL_STATE(276)] = 19163,
  [SMALL_STATE(277)] = 19185,
  [SMALL_STATE(278)] = 19207,
  [SMALL_STATE(279)] = 19229,
  [SMALL_STATE(280)] = 19251,
  [SMALL_STATE(281)] = 19273,
  [SMALL_STATE(282)] = 19295,
  [SMALL_STATE(283)] = 19317,
  [SMALL_STATE(284)] = 19339,
  [SMALL_STATE(285)] = 19361,
  [SMALL_STATE(286)] = 19383,
  [SMALL_STATE(287)] = 19405,
  [SMALL_STATE(288)] = 19427,
  [SMALL_STATE(289)] = 19449,
  [SMALL_STATE(290)] = 19471,
  [SMALL_STATE(291)] = 19493,
  [SMALL_STATE(292)] = 19515,
  [SMALL_STATE(293)] = 19537,
  [SMALL_STATE(294)] = 19559,
  [SMALL_STATE(295)] = 19581,
  [SMALL_STATE(296)] = 19603,
  [SMALL_STATE(297)] = 19625,
  [SMALL_STATE(298)] = 19647,
  [SMALL_STATE(299)] = 19669,
  [SMALL_STATE(300)] = 19691,
  [SMALL_STATE(301)] = 19718,
  [SMALL_STATE(302)] = 19743,
  [SMALL_STATE(303)] = 19770,
  [SMALL_STATE(304)] = 19791,
  [SMALL_STATE(305)] = 19818,
  [SMALL_STATE(306)] = 19845,
  [SMALL_STATE(307)] = 19872,
  [SMALL_STATE(308)] = 19899,
  [SMALL_STATE(309)] = 19920,
  [SMALL_STATE(310)] = 19941,
  [SMALL_STATE(311)] = 19960,
  [SMALL_STATE(312)] = 19979,
  [SMALL_STATE(313)] = 20000,
  [SMALL_STATE(314)] = 20021,
  [SMALL_STATE(315)] = 20046,
  [SMALL_STATE(316)] = 20067,
  [SMALL_STATE(317)] = 20094,
  [SMALL_STATE(318)] = 20121,
  [SMALL_STATE(319)] = 20142,
  [SMALL_STATE(320)] = 20169,
  [SMALL_STATE(321)] = 20188,
  [SMALL_STATE(322)] = 20207,
  [SMALL_STATE(323)] = 20234,
  [SMALL_STATE(324)] = 20255,
  [SMALL_STATE(325)] = 20274,
  [SMALL_STATE(326)] = 20299,
  [SMALL_STATE(327)] = 20318,
  [SMALL_STATE(328)] = 20339,
  [SMALL_STATE(329)] = 20358,
  [SMALL_STATE(330)] = 20377,
  [SMALL_STATE(331)] = 20396,
  [SMALL_STATE(332)] = 20415,
  [SMALL_STATE(333)] = 20442,
  [SMALL_STATE(334)] = 20469,
  [SMALL_STATE(335)] = 20488,
  [SMALL_STATE(336)] = 20507,
  [SMALL_STATE(337)] = 20534,
  [SMALL_STATE(338)] = 20553,
  [SMALL_STATE(339)] = 20572,
  [SMALL_STATE(340)] = 20591,
  [SMALL_STATE(341)] = 20610,
  [SMALL_STATE(342)] = 20635,
  [SMALL_STATE(343)] = 20654,
  [SMALL_STATE(344)] = 20673,
  [SMALL_STATE(345)] = 20700,
  [SMALL_STATE(346)] = 20723,
  [SMALL_STATE(347)] = 20748,
  [SMALL_STATE(348)] = 20775,
  [SMALL_STATE(349)] = 20800,
  [SMALL_STATE(350)] = 20827,
  [SMALL_STATE(351)] = 20854,
  [SMALL_STATE(352)] = 20875,
  [SMALL_STATE(353)] = 20894,
  [SMALL_STATE(354)] = 20916,
  [SMALL_STATE(355)] = 20934,
  [SMALL_STATE(356)] = 20954,
  [SMALL_STATE(357)] = 20976,
  [SMALL_STATE(358)] = 20998,
  [SMALL_STATE(359)] = 21016,
  [SMALL_STATE(360)] = 21040,
  [SMALL_STATE(361)] = 21064,
  [SMALL_STATE(362)] = 21088,
  [SMALL_STATE(363)] = 21106,
  [SMALL_STATE(364)] = 21124,
  [SMALL_STATE(365)] = 21148,
  [SMALL_STATE(366)] = 21172,
  [SMALL_STATE(367)] = 21192,
  [SMALL_STATE(368)] = 21214,
  [SMALL_STATE(369)] = 21234,
  [SMALL_STATE(370)] = 21254,
  [SMALL_STATE(371)] = 21278,
  [SMALL_STATE(372)] = 21302,
  [SMALL_STATE(373)] = 21326,
  [SMALL_STATE(374)] = 21344,
  [SMALL_STATE(375)] = 21368,
  [SMALL_STATE(376)] = 21390,
  [SMALL_STATE(377)] = 21410,
  [SMALL_STATE(378)] = 21428,
  [SMALL_STATE(379)] = 21450,
  [SMALL_STATE(380)] = 21472,
  [SMALL_STATE(381)] = 21496,
  [SMALL_STATE(382)] = 21520,
  [SMALL_STATE(383)] = 21541,
  [SMALL_STATE(384)] = 21562,
  [SMALL_STATE(385)] = 21583,
  [SMALL_STATE(386)] = 21604,
  [SMALL_STATE(387)] = 21625,
  [SMALL_STATE(388)] = 21646,
  [SMALL_STATE(389)] = 21667,
  [SMALL_STATE(390)] = 21688,
  [SMALL_STATE(391)] = 21707,
  [SMALL_STATE(392)] = 21728,
  [SMALL_STATE(393)] = 21749,
  [SMALL_STATE(394)] = 21770,
  [SMALL_STATE(395)] = 21791,
  [SMALL_STATE(396)] = 21812,
  [SMALL_STATE(397)] = 21833,
  [SMALL_STATE(398)] = 21854,
  [SMALL_STATE(399)] = 21875,
  [SMALL_STATE(400)] = 21894,
  [SMALL_STATE(401)] = 21915,
  [SMALL_STATE(402)] = 21936,
  [SMALL_STATE(403)] = 21957,
  [SMALL_STATE(404)] = 21978,
  [SMALL_STATE(405)] = 21999,
  [SMALL_STATE(406)] = 22020,
  [SMALL_STATE(407)] = 22041,
  [SMALL_STATE(408)] = 22062,
  [SMALL_STATE(409)] = 22083,
  [SMALL_STATE(410)] = 22104,
  [SMALL_STATE(411)] = 22125,
  [SMALL_STATE(412)] = 22146,
  [SMALL_STATE(413)] = 22167,
  [SMALL_STATE(414)] = 22188,
  [SMALL_STATE(415)] = 22209,
  [SMALL_STATE(416)] = 22230,
  [SMALL_STATE(417)] = 22251,
  [SMALL_STATE(418)] = 22272,
  [SMALL_STATE(419)] = 22293,
  [SMALL_STATE(420)] = 22314,
  [SMALL_STATE(421)] = 22335,
  [SMALL_STATE(422)] = 22356,
  [SMALL_STATE(423)] = 22377,
  [SMALL_STATE(424)] = 22398,
  [SMALL_STATE(425)] = 22419,
  [SMALL_STATE(426)] = 22440,
  [SMALL_STATE(427)] = 22461,
  [SMALL_STATE(428)] = 22480,
  [SMALL_STATE(429)] = 22501,
  [SMALL_STATE(430)] = 22522,
  [SMALL_STATE(431)] = 22543,
  [SMALL_STATE(432)] = 22562,
  [SMALL_STATE(433)] = 22581,
  [SMALL_STATE(434)] = 22600,
  [SMALL_STATE(435)] = 22621,
  [SMALL_STATE(436)] = 22642,
  [SMALL_STATE(437)] = 22663,
  [SMALL_STATE(438)] = 22684,
  [SMALL_STATE(439)] = 22705,
  [SMALL_STATE(440)] = 22726,
  [SMALL_STATE(441)] = 22745,
  [SMALL_STATE(442)] = 22766,
  [SMALL_STATE(443)] = 22787,
  [SMALL_STATE(444)] = 22808,
  [SMALL_STATE(445)] = 22829,
  [SMALL_STATE(446)] = 22850,
  [SMALL_STATE(447)] = 22871,
  [SMALL_STATE(448)] = 22892,
  [SMALL_STATE(449)] = 22911,
  [SMALL_STATE(450)] = 22932,
  [SMALL_STATE(451)] = 22953,
  [SMALL_STATE(452)] = 22974,
  [SMALL_STATE(453)] = 22995,
  [SMALL_STATE(454)] = 23016,
  [SMALL_STATE(455)] = 23037,
  [SMALL_STATE(456)] = 23058,
  [SMALL_STATE(457)] = 23079,
  [SMALL_STATE(458)] = 23100,
  [SMALL_STATE(459)] = 23121,
  [SMALL_STATE(460)] = 23142,
  [SMALL_STATE(461)] = 23163,
  [SMALL_STATE(462)] = 23184,
  [SMALL_STATE(463)] = 23205,
  [SMALL_STATE(464)] = 23226,
  [SMALL_STATE(465)] = 23247,
  [SMALL_STATE(466)] = 23268,
  [SMALL_STATE(467)] = 23287,
  [SMALL_STATE(468)] = 23308,
  [SMALL_STATE(469)] = 23329,
  [SMALL_STATE(470)] = 23350,
  [SMALL_STATE(471)] = 23369,
  [SMALL_STATE(472)] = 23390,
  [SMALL_STATE(473)] = 23411,
  [SMALL_STATE(474)] = 23432,
  [SMALL_STATE(475)] = 23451,
  [SMALL_STATE(476)] = 23472,
  [SMALL_STATE(477)] = 23493,
  [SMALL_STATE(478)] = 23512,
  [SMALL_STATE(479)] = 23533,
  [SMALL_STATE(480)] = 23554,
  [SMALL_STATE(481)] = 23573,
  [SMALL_STATE(482)] = 23592,
  [SMALL_STATE(483)] = 23613,
  [SMALL_STATE(484)] = 23634,
  [SMALL_STATE(485)] = 23655,
  [SMALL_STATE(486)] = 23676,
  [SMALL_STATE(487)] = 23697,
  [SMALL_STATE(488)] = 23718,
  [SMALL_STATE(489)] = 23739,
  [SMALL_STATE(490)] = 23760,
  [SMALL_STATE(491)] = 23781,
  [SMALL_STATE(492)] = 23802,
  [SMALL_STATE(493)] = 23823,
  [SMALL_STATE(494)] = 23844,
  [SMALL_STATE(495)] = 23865,
  [SMALL_STATE(496)] = 23886,
  [SMALL_STATE(497)] = 23907,
  [SMALL_STATE(498)] = 23928,
  [SMALL_STATE(499)] = 23949,
  [SMALL_STATE(500)] = 23968,
  [SMALL_STATE(501)] = 23987,
  [SMALL_STATE(502)] = 24008,
  [SMALL_STATE(503)] = 24029,
  [SMALL_STATE(504)] = 24050,
  [SMALL_STATE(505)] = 24071,
  [SMALL_STATE(506)] = 24092,
  [SMALL_STATE(507)] = 24113,
  [SMALL_STATE(508)] = 24134,
  [SMALL_STATE(509)] = 24155,
  [SMALL_STATE(510)] = 24176,
  [SMALL_STATE(511)] = 24197,
  [SMALL_STATE(512)] = 24213,
  [SMALL_STATE(513)] = 24231,
  [SMALL_STATE(514)] = 24249,
  [SMALL_STATE(515)] = 24267,
  [SMALL_STATE(516)] = 24285,
  [SMALL_STATE(517)] = 24303,
  [SMALL_STATE(518)] = 24321,
  [SMALL_STATE(519)] = 24339,
  [SMALL_STATE(520)] = 24357,
  [SMALL_STATE(521)] = 24375,
  [SMALL_STATE(522)] = 24393,
  [SMALL_STATE(523)] = 24409,
  [SMALL_STATE(524)] = 24425,
  [SMALL_STATE(525)] = 24441,
  [SMALL_STATE(526)] = 24457,
  [SMALL_STATE(527)] = 24473,
  [SMALL_STATE(528)] = 24489,
  [SMALL_STATE(529)] = 24505,
  [SMALL_STATE(530)] = 24523,
  [SMALL_STATE(531)] = 24539,
  [SMALL_STATE(532)] = 24557,
  [SMALL_STATE(533)] = 24575,
  [SMALL_STATE(534)] = 24591,
  [SMALL_STATE(535)] = 24609,
  [SMALL_STATE(536)] = 24627,
  [SMALL_STATE(537)] = 24645,
  [SMALL_STATE(538)] = 24663,
  [SMALL_STATE(539)] = 24681,
  [SMALL_STATE(540)] = 24699,
  [SMALL_STATE(541)] = 24715,
  [SMALL_STATE(542)] = 24733,
  [SMALL_STATE(543)] = 24751,
  [SMALL_STATE(544)] = 24769,
  [SMALL_STATE(545)] = 24787,
  [SMALL_STATE(546)] = 24805,
  [SMALL_STATE(547)] = 24823,
  [SMALL_STATE(548)] = 24841,
  [SMALL_STATE(549)] = 24857,
  [SMALL_STATE(550)] = 24873,
  [SMALL_STATE(551)] = 24889,
  [SMALL_STATE(552)] = 24907,
  [SMALL_STATE(553)] = 24925,
  [SMALL_STATE(554)] = 24943,
  [SMALL_STATE(555)] = 24961,
  [SMALL_STATE(556)] = 24979,
  [SMALL_STATE(557)] = 24997,
  [SMALL_STATE(558)] = 25015,
  [SMALL_STATE(559)] = 25033,
  [SMALL_STATE(560)] = 25051,
  [SMALL_STATE(561)] = 25069,
  [SMALL_STATE(562)] = 25087,
  [SMALL_STATE(563)] = 25105,
  [SMALL_STATE(564)] = 25123,
  [SMALL_STATE(565)] = 25139,
  [SMALL_STATE(566)] = 25157,
  [SMALL_STATE(567)] = 25175,
  [SMALL_STATE(568)] = 25193,
  [SMALL_STATE(569)] = 25209,
  [SMALL_STATE(570)] = 25227,
  [SMALL_STATE(571)] = 25245,
  [SMALL_STATE(572)] = 25263,
  [SMALL_STATE(573)] = 25281,
  [SMALL_STATE(574)] = 25299,
  [SMALL_STATE(575)] = 25317,
  [SMALL_STATE(576)] = 25335,
  [SMALL_STATE(577)] = 25353,
  [SMALL_STATE(578)] = 25371,
  [SMALL_STATE(579)] = 25389,
  [SMALL_STATE(580)] = 25407,
  [SMALL_STATE(581)] = 25425,
  [SMALL_STATE(582)] = 25443,
  [SMALL_STATE(583)] = 25459,
  [SMALL_STATE(584)] = 25474,
  [SMALL_STATE(585)] = 25489,
  [SMALL_STATE(586)] = 25504,
  [SMALL_STATE(587)] = 25519,
  [SMALL_STATE(588)] = 25534,
  [SMALL_STATE(589)] = 25549,
  [SMALL_STATE(590)] = 25564,
  [SMALL_STATE(591)] = 25579,
  [SMALL_STATE(592)] = 25594,
  [SMALL_STATE(593)] = 25609,
  [SMALL_STATE(594)] = 25624,
  [SMALL_STATE(595)] = 25639,
  [SMALL_STATE(596)] = 25654,
  [SMALL_STATE(597)] = 25669,
  [SMALL_STATE(598)] = 25684,
  [SMALL_STATE(599)] = 25699,
  [SMALL_STATE(600)] = 25714,
  [SMALL_STATE(601)] = 25729,
  [SMALL_STATE(602)] = 25744,
  [SMALL_STATE(603)] = 25759,
  [SMALL_STATE(604)] = 25774,
  [SMALL_STATE(605)] = 25789,
  [SMALL_STATE(606)] = 25804,
  [SMALL_STATE(607)] = 25819,
  [SMALL_STATE(608)] = 25834,
  [SMALL_STATE(609)] = 25849,
  [SMALL_STATE(610)] = 25864,
  [SMALL_STATE(611)] = 25879,
  [SMALL_STATE(612)] = 25894,
  [SMALL_STATE(613)] = 25909,
  [SMALL_STATE(614)] = 25924,
  [SMALL_STATE(615)] = 25939,
  [SMALL_STATE(616)] = 25954,
  [SMALL_STATE(617)] = 25969,
  [SMALL_STATE(618)] = 25984,
  [SMALL_STATE(619)] = 25999,
  [SMALL_STATE(620)] = 26014,
  [SMALL_STATE(621)] = 26029,
  [SMALL_STATE(622)] = 26044,
  [SMALL_STATE(623)] = 26059,
  [SMALL_STATE(624)] = 26074,
  [SMALL_STATE(625)] = 26089,
  [SMALL_STATE(626)] = 26104,
  [SMALL_STATE(627)] = 26119,
  [SMALL_STATE(628)] = 26134,
  [SMALL_STATE(629)] = 26149,
  [SMALL_STATE(630)] = 26164,
  [SMALL_STATE(631)] = 26179,
  [SMALL_STATE(632)] = 26194,
  [SMALL_STATE(633)] = 26209,
  [SMALL_STATE(634)] = 26224,
  [SMALL_STATE(635)] = 26239,
  [SMALL_STATE(636)] = 26254,
  [SMALL_STATE(637)] = 26269,
  [SMALL_STATE(638)] = 26284,
  [SMALL_STATE(639)] = 26299,
  [SMALL_STATE(640)] = 26314,
  [SMALL_STATE(641)] = 26329,
  [SMALL_STATE(642)] = 26344,
  [SMALL_STATE(643)] = 26359,
  [SMALL_STATE(644)] = 26374,
  [SMALL_STATE(645)] = 26389,
  [SMALL_STATE(646)] = 26404,
  [SMALL_STATE(647)] = 26419,
  [SMALL_STATE(648)] = 26434,
  [SMALL_STATE(649)] = 26449,
  [SMALL_STATE(650)] = 26464,
  [SMALL_STATE(651)] = 26479,
  [SMALL_STATE(652)] = 26494,
  [SMALL_STATE(653)] = 26509,
  [SMALL_STATE(654)] = 26524,
  [SMALL_STATE(655)] = 26539,
  [SMALL_STATE(656)] = 26554,
  [SMALL_STATE(657)] = 26569,
  [SMALL_STATE(658)] = 26584,
  [SMALL_STATE(659)] = 26599,
  [SMALL_STATE(660)] = 26614,
  [SMALL_STATE(661)] = 26629,
  [SMALL_STATE(662)] = 26644,
  [SMALL_STATE(663)] = 26659,
  [SMALL_STATE(664)] = 26674,
  [SMALL_STATE(665)] = 26689,
  [SMALL_STATE(666)] = 26704,
  [SMALL_STATE(667)] = 26719,
  [SMALL_STATE(668)] = 26734,
  [SMALL_STATE(669)] = 26749,
  [SMALL_STATE(670)] = 26764,
  [SMALL_STATE(671)] = 26779,
  [SMALL_STATE(672)] = 26794,
  [SMALL_STATE(673)] = 26809,
  [SMALL_STATE(674)] = 26824,
  [SMALL_STATE(675)] = 26839,
  [SMALL_STATE(676)] = 26854,
  [SMALL_STATE(677)] = 26869,
  [SMALL_STATE(678)] = 26884,
  [SMALL_STATE(679)] = 26899,
  [SMALL_STATE(680)] = 26914,
  [SMALL_STATE(681)] = 26929,
  [SMALL_STATE(682)] = 26944,
  [SMALL_STATE(683)] = 26959,
  [SMALL_STATE(684)] = 26974,
  [SMALL_STATE(685)] = 26989,
  [SMALL_STATE(686)] = 27004,
  [SMALL_STATE(687)] = 27019,
  [SMALL_STATE(688)] = 27034,
  [SMALL_STATE(689)] = 27049,
  [SMALL_STATE(690)] = 27064,
  [SMALL_STATE(691)] = 27079,
  [SMALL_STATE(692)] = 27094,
  [SMALL_STATE(693)] = 27109,
  [SMALL_STATE(694)] = 27124,
  [SMALL_STATE(695)] = 27139,
  [SMALL_STATE(696)] = 27154,
  [SMALL_STATE(697)] = 27169,
  [SMALL_STATE(698)] = 27184,
  [SMALL_STATE(699)] = 27199,
  [SMALL_STATE(700)] = 27214,
  [SMALL_STATE(701)] = 27229,
  [SMALL_STATE(702)] = 27244,
  [SMALL_STATE(703)] = 27259,
  [SMALL_STATE(704)] = 27274,
  [SMALL_STATE(705)] = 27289,
  [SMALL_STATE(706)] = 27304,
  [SMALL_STATE(707)] = 27319,
  [SMALL_STATE(708)] = 27334,
  [SMALL_STATE(709)] = 27349,
  [SMALL_STATE(710)] = 27364,
  [SMALL_STATE(711)] = 27379,
  [SMALL_STATE(712)] = 27394,
  [SMALL_STATE(713)] = 27409,
  [SMALL_STATE(714)] = 27424,
  [SMALL_STATE(715)] = 27439,
  [SMALL_STATE(716)] = 27454,
  [SMALL_STATE(717)] = 27469,
  [SMALL_STATE(718)] = 27484,
  [SMALL_STATE(719)] = 27499,
  [SMALL_STATE(720)] = 27514,
  [SMALL_STATE(721)] = 27529,
  [SMALL_STATE(722)] = 27544,
  [SMALL_STATE(723)] = 27559,
  [SMALL_STATE(724)] = 27574,
  [SMALL_STATE(725)] = 27589,
  [SMALL_STATE(726)] = 27604,
  [SMALL_STATE(727)] = 27619,
  [SMALL_STATE(728)] = 27634,
  [SMALL_STATE(729)] = 27649,
  [SMALL_STATE(730)] = 27664,
  [SMALL_STATE(731)] = 27679,
  [SMALL_STATE(732)] = 27694,
  [SMALL_STATE(733)] = 27709,
  [SMALL_STATE(734)] = 27724,
  [SMALL_STATE(735)] = 27739,
  [SMALL_STATE(736)] = 27754,
  [SMALL_STATE(737)] = 27769,
  [SMALL_STATE(738)] = 27784,
  [SMALL_STATE(739)] = 27799,
  [SMALL_STATE(740)] = 27814,
  [SMALL_STATE(741)] = 27829,
  [SMALL_STATE(742)] = 27844,
  [SMALL_STATE(743)] = 27859,
  [SMALL_STATE(744)] = 27874,
  [SMALL_STATE(745)] = 27889,
  [SMALL_STATE(746)] = 27904,
  [SMALL_STATE(747)] = 27919,
  [SMALL_STATE(748)] = 27934,
  [SMALL_STATE(749)] = 27949,
  [SMALL_STATE(750)] = 27964,
  [SMALL_STATE(751)] = 27979,
  [SMALL_STATE(752)] = 27994,
  [SMALL_STATE(753)] = 28009,
  [SMALL_STATE(754)] = 28024,
  [SMALL_STATE(755)] = 28039,
  [SMALL_STATE(756)] = 28054,
  [SMALL_STATE(757)] = 28069,
  [SMALL_STATE(758)] = 28084,
  [SMALL_STATE(759)] = 28099,
  [SMALL_STATE(760)] = 28114,
  [SMALL_STATE(761)] = 28129,
  [SMALL_STATE(762)] = 28144,
  [SMALL_STATE(763)] = 28159,
  [SMALL_STATE(764)] = 28174,
  [SMALL_STATE(765)] = 28189,
  [SMALL_STATE(766)] = 28204,
  [SMALL_STATE(767)] = 28219,
  [SMALL_STATE(768)] = 28234,
  [SMALL_STATE(769)] = 28249,
  [SMALL_STATE(770)] = 28264,
  [SMALL_STATE(771)] = 28279,
  [SMALL_STATE(772)] = 28294,
  [SMALL_STATE(773)] = 28309,
  [SMALL_STATE(774)] = 28324,
  [SMALL_STATE(775)] = 28339,
  [SMALL_STATE(776)] = 28354,
  [SMALL_STATE(777)] = 28369,
  [SMALL_STATE(778)] = 28384,
  [SMALL_STATE(779)] = 28399,
  [SMALL_STATE(780)] = 28414,
  [SMALL_STATE(781)] = 28429,
  [SMALL_STATE(782)] = 28444,
  [SMALL_STATE(783)] = 28459,
  [SMALL_STATE(784)] = 28474,
  [SMALL_STATE(785)] = 28489,
  [SMALL_STATE(786)] = 28504,
  [SMALL_STATE(787)] = 28519,
  [SMALL_STATE(788)] = 28534,
  [SMALL_STATE(789)] = 28549,
  [SMALL_STATE(790)] = 28564,
  [SMALL_STATE(791)] = 28579,
  [SMALL_STATE(792)] = 28594,
  [SMALL_STATE(793)] = 28609,
  [SMALL_STATE(794)] = 28624,
  [SMALL_STATE(795)] = 28639,
  [SMALL_STATE(796)] = 28654,
  [SMALL_STATE(797)] = 28669,
  [SMALL_STATE(798)] = 28684,
  [SMALL_STATE(799)] = 28699,
  [SMALL_STATE(800)] = 28714,
  [SMALL_STATE(801)] = 28729,
  [SMALL_STATE(802)] = 28744,
  [SMALL_STATE(803)] = 28759,
  [SMALL_STATE(804)] = 28774,
  [SMALL_STATE(805)] = 28789,
  [SMALL_STATE(806)] = 28804,
  [SMALL_STATE(807)] = 28819,
  [SMALL_STATE(808)] = 28834,
  [SMALL_STATE(809)] = 28849,
  [SMALL_STATE(810)] = 28864,
  [SMALL_STATE(811)] = 28879,
  [SMALL_STATE(812)] = 28894,
  [SMALL_STATE(813)] = 28909,
  [SMALL_STATE(814)] = 28924,
  [SMALL_STATE(815)] = 28939,
  [SMALL_STATE(816)] = 28954,
  [SMALL_STATE(817)] = 28969,
  [SMALL_STATE(818)] = 28984,
  [SMALL_STATE(819)] = 28999,
  [SMALL_STATE(820)] = 29014,
  [SMALL_STATE(821)] = 29029,
  [SMALL_STATE(822)] = 29044,
  [SMALL_STATE(823)] = 29059,
  [SMALL_STATE(824)] = 29074,
  [SMALL_STATE(825)] = 29089,
  [SMALL_STATE(826)] = 29104,
  [SMALL_STATE(827)] = 29119,
  [SMALL_STATE(828)] = 29134,
  [SMALL_STATE(829)] = 29149,
  [SMALL_STATE(830)] = 29164,
  [SMALL_STATE(831)] = 29179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(659),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(593),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 5, 0, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_position, 5, 0, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0), SHIFT_REPEAT(814),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(673),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0), SHIFT_REPEAT(105),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0), SHIFT_REPEAT(551),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_range, 5, 0, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_range, 6, 0, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 0),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 4, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_range, 8, 0, 4),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 5, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1333] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1, 0, 0),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 3, 0, 0),
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
