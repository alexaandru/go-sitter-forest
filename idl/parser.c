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
#define STATE_COUNT 561
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 261
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_short = 1,
  anon_sym_int16 = 2,
  anon_sym_long = 3,
  anon_sym_int32 = 4,
  anon_sym_longlong = 5,
  anon_sym_int64 = 6,
  sym_unsigned_tiny_int = 7,
  sym_boolean_type = 8,
  anon_sym_fixed = 9,
  sym_octet_type = 10,
  sym_signed_tiny_int = 11,
  anon_sym_unsignedshort = 12,
  anon_sym_uint16 = 13,
  anon_sym_unsignedlong = 14,
  anon_sym_uint32 = 15,
  anon_sym_unsignedlonglong = 16,
  anon_sym_uint64 = 17,
  anon_sym_float = 18,
  anon_sym_double = 19,
  anon_sym_longdouble = 20,
  anon_sym_char = 21,
  anon_sym_wchar = 22,
  anon_sym_COLON_COLON = 23,
  anon_sym_string = 24,
  anon_sym_wstring = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_any = 28,
  anon_sym_COMMA = 29,
  anon_sym_sequence = 30,
  anon_sym_map = 31,
  anon_sym_PIPE = 32,
  anon_sym_CARET = 33,
  anon_sym_DOLLAR = 34,
  anon_sym_GT_GT = 35,
  anon_sym_LT_LT = 36,
  anon_sym_PLUS = 37,
  anon_sym_DASH = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_LPAREN = 42,
  anon_sym_RPAREN = 43,
  anon_sym_TILDE = 44,
  anon_sym_L = 45,
  anon_sym_DQUOTE = 46,
  aux_sym_string_literal_token1 = 47,
  anon_sym_SQUOTE = 48,
  aux_sym_char_literal_token1 = 49,
  anon_sym_TRUE = 50,
  anon_sym_FALSE = 51,
  sym_number_literal = 52,
  aux_sym_preproc_call_token1 = 53,
  sym_preproc_directive = 54,
  sym_preproc_arg = 55,
  anon_sym_exception = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_interface = 59,
  anon_sym_local = 60,
  anon_sym_COLON = 61,
  anon_sym_SEMI = 62,
  anon_sym_void = 63,
  anon_sym_in = 64,
  anon_sym_out = 65,
  anon_sym_inout = 66,
  anon_sym_raises = 67,
  anon_sym_readonly = 68,
  anon_sym_attribute = 69,
  anon_sym_getraises = 70,
  anon_sym_setraises = 71,
  anon_sym_bitset = 72,
  anon_sym_bitfield = 73,
  anon_sym_bitmask = 74,
  anon_sym_ATannotation = 75,
  anon_sym_default = 76,
  anon_sym_AT = 77,
  anon_sym_EQ = 78,
  anon_sym_module = 79,
  anon_sym_typename = 80,
  anon_sym_valuetype = 81,
  anon_sym_eventtype = 82,
  anon_sym_struct = 83,
  anon_sym_union = 84,
  anon_sym_enum = 85,
  anon_sym_const = 86,
  anon_sym_alias = 87,
  anon_sym_supports = 88,
  anon_sym_public = 89,
  anon_sym_private = 90,
  anon_sym_factory = 91,
  anon_sym_typedef = 92,
  anon_sym_LBRACK = 93,
  anon_sym_RBRACK = 94,
  anon_sym_ATdefault_literal = 95,
  anon_sym_ATignore_literal_names = 96,
  anon_sym_switch = 97,
  anon_sym_case = 98,
  anon_sym_native = 99,
  anon_sym_POUNDdefine = 100,
  aux_sym_predefine_token1 = 101,
  sym_identifier = 102,
  anon_sym_SLASH_SLASH = 103,
  aux_sym_comment_token1 = 104,
  aux_sym_comment_token2 = 105,
  anon_sym_SLASH_STAR = 106,
  aux_sym_comment_token3 = 107,
  sym_specification = 108,
  sym_signed_short_int = 109,
  sym_signed_long_int = 110,
  sym_signed_longlong_int = 111,
  sym_unsigned_int = 112,
  sym_fixed_pt_const_type = 113,
  sym_integer_type = 114,
  sym_signed_int = 115,
  sym_unsigned_short_int = 116,
  sym_unsigned_long_int = 117,
  sym_unsigned_longlong_int = 118,
  sym_floating_pt_type = 119,
  sym_char_type = 120,
  sym_scoped_name = 121,
  sym_string_type = 122,
  sym_type_spec = 123,
  sym_simple_type_spec = 124,
  sym_base_type_spec = 125,
  sym_any_type = 126,
  sym_fixed_pt_type = 127,
  sym_template_type_spec = 128,
  sym_sequence_type = 129,
  sym_map_type = 130,
  sym_positive_int_const = 131,
  sym_const_expr = 132,
  sym_or_expr = 133,
  sym_xor_expr = 134,
  sym_and_expr = 135,
  sym_shift_expr = 136,
  sym_add_expr = 137,
  sym_mult_expr = 138,
  sym_unary_expr = 139,
  sym_unary_operator = 140,
  sym_literal = 141,
  sym_string_literal = 142,
  sym_char_literal = 143,
  sym_boolean_literal = 144,
  sym_preproc_call = 145,
  sym_except_dcl = 146,
  sym_interface_dcl = 147,
  sym_interface_forward_dcl = 148,
  sym_interface_def = 149,
  sym_interface_header = 150,
  sym_interface_inheritance_spec = 151,
  sym_interface_name = 152,
  sym_interface_body = 153,
  sym_export = 154,
  sym_op_dcl = 155,
  sym_op_type_spec = 156,
  sym_parameter_dcls = 157,
  sym_param_dcl = 158,
  sym_param_attribute = 159,
  sym_raises_expr = 160,
  sym_attr_dcl = 161,
  sym_readonly_attr_spec = 162,
  sym_readonly_attr_declarator = 163,
  sym_attr_spec = 164,
  sym_attr_declarator = 165,
  sym_attr_raises_expr = 166,
  sym_get_excep_expr = 167,
  sym_set_excep_expr = 168,
  sym_exception_list = 169,
  sym_bitset_dcl = 170,
  sym_bitfield = 171,
  sym_bitfield_spec = 172,
  sym_destination_type = 173,
  sym_bitmask_dcl = 174,
  sym_bit_value = 175,
  sym_annotation_dcl = 176,
  sym_annotation_body = 177,
  sym_annotation_member = 178,
  sym_annotation_member_type = 179,
  sym_any_const_type = 180,
  sym_annotation_appl = 181,
  sym_annotation_appl_params = 182,
  sym_annotation_appl_param = 183,
  sym_template_module_dcl = 184,
  sym_formal_parameters = 185,
  sym_formal_parameter = 186,
  sym_formal_parameter_type = 187,
  sym_tpl_definition = 188,
  sym_template_module_inst = 189,
  sym_actual_parameters = 190,
  sym_actual_parameter = 191,
  sym_template_module_ref = 192,
  sym_formal_parameter_names = 193,
  sym_value_dcl = 194,
  sym_value_def = 195,
  sym_value_header = 196,
  sym_value_inheritance_spec = 197,
  sym_value_name = 198,
  sym_value_element = 199,
  sym_state_member = 200,
  sym_init_dcl = 201,
  sym_init_param_dcls = 202,
  sym_init_param_dcl = 203,
  sym_value_forward_dcl = 204,
  sym_typedef_dcl = 205,
  sym_type_declarator = 206,
  sym_any_declarators = 207,
  sym_any_declarator = 208,
  sym_simple_declarator = 209,
  sym_declarator = 210,
  sym_declarators = 211,
  sym_array_declarator = 212,
  sym_fixed_array_size = 213,
  sym_enum_dcl = 214,
  sym_enumerator = 215,
  sym_enum_modifier = 216,
  sym_enum_anno = 217,
  sym_union_forward_dcl = 218,
  sym_union_def = 219,
  sym_case = 220,
  sym_case_label = 221,
  sym_element_spec = 222,
  sym_switch_type_spec = 223,
  sym__definition = 224,
  sym_native_dcl = 225,
  sym_module_dcl = 226,
  sym_struct_forward_dcl = 227,
  sym_struct_def = 228,
  sym_member = 229,
  sym_default = 230,
  sym_predefine = 231,
  sym_const_dcl = 232,
  sym_const_type = 233,
  sym_comment = 234,
  aux_sym_specification_repeat1 = 235,
  aux_sym_specification_repeat2 = 236,
  aux_sym_except_dcl_repeat1 = 237,
  aux_sym_interface_def_repeat1 = 238,
  aux_sym_interface_inheritance_spec_repeat1 = 239,
  aux_sym_interface_body_repeat1 = 240,
  aux_sym_parameter_dcls_repeat1 = 241,
  aux_sym_raises_expr_repeat1 = 242,
  aux_sym_readonly_attr_declarator_repeat1 = 243,
  aux_sym_bitset_dcl_repeat1 = 244,
  aux_sym_bitfield_repeat1 = 245,
  aux_sym_bitmask_dcl_repeat1 = 246,
  aux_sym_annotation_dcl_repeat1 = 247,
  aux_sym_annotation_appl_params_repeat1 = 248,
  aux_sym_template_module_dcl_repeat1 = 249,
  aux_sym_formal_parameters_repeat1 = 250,
  aux_sym_actual_parameters_repeat1 = 251,
  aux_sym_formal_parameter_names_repeat1 = 252,
  aux_sym_value_def_repeat1 = 253,
  aux_sym_init_param_dcls_repeat1 = 254,
  aux_sym_any_declarators_repeat1 = 255,
  aux_sym_declarators_repeat1 = 256,
  aux_sym_array_declarator_repeat1 = 257,
  aux_sym_enum_dcl_repeat1 = 258,
  aux_sym_enumerator_repeat1 = 259,
  aux_sym_union_def_repeat1 = 260,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_short] = "short",
  [anon_sym_int16] = "int16",
  [anon_sym_long] = "long",
  [anon_sym_int32] = "int32",
  [anon_sym_longlong] = "long long",
  [anon_sym_int64] = "int64",
  [sym_unsigned_tiny_int] = "unsigned_tiny_int",
  [sym_boolean_type] = "boolean_type",
  [anon_sym_fixed] = "fixed",
  [sym_octet_type] = "octet_type",
  [sym_signed_tiny_int] = "signed_tiny_int",
  [anon_sym_unsignedshort] = "unsigned short",
  [anon_sym_uint16] = "uint16",
  [anon_sym_unsignedlong] = "unsigned long",
  [anon_sym_uint32] = "uint32",
  [anon_sym_unsignedlonglong] = "unsigned long long",
  [anon_sym_uint64] = "uint64",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_longdouble] = "long double",
  [anon_sym_char] = "char",
  [anon_sym_wchar] = "wchar",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_string] = "string",
  [anon_sym_wstring] = "wstring",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_any] = "any",
  [anon_sym_COMMA] = ",",
  [anon_sym_sequence] = "sequence",
  [anon_sym_map] = "map",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_TILDE] = "~",
  [anon_sym_L] = "L",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_number_literal] = "number_literal",
  [aux_sym_preproc_call_token1] = "preproc_call_token1",
  [sym_preproc_directive] = "preproc_directive",
  [sym_preproc_arg] = "preproc_arg",
  [anon_sym_exception] = "exception",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_interface] = "interface",
  [anon_sym_local] = "local",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_void] = "void",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_raises] = "raises",
  [anon_sym_readonly] = "readonly",
  [anon_sym_attribute] = "attribute",
  [anon_sym_getraises] = "getraises",
  [anon_sym_setraises] = "setraises",
  [anon_sym_bitset] = "bitset",
  [anon_sym_bitfield] = "bitfield",
  [anon_sym_bitmask] = "bitmask",
  [anon_sym_ATannotation] = "@annotation",
  [anon_sym_default] = "default",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_module] = "module",
  [anon_sym_typename] = "typename",
  [anon_sym_valuetype] = "valuetype",
  [anon_sym_eventtype] = "eventtype",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_alias] = "alias",
  [anon_sym_supports] = "supports",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_factory] = "factory",
  [anon_sym_typedef] = "typedef",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_ATdefault_literal] = "@default_literal",
  [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_native] = "native",
  [anon_sym_POUNDdefine] = "#define",
  [aux_sym_predefine_token1] = "predefine_token1",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token3] = "comment_token3",
  [sym_specification] = "specification",
  [sym_signed_short_int] = "signed_short_int",
  [sym_signed_long_int] = "signed_long_int",
  [sym_signed_longlong_int] = "signed_longlong_int",
  [sym_unsigned_int] = "unsigned_int",
  [sym_fixed_pt_const_type] = "fixed_pt_const_type",
  [sym_integer_type] = "integer_type",
  [sym_signed_int] = "signed_int",
  [sym_unsigned_short_int] = "unsigned_short_int",
  [sym_unsigned_long_int] = "unsigned_long_int",
  [sym_unsigned_longlong_int] = "unsigned_longlong_int",
  [sym_floating_pt_type] = "floating_pt_type",
  [sym_char_type] = "char_type",
  [sym_scoped_name] = "scoped_name",
  [sym_string_type] = "string_type",
  [sym_type_spec] = "type_spec",
  [sym_simple_type_spec] = "simple_type_spec",
  [sym_base_type_spec] = "base_type_spec",
  [sym_any_type] = "any_type",
  [sym_fixed_pt_type] = "fixed_pt_type",
  [sym_template_type_spec] = "template_type_spec",
  [sym_sequence_type] = "sequence_type",
  [sym_map_type] = "map_type",
  [sym_positive_int_const] = "positive_int_const",
  [sym_const_expr] = "const_expr",
  [sym_or_expr] = "or_expr",
  [sym_xor_expr] = "xor_expr",
  [sym_and_expr] = "and_expr",
  [sym_shift_expr] = "shift_expr",
  [sym_add_expr] = "add_expr",
  [sym_mult_expr] = "mult_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_unary_operator] = "unary_operator",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_preproc_call] = "preproc_call",
  [sym_except_dcl] = "except_dcl",
  [sym_interface_dcl] = "interface_dcl",
  [sym_interface_forward_dcl] = "interface_forward_dcl",
  [sym_interface_def] = "interface_def",
  [sym_interface_header] = "interface_header",
  [sym_interface_inheritance_spec] = "interface_inheritance_spec",
  [sym_interface_name] = "interface_name",
  [sym_interface_body] = "interface_body",
  [sym_export] = "export",
  [sym_op_dcl] = "op_dcl",
  [sym_op_type_spec] = "op_type_spec",
  [sym_parameter_dcls] = "parameter_dcls",
  [sym_param_dcl] = "param_dcl",
  [sym_param_attribute] = "param_attribute",
  [sym_raises_expr] = "raises_expr",
  [sym_attr_dcl] = "attr_dcl",
  [sym_readonly_attr_spec] = "readonly_attr_spec",
  [sym_readonly_attr_declarator] = "readonly_attr_declarator",
  [sym_attr_spec] = "attr_spec",
  [sym_attr_declarator] = "attr_declarator",
  [sym_attr_raises_expr] = "attr_raises_expr",
  [sym_get_excep_expr] = "get_excep_expr",
  [sym_set_excep_expr] = "set_excep_expr",
  [sym_exception_list] = "exception_list",
  [sym_bitset_dcl] = "bitset_dcl",
  [sym_bitfield] = "bitfield",
  [sym_bitfield_spec] = "bitfield_spec",
  [sym_destination_type] = "destination_type",
  [sym_bitmask_dcl] = "bitmask_dcl",
  [sym_bit_value] = "bit_value",
  [sym_annotation_dcl] = "annotation_dcl",
  [sym_annotation_body] = "annotation_body",
  [sym_annotation_member] = "annotation_member",
  [sym_annotation_member_type] = "annotation_member_type",
  [sym_any_const_type] = "any_const_type",
  [sym_annotation_appl] = "annotation_appl",
  [sym_annotation_appl_params] = "annotation_appl_params",
  [sym_annotation_appl_param] = "annotation_appl_param",
  [sym_template_module_dcl] = "template_module_dcl",
  [sym_formal_parameters] = "formal_parameters",
  [sym_formal_parameter] = "formal_parameter",
  [sym_formal_parameter_type] = "formal_parameter_type",
  [sym_tpl_definition] = "tpl_definition",
  [sym_template_module_inst] = "template_module_inst",
  [sym_actual_parameters] = "actual_parameters",
  [sym_actual_parameter] = "actual_parameter",
  [sym_template_module_ref] = "template_module_ref",
  [sym_formal_parameter_names] = "formal_parameter_names",
  [sym_value_dcl] = "value_dcl",
  [sym_value_def] = "value_def",
  [sym_value_header] = "value_header",
  [sym_value_inheritance_spec] = "value_inheritance_spec",
  [sym_value_name] = "value_name",
  [sym_value_element] = "value_element",
  [sym_state_member] = "state_member",
  [sym_init_dcl] = "init_dcl",
  [sym_init_param_dcls] = "init_param_dcls",
  [sym_init_param_dcl] = "init_param_dcl",
  [sym_value_forward_dcl] = "value_forward_dcl",
  [sym_typedef_dcl] = "typedef_dcl",
  [sym_type_declarator] = "type_declarator",
  [sym_any_declarators] = "any_declarators",
  [sym_any_declarator] = "any_declarator",
  [sym_simple_declarator] = "simple_declarator",
  [sym_declarator] = "declarator",
  [sym_declarators] = "declarators",
  [sym_array_declarator] = "array_declarator",
  [sym_fixed_array_size] = "fixed_array_size",
  [sym_enum_dcl] = "enum_dcl",
  [sym_enumerator] = "enumerator",
  [sym_enum_modifier] = "enum_modifier",
  [sym_enum_anno] = "enum_anno",
  [sym_union_forward_dcl] = "union_forward_dcl",
  [sym_union_def] = "union_def",
  [sym_case] = "case",
  [sym_case_label] = "case_label",
  [sym_element_spec] = "element_spec",
  [sym_switch_type_spec] = "switch_type_spec",
  [sym__definition] = "_definition",
  [sym_native_dcl] = "native_dcl",
  [sym_module_dcl] = "module_dcl",
  [sym_struct_forward_dcl] = "struct_forward_dcl",
  [sym_struct_def] = "struct_def",
  [sym_member] = "member",
  [sym_default] = "default",
  [sym_predefine] = "predefine",
  [sym_const_dcl] = "const_dcl",
  [sym_const_type] = "const_type",
  [sym_comment] = "comment",
  [aux_sym_specification_repeat1] = "specification_repeat1",
  [aux_sym_specification_repeat2] = "specification_repeat2",
  [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
  [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
  [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
  [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
  [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
  [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
  [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
  [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
  [aux_sym_annotation_dcl_repeat1] = "annotation_dcl_repeat1",
  [aux_sym_annotation_appl_params_repeat1] = "annotation_appl_params_repeat1",
  [aux_sym_template_module_dcl_repeat1] = "template_module_dcl_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_actual_parameters_repeat1] = "actual_parameters_repeat1",
  [aux_sym_formal_parameter_names_repeat1] = "formal_parameter_names_repeat1",
  [aux_sym_value_def_repeat1] = "value_def_repeat1",
  [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
  [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
  [aux_sym_declarators_repeat1] = "declarators_repeat1",
  [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
  [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
  [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
  [aux_sym_union_def_repeat1] = "union_def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_longlong] = anon_sym_longlong,
  [anon_sym_int64] = anon_sym_int64,
  [sym_unsigned_tiny_int] = sym_unsigned_tiny_int,
  [sym_boolean_type] = sym_boolean_type,
  [anon_sym_fixed] = anon_sym_fixed,
  [sym_octet_type] = sym_octet_type,
  [sym_signed_tiny_int] = sym_signed_tiny_int,
  [anon_sym_unsignedshort] = anon_sym_unsignedshort,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_unsignedlong] = anon_sym_unsignedlong,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_longdouble] = anon_sym_longdouble,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_wchar] = anon_sym_wchar,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_wstring] = anon_sym_wstring,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_number_literal] = sym_number_literal,
  [aux_sym_preproc_call_token1] = aux_sym_preproc_call_token1,
  [sym_preproc_directive] = sym_preproc_directive,
  [sym_preproc_arg] = sym_preproc_arg,
  [anon_sym_exception] = anon_sym_exception,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_raises] = anon_sym_raises,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_getraises] = anon_sym_getraises,
  [anon_sym_setraises] = anon_sym_setraises,
  [anon_sym_bitset] = anon_sym_bitset,
  [anon_sym_bitfield] = anon_sym_bitfield,
  [anon_sym_bitmask] = anon_sym_bitmask,
  [anon_sym_ATannotation] = anon_sym_ATannotation,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_typename] = anon_sym_typename,
  [anon_sym_valuetype] = anon_sym_valuetype,
  [anon_sym_eventtype] = anon_sym_eventtype,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_supports] = anon_sym_supports,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_factory] = anon_sym_factory,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
  [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [aux_sym_predefine_token1] = aux_sym_predefine_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [sym_specification] = sym_specification,
  [sym_signed_short_int] = sym_signed_short_int,
  [sym_signed_long_int] = sym_signed_long_int,
  [sym_signed_longlong_int] = sym_signed_longlong_int,
  [sym_unsigned_int] = sym_unsigned_int,
  [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
  [sym_integer_type] = sym_integer_type,
  [sym_signed_int] = sym_signed_int,
  [sym_unsigned_short_int] = sym_unsigned_short_int,
  [sym_unsigned_long_int] = sym_unsigned_long_int,
  [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
  [sym_floating_pt_type] = sym_floating_pt_type,
  [sym_char_type] = sym_char_type,
  [sym_scoped_name] = sym_scoped_name,
  [sym_string_type] = sym_string_type,
  [sym_type_spec] = sym_type_spec,
  [sym_simple_type_spec] = sym_simple_type_spec,
  [sym_base_type_spec] = sym_base_type_spec,
  [sym_any_type] = sym_any_type,
  [sym_fixed_pt_type] = sym_fixed_pt_type,
  [sym_template_type_spec] = sym_template_type_spec,
  [sym_sequence_type] = sym_sequence_type,
  [sym_map_type] = sym_map_type,
  [sym_positive_int_const] = sym_positive_int_const,
  [sym_const_expr] = sym_const_expr,
  [sym_or_expr] = sym_or_expr,
  [sym_xor_expr] = sym_xor_expr,
  [sym_and_expr] = sym_and_expr,
  [sym_shift_expr] = sym_shift_expr,
  [sym_add_expr] = sym_add_expr,
  [sym_mult_expr] = sym_mult_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_unary_operator] = sym_unary_operator,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_preproc_call] = sym_preproc_call,
  [sym_except_dcl] = sym_except_dcl,
  [sym_interface_dcl] = sym_interface_dcl,
  [sym_interface_forward_dcl] = sym_interface_forward_dcl,
  [sym_interface_def] = sym_interface_def,
  [sym_interface_header] = sym_interface_header,
  [sym_interface_inheritance_spec] = sym_interface_inheritance_spec,
  [sym_interface_name] = sym_interface_name,
  [sym_interface_body] = sym_interface_body,
  [sym_export] = sym_export,
  [sym_op_dcl] = sym_op_dcl,
  [sym_op_type_spec] = sym_op_type_spec,
  [sym_parameter_dcls] = sym_parameter_dcls,
  [sym_param_dcl] = sym_param_dcl,
  [sym_param_attribute] = sym_param_attribute,
  [sym_raises_expr] = sym_raises_expr,
  [sym_attr_dcl] = sym_attr_dcl,
  [sym_readonly_attr_spec] = sym_readonly_attr_spec,
  [sym_readonly_attr_declarator] = sym_readonly_attr_declarator,
  [sym_attr_spec] = sym_attr_spec,
  [sym_attr_declarator] = sym_attr_declarator,
  [sym_attr_raises_expr] = sym_attr_raises_expr,
  [sym_get_excep_expr] = sym_get_excep_expr,
  [sym_set_excep_expr] = sym_set_excep_expr,
  [sym_exception_list] = sym_exception_list,
  [sym_bitset_dcl] = sym_bitset_dcl,
  [sym_bitfield] = sym_bitfield,
  [sym_bitfield_spec] = sym_bitfield_spec,
  [sym_destination_type] = sym_destination_type,
  [sym_bitmask_dcl] = sym_bitmask_dcl,
  [sym_bit_value] = sym_bit_value,
  [sym_annotation_dcl] = sym_annotation_dcl,
  [sym_annotation_body] = sym_annotation_body,
  [sym_annotation_member] = sym_annotation_member,
  [sym_annotation_member_type] = sym_annotation_member_type,
  [sym_any_const_type] = sym_any_const_type,
  [sym_annotation_appl] = sym_annotation_appl,
  [sym_annotation_appl_params] = sym_annotation_appl_params,
  [sym_annotation_appl_param] = sym_annotation_appl_param,
  [sym_template_module_dcl] = sym_template_module_dcl,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym_formal_parameter_type] = sym_formal_parameter_type,
  [sym_tpl_definition] = sym_tpl_definition,
  [sym_template_module_inst] = sym_template_module_inst,
  [sym_actual_parameters] = sym_actual_parameters,
  [sym_actual_parameter] = sym_actual_parameter,
  [sym_template_module_ref] = sym_template_module_ref,
  [sym_formal_parameter_names] = sym_formal_parameter_names,
  [sym_value_dcl] = sym_value_dcl,
  [sym_value_def] = sym_value_def,
  [sym_value_header] = sym_value_header,
  [sym_value_inheritance_spec] = sym_value_inheritance_spec,
  [sym_value_name] = sym_value_name,
  [sym_value_element] = sym_value_element,
  [sym_state_member] = sym_state_member,
  [sym_init_dcl] = sym_init_dcl,
  [sym_init_param_dcls] = sym_init_param_dcls,
  [sym_init_param_dcl] = sym_init_param_dcl,
  [sym_value_forward_dcl] = sym_value_forward_dcl,
  [sym_typedef_dcl] = sym_typedef_dcl,
  [sym_type_declarator] = sym_type_declarator,
  [sym_any_declarators] = sym_any_declarators,
  [sym_any_declarator] = sym_any_declarator,
  [sym_simple_declarator] = sym_simple_declarator,
  [sym_declarator] = sym_declarator,
  [sym_declarators] = sym_declarators,
  [sym_array_declarator] = sym_array_declarator,
  [sym_fixed_array_size] = sym_fixed_array_size,
  [sym_enum_dcl] = sym_enum_dcl,
  [sym_enumerator] = sym_enumerator,
  [sym_enum_modifier] = sym_enum_modifier,
  [sym_enum_anno] = sym_enum_anno,
  [sym_union_forward_dcl] = sym_union_forward_dcl,
  [sym_union_def] = sym_union_def,
  [sym_case] = sym_case,
  [sym_case_label] = sym_case_label,
  [sym_element_spec] = sym_element_spec,
  [sym_switch_type_spec] = sym_switch_type_spec,
  [sym__definition] = sym__definition,
  [sym_native_dcl] = sym_native_dcl,
  [sym_module_dcl] = sym_module_dcl,
  [sym_struct_forward_dcl] = sym_struct_forward_dcl,
  [sym_struct_def] = sym_struct_def,
  [sym_member] = sym_member,
  [sym_default] = sym_default,
  [sym_predefine] = sym_predefine,
  [sym_const_dcl] = sym_const_dcl,
  [sym_const_type] = sym_const_type,
  [sym_comment] = sym_comment,
  [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
  [aux_sym_specification_repeat2] = aux_sym_specification_repeat2,
  [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
  [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
  [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
  [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
  [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
  [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
  [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
  [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
  [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
  [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
  [aux_sym_annotation_dcl_repeat1] = aux_sym_annotation_dcl_repeat1,
  [aux_sym_annotation_appl_params_repeat1] = aux_sym_annotation_appl_params_repeat1,
  [aux_sym_template_module_dcl_repeat1] = aux_sym_template_module_dcl_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [aux_sym_actual_parameters_repeat1] = aux_sym_actual_parameters_repeat1,
  [aux_sym_formal_parameter_names_repeat1] = aux_sym_formal_parameter_names_repeat1,
  [aux_sym_value_def_repeat1] = aux_sym_value_def_repeat1,
  [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
  [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
  [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
  [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
  [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
  [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
  [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [sym_unsigned_tiny_int] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [sym_octet_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_tiny_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsignedshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsignedlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsignedlonglong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_preproc_call_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_preproc_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exception] = {
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
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getraises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setraises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitfield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitmask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATannotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valuetype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eventtype] = {
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_supports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_factory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
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
  [anon_sym_ATdefault_literal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATignore_literal_names] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_predefine_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_short_int] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_long_int] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_longlong_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_int] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_pt_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_short_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_long_int] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_longlong_int] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_pt_type] = {
    .visible = true,
    .named = true,
  },
  [sym_char_type] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_base_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_any_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_pt_type] = {
    .visible = true,
    .named = true,
  },
  [sym_template_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_int_const] = {
    .visible = true,
    .named = true,
  },
  [sym_const_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_xor_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_add_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_mult_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_call] = {
    .visible = true,
    .named = true,
  },
  [sym_except_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_def] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_header] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_op_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_param_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_raises_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_readonly_attr_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_readonly_attr_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_raises_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_get_excep_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_set_excep_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bitset_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_destination_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bitmask_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_value] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_body] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_member] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_member_type] = {
    .visible = true,
    .named = true,
  },
  [sym_any_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_appl] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_appl_params] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_appl_param] = {
    .visible = true,
    .named = true,
  },
  [sym_template_module_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tpl_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_template_module_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_actual_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_actual_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_template_module_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter_names] = {
    .visible = true,
    .named = true,
  },
  [sym_value_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_value_def] = {
    .visible = true,
    .named = true,
  },
  [sym_value_header] = {
    .visible = true,
    .named = true,
  },
  [sym_value_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_value_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value_element] = {
    .visible = true,
    .named = true,
  },
  [sym_state_member] = {
    .visible = true,
    .named = true,
  },
  [sym_init_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_init_param_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_init_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_value_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_any_declarators] = {
    .visible = true,
    .named = true,
  },
  [sym_any_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_declarators] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_array_size] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_enumerator] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_anno] = {
    .visible = true,
    .named = true,
  },
  [sym_union_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_union_def] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_case_label] = {
    .visible = true,
    .named = true,
  },
  [sym_element_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_native_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_module_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_def] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_predefine] = {
    .visible = true,
    .named = true,
  },
  [sym_const_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_specification_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_except_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_inheritance_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raises_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_readonly_attr_declarator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitset_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitfield_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitmask_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_appl_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_module_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actual_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameter_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_init_param_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_any_declarators_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarators_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_declarator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumerator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_def_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_directive = 2,
  field_identifier = 3,
  field_parent = 4,
  field_type = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_directive] = "directive",
  [field_identifier] = "identifier",
  [field_parent] = "parent",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive, 0},
  [1] =
    {field_argument, 1},
    {field_directive, 0},
  [3] =
    {field_identifier, 1},
    {field_type, 0},
  [5] =
    {field_value, 1},
  [6] =
    {field_parent, 3},
  [7] =
    {field_identifier, 2},
    {field_type, 1},
  [9] =
    {field_value, 2},
  [10] =
    {field_parent, 4},
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
  [55] = 51,
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
  [81] = 80,
  [82] = 80,
  [83] = 80,
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
  [97] = 76,
  [98] = 74,
  [99] = 99,
  [100] = 100,
  [101] = 67,
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
  [149] = 70,
  [150] = 150,
  [151] = 66,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 74,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 67,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 76,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 77,
  [175] = 78,
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
  [204] = 70,
  [205] = 66,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 74,
  [212] = 67,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 76,
  [219] = 70,
  [220] = 66,
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
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 238,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 238,
  [245] = 245,
  [246] = 246,
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
  [257] = 257,
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
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
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
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
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
  [364] = 77,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 78,
  [371] = 371,
  [372] = 372,
  [373] = 77,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 78,
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
  [399] = 190,
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
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
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
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 525,
  [547] = 503,
  [548] = 493,
  [549] = 469,
  [550] = 550,
  [551] = 525,
  [552] = 503,
  [553] = 469,
  [554] = 554,
  [555] = 525,
  [556] = 469,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
};

static inline bool sym_number_literal_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : c <= 'F')
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'u'
      ? (c < 'l'
        ? (c >= 'd' && c <= 'f')
        : c <= 'l')
      : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : (c <= 'D' || c == 'F'))
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'l'
      ? (c < 'f'
        ? c == 'd'
        : c <= 'f')
      : (c <= 'l' || (c < 'w'
        ? c == 'u'
        : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(413);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '$') ADVANCE(473);
      if (lookahead == '%') ADVANCE(482);
      if (lookahead == '\'') ADVANCE(490);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '/') ADVANCE(481);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '<') ADVANCE(461);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(492);
      if (lookahead == 'L') ADVANCE(486);
      if (lookahead == 'T') ADVANCE(493);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '\\') SKIP(406)
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'g') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == 'u') ADVANCE(506);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == 'w') ADVANCE(500);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(563);
      if (lookahead == '~') ADVANCE(485);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(63)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(858);
      if (lookahead == '\r') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(860);
      if (lookahead != 0) ADVANCE(859);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == '\r') ADVANCE(42);
      if (lookahead == '/') ADVANCE(556);
      if (lookahead == '\\') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(77)
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == '\r') ADVANCE(41);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(48)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(48)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(547);
      if (lookahead == '/') ADVANCE(556);
      if (lookahead == '\\') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(47)
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\'') ADVANCE(490);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(524);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(487);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'w') ADVANCE(671);
      if (lookahead == '~') ADVANCE(485);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\'') ADVANCE(490);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == '+') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(524);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(487);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '~') ADVANCE(485);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 54:
      if (lookahead == '$') ADVANCE(473);
      if (lookahead == '%') ADVANCE(482);
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '/') ADVANCE(481);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '<') ADVANCE(461);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '|') ADVANCE(471);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '$') ADVANCE(473);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '>') ADVANCE(462);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '|') ADVANCE(471);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '>') ADVANCE(462);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(483);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '>') ADVANCE(462);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'w') ADVANCE(671);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 58:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'i') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(862);
      if (lookahead == '/') ADVANCE(851);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(866);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(866);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(863);
      if (lookahead == '/') ADVANCE(852);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '>') ADVANCE(462);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'b') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 'p') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == 't') ADVANCE(845);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead == 'v') ADVANCE(776);
      if (lookahead == 'w') ADVANCE(671);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '0') ADVANCE(521);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'b') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == 't') ADVANCE(845);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead == 'v') ADVANCE(776);
      if (lookahead == 'w') ADVANCE(671);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(659);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead == 'w') ADVANCE(671);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead == 'w') ADVANCE(671);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(222);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead == 't') ADVANCE(845);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'w') ADVANCE(671);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'f') ADVANCE(744);
      if (lookahead == 'i') ADVANCE(769);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead == 't') ADVANCE(846);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead == 'v') ADVANCE(662);
      if (lookahead == 'w') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'w') ADVANCE(671);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'l') ADVANCE(785);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'w') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 's') ADVANCE(840);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(44)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(50)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(48)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 77:
      if (lookahead == '/') ADVANCE(556);
      if (lookahead == '\\') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 78:
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == '8') ADVANCE(427);
      END_STATE();
    case 79:
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '3') ADVANCE(81);
      if (lookahead == '6') ADVANCE(83);
      if (lookahead == '8') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 80:
      if (lookahead == '2') ADVANCE(441);
      END_STATE();
    case 81:
      if (lookahead == '2') ADVANCE(422);
      END_STATE();
    case 82:
      if (lookahead == '4') ADVANCE(444);
      END_STATE();
    case 83:
      if (lookahead == '4') ADVANCE(425);
      END_STATE();
    case 84:
      if (lookahead == '6') ADVANCE(438);
      END_STATE();
    case 85:
      if (lookahead == '6') ADVANCE(416);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(455);
      END_STATE();
    case 87:
      if (lookahead == '<') ADVANCE(475);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(513);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(515);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(239);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(384);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(242);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(585);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(617);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(456);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(458);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(424);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(440);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(443);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(420);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(623);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(586);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(605);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 253:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 301:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 303:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 304:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 308:
      if (lookahead == 'q') ADVANCE(379);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 379:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 380:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 381:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 382:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 383:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 384:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 385:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 386:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 387:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 388:
      if (lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 389:
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 390:
      if (lookahead == 'y') ADVANCE(464);
      END_STATE();
    case 391:
      if (lookahead == 'y') ADVANCE(615);
      END_STATE();
    case 392:
      if (lookahead == 'y') ADVANCE(577);
      END_STATE();
    case 393:
      if (lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 394:
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 395:
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 396:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 397:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 398:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 399:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 400:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 401:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 402:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      END_STATE();
    case 403:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(860);
      END_STATE();
    case 404:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(557);
      END_STATE();
    case 405:
      if (eof) ADVANCE(413);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 406:
      if (eof) ADVANCE(413);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(405)
      END_STATE();
    case 407:
      if (eof) ADVANCE(413);
      if (lookahead == '\n') SKIP(411)
      END_STATE();
    case 408:
      if (eof) ADVANCE(413);
      if (lookahead == '\n') SKIP(411)
      if (lookahead == '\r') SKIP(407)
      END_STATE();
    case 409:
      if (eof) ADVANCE(413);
      if (lookahead == '\n') SKIP(412)
      END_STATE();
    case 410:
      if (eof) ADVANCE(413);
      if (lookahead == '\n') SKIP(412)
      if (lookahead == '\r') SKIP(409)
      END_STATE();
    case 411:
      if (eof) ADVANCE(413);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '$') ADVANCE(473);
      if (lookahead == '%') ADVANCE(482);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '/') ADVANCE(481);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(592);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '\\') SKIP(408)
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(411)
      END_STATE();
    case 412:
      if (eof) ADVANCE(413);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(473);
      if (lookahead == '%') ADVANCE(482);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead == '+') ADVANCE(476);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '/') ADVANCE(481);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == ';') ADVANCE(569);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(592);
      if (lookahead == '\\') SKIP(410)
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '^') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(563);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(412)
      END_STATE();
    case 413:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(475);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(474);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '0') ADVANCE(525);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '0') ADVANCE(525);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(862);
      if (lookahead == '/') ADVANCE(851);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(546);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(518);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(849);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(535);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(536);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(537);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(537);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(538);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(636);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(540);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(539);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(541);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(543);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(849);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(540);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(401);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(541);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(546);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(535);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(537);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(535);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(537);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '0') ADVANCE(526);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '0') ADVANCE(527);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(546);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(518);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(519);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(531);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(546);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') ADVANCE(555);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(558);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(558);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(862);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(557);
      if (lookahead == '\r') ADVANCE(559);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(557);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(558);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(455);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(865);
      if (lookahead == '/') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(632);
      if (lookahead == '\\') ADVANCE(631);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '0') ADVANCE(520);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(644);
      if (lookahead == '3') ADVANCE(640);
      if (lookahead == '6') ADVANCE(642);
      if (lookahead == '8') ADVANCE(436);
      if (lookahead == 'e') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(644);
      if (lookahead == '3') ADVANCE(640);
      if (lookahead == '6') ADVANCE(642);
      if (lookahead == '8') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(645);
      if (lookahead == '3') ADVANCE(641);
      if (lookahead == '6') ADVANCE(643);
      if (lookahead == '8') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'h') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'l') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(792);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead == 't') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(792);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(792);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead == 't') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(657);
      if (lookahead == 'o') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'l') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'o') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == 'n') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead == 's') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(655);
      if (lookahead == 's') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(842);
      if (lookahead == 't') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'v') ADVANCE(711);
      if (lookahead == 'x') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'x') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(859);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(855);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '@') ADVANCE(591);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead != 0) ADVANCE(859);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(864);
      if (lookahead == '/') ADVANCE(853);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead == '@') ADVANCE(591);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(859);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(859);
      if (lookahead == '\r') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(403);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(61);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(859);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(634);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 411},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 412},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 411},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 412},
  [41] = {.lex_state = 412},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 412},
  [44] = {.lex_state = 412},
  [45] = {.lex_state = 412},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 412},
  [54] = {.lex_state = 412},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 70},
  [58] = {.lex_state = 70},
  [59] = {.lex_state = 66},
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 68},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 68},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 53},
  [85] = {.lex_state = 53},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 53},
  [88] = {.lex_state = 53},
  [89] = {.lex_state = 53},
  [90] = {.lex_state = 53},
  [91] = {.lex_state = 53},
  [92] = {.lex_state = 53},
  [93] = {.lex_state = 53},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 411},
  [96] = {.lex_state = 53},
  [97] = {.lex_state = 54},
  [98] = {.lex_state = 54},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 53},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 53},
  [103] = {.lex_state = 53},
  [104] = {.lex_state = 53},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 411},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 412},
  [109] = {.lex_state = 412},
  [110] = {.lex_state = 412},
  [111] = {.lex_state = 411},
  [112] = {.lex_state = 412},
  [113] = {.lex_state = 411},
  [114] = {.lex_state = 412},
  [115] = {.lex_state = 412},
  [116] = {.lex_state = 411},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 412},
  [119] = {.lex_state = 411},
  [120] = {.lex_state = 411},
  [121] = {.lex_state = 412},
  [122] = {.lex_state = 412},
  [123] = {.lex_state = 412},
  [124] = {.lex_state = 412},
  [125] = {.lex_state = 412},
  [126] = {.lex_state = 412},
  [127] = {.lex_state = 412},
  [128] = {.lex_state = 412},
  [129] = {.lex_state = 412},
  [130] = {.lex_state = 412},
  [131] = {.lex_state = 412},
  [132] = {.lex_state = 412},
  [133] = {.lex_state = 412},
  [134] = {.lex_state = 412},
  [135] = {.lex_state = 53},
  [136] = {.lex_state = 411},
  [137] = {.lex_state = 412},
  [138] = {.lex_state = 412},
  [139] = {.lex_state = 411},
  [140] = {.lex_state = 412},
  [141] = {.lex_state = 412},
  [142] = {.lex_state = 55},
  [143] = {.lex_state = 55},
  [144] = {.lex_state = 53},
  [145] = {.lex_state = 54},
  [146] = {.lex_state = 55},
  [147] = {.lex_state = 55},
  [148] = {.lex_state = 411},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 54},
  [152] = {.lex_state = 55},
  [153] = {.lex_state = 411},
  [154] = {.lex_state = 411},
  [155] = {.lex_state = 56},
  [156] = {.lex_state = 72},
  [157] = {.lex_state = 411},
  [158] = {.lex_state = 411},
  [159] = {.lex_state = 72},
  [160] = {.lex_state = 56},
  [161] = {.lex_state = 411},
  [162] = {.lex_state = 411},
  [163] = {.lex_state = 56},
  [164] = {.lex_state = 56},
  [165] = {.lex_state = 56},
  [166] = {.lex_state = 411},
  [167] = {.lex_state = 72},
  [168] = {.lex_state = 56},
  [169] = {.lex_state = 56},
  [170] = {.lex_state = 56},
  [171] = {.lex_state = 411},
  [172] = {.lex_state = 55},
  [173] = {.lex_state = 411},
  [174] = {.lex_state = 54},
  [175] = {.lex_state = 54},
  [176] = {.lex_state = 411},
  [177] = {.lex_state = 411},
  [178] = {.lex_state = 411},
  [179] = {.lex_state = 56},
  [180] = {.lex_state = 56},
  [181] = {.lex_state = 54},
  [182] = {.lex_state = 412},
  [183] = {.lex_state = 411},
  [184] = {.lex_state = 56},
  [185] = {.lex_state = 56},
  [186] = {.lex_state = 56},
  [187] = {.lex_state = 56},
  [188] = {.lex_state = 858},
  [189] = {.lex_state = 411},
  [190] = {.lex_state = 56},
  [191] = {.lex_state = 56},
  [192] = {.lex_state = 56},
  [193] = {.lex_state = 56},
  [194] = {.lex_state = 56},
  [195] = {.lex_state = 56},
  [196] = {.lex_state = 56},
  [197] = {.lex_state = 56},
  [198] = {.lex_state = 56},
  [199] = {.lex_state = 56},
  [200] = {.lex_state = 56},
  [201] = {.lex_state = 72},
  [202] = {.lex_state = 56},
  [203] = {.lex_state = 56},
  [204] = {.lex_state = 34},
  [205] = {.lex_state = 34},
  [206] = {.lex_state = 58},
  [207] = {.lex_state = 56},
  [208] = {.lex_state = 56},
  [209] = {.lex_state = 412},
  [210] = {.lex_state = 34},
  [211] = {.lex_state = 34},
  [212] = {.lex_state = 34},
  [213] = {.lex_state = 411},
  [214] = {.lex_state = 56},
  [215] = {.lex_state = 56},
  [216] = {.lex_state = 72},
  [217] = {.lex_state = 56},
  [218] = {.lex_state = 34},
  [219] = {.lex_state = 56},
  [220] = {.lex_state = 56},
  [221] = {.lex_state = 411},
  [222] = {.lex_state = 411},
  [223] = {.lex_state = 56},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 411},
  [226] = {.lex_state = 72},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 63},
  [232] = {.lex_state = 411},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 411},
  [238] = {.lex_state = 56},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 56},
  [241] = {.lex_state = 411},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 411},
  [244] = {.lex_state = 56},
  [245] = {.lex_state = 56},
  [246] = {.lex_state = 56},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 63},
  [249] = {.lex_state = 56},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 411},
  [252] = {.lex_state = 411},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 56},
  [255] = {.lex_state = 56},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 56},
  [258] = {.lex_state = 411},
  [259] = {.lex_state = 411},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 411},
  [263] = {.lex_state = 63},
  [264] = {.lex_state = 63},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 56},
  [267] = {.lex_state = 63},
  [268] = {.lex_state = 411},
  [269] = {.lex_state = 73},
  [270] = {.lex_state = 63},
  [271] = {.lex_state = 56},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 63},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 56},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 56},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 56},
  [283] = {.lex_state = 56},
  [284] = {.lex_state = 56},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 56},
  [287] = {.lex_state = 411},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 56},
  [293] = {.lex_state = 56},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 56},
  [297] = {.lex_state = 56},
  [298] = {.lex_state = 411},
  [299] = {.lex_state = 63},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 63},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 63},
  [305] = {.lex_state = 412},
  [306] = {.lex_state = 56},
  [307] = {.lex_state = 56},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 56},
  [310] = {.lex_state = 56},
  [311] = {.lex_state = 56},
  [312] = {.lex_state = 56},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 56},
  [315] = {.lex_state = 56},
  [316] = {.lex_state = 56},
  [317] = {.lex_state = 63},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 56},
  [321] = {.lex_state = 56},
  [322] = {.lex_state = 39},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 56},
  [326] = {.lex_state = 56},
  [327] = {.lex_state = 56},
  [328] = {.lex_state = 56},
  [329] = {.lex_state = 411},
  [330] = {.lex_state = 56},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 63},
  [333] = {.lex_state = 56},
  [334] = {.lex_state = 411},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 56},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 412},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 56},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 411},
  [345] = {.lex_state = 63},
  [346] = {.lex_state = 411},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 56},
  [349] = {.lex_state = 56},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 411},
  [352] = {.lex_state = 56},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 411},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 56},
  [357] = {.lex_state = 56},
  [358] = {.lex_state = 56},
  [359] = {.lex_state = 411},
  [360] = {.lex_state = 56},
  [361] = {.lex_state = 63},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 56},
  [364] = {.lex_state = 34},
  [365] = {.lex_state = 56},
  [366] = {.lex_state = 63},
  [367] = {.lex_state = 56},
  [368] = {.lex_state = 412},
  [369] = {.lex_state = 56},
  [370] = {.lex_state = 34},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 56},
  [373] = {.lex_state = 56},
  [374] = {.lex_state = 63},
  [375] = {.lex_state = 411},
  [376] = {.lex_state = 56},
  [377] = {.lex_state = 63},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 56},
  [380] = {.lex_state = 56},
  [381] = {.lex_state = 56},
  [382] = {.lex_state = 56},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 56},
  [385] = {.lex_state = 58},
  [386] = {.lex_state = 72},
  [387] = {.lex_state = 63},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 72},
  [390] = {.lex_state = 56},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 56},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 56},
  [396] = {.lex_state = 56},
  [397] = {.lex_state = 411},
  [398] = {.lex_state = 63},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 56},
  [401] = {.lex_state = 411},
  [402] = {.lex_state = 56},
  [403] = {.lex_state = 63},
  [404] = {.lex_state = 56},
  [405] = {.lex_state = 56},
  [406] = {.lex_state = 56},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 63},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 63},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 56},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 56},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 74},
  [445] = {.lex_state = 75},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 63},
  [460] = {.lex_state = 63},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 63},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 56},
  [465] = {.lex_state = 63},
  [466] = {.lex_state = 63},
  [467] = {.lex_state = 63},
  [468] = {.lex_state = 56},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 74},
  [473] = {.lex_state = 412},
  [474] = {.lex_state = 75},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 56},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 63},
  [479] = {.lex_state = 56},
  [480] = {.lex_state = 63},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 56},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 411},
  [495] = {.lex_state = 412},
  [496] = {.lex_state = 56},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 60},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 56},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 56},
  [506] = {.lex_state = 63},
  [507] = {.lex_state = 56},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 56},
  [510] = {.lex_state = 56},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 63},
  [515] = {.lex_state = 63},
  [516] = {.lex_state = 56},
  [517] = {.lex_state = 56},
  [518] = {.lex_state = 56},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 63},
  [521] = {.lex_state = 56},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 56},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 56},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 56},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 40},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 56},
  [534] = {.lex_state = 411},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 633},
  [542] = {.lex_state = 411},
  [543] = {.lex_state = 56},
  [544] = {.lex_state = 56},
  [545] = {.lex_state = 56},
  [546] = {.lex_state = 56},
  [547] = {.lex_state = 56},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 56},
  [551] = {.lex_state = 56},
  [552] = {.lex_state = 56},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 56},
  [555] = {.lex_state = 56},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 56},
  [558] = {.lex_state = 56},
  [559] = {(TSStateId)(-1)},
  [560] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_longlong] = ACTIONS(1),
    [sym_unsigned_tiny_int] = ACTIONS(1),
    [sym_boolean_type] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [sym_octet_type] = ACTIONS(1),
    [anon_sym_unsignedshort] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_unsignedlong] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_unsignedlonglong] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_longdouble] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_wchar] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_wstring] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_literal_token1] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_preproc_directive] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_raises] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_getraises] = ACTIONS(1),
    [anon_sym_setraises] = ACTIONS(1),
    [anon_sym_bitset] = ACTIONS(1),
    [anon_sym_bitfield] = ACTIONS(1),
    [anon_sym_bitmask] = ACTIONS(1),
    [anon_sym_ATannotation] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_typename] = ACTIONS(1),
    [anon_sym_valuetype] = ACTIONS(1),
    [anon_sym_eventtype] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_supports] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_factory] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_ATdefault_literal] = ACTIONS(1),
    [anon_sym_ATignore_literal_names] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_specification] = STATE(540),
    [sym_preproc_call] = STATE(116),
    [sym_except_dcl] = STATE(539),
    [sym_interface_dcl] = STATE(539),
    [sym_interface_forward_dcl] = STATE(538),
    [sym_interface_def] = STATE(538),
    [sym_interface_header] = STATE(537),
    [sym_bitset_dcl] = STATE(539),
    [sym_bitmask_dcl] = STATE(539),
    [sym_annotation_dcl] = STATE(539),
    [sym_annotation_appl] = STATE(174),
    [sym_template_module_dcl] = STATE(539),
    [sym_template_module_inst] = STATE(539),
    [sym_value_dcl] = STATE(539),
    [sym_value_def] = STATE(536),
    [sym_value_header] = STATE(535),
    [sym_value_forward_dcl] = STATE(536),
    [sym_typedef_dcl] = STATE(539),
    [sym_enum_dcl] = STATE(539),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(539),
    [sym_union_def] = STATE(539),
    [sym__definition] = STATE(112),
    [sym_native_dcl] = STATE(539),
    [sym_module_dcl] = STATE(539),
    [sym_struct_forward_dcl] = STATE(539),
    [sym_struct_def] = STATE(539),
    [sym_predefine] = STATE(110),
    [sym_const_dcl] = STATE(539),
    [sym_comment] = STATE(1),
    [aux_sym_specification_repeat1] = STATE(36),
    [aux_sym_specification_repeat2] = STATE(53),
    [aux_sym_interface_def_repeat1] = STATE(145),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_preproc_directive] = ACTIONS(9),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_local] = ACTIONS(15),
    [anon_sym_bitset] = ACTIONS(17),
    [anon_sym_bitmask] = ACTIONS(19),
    [anon_sym_ATannotation] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(25),
    [anon_sym_valuetype] = ACTIONS(27),
    [anon_sym_struct] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(31),
    [anon_sym_enum] = ACTIONS(33),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_typedef] = ACTIONS(37),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(41),
    [anon_sym_POUNDdefine] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(548),
    [sym_export] = STATE(52),
    [sym_op_dcl] = STATE(548),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(548),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(548),
    [sym_bitmask_dcl] = STATE(548),
    [sym_annotation_appl] = STATE(174),
    [sym_value_element] = STATE(50),
    [sym_state_member] = STATE(52),
    [sym_init_dcl] = STATE(52),
    [sym_typedef_dcl] = STATE(548),
    [sym_enum_dcl] = STATE(548),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(548),
    [sym_union_def] = STATE(548),
    [sym_native_dcl] = STATE(548),
    [sym_struct_forward_dcl] = STATE(548),
    [sym_struct_def] = STATE(548),
    [sym_const_dcl] = STATE(548),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_value_def_repeat1] = STATE(2),
    [anon_sym_short] = ACTIONS(45),
    [anon_sym_int16] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(48),
    [anon_sym_int32] = ACTIONS(48),
    [anon_sym_longlong] = ACTIONS(51),
    [anon_sym_int64] = ACTIONS(54),
    [sym_unsigned_tiny_int] = ACTIONS(57),
    [sym_boolean_type] = ACTIONS(60),
    [anon_sym_fixed] = ACTIONS(63),
    [sym_octet_type] = ACTIONS(60),
    [sym_signed_tiny_int] = ACTIONS(66),
    [anon_sym_unsignedshort] = ACTIONS(69),
    [anon_sym_uint16] = ACTIONS(72),
    [anon_sym_unsignedlong] = ACTIONS(75),
    [anon_sym_uint32] = ACTIONS(75),
    [anon_sym_unsignedlonglong] = ACTIONS(78),
    [anon_sym_uint64] = ACTIONS(81),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_longdouble] = ACTIONS(87),
    [anon_sym_char] = ACTIONS(90),
    [anon_sym_wchar] = ACTIONS(90),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(96),
    [anon_sym_wstring] = ACTIONS(96),
    [anon_sym_any] = ACTIONS(99),
    [anon_sym_sequence] = ACTIONS(102),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(116),
    [anon_sym_attribute] = ACTIONS(119),
    [anon_sym_bitset] = ACTIONS(122),
    [anon_sym_bitmask] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_struct] = ACTIONS(131),
    [anon_sym_union] = ACTIONS(134),
    [anon_sym_enum] = ACTIONS(137),
    [anon_sym_const] = ACTIONS(140),
    [anon_sym_public] = ACTIONS(143),
    [anon_sym_private] = ACTIONS(143),
    [anon_sym_factory] = ACTIONS(146),
    [anon_sym_typedef] = ACTIONS(149),
    [anon_sym_ATignore_literal_names] = ACTIONS(152),
    [anon_sym_native] = ACTIONS(155),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(548),
    [sym_export] = STATE(52),
    [sym_op_dcl] = STATE(548),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(548),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(548),
    [sym_bitmask_dcl] = STATE(548),
    [sym_annotation_appl] = STATE(174),
    [sym_value_element] = STATE(50),
    [sym_state_member] = STATE(52),
    [sym_init_dcl] = STATE(52),
    [sym_typedef_dcl] = STATE(548),
    [sym_enum_dcl] = STATE(548),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(548),
    [sym_union_def] = STATE(548),
    [sym_native_dcl] = STATE(548),
    [sym_struct_forward_dcl] = STATE(548),
    [sym_struct_def] = STATE(548),
    [sym_const_dcl] = STATE(548),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_value_def_repeat1] = STATE(4),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_exception] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(209),
    [anon_sym_attribute] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(225),
    [anon_sym_public] = ACTIONS(227),
    [anon_sym_private] = ACTIONS(227),
    [anon_sym_factory] = ACTIONS(229),
    [anon_sym_typedef] = ACTIONS(231),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(548),
    [sym_export] = STATE(52),
    [sym_op_dcl] = STATE(548),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(548),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(548),
    [sym_bitmask_dcl] = STATE(548),
    [sym_annotation_appl] = STATE(174),
    [sym_value_element] = STATE(50),
    [sym_state_member] = STATE(52),
    [sym_init_dcl] = STATE(52),
    [sym_typedef_dcl] = STATE(548),
    [sym_enum_dcl] = STATE(548),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(548),
    [sym_union_def] = STATE(548),
    [sym_native_dcl] = STATE(548),
    [sym_struct_forward_dcl] = STATE(548),
    [sym_struct_def] = STATE(548),
    [sym_const_dcl] = STATE(548),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_value_def_repeat1] = STATE(2),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_exception] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(209),
    [anon_sym_attribute] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(225),
    [anon_sym_public] = ACTIONS(227),
    [anon_sym_private] = ACTIONS(227),
    [anon_sym_factory] = ACTIONS(229),
    [anon_sym_typedef] = ACTIONS(231),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(493),
    [sym_interface_body] = STATE(492),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(493),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(493),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(493),
    [sym_bitmask_dcl] = STATE(493),
    [sym_annotation_appl] = STATE(174),
    [sym_typedef_dcl] = STATE(493),
    [sym_enum_dcl] = STATE(493),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(493),
    [sym_union_def] = STATE(493),
    [sym_native_dcl] = STATE(493),
    [sym_struct_forward_dcl] = STATE(493),
    [sym_struct_def] = STATE(493),
    [sym_const_dcl] = STATE(493),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_interface_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_exception] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(209),
    [anon_sym_attribute] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(225),
    [anon_sym_typedef] = ACTIONS(231),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(493),
    [sym_interface_body] = STATE(482),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(493),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(493),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(493),
    [sym_bitmask_dcl] = STATE(493),
    [sym_annotation_appl] = STATE(174),
    [sym_typedef_dcl] = STATE(493),
    [sym_enum_dcl] = STATE(493),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(493),
    [sym_union_def] = STATE(493),
    [sym_native_dcl] = STATE(493),
    [sym_struct_forward_dcl] = STATE(493),
    [sym_struct_def] = STATE(493),
    [sym_const_dcl] = STATE(493),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_interface_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_exception] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(209),
    [anon_sym_attribute] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(225),
    [anon_sym_typedef] = ACTIONS(231),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(493),
    [sym_interface_body] = STATE(426),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(493),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(493),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(493),
    [sym_bitmask_dcl] = STATE(493),
    [sym_annotation_appl] = STATE(174),
    [sym_typedef_dcl] = STATE(493),
    [sym_enum_dcl] = STATE(493),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(493),
    [sym_union_def] = STATE(493),
    [sym_native_dcl] = STATE(493),
    [sym_struct_forward_dcl] = STATE(493),
    [sym_struct_def] = STATE(493),
    [sym_const_dcl] = STATE(493),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_interface_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_exception] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(209),
    [anon_sym_attribute] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(225),
    [anon_sym_typedef] = ACTIONS(231),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(493),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(493),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(493),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(493),
    [sym_bitmask_dcl] = STATE(493),
    [sym_annotation_appl] = STATE(174),
    [sym_typedef_dcl] = STATE(493),
    [sym_enum_dcl] = STATE(493),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(493),
    [sym_union_def] = STATE(493),
    [sym_native_dcl] = STATE(493),
    [sym_struct_forward_dcl] = STATE(493),
    [sym_struct_def] = STATE(493),
    [sym_const_dcl] = STATE(493),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_interface_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(245),
    [anon_sym_int16] = ACTIONS(245),
    [anon_sym_long] = ACTIONS(248),
    [anon_sym_int32] = ACTIONS(248),
    [anon_sym_longlong] = ACTIONS(251),
    [anon_sym_int64] = ACTIONS(254),
    [sym_unsigned_tiny_int] = ACTIONS(257),
    [sym_boolean_type] = ACTIONS(260),
    [anon_sym_fixed] = ACTIONS(263),
    [sym_octet_type] = ACTIONS(260),
    [sym_signed_tiny_int] = ACTIONS(266),
    [anon_sym_unsignedshort] = ACTIONS(269),
    [anon_sym_uint16] = ACTIONS(272),
    [anon_sym_unsignedlong] = ACTIONS(275),
    [anon_sym_uint32] = ACTIONS(275),
    [anon_sym_unsignedlonglong] = ACTIONS(278),
    [anon_sym_uint64] = ACTIONS(281),
    [anon_sym_float] = ACTIONS(284),
    [anon_sym_double] = ACTIONS(284),
    [anon_sym_longdouble] = ACTIONS(287),
    [anon_sym_char] = ACTIONS(290),
    [anon_sym_wchar] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [anon_sym_string] = ACTIONS(296),
    [anon_sym_wstring] = ACTIONS(296),
    [anon_sym_any] = ACTIONS(299),
    [anon_sym_sequence] = ACTIONS(302),
    [anon_sym_map] = ACTIONS(305),
    [anon_sym_exception] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_void] = ACTIONS(313),
    [anon_sym_readonly] = ACTIONS(316),
    [anon_sym_attribute] = ACTIONS(319),
    [anon_sym_bitset] = ACTIONS(322),
    [anon_sym_bitmask] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(328),
    [anon_sym_struct] = ACTIONS(331),
    [anon_sym_union] = ACTIONS(334),
    [anon_sym_enum] = ACTIONS(337),
    [anon_sym_const] = ACTIONS(340),
    [anon_sym_typedef] = ACTIONS(343),
    [anon_sym_ATignore_literal_names] = ACTIONS(346),
    [anon_sym_native] = ACTIONS(349),
    [sym_identifier] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(496),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_except_dcl] = STATE(493),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(493),
    [sym_op_type_spec] = STATE(406),
    [sym_attr_dcl] = STATE(493),
    [sym_readonly_attr_spec] = STATE(491),
    [sym_attr_spec] = STATE(491),
    [sym_bitset_dcl] = STATE(493),
    [sym_bitmask_dcl] = STATE(493),
    [sym_annotation_appl] = STATE(174),
    [sym_typedef_dcl] = STATE(493),
    [sym_enum_dcl] = STATE(493),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(493),
    [sym_union_def] = STATE(493),
    [sym_native_dcl] = STATE(493),
    [sym_struct_forward_dcl] = STATE(493),
    [sym_struct_def] = STATE(493),
    [sym_const_dcl] = STATE(493),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [aux_sym_interface_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_exception] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(209),
    [anon_sym_attribute] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(225),
    [anon_sym_typedef] = ACTIONS(231),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_native] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [10] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(136),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(398),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_const_expr] = STATE(398),
    [sym_or_expr] = STATE(152),
    [sym_xor_expr] = STATE(147),
    [sym_and_expr] = STATE(143),
    [sym_shift_expr] = STATE(140),
    [sym_add_expr] = STATE(137),
    [sym_mult_expr] = STATE(122),
    [sym_unary_expr] = STATE(132),
    [sym_unary_operator] = STATE(135),
    [sym_literal] = STATE(121),
    [sym_string_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_boolean_literal] = STATE(123),
    [sym_actual_parameters] = STATE(462),
    [sym_actual_parameter] = STATE(231),
    [sym_comment] = STATE(10),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(357),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(363),
    [anon_sym_L] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_TRUE] = ACTIONS(371),
    [anon_sym_FALSE] = ACTIONS(371),
    [sym_number_literal] = ACTIONS(373),
    [sym_identifier] = ACTIONS(375),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [11] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(136),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(398),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_const_expr] = STATE(398),
    [sym_or_expr] = STATE(152),
    [sym_xor_expr] = STATE(147),
    [sym_and_expr] = STATE(143),
    [sym_shift_expr] = STATE(140),
    [sym_add_expr] = STATE(137),
    [sym_mult_expr] = STATE(122),
    [sym_unary_expr] = STATE(132),
    [sym_unary_operator] = STATE(135),
    [sym_literal] = STATE(121),
    [sym_string_literal] = STATE(123),
    [sym_char_literal] = STATE(123),
    [sym_boolean_literal] = STATE(123),
    [sym_actual_parameter] = STATE(377),
    [sym_comment] = STATE(11),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(357),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(363),
    [anon_sym_L] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_TRUE] = ACTIONS(371),
    [anon_sym_FALSE] = ACTIONS(371),
    [sym_number_literal] = ACTIONS(373),
    [sym_identifier] = ACTIONS(375),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [12] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_type_spec] = STATE(214),
    [sym_simple_type_spec] = STATE(310),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(310),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_bitset_dcl] = STATE(214),
    [sym_bitmask_dcl] = STATE(214),
    [sym_annotation_appl] = STATE(174),
    [sym_enum_dcl] = STATE(214),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(214),
    [sym_union_def] = STATE(214),
    [sym_element_spec] = STATE(497),
    [sym_struct_forward_dcl] = STATE(214),
    [sym_struct_def] = STATE(214),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_default] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [anon_sym_case] = ACTIONS(379),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [13] = {
    [sym_signed_short_int] = STATE(196),
    [sym_signed_long_int] = STATE(196),
    [sym_signed_longlong_int] = STATE(196),
    [sym_unsigned_int] = STATE(191),
    [sym_integer_type] = STATE(277),
    [sym_signed_int] = STATE(191),
    [sym_unsigned_short_int] = STATE(197),
    [sym_unsigned_long_int] = STATE(197),
    [sym_unsigned_longlong_int] = STATE(197),
    [sym_floating_pt_type] = STATE(277),
    [sym_char_type] = STATE(277),
    [sym_scoped_name] = STATE(190),
    [sym_string_type] = STATE(292),
    [sym_simple_type_spec] = STATE(185),
    [sym_base_type_spec] = STATE(293),
    [sym_any_type] = STATE(277),
    [sym_fixed_pt_type] = STATE(292),
    [sym_template_type_spec] = STATE(185),
    [sym_sequence_type] = STATE(292),
    [sym_map_type] = STATE(292),
    [sym_bitset_dcl] = STATE(185),
    [sym_bitmask_dcl] = STATE(185),
    [sym_annotation_appl] = STATE(174),
    [sym_type_declarator] = STATE(513),
    [sym_enum_dcl] = STATE(185),
    [sym_enum_anno] = STATE(534),
    [sym_union_forward_dcl] = STATE(185),
    [sym_union_def] = STATE(185),
    [sym_struct_forward_dcl] = STATE(185),
    [sym_struct_def] = STATE(185),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(181),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_longlong] = ACTIONS(165),
    [anon_sym_int64] = ACTIONS(167),
    [sym_unsigned_tiny_int] = ACTIONS(169),
    [sym_boolean_type] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(173),
    [sym_octet_type] = ACTIONS(171),
    [sym_signed_tiny_int] = ACTIONS(175),
    [anon_sym_unsignedshort] = ACTIONS(177),
    [anon_sym_uint16] = ACTIONS(179),
    [anon_sym_unsignedlong] = ACTIONS(181),
    [anon_sym_uint32] = ACTIONS(181),
    [anon_sym_unsignedlonglong] = ACTIONS(183),
    [anon_sym_uint64] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_longdouble] = ACTIONS(189),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_wchar] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_wstring] = ACTIONS(195),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_sequence] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(201),
    [anon_sym_bitset] = ACTIONS(213),
    [anon_sym_bitmask] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_struct] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(221),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_ATignore_literal_names] = ACTIONS(39),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(223), 1,
      anon_sym_enum,
    ACTIONS(225), 1,
      anon_sym_const,
    ACTIONS(231), 1,
      anon_sym_typedef,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_fixed,
    ACTIONS(385), 1,
      anon_sym_any,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      anon_sym_ATignore_literal_names,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(63), 1,
      sym_annotation_body,
    STATE(64), 1,
      sym_annotation_member,
    STATE(363), 1,
      sym_scoped_name,
    STATE(365), 1,
      sym_annotation_member_type,
    STATE(534), 1,
      sym_enum_anno,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(381), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(476), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(475), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(523), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [144] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_longlong,
    ACTIONS(400), 1,
      anon_sym_int64,
    ACTIONS(403), 1,
      sym_unsigned_tiny_int,
    ACTIONS(409), 1,
      anon_sym_fixed,
    ACTIONS(412), 1,
      sym_signed_tiny_int,
    ACTIONS(415), 1,
      anon_sym_unsignedshort,
    ACTIONS(418), 1,
      anon_sym_uint16,
    ACTIONS(424), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(427), 1,
      anon_sym_uint64,
    ACTIONS(433), 1,
      anon_sym_longdouble,
    ACTIONS(439), 1,
      anon_sym_COLON_COLON,
    ACTIONS(445), 1,
      anon_sym_any,
    ACTIONS(448), 1,
      anon_sym_sequence,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(453), 1,
      anon_sym_enum,
    ACTIONS(456), 1,
      anon_sym_const,
    ACTIONS(459), 1,
      anon_sym_typedef,
    ACTIONS(462), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(63), 1,
      sym_annotation_body,
    STATE(64), 1,
      sym_annotation_member,
    STATE(363), 1,
      sym_scoped_name,
    STATE(365), 1,
      sym_annotation_member_type,
    STATE(534), 1,
      sym_enum_anno,
    ACTIONS(391), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(394), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(406), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(421), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(430), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(436), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(442), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(15), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(476), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(475), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(523), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [286] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(223), 1,
      anon_sym_enum,
    ACTIONS(225), 1,
      anon_sym_const,
    ACTIONS(231), 1,
      anon_sym_typedef,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_fixed,
    ACTIONS(385), 1,
      anon_sym_any,
    ACTIONS(389), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(63), 1,
      sym_annotation_body,
    STATE(64), 1,
      sym_annotation_member,
    STATE(363), 1,
      sym_scoped_name,
    STATE(365), 1,
      sym_annotation_member_type,
    STATE(534), 1,
      sym_enum_anno,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(381), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(476), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(475), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(523), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [430] = 39,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(476), 1,
      anon_sym_longlong,
    ACTIONS(479), 1,
      anon_sym_int64,
    ACTIONS(482), 1,
      sym_unsigned_tiny_int,
    ACTIONS(488), 1,
      anon_sym_fixed,
    ACTIONS(491), 1,
      sym_signed_tiny_int,
    ACTIONS(494), 1,
      anon_sym_unsignedshort,
    ACTIONS(497), 1,
      anon_sym_uint16,
    ACTIONS(503), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(506), 1,
      anon_sym_uint64,
    ACTIONS(512), 1,
      anon_sym_longdouble,
    ACTIONS(518), 1,
      anon_sym_COLON_COLON,
    ACTIONS(524), 1,
      anon_sym_any,
    ACTIONS(527), 1,
      anon_sym_sequence,
    ACTIONS(530), 1,
      anon_sym_map,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      anon_sym_AT,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(470), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(473), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(485), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(500), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(509), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(515), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(521), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(17), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [568] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym_except_dcl_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [708] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_except_dcl_repeat1,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [848] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_except_dcl_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [988] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_except_dcl_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1128] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_except_dcl_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1268] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_except_dcl_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1408] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_except_dcl_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1548] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_except_dcl_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1688] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_except_dcl_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1828] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_except_dcl_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_interface_def_repeat1,
    STATE(72), 1,
      sym_member,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(168), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [1968] = 37,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_AT,
    STATE(28), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_interface_def_repeat1,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(184), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [2099] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_sequence,
    ACTIONS(565), 1,
      anon_sym_const,
    STATE(29), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(317), 1,
      sym_formal_parameter,
    STATE(464), 1,
      sym_formal_parameter_type,
    STATE(467), 1,
      sym_formal_parameters,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(468), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    ACTIONS(563), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2224] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(567), 1,
      anon_sym_GT,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(459), 1,
      sym_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [2352] = 33,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_sequence,
    ACTIONS(565), 1,
      anon_sym_const,
    STATE(31), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(374), 1,
      sym_formal_parameter,
    STATE(464), 1,
      sym_formal_parameter_type,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(468), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    ACTIONS(563), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2474] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(32), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(381), 1,
      sym_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [2596] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(33), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(307), 1,
      sym_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [2718] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      anon_sym_exception,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 1,
      anon_sym_interface,
    ACTIONS(579), 1,
      anon_sym_local,
    ACTIONS(582), 1,
      anon_sym_bitset,
    ACTIONS(585), 1,
      anon_sym_bitmask,
    ACTIONS(588), 1,
      anon_sym_ATannotation,
    ACTIONS(591), 1,
      anon_sym_AT,
    ACTIONS(594), 1,
      anon_sym_module,
    ACTIONS(597), 1,
      anon_sym_valuetype,
    ACTIONS(600), 1,
      anon_sym_struct,
    ACTIONS(603), 1,
      anon_sym_union,
    ACTIONS(606), 1,
      anon_sym_enum,
    ACTIONS(609), 1,
      anon_sym_const,
    ACTIONS(612), 1,
      anon_sym_alias,
    ACTIONS(615), 1,
      anon_sym_typedef,
    ACTIONS(618), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(621), 1,
      anon_sym_native,
    ACTIONS(624), 1,
      anon_sym_POUNDdefine,
    STATE(110), 1,
      sym_predefine,
    STATE(115), 1,
      sym__definition,
    STATE(118), 1,
      sym_tpl_definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(432), 1,
      sym_template_module_ref,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(34), 2,
      sym_comment,
      aux_sym_template_module_dcl_repeat1,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [2840] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(387), 1,
      sym_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [2962] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_preproc_directive,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(43), 1,
      anon_sym_POUNDdefine,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_specification_repeat2,
    STATE(106), 1,
      aux_sym_specification_repeat1,
    STATE(110), 1,
      sym_predefine,
    STATE(112), 1,
      sym__definition,
    STATE(116), 1,
      sym_preproc_call,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [3086] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
    STATE(179), 1,
      sym_type_spec,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [3208] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(38), 1,
      sym_comment,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(399), 1,
      sym_scoped_name,
    STATE(457), 1,
      sym_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [3330] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(39), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(254), 1,
      sym_type_spec,
    STATE(293), 1,
      sym_base_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [3452] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      anon_sym_alias,
    ACTIONS(633), 1,
      anon_sym_POUNDdefine,
    STATE(34), 1,
      aux_sym_template_module_dcl_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(110), 1,
      sym_predefine,
    STATE(115), 1,
      sym__definition,
    STATE(118), 1,
      sym_tpl_definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(432), 1,
      sym_template_module_ref,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [3576] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(631), 1,
      anon_sym_alias,
    ACTIONS(633), 1,
      anon_sym_POUNDdefine,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_template_module_dcl_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(110), 1,
      sym_predefine,
    STATE(115), 1,
      sym__definition,
    STATE(118), 1,
      sym_tpl_definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(432), 1,
      sym_template_module_ref,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [3700] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(173), 1,
      anon_sym_fixed,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(197), 1,
      anon_sym_any,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(201), 1,
      anon_sym_map,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(42), 1,
      sym_comment,
    STATE(190), 1,
      sym_scoped_name,
    STATE(293), 1,
      sym_base_type_spec,
    STATE(382), 1,
      sym_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(171), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(310), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(277), 4,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
    STATE(292), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
  [3822] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(639), 1,
      anon_sym_exception,
    ACTIONS(642), 1,
      anon_sym_interface,
    ACTIONS(645), 1,
      anon_sym_local,
    ACTIONS(648), 1,
      anon_sym_bitset,
    ACTIONS(651), 1,
      anon_sym_bitmask,
    ACTIONS(654), 1,
      anon_sym_ATannotation,
    ACTIONS(657), 1,
      anon_sym_AT,
    ACTIONS(660), 1,
      anon_sym_module,
    ACTIONS(663), 1,
      anon_sym_valuetype,
    ACTIONS(666), 1,
      anon_sym_struct,
    ACTIONS(669), 1,
      anon_sym_union,
    ACTIONS(672), 1,
      anon_sym_enum,
    ACTIONS(675), 1,
      anon_sym_const,
    ACTIONS(678), 1,
      anon_sym_typedef,
    ACTIONS(681), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(684), 1,
      anon_sym_native,
    ACTIONS(687), 1,
      anon_sym_POUNDdefine,
    STATE(110), 1,
      sym_predefine,
    STATE(112), 1,
      sym__definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_comment,
      aux_sym_specification_repeat2,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [3936] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(633), 1,
      anon_sym_POUNDdefine,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_specification_repeat2,
    STATE(110), 1,
      sym_predefine,
    STATE(112), 1,
      sym__definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [4051] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(633), 1,
      anon_sym_POUNDdefine,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_specification_repeat2,
    STATE(45), 1,
      sym_comment,
    STATE(110), 1,
      sym_predefine,
    STATE(112), 1,
      sym__definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [4166] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(696), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(694), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(700), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(698), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4288] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(704), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(702), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(708), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(706), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(712), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(710), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(716), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(714), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4532] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(720), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(718), 40,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4593] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    ACTIONS(633), 1,
      anon_sym_POUNDdefine,
    STATE(43), 1,
      aux_sym_specification_repeat2,
    STATE(53), 1,
      sym_comment,
    STATE(110), 1,
      sym_predefine,
    STATE(112), 1,
      sym__definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [4708] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_exception,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_local,
    ACTIONS(17), 1,
      anon_sym_bitset,
    ACTIONS(19), 1,
      anon_sym_bitmask,
    ACTIONS(21), 1,
      anon_sym_ATannotation,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(27), 1,
      anon_sym_valuetype,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(31), 1,
      anon_sym_union,
    ACTIONS(33), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(39), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(41), 1,
      anon_sym_native,
    ACTIONS(633), 1,
      anon_sym_POUNDdefine,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_specification_repeat2,
    STATE(54), 1,
      sym_comment,
    STATE(110), 1,
      sym_predefine,
    STATE(112), 1,
      sym__definition,
    STATE(145), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(534), 1,
      sym_enum_anno,
    STATE(535), 1,
      sym_value_header,
    STATE(537), 1,
      sym_interface_header,
    STATE(536), 2,
      sym_value_def,
      sym_value_forward_dcl,
    STATE(538), 2,
      sym_interface_forward_dcl,
      sym_interface_def,
    STATE(539), 17,
      sym_except_dcl,
      sym_interface_dcl,
      sym_bitset_dcl,
      sym_bitmask_dcl,
      sym_annotation_dcl,
      sym_template_module_dcl,
      sym_template_module_inst,
      sym_value_dcl,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_union_forward_dcl,
      sym_union_def,
      sym_native_dcl,
      sym_module_dcl,
      sym_struct_forward_dcl,
      sym_struct_def,
      sym_const_dcl,
  [4823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(716), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(714), 37,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4881] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(726), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(724), 37,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_native,
      sym_identifier,
  [4939] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_fixed,
    STATE(57), 1,
      sym_comment,
    STATE(357), 1,
      sym_scoped_name,
    STATE(517), 1,
      sym_const_type,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(381), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(523), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [5044] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(189), 1,
      anon_sym_longdouble,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(199), 1,
      anon_sym_sequence,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_fixed,
    STATE(58), 1,
      sym_comment,
    STATE(357), 1,
      sym_scoped_name,
    STATE(439), 1,
      sym_const_type,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(187), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(195), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(381), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(523), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [5149] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(730), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(728), 32,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_default,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_ATignore_literal_names,
      anon_sym_case,
      sym_identifier,
  [5202] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(734), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(732), 32,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_default,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_ATignore_literal_names,
      anon_sym_case,
      sym_identifier,
  [5255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(738), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(736), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5302] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(742), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(740), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(746), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(744), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(750), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(748), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5443] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(754), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(752), 26,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      sym_identifier,
  [5490] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(760), 1,
      anon_sym_AT,
    STATE(77), 1,
      sym_annotation_appl,
    STATE(66), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(758), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(756), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5540] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_comment,
    ACTIONS(765), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(763), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(769), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(767), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5630] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(773), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(771), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5675] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(779), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_comment,
    ACTIONS(777), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(775), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5722] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(783), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(781), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5767] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(787), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(785), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5812] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_longlong,
    ACTIONS(167), 1,
      anon_sym_int64,
    ACTIONS(169), 1,
      sym_unsigned_tiny_int,
    ACTIONS(175), 1,
      sym_signed_tiny_int,
    ACTIONS(177), 1,
      anon_sym_unsignedshort,
    ACTIONS(179), 1,
      anon_sym_uint16,
    ACTIONS(183), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(185), 1,
      anon_sym_uint64,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(375), 1,
      sym_identifier,
    ACTIONS(789), 1,
      sym_boolean_type,
    STATE(73), 1,
      sym_comment,
    STATE(323), 1,
      sym_scoped_name,
    STATE(434), 1,
      sym_switch_type_spec,
    ACTIONS(161), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(163), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(181), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(191), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(435), 2,
      sym_integer_type,
      sym_char_type,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [5895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(793), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(791), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(797), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(795), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [5985] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(801), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(799), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [6030] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(805), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(803), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [6074] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(809), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(807), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [6118] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(813), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(811), 24,
      anon_sym_short,
      anon_sym_int16,
      anon_sym_long,
      anon_sym_int32,
      anon_sym_int64,
      sym_unsigned_tiny_int,
      sym_boolean_type,
      anon_sym_fixed,
      sym_octet_type,
      sym_signed_tiny_int,
      anon_sym_uint16,
      anon_sym_unsignedlong,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_char,
      anon_sym_wchar,
      anon_sym_string,
      anon_sym_wstring,
      anon_sym_any,
      anon_sym_sequence,
      anon_sym_map,
      sym_identifier,
  [6161] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(80), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(228), 1,
      sym_annotation_appl_param,
    STATE(471), 1,
      sym_const_expr,
    STATE(556), 1,
      sym_annotation_appl_params,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6247] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(81), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(228), 1,
      sym_annotation_appl_param,
    STATE(471), 1,
      sym_const_expr,
    STATE(553), 1,
      sym_annotation_appl_params,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6333] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(82), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(228), 1,
      sym_annotation_appl_param,
    STATE(471), 1,
      sym_const_expr,
    STATE(549), 1,
      sym_annotation_appl_params,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6419] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(83), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(228), 1,
      sym_annotation_appl_param,
    STATE(469), 1,
      sym_annotation_appl_params,
    STATE(471), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6505] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(345), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6588] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(458), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6671] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(86), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(460), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6754] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(412), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6837] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(478), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6920] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(89), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(430), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7003] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(90), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(248), 1,
      sym_const_expr,
    STATE(414), 1,
      sym_positive_int_const,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7086] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(91), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(362), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7166] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(92), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(431), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7246] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(93), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(416), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7326] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(94), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(495), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7406] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_long,
    ACTIONS(181), 1,
      anon_sym_unsignedlong,
    ACTIONS(819), 1,
      anon_sym_int32,
    ACTIONS(821), 1,
      sym_unsigned_tiny_int,
    ACTIONS(825), 1,
      sym_signed_tiny_int,
    ACTIONS(827), 1,
      anon_sym_uint32,
    STATE(95), 1,
      sym_comment,
    STATE(465), 1,
      sym_integer_type,
    STATE(466), 1,
      sym_destination_type,
    ACTIONS(165), 2,
      anon_sym_longlong,
      anon_sym_int64,
    ACTIONS(177), 2,
      anon_sym_unsignedshort,
      anon_sym_uint16,
    ACTIONS(183), 2,
      anon_sym_unsignedlonglong,
      anon_sym_uint64,
    ACTIONS(817), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(823), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(191), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(196), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(197), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [7474] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(96), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(448), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7554] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(799), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(801), 22,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
  [7594] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(791), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(793), 22,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
  [7634] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(99), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(421), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7714] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(100), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(147), 1,
      sym_xor_expr,
    STATE(152), 1,
      sym_or_expr,
    STATE(425), 1,
      sym_const_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7794] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(763), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(765), 22,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
  [7834] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(102), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(143), 1,
      sym_and_expr,
    STATE(146), 1,
      sym_xor_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7908] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(140), 1,
      sym_shift_expr,
    STATE(142), 1,
      sym_and_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7979] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(104), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(137), 1,
      sym_add_expr,
    STATE(141), 1,
      sym_shift_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8047] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(105), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(122), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    STATE(138), 1,
      sym_add_expr,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8112] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(831), 1,
      sym_preproc_directive,
    STATE(116), 1,
      sym_preproc_call,
    STATE(106), 2,
      sym_comment,
      aux_sym_specification_repeat1,
    ACTIONS(834), 3,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(829), 15,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_native,
  [8151] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(129), 1,
      sym_mult_expr,
    STATE(132), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(836), 18,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(840), 18,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(844), 18,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(850), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(848), 15,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_native,
  [8348] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(852), 17,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8381] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_comment,
    ACTIONS(858), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(856), 15,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_native,
  [8414] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(860), 17,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8447] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(864), 17,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8480] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_comment,
    ACTIONS(870), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(868), 15,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_typedef,
      anon_sym_native,
  [8513] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
    STATE(120), 1,
      sym_scoped_name,
    STATE(121), 1,
      sym_literal,
    STATE(131), 1,
      sym_unary_expr,
    STATE(135), 1,
      sym_unary_operator,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8572] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(872), 17,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_typedef,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [8605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    STATE(119), 1,
      sym_comment,
    ACTIONS(878), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(880), 13,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8638] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
      sym_comment,
    ACTIONS(882), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(884), 13,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8671] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(882), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(884), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8701] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(886), 1,
      anon_sym_GT,
    ACTIONS(892), 1,
      anon_sym_SLASH,
    STATE(122), 1,
      sym_comment,
    ACTIONS(890), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(888), 12,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      sym_comment,
    ACTIONS(894), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(896), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_comment,
    ACTIONS(898), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(900), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8795] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_comment,
    ACTIONS(902), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(904), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8825] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_comment,
    ACTIONS(906), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(908), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_comment,
    ACTIONS(910), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(912), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_comment,
    ACTIONS(914), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(916), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8915] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(892), 1,
      anon_sym_SLASH,
    ACTIONS(918), 1,
      anon_sym_GT,
    STATE(129), 1,
      sym_comment,
    ACTIONS(890), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(920), 12,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(880), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [8979] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(922), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(924), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9009] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(928), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9039] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(930), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(932), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9069] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(936), 14,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9099] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(365), 1,
      anon_sym_L,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      sym_number_literal,
    ACTIONS(375), 1,
      sym_identifier,
    ACTIONS(938), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_scoped_name,
    STATE(130), 1,
      sym_literal,
    STATE(135), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(123), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9145] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(940), 1,
      anon_sym_GT,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_comment,
    ACTIONS(884), 9,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9178] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(944), 1,
      anon_sym_GT,
    STATE(137), 1,
      sym_comment,
    ACTIONS(948), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(946), 10,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9207] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(950), 1,
      anon_sym_GT,
    STATE(138), 1,
      sym_comment,
    ACTIONS(948), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(952), 10,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9236] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(791), 1,
      anon_sym_SLASH,
    ACTIONS(954), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_comment,
    ACTIONS(793), 11,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [9265] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(956), 1,
      anon_sym_GT,
    STATE(140), 1,
      sym_comment,
    ACTIONS(960), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(958), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9292] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(962), 1,
      anon_sym_GT,
    STATE(141), 1,
      sym_comment,
    ACTIONS(960), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(964), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9319] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(968), 1,
      anon_sym_DOLLAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(966), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9342] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(968), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(970), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(972), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(974), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [9388] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(976), 1,
      anon_sym_interface,
    ACTIONS(978), 1,
      anon_sym_local,
    ACTIONS(980), 1,
      anon_sym_bitmask,
    ACTIONS(982), 1,
      anon_sym_struct,
    STATE(145), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(528), 1,
      sym_interface_header,
  [9422] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(986), 1,
      anon_sym_CARET,
    STATE(146), 1,
      sym_comment,
    ACTIONS(984), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9444] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(986), 1,
      anon_sym_CARET,
    STATE(147), 1,
      sym_comment,
    ACTIONS(988), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9466] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    ACTIONS(994), 1,
      anon_sym_getraises,
    ACTIONS(996), 1,
      anon_sym_setraises,
    STATE(148), 1,
      sym_comment,
    STATE(242), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(243), 1,
      sym_get_excep_expr,
    STATE(408), 1,
      sym_set_excep_expr,
    STATE(411), 1,
      sym_attr_raises_expr,
  [9500] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(998), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_comment,
    ACTIONS(777), 5,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [9523] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(1002), 1,
      anon_sym_in,
    STATE(32), 1,
      sym_param_attribute,
    STATE(150), 1,
      sym_comment,
    STATE(239), 1,
      sym_param_dcl,
    STATE(413), 1,
      sym_parameter_dcls,
    ACTIONS(1004), 2,
      anon_sym_out,
      anon_sym_inout,
  [9552] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1006), 1,
      anon_sym_AT,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(151), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(758), 4,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitmask,
      anon_sym_struct,
  [9575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      anon_sym_PIPE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(1009), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(153), 1,
      sym_comment,
    ACTIONS(1013), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [9615] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    ACTIONS(1017), 1,
      anon_sym_default,
    ACTIONS(1019), 1,
      anon_sym_case,
    STATE(12), 1,
      sym_case_label,
    STATE(154), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_union_def_repeat1,
    STATE(268), 1,
      sym_case,
  [9643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(793), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [9661] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    ACTIONS(1023), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1025), 1,
      sym_identifier,
    STATE(156), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_enumerator_repeat1,
    STATE(300), 1,
      sym_enumerator,
    STATE(386), 1,
      sym_enum_modifier,
  [9689] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 1,
      anon_sym_default,
    ACTIONS(1032), 1,
      anon_sym_case,
    STATE(12), 1,
      sym_case_label,
    STATE(268), 1,
      sym_case,
    STATE(157), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [9715] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1017), 1,
      anon_sym_default,
    ACTIONS(1019), 1,
      anon_sym_case,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_case_label,
    STATE(154), 1,
      aux_sym_union_def_repeat1,
    STATE(158), 1,
      sym_comment,
    STATE(268), 1,
      sym_case,
  [9743] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1023), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1025), 1,
      sym_identifier,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_enumerator_repeat1,
    STATE(233), 1,
      sym_enumerator,
    STATE(386), 1,
      sym_enum_modifier,
  [9771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(765), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [9789] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1039), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_array_declarator_repeat1,
    STATE(213), 1,
      sym_fixed_array_size,
    ACTIONS(1013), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [9813] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1043), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_fixed_array_size,
    STATE(162), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1041), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [9835] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(1050), 1,
      sym_identifier,
    STATE(163), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_interface_def_repeat1,
    STATE(260), 1,
      sym_bit_value,
    STATE(373), 1,
      sym_annotation_appl,
  [9863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      sym_comment,
    ACTIONS(801), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [9881] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_interface_def_repeat1,
    STATE(273), 1,
      sym_bit_value,
    STATE(373), 1,
      sym_annotation_appl,
  [9909] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1039), 1,
      anon_sym_LBRACK,
    STATE(162), 1,
      aux_sym_array_declarator_repeat1,
    STATE(166), 1,
      sym_comment,
    STATE(213), 1,
      sym_fixed_array_size,
    ACTIONS(1054), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [9933] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1023), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1025), 1,
      sym_identifier,
    STATE(167), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_enumerator_repeat1,
    STATE(383), 1,
      sym_enumerator,
    STATE(386), 1,
      sym_enum_modifier,
  [9958] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(168), 1,
      sym_comment,
    STATE(225), 1,
      sym_declarator,
    STATE(259), 1,
      sym_declarators,
    STATE(258), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [9981] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(1050), 1,
      sym_identifier,
    STATE(169), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_interface_def_repeat1,
    STATE(350), 1,
      sym_bit_value,
    STATE(373), 1,
      sym_annotation_appl,
  [10006] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(1050), 1,
      sym_identifier,
    STATE(170), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_interface_def_repeat1,
    STATE(273), 1,
      sym_bit_value,
    STATE(373), 1,
      sym_annotation_appl,
  [10031] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
    ACTIONS(1060), 1,
      anon_sym_bitfield,
    STATE(171), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(284), 1,
      sym_bitfield_spec,
    STATE(344), 1,
      sym_bitfield,
  [10056] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1002), 1,
      anon_sym_in,
    STATE(32), 1,
      sym_param_attribute,
    STATE(172), 1,
      sym_comment,
    STATE(340), 1,
      sym_param_dcl,
    ACTIONS(1004), 2,
      anon_sym_out,
      anon_sym_inout,
  [10079] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      anon_sym_bitfield,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(284), 1,
      sym_bitfield_spec,
    STATE(344), 1,
      sym_bitfield,
  [10104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(174), 1,
      sym_comment,
    ACTIONS(805), 5,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      sym_comment,
    ACTIONS(809), 5,
      anon_sym_interface,
      anon_sym_local,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10138] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
    ACTIONS(1066), 1,
      anon_sym_bitfield,
    STATE(284), 1,
      sym_bitfield_spec,
    STATE(344), 1,
      sym_bitfield,
    STATE(176), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [10161] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      anon_sym_bitfield,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(177), 1,
      sym_comment,
    STATE(284), 1,
      sym_bitfield_spec,
    STATE(344), 1,
      sym_bitfield,
  [10186] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
    ACTIONS(1073), 1,
      anon_sym_raises,
    STATE(178), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(441), 1,
      sym_raises_expr,
  [10211] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(179), 1,
      sym_comment,
    STATE(225), 1,
      sym_declarator,
    STATE(427), 1,
      sym_declarators,
    STATE(258), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [10234] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(1050), 1,
      sym_identifier,
    STATE(180), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_interface_def_repeat1,
    STATE(234), 1,
      sym_bit_value,
    STATE(373), 1,
      sym_annotation_appl,
  [10259] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(980), 1,
      anon_sym_bitmask,
    ACTIONS(982), 1,
      anon_sym_struct,
    STATE(151), 1,
      aux_sym_interface_def_repeat1,
    STATE(174), 1,
      sym_annotation_appl,
    STATE(181), 1,
      sym_comment,
  [10284] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1075), 1,
      anon_sym_LBRACE,
    ACTIONS(1077), 1,
      anon_sym_COLON,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
    ACTIONS(1081), 1,
      anon_sym_supports,
    STATE(182), 1,
      sym_comment,
    STATE(502), 1,
      sym_value_inheritance_spec,
  [10309] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      anon_sym_bitfield,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(183), 1,
      sym_comment,
    STATE(284), 1,
      sym_bitfield_spec,
    STATE(344), 1,
      sym_bitfield,
  [10334] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(184), 1,
      sym_comment,
    STATE(225), 1,
      sym_declarator,
    STATE(287), 1,
      sym_declarators,
    STATE(258), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [10357] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(185), 1,
      sym_comment,
    STATE(229), 1,
      sym_any_declarator,
    STATE(499), 1,
      sym_any_declarators,
    STATE(318), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [10380] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(1050), 1,
      sym_identifier,
    STATE(186), 1,
      sym_comment,
    STATE(220), 1,
      aux_sym_interface_def_repeat1,
    STATE(341), 1,
      sym_bit_value,
    STATE(373), 1,
      sym_annotation_appl,
  [10405] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1085), 1,
      anon_sym_LT,
    STATE(187), 1,
      sym_comment,
    ACTIONS(1087), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [10423] = 7,
    ACTIONS(1089), 1,
      anon_sym_AT,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1093), 1,
      aux_sym_comment_token2,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    STATE(188), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym_interface_def_repeat1,
    STATE(364), 1,
      sym_annotation_appl,
  [10445] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1099), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [10465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1101), 1,
      anon_sym_COLON_COLON,
    STATE(190), 1,
      sym_comment,
    ACTIONS(942), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [10483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(191), 1,
      sym_comment,
    ACTIONS(1103), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(192), 1,
      sym_comment,
    ACTIONS(1105), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(193), 1,
      sym_comment,
    ACTIONS(1107), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(194), 1,
      sym_comment,
    ACTIONS(1109), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      sym_comment,
    ACTIONS(1111), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(196), 1,
      sym_comment,
    ACTIONS(1113), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10579] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(197), 1,
      sym_comment,
    ACTIONS(1115), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10595] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_comment,
    ACTIONS(1117), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(199), 1,
      sym_comment,
    ACTIONS(1119), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10627] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      sym_comment,
    ACTIONS(1121), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [10643] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1123), 1,
      anon_sym_LBRACE,
    ACTIONS(1125), 1,
      anon_sym_COLON,
    STATE(201), 1,
      sym_comment,
    ACTIONS(1127), 2,
      anon_sym_SEMI,
      sym_identifier,
  [10663] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(202), 1,
      sym_comment,
    STATE(290), 1,
      sym_scoped_name,
    STATE(461), 1,
      sym_interface_name,
  [10685] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(203), 1,
      sym_comment,
    STATE(252), 1,
      sym_declarator,
    STATE(258), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [10705] = 6,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1133), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [10725] = 6,
    ACTIONS(756), 1,
      aux_sym_comment_token1,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      anon_sym_AT,
    STATE(364), 1,
      sym_annotation_appl,
    STATE(205), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [10745] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      anon_sym_in,
    STATE(206), 1,
      sym_comment,
    STATE(236), 1,
      sym_init_param_dcl,
    STATE(483), 1,
      sym_init_param_dcls,
  [10767] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(207), 1,
      sym_comment,
    STATE(289), 1,
      sym_interface_name,
    STATE(290), 1,
      sym_scoped_name,
  [10789] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(208), 1,
      sym_comment,
    STATE(290), 1,
      sym_scoped_name,
    STATE(343), 1,
      sym_interface_name,
  [10811] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1142), 1,
      anon_sym_LBRACE,
    ACTIONS(1144), 1,
      anon_sym_COLON,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      sym_comment,
    STATE(504), 1,
      sym_interface_inheritance_spec,
  [10833] = 7,
    ACTIONS(1089), 1,
      anon_sym_AT,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      aux_sym_comment_token1,
    STATE(205), 1,
      aux_sym_interface_def_repeat1,
    STATE(210), 1,
      sym_comment,
    STATE(364), 1,
      sym_annotation_appl,
  [10855] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    STATE(211), 1,
      sym_comment,
    ACTIONS(791), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [10871] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    STATE(212), 1,
      sym_comment,
    ACTIONS(763), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [10887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(213), 1,
      sym_comment,
    ACTIONS(1150), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [10903] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(214), 1,
      sym_comment,
    STATE(508), 1,
      sym_declarator,
    STATE(258), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [10923] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(215), 1,
      sym_comment,
    STATE(324), 1,
      sym_any_declarator,
    STATE(318), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [10943] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1155), 1,
      sym_identifier,
    STATE(386), 1,
      sym_enum_modifier,
    STATE(216), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [10963] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(217), 1,
      sym_comment,
    STATE(232), 1,
      sym_scoped_name,
    STATE(397), 1,
      sym_value_name,
  [10985] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    STATE(218), 1,
      sym_comment,
    ACTIONS(799), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [11001] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1101), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_AT,
      sym_identifier,
  [11021] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(758), 1,
      sym_identifier,
    ACTIONS(1159), 1,
      anon_sym_AT,
    STATE(373), 1,
      sym_annotation_appl,
    STATE(220), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [11041] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1162), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(221), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [11059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(222), 1,
      sym_comment,
    ACTIONS(1167), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [11075] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(223), 1,
      sym_comment,
    STATE(290), 1,
      sym_scoped_name,
    STATE(417), 1,
      sym_interface_name,
  [11097] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_comment,
    STATE(302), 1,
      aux_sym_raises_expr_repeat1,
  [11119] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_declarators_repeat1,
    STATE(225), 1,
      sym_comment,
    ACTIONS(1173), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [11139] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1023), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1175), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_enumerator_repeat1,
    STATE(226), 1,
      sym_comment,
    STATE(386), 1,
      sym_enum_modifier,
  [11161] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym_raises_expr_repeat1,
  [11183] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_annotation_appl_params_repeat1,
  [11202] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    STATE(229), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym_any_declarators_repeat1,
  [11221] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_bitmask_dcl_repeat1,
  [11240] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1191), 1,
      anon_sym_GT,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_actual_parameters_repeat1,
  [11259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    STATE(232), 1,
      sym_comment,
    ACTIONS(1195), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [11276] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_enum_dcl_repeat1,
  [11295] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(234), 1,
      sym_comment,
  [11314] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_enum_dcl_repeat1,
  [11333] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_init_param_dcls_repeat1,
  [11352] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1073), 1,
      anon_sym_raises,
    ACTIONS(1207), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      sym_comment,
    STATE(455), 1,
      sym_raises_expr,
  [11371] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1209), 1,
      sym_identifier,
    STATE(219), 1,
      sym_scoped_name,
    STATE(238), 1,
      sym_comment,
  [11390] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_parameter_dcls_repeat1,
  [11409] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1215), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(70), 1,
      sym_scoped_name,
    STATE(240), 1,
      sym_comment,
  [11428] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1073), 1,
      anon_sym_raises,
    ACTIONS(1219), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      sym_comment,
    STATE(449), 1,
      sym_raises_expr,
  [11447] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      sym_comment,
    STATE(276), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [11466] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(996), 1,
      anon_sym_setraises,
    ACTIONS(1223), 1,
      anon_sym_SEMI,
    STATE(243), 1,
      sym_comment,
    STATE(447), 1,
      sym_set_excep_expr,
  [11485] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(149), 1,
      sym_scoped_name,
    STATE(244), 1,
      sym_comment,
  [11504] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1225), 1,
      sym_identifier,
    STATE(245), 1,
      sym_comment,
    STATE(366), 1,
      sym_scoped_name,
  [11523] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(246), 1,
      sym_comment,
    ACTIONS(1227), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [11538] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_init_param_dcls_repeat1,
  [11557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(248), 1,
      sym_comment,
    ACTIONS(1231), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(249), 1,
      sym_comment,
    ACTIONS(1233), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [11587] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(250), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [11604] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1073), 1,
      anon_sym_raises,
    ACTIONS(1240), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      sym_comment,
    STATE(487), 1,
      sym_raises_expr,
  [11623] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      sym_comment,
    ACTIONS(1165), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11638] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_any_declarators_repeat1,
  [11657] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(148), 1,
      sym_simple_declarator,
    STATE(254), 1,
      sym_comment,
    STATE(428), 1,
      sym_attr_declarator,
  [11676] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1246), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1248), 1,
      sym_identifier,
    STATE(204), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_comment,
  [11695] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_parameter_dcls_repeat1,
  [11714] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(257), 1,
      sym_comment,
    STATE(336), 1,
      sym_scoped_name,
  [11733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(258), 1,
      sym_comment,
    ACTIONS(1252), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [11748] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1254), 1,
      anon_sym_SEMI,
    ACTIONS(1256), 1,
      anon_sym_default,
    STATE(259), 1,
      sym_comment,
    STATE(424), 1,
      sym_default,
  [11767] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      sym_comment,
    STATE(272), 1,
      aux_sym_bitmask_dcl_repeat1,
  [11786] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [11805] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1073), 1,
      anon_sym_raises,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      sym_comment,
    STATE(481), 1,
      sym_raises_expr,
  [11824] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1264), 1,
      anon_sym_GT,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    STATE(263), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [11841] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1269), 1,
      anon_sym_GT,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    STATE(264), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [11858] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(265), 2,
      sym_comment,
      aux_sym_annotation_appl_params_repeat1,
  [11875] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1279), 1,
      anon_sym_SEMI,
    ACTIONS(1281), 1,
      sym_identifier,
    STATE(266), 1,
      sym_comment,
    STATE(283), 1,
      aux_sym_bitfield_repeat1,
  [11894] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(793), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1283), 1,
      anon_sym_LT,
    ACTIONS(1285), 1,
      anon_sym_LBRACE,
    STATE(267), 1,
      sym_comment,
  [11913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(268), 1,
      sym_comment,
    ACTIONS(1287), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [11928] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_SEMI,
    ACTIONS(1291), 1,
      anon_sym_switch,
    ACTIONS(1293), 1,
      sym_identifier,
    STATE(269), 1,
      sym_comment,
  [11947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1295), 1,
      anon_sym_GT,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(270), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [11964] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(271), 1,
      sym_comment,
    ACTIONS(1300), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [11979] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_bitmask_dcl_repeat1,
  [11998] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym_bitmask_dcl_repeat1,
  [12017] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1304), 1,
      anon_sym_GT,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(274), 1,
      sym_comment,
  [12036] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(275), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
  [12053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1313), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_SEMI,
    STATE(276), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [12070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(277), 1,
      sym_comment,
    ACTIONS(1318), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12085] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym_bitmask_dcl_repeat1,
  [12104] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(224), 1,
      sym_scoped_name,
    STATE(279), 1,
      sym_comment,
  [12123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1320), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_RBRACE,
    STATE(280), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [12140] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(276), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(281), 1,
      sym_comment,
  [12159] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(282), 1,
      sym_comment,
    ACTIONS(1327), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12174] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1329), 1,
      anon_sym_SEMI,
    ACTIONS(1331), 1,
      sym_identifier,
    STATE(283), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [12191] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1281), 1,
      sym_identifier,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      aux_sym_bitfield_repeat1,
    STATE(284), 1,
      sym_comment,
  [12210] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_LBRACE,
    STATE(285), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [12227] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(227), 1,
      sym_scoped_name,
    STATE(286), 1,
      sym_comment,
  [12246] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1256), 1,
      anon_sym_default,
    ACTIONS(1341), 1,
      anon_sym_SEMI,
    STATE(287), 1,
      sym_comment,
    STATE(419), 1,
      sym_default,
  [12265] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    STATE(288), 1,
      sym_comment,
    ACTIONS(1311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12282] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(289), 1,
      sym_comment,
  [12301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    STATE(290), 1,
      sym_comment,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(291), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [12335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(292), 1,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(293), 1,
      sym_comment,
    ACTIONS(942), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12365] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_raises_expr_repeat1,
    STATE(294), 1,
      sym_comment,
  [12384] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(295), 1,
      sym_comment,
  [12403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(296), 1,
      sym_comment,
    ACTIONS(1358), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_comment,
    ACTIONS(1360), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(298), 1,
      sym_comment,
    ACTIONS(1362), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [12448] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1364), 1,
      anon_sym_GT,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(299), 1,
      sym_comment,
  [12467] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(300), 1,
      sym_comment,
  [12486] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1306), 1,
      anon_sym_COMMA,
    ACTIONS(1370), 1,
      anon_sym_GT,
    STATE(274), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(301), 1,
      sym_comment,
  [12505] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_raises_expr_repeat1,
    STATE(302), 1,
      sym_comment,
  [12524] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(303), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [12541] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_GT,
    STATE(263), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(304), 1,
      sym_comment,
  [12560] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1142), 1,
      anon_sym_LBRACE,
    ACTIONS(1144), 1,
      anon_sym_COLON,
    STATE(305), 1,
      sym_comment,
    STATE(504), 1,
      sym_interface_inheritance_spec,
  [12579] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(306), 1,
      sym_comment,
    STATE(347), 1,
      sym_scoped_name,
  [12598] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(178), 1,
      sym_simple_declarator,
    STATE(307), 1,
      sym_comment,
    STATE(409), 1,
      sym_readonly_attr_declarator,
  [12617] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_SEMI,
    STATE(308), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [12634] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(288), 1,
      sym_scoped_name,
    STATE(309), 1,
      sym_comment,
  [12653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(310), 1,
      sym_comment,
    ACTIONS(1386), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12668] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(311), 1,
      sym_comment,
    STATE(394), 1,
      sym_scoped_name,
  [12687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(312), 1,
      sym_comment,
    ACTIONS(1388), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12702] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(313), 1,
      sym_comment,
  [12721] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(314), 1,
      sym_comment,
    STATE(403), 1,
      sym_scoped_name,
  [12740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(315), 1,
      sym_comment,
    ACTIONS(1390), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1392), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [12770] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_GT,
    STATE(299), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(317), 1,
      sym_comment,
  [12789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1396), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12803] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [12817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1400), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12831] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(321), 1,
      sym_comment,
    ACTIONS(1402), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12845] = 5,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1404), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(1406), 1,
      sym_preproc_arg,
    STATE(322), 1,
      sym_comment,
  [12861] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      sym_comment,
  [12877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(324), 1,
      sym_comment,
    ACTIONS(1384), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1410), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12905] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(326), 1,
      sym_comment,
    ACTIONS(1412), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1414), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12933] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(328), 1,
      sym_comment,
    ACTIONS(1416), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(329), 1,
      sym_comment,
    ACTIONS(1418), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [12961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(330), 1,
      sym_comment,
    ACTIONS(1420), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(332), 1,
      sym_comment,
    ACTIONS(1422), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1424), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13017] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(976), 1,
      anon_sym_interface,
    STATE(334), 1,
      sym_comment,
    STATE(486), 1,
      sym_interface_header,
  [13033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1428), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym_comment,
  [13063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1430), 1,
      sym_identifier,
    STATE(337), 1,
      sym_comment,
    STATE(371), 1,
      sym_annotation_appl_param,
  [13079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1434), 1,
      anon_sym_LBRACE,
    ACTIONS(1436), 1,
      anon_sym_COLON,
    STATE(339), 1,
      sym_comment,
  [13109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(340), 1,
      sym_comment,
    ACTIONS(1350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(341), 1,
      sym_comment,
    ACTIONS(1438), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(342), 1,
      sym_comment,
    ACTIONS(1440), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13151] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1339), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13165] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(344), 1,
      sym_comment,
    ACTIONS(1442), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [13179] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1444), 1,
      anon_sym_GT,
    ACTIONS(1446), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      sym_comment,
  [13195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(346), 1,
      sym_comment,
    ACTIONS(1448), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [13209] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1450), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      sym_comment,
  [13225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1452), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(349), 1,
      sym_comment,
    ACTIONS(1454), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1456), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [13281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1458), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(353), 1,
      sym_comment,
    ACTIONS(1316), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(354), 1,
      sym_comment,
    ACTIONS(1460), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [13323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13337] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1464), 1,
      sym_identifier,
    STATE(356), 1,
      sym_comment,
    STATE(506), 1,
      sym_formal_parameter_names,
  [13353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1101), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1466), 1,
      sym_identifier,
    STATE(357), 1,
      sym_comment,
  [13369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(358), 1,
      sym_comment,
    ACTIONS(1468), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1470), 1,
      anon_sym_SEMI,
    ACTIONS(1472), 1,
      anon_sym_default,
    STATE(359), 1,
      sym_comment,
  [13399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(360), 1,
      sym_comment,
    ACTIONS(1474), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(361), 1,
      sym_comment,
    ACTIONS(1295), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(362), 1,
      sym_comment,
    ACTIONS(1476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13441] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1101), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1478), 1,
      sym_identifier,
    STATE(363), 1,
      sym_comment,
  [13457] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    STATE(364), 1,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(359), 1,
      sym_simple_declarator,
    STATE(365), 1,
      sym_comment,
  [13487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1480), 1,
      anon_sym_LT,
    STATE(366), 1,
      sym_comment,
  [13503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(367), 1,
      sym_comment,
    ACTIONS(1482), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13517] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1484), 1,
      anon_sym_LBRACE,
    ACTIONS(1486), 1,
      anon_sym_COLON,
    STATE(368), 1,
      sym_comment,
  [13533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1488), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13547] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    STATE(370), 1,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [13561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(371), 1,
      sym_comment,
    ACTIONS(1277), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(372), 1,
      sym_comment,
    ACTIONS(1490), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(373), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_AT,
      sym_identifier,
  [13603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(374), 1,
      sym_comment,
    ACTIONS(1269), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(375), 1,
      sym_comment,
    ACTIONS(1492), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [13631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(376), 1,
      sym_comment,
    STATE(512), 1,
      sym_simple_declarator,
  [13647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(377), 1,
      sym_comment,
    ACTIONS(1264), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13661] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
    ACTIONS(1496), 1,
      anon_sym_SQUOTE,
    STATE(378), 1,
      sym_comment,
  [13677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(379), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_AT,
      sym_identifier,
  [13691] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(380), 1,
      sym_comment,
    ACTIONS(1498), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13705] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(338), 1,
      sym_simple_declarator,
    STATE(381), 1,
      sym_comment,
  [13721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(335), 1,
      sym_simple_declarator,
    STATE(382), 1,
      sym_comment,
  [13737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(383), 1,
      sym_comment,
    ACTIONS(1238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(384), 1,
      sym_comment,
    ACTIONS(1500), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      anon_sym_in,
    STATE(331), 1,
      sym_init_param_dcl,
    STATE(385), 1,
      sym_comment,
  [13781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(386), 1,
      sym_comment,
    ACTIONS(1502), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [13795] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1504), 1,
      anon_sym_GT,
    ACTIONS(1506), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      sym_comment,
  [13811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(388), 1,
      sym_comment,
    ACTIONS(1508), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(389), 1,
      sym_comment,
    ACTIONS(1510), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [13839] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(353), 1,
      sym_simple_declarator,
    STATE(390), 1,
      sym_comment,
  [13855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1512), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_exception_list,
    STATE(391), 1,
      sym_comment,
  [13871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1512), 1,
      anon_sym_LPAREN,
    STATE(392), 1,
      sym_comment,
    STATE(446), 1,
      sym_exception_list,
  [13887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(393), 1,
      sym_comment,
    ACTIONS(1514), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1516), 1,
      anon_sym_LBRACE,
    STATE(394), 1,
      sym_comment,
  [13917] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(395), 1,
      sym_comment,
    ACTIONS(1518), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(396), 1,
      sym_comment,
    ACTIONS(1520), 2,
      anon_sym_SEMI,
      sym_identifier,
  [13945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1522), 1,
      anon_sym_LBRACE,
    ACTIONS(1524), 1,
      anon_sym_supports,
    STATE(397), 1,
      sym_comment,
  [13961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1526), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [13975] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      sym_comment,
  [13991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1528), 2,
      anon_sym_SEMI,
      sym_identifier,
  [14005] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(976), 1,
      anon_sym_interface,
    STATE(401), 1,
      sym_comment,
    STATE(528), 1,
      sym_interface_header,
  [14021] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1530), 1,
      anon_sym_LT,
    ACTIONS(1532), 1,
      sym_identifier,
    STATE(402), 1,
      sym_comment,
  [14037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1534), 1,
      anon_sym_LT,
    STATE(403), 1,
      sym_comment,
  [14053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(404), 1,
      sym_comment,
    ACTIONS(1536), 2,
      anon_sym_SEMI,
      sym_identifier,
  [14067] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(405), 1,
      sym_comment,
    ACTIONS(1538), 2,
      anon_sym_SEMI,
      sym_identifier,
  [14081] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1540), 1,
      sym_identifier,
    STATE(406), 1,
      sym_comment,
  [14094] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1542), 1,
      anon_sym_SEMI,
    STATE(407), 1,
      sym_comment,
  [14107] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1223), 1,
      anon_sym_SEMI,
    STATE(408), 1,
      sym_comment,
  [14120] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1544), 1,
      anon_sym_SEMI,
    STATE(409), 1,
      sym_comment,
  [14133] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_SEMI,
    STATE(410), 1,
      sym_comment,
  [14146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      anon_sym_SEMI,
    STATE(411), 1,
      sym_comment,
  [14159] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1548), 1,
      anon_sym_GT,
    STATE(412), 1,
      sym_comment,
  [14172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1550), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      sym_comment,
  [14185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1552), 1,
      anon_sym_GT,
    STATE(414), 1,
      sym_comment,
  [14198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1554), 1,
      anon_sym_LBRACE,
    STATE(415), 1,
      sym_comment,
  [14211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1556), 1,
      anon_sym_SEMI,
    STATE(416), 1,
      sym_comment,
  [14224] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1558), 1,
      anon_sym_LBRACE,
    STATE(417), 1,
      sym_comment,
  [14237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1560), 1,
      anon_sym_SEMI,
    STATE(418), 1,
      sym_comment,
  [14250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1562), 1,
      anon_sym_SEMI,
    STATE(419), 1,
      sym_comment,
  [14263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(954), 1,
      anon_sym_EQ,
    STATE(420), 1,
      sym_comment,
  [14276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_comment,
  [14289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1566), 1,
      anon_sym_SQUOTE,
    STATE(422), 1,
      sym_comment,
  [14302] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1568), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      sym_comment,
  [14315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1570), 1,
      anon_sym_SEMI,
    STATE(424), 1,
      sym_comment,
  [14328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1572), 1,
      anon_sym_SEMI,
    STATE(425), 1,
      sym_comment,
  [14341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1574), 1,
      anon_sym_RBRACE,
    STATE(426), 1,
      sym_comment,
  [14354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1576), 1,
      anon_sym_SEMI,
    STATE(427), 1,
      sym_comment,
  [14367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    STATE(428), 1,
      sym_comment,
  [14380] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1580), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      sym_comment,
  [14393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_RBRACK,
    STATE(430), 1,
      sym_comment,
  [14406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1584), 1,
      anon_sym_SEMI,
    STATE(431), 1,
      sym_comment,
  [14419] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_SEMI,
    STATE(432), 1,
      sym_comment,
  [14432] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1588), 1,
      anon_sym_SEMI,
    STATE(433), 1,
      sym_comment,
  [14445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1590), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_comment,
  [14458] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_comment,
  [14471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1592), 1,
      sym_identifier,
    STATE(436), 1,
      sym_comment,
  [14484] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1594), 1,
      anon_sym_SEMI,
    STATE(437), 1,
      sym_comment,
  [14497] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1596), 1,
      anon_sym_LBRACE,
    STATE(438), 1,
      sym_comment,
  [14510] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1598), 1,
      sym_identifier,
    STATE(439), 1,
      sym_comment,
  [14523] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1600), 1,
      anon_sym_LPAREN,
    STATE(440), 1,
      sym_comment,
  [14536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(441), 1,
      sym_comment,
  [14549] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1602), 1,
      anon_sym_SQUOTE,
    STATE(442), 1,
      sym_comment,
  [14562] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1604), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym_comment,
  [14575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1606), 1,
      aux_sym_char_literal_token1,
    STATE(444), 1,
      sym_comment,
  [14588] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1608), 1,
      aux_sym_string_literal_token1,
    STATE(445), 1,
      sym_comment,
  [14601] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1610), 1,
      anon_sym_SEMI,
    STATE(446), 1,
      sym_comment,
  [14614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1612), 1,
      anon_sym_SEMI,
    STATE(447), 1,
      sym_comment,
  [14627] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1614), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_comment,
  [14640] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    STATE(449), 1,
      sym_comment,
  [14653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1616), 1,
      anon_sym_SEMI,
    STATE(450), 1,
      sym_comment,
  [14666] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1618), 1,
      anon_sym_SEMI,
    STATE(451), 1,
      sym_comment,
  [14679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1620), 1,
      anon_sym_SEMI,
    STATE(452), 1,
      sym_comment,
  [14692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      anon_sym_SEMI,
    STATE(453), 1,
      sym_comment,
  [14705] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1624), 1,
      anon_sym_LPAREN,
    STATE(454), 1,
      sym_comment,
  [14718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      sym_comment,
  [14731] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_LPAREN,
    STATE(456), 1,
      sym_comment,
  [14744] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1628), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      sym_comment,
  [14757] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1630), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      sym_comment,
  [14770] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1632), 1,
      anon_sym_GT,
    STATE(459), 1,
      sym_comment,
  [14783] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1634), 1,
      anon_sym_GT,
    STATE(460), 1,
      sym_comment,
  [14796] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1522), 1,
      anon_sym_LBRACE,
    STATE(461), 1,
      sym_comment,
  [14809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1636), 1,
      anon_sym_GT,
    STATE(462), 1,
      sym_comment,
  [14822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1638), 1,
      anon_sym_SEMI,
    STATE(463), 1,
      sym_comment,
  [14835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1640), 1,
      sym_identifier,
    STATE(464), 1,
      sym_comment,
  [14848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1642), 1,
      anon_sym_GT,
    STATE(465), 1,
      sym_comment,
  [14861] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1644), 1,
      anon_sym_GT,
    STATE(466), 1,
      sym_comment,
  [14874] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1646), 1,
      anon_sym_GT,
    STATE(467), 1,
      sym_comment,
  [14887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1532), 1,
      sym_identifier,
    STATE(468), 1,
      sym_comment,
  [14900] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1648), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym_comment,
  [14913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1650), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      sym_comment,
  [14926] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_comment,
  [14939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1652), 1,
      aux_sym_char_literal_token1,
    STATE(472), 1,
      sym_comment,
  [14952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1654), 1,
      anon_sym_COLON,
    STATE(473), 1,
      sym_comment,
  [14965] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1656), 1,
      aux_sym_string_literal_token1,
    STATE(474), 1,
      sym_comment,
  [14978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1658), 1,
      anon_sym_SEMI,
    STATE(475), 1,
      sym_comment,
  [14991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1478), 1,
      sym_identifier,
    STATE(476), 1,
      sym_comment,
  [15004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1660), 1,
      anon_sym_SEMI,
    STATE(477), 1,
      sym_comment,
  [15017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1662), 1,
      anon_sym_GT,
    STATE(478), 1,
      sym_comment,
  [15030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1664), 1,
      sym_identifier,
    STATE(479), 1,
      sym_comment,
  [15043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1666), 1,
      anon_sym_LT,
    STATE(480), 1,
      sym_comment,
  [15056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1668), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      sym_comment,
  [15069] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(482), 1,
      sym_comment,
  [15082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1670), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      sym_comment,
  [15095] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1672), 1,
      anon_sym_SEMI,
    STATE(484), 1,
      sym_comment,
  [15108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1674), 1,
      anon_sym_LBRACE,
    STATE(485), 1,
      sym_comment,
  [15121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1676), 1,
      anon_sym_LBRACE,
    STATE(486), 1,
      sym_comment,
  [15134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1678), 1,
      anon_sym_SEMI,
    STATE(487), 1,
      sym_comment,
  [15147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1680), 1,
      anon_sym_LBRACE,
    STATE(488), 1,
      sym_comment,
  [15160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1682), 1,
      sym_identifier,
    STATE(489), 1,
      sym_comment,
  [15173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1684), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_comment,
  [15186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1686), 1,
      anon_sym_SEMI,
    STATE(491), 1,
      sym_comment,
  [15199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      sym_comment,
  [15212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1688), 1,
      anon_sym_SEMI,
    STATE(493), 1,
      sym_comment,
  [15225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1690), 1,
      anon_sym_attribute,
    STATE(494), 1,
      sym_comment,
  [15238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1692), 1,
      anon_sym_COLON,
    STATE(495), 1,
      sym_comment,
  [15251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1694), 1,
      sym_identifier,
    STATE(496), 1,
      sym_comment,
  [15264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1696), 1,
      anon_sym_SEMI,
    STATE(497), 1,
      sym_comment,
  [15277] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1698), 1,
      aux_sym_comment_token3,
    STATE(498), 1,
      sym_comment,
  [15290] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1700), 1,
      anon_sym_SEMI,
    STATE(499), 1,
      sym_comment,
  [15303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1702), 1,
      anon_sym_EQ,
    STATE(500), 1,
      sym_comment,
  [15316] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
    STATE(501), 1,
      sym_comment,
  [15329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1706), 1,
      anon_sym_LBRACE,
    STATE(502), 1,
      sym_comment,
  [15342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1708), 1,
      sym_identifier,
    STATE(503), 1,
      sym_comment,
  [15355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1710), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_comment,
  [15368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1712), 1,
      sym_identifier,
    STATE(505), 1,
      sym_comment,
  [15381] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1714), 1,
      anon_sym_GT,
    STATE(506), 1,
      sym_comment,
  [15394] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1716), 1,
      sym_identifier,
    STATE(507), 1,
      sym_comment,
  [15407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1718), 1,
      anon_sym_SEMI,
    STATE(508), 1,
      sym_comment,
  [15420] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1720), 1,
      sym_identifier,
    STATE(509), 1,
      sym_comment,
  [15433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1722), 1,
      sym_identifier,
    STATE(510), 1,
      sym_comment,
  [15446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1724), 1,
      anon_sym_SEMI,
    STATE(511), 1,
      sym_comment,
  [15459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1726), 1,
      anon_sym_SEMI,
    STATE(512), 1,
      sym_comment,
  [15472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1728), 1,
      anon_sym_SEMI,
    STATE(513), 1,
      sym_comment,
  [15485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1730), 1,
      anon_sym_LT,
    STATE(514), 1,
      sym_comment,
  [15498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1732), 1,
      anon_sym_LT,
    STATE(515), 1,
      sym_comment,
  [15511] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1734), 1,
      sym_identifier,
    STATE(516), 1,
      sym_comment,
  [15524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1736), 1,
      sym_identifier,
    STATE(517), 1,
      sym_comment,
  [15537] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1738), 1,
      sym_identifier,
    STATE(518), 1,
      sym_comment,
  [15550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1740), 1,
      anon_sym_SEMI,
    STATE(519), 1,
      sym_comment,
  [15563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1530), 1,
      anon_sym_LT,
    STATE(520), 1,
      sym_comment,
  [15576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1742), 1,
      sym_identifier,
    STATE(521), 1,
      sym_comment,
  [15589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1744), 1,
      anon_sym_SEMI,
    STATE(522), 1,
      sym_comment,
  [15602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1466), 1,
      sym_identifier,
    STATE(523), 1,
      sym_comment,
  [15615] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1746), 1,
      anon_sym_LBRACE,
    STATE(524), 1,
      sym_comment,
  [15628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1748), 1,
      sym_identifier,
    STATE(525), 1,
      sym_comment,
  [15641] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1750), 1,
      anon_sym_LBRACE,
    STATE(526), 1,
      sym_comment,
  [15654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1752), 1,
      anon_sym_LBRACE,
    STATE(527), 1,
      sym_comment,
  [15667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_LBRACE,
    STATE(528), 1,
      sym_comment,
  [15680] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1756), 1,
      sym_identifier,
    STATE(529), 1,
      sym_comment,
  [15693] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1758), 1,
      anon_sym_LBRACE,
    STATE(530), 1,
      sym_comment,
  [15706] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1760), 1,
      aux_sym_preproc_call_token1,
    STATE(531), 1,
      sym_comment,
  [15719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      anon_sym_SLASH,
    STATE(532), 1,
      sym_comment,
  [15732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1762), 1,
      sym_identifier,
    STATE(533), 1,
      sym_comment,
  [15745] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1764), 1,
      anon_sym_enum,
    STATE(534), 1,
      sym_comment,
  [15758] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1766), 1,
      anon_sym_LBRACE,
    STATE(535), 1,
      sym_comment,
  [15771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1768), 1,
      anon_sym_SEMI,
    STATE(536), 1,
      sym_comment,
  [15784] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1770), 1,
      anon_sym_LBRACE,
    STATE(537), 1,
      sym_comment,
  [15797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1772), 1,
      anon_sym_SEMI,
    STATE(538), 1,
      sym_comment,
  [15810] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1774), 1,
      anon_sym_SEMI,
    STATE(539), 1,
      sym_comment,
  [15823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1776), 1,
      ts_builtin_sym_end,
    STATE(540), 1,
      sym_comment,
  [15836] = 4,
    ACTIONS(1091), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1778), 1,
      aux_sym_predefine_token1,
    STATE(541), 1,
      sym_comment,
  [15849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1780), 1,
      anon_sym_enum,
    STATE(542), 1,
      sym_comment,
  [15862] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1782), 1,
      sym_identifier,
    STATE(543), 1,
      sym_comment,
  [15875] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1784), 1,
      sym_identifier,
    STATE(544), 1,
      sym_comment,
  [15888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1786), 1,
      sym_identifier,
    STATE(545), 1,
      sym_comment,
  [15901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1788), 1,
      sym_identifier,
    STATE(546), 1,
      sym_comment,
  [15914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1790), 1,
      sym_identifier,
    STATE(547), 1,
      sym_comment,
  [15927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1792), 1,
      anon_sym_SEMI,
    STATE(548), 1,
      sym_comment,
  [15940] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1794), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_comment,
  [15953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(550), 1,
      sym_comment,
  [15966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1798), 1,
      sym_identifier,
    STATE(551), 1,
      sym_comment,
  [15979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1800), 1,
      sym_identifier,
    STATE(552), 1,
      sym_comment,
  [15992] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1802), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      sym_comment,
  [16005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1804), 1,
      sym_identifier,
    STATE(554), 1,
      sym_comment,
  [16018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1806), 1,
      sym_identifier,
    STATE(555), 1,
      sym_comment,
  [16031] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1808), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      sym_comment,
  [16044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1810), 1,
      sym_identifier,
    STATE(557), 1,
      sym_comment,
  [16057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1812), 1,
      sym_identifier,
    STATE(558), 1,
      sym_comment,
  [16070] = 1,
    ACTIONS(1814), 1,
      ts_builtin_sym_end,
  [16074] = 1,
    ACTIONS(1816), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 708,
  [SMALL_STATE(20)] = 848,
  [SMALL_STATE(21)] = 988,
  [SMALL_STATE(22)] = 1128,
  [SMALL_STATE(23)] = 1268,
  [SMALL_STATE(24)] = 1408,
  [SMALL_STATE(25)] = 1548,
  [SMALL_STATE(26)] = 1688,
  [SMALL_STATE(27)] = 1828,
  [SMALL_STATE(28)] = 1968,
  [SMALL_STATE(29)] = 2099,
  [SMALL_STATE(30)] = 2224,
  [SMALL_STATE(31)] = 2352,
  [SMALL_STATE(32)] = 2474,
  [SMALL_STATE(33)] = 2596,
  [SMALL_STATE(34)] = 2718,
  [SMALL_STATE(35)] = 2840,
  [SMALL_STATE(36)] = 2962,
  [SMALL_STATE(37)] = 3086,
  [SMALL_STATE(38)] = 3208,
  [SMALL_STATE(39)] = 3330,
  [SMALL_STATE(40)] = 3452,
  [SMALL_STATE(41)] = 3576,
  [SMALL_STATE(42)] = 3700,
  [SMALL_STATE(43)] = 3822,
  [SMALL_STATE(44)] = 3936,
  [SMALL_STATE(45)] = 4051,
  [SMALL_STATE(46)] = 4166,
  [SMALL_STATE(47)] = 4227,
  [SMALL_STATE(48)] = 4288,
  [SMALL_STATE(49)] = 4349,
  [SMALL_STATE(50)] = 4410,
  [SMALL_STATE(51)] = 4471,
  [SMALL_STATE(52)] = 4532,
  [SMALL_STATE(53)] = 4593,
  [SMALL_STATE(54)] = 4708,
  [SMALL_STATE(55)] = 4823,
  [SMALL_STATE(56)] = 4881,
  [SMALL_STATE(57)] = 4939,
  [SMALL_STATE(58)] = 5044,
  [SMALL_STATE(59)] = 5149,
  [SMALL_STATE(60)] = 5202,
  [SMALL_STATE(61)] = 5255,
  [SMALL_STATE(62)] = 5302,
  [SMALL_STATE(63)] = 5349,
  [SMALL_STATE(64)] = 5396,
  [SMALL_STATE(65)] = 5443,
  [SMALL_STATE(66)] = 5490,
  [SMALL_STATE(67)] = 5540,
  [SMALL_STATE(68)] = 5585,
  [SMALL_STATE(69)] = 5630,
  [SMALL_STATE(70)] = 5675,
  [SMALL_STATE(71)] = 5722,
  [SMALL_STATE(72)] = 5767,
  [SMALL_STATE(73)] = 5812,
  [SMALL_STATE(74)] = 5895,
  [SMALL_STATE(75)] = 5940,
  [SMALL_STATE(76)] = 5985,
  [SMALL_STATE(77)] = 6030,
  [SMALL_STATE(78)] = 6074,
  [SMALL_STATE(79)] = 6118,
  [SMALL_STATE(80)] = 6161,
  [SMALL_STATE(81)] = 6247,
  [SMALL_STATE(82)] = 6333,
  [SMALL_STATE(83)] = 6419,
  [SMALL_STATE(84)] = 6505,
  [SMALL_STATE(85)] = 6588,
  [SMALL_STATE(86)] = 6671,
  [SMALL_STATE(87)] = 6754,
  [SMALL_STATE(88)] = 6837,
  [SMALL_STATE(89)] = 6920,
  [SMALL_STATE(90)] = 7003,
  [SMALL_STATE(91)] = 7086,
  [SMALL_STATE(92)] = 7166,
  [SMALL_STATE(93)] = 7246,
  [SMALL_STATE(94)] = 7326,
  [SMALL_STATE(95)] = 7406,
  [SMALL_STATE(96)] = 7474,
  [SMALL_STATE(97)] = 7554,
  [SMALL_STATE(98)] = 7594,
  [SMALL_STATE(99)] = 7634,
  [SMALL_STATE(100)] = 7714,
  [SMALL_STATE(101)] = 7794,
  [SMALL_STATE(102)] = 7834,
  [SMALL_STATE(103)] = 7908,
  [SMALL_STATE(104)] = 7979,
  [SMALL_STATE(105)] = 8047,
  [SMALL_STATE(106)] = 8112,
  [SMALL_STATE(107)] = 8151,
  [SMALL_STATE(108)] = 8213,
  [SMALL_STATE(109)] = 8247,
  [SMALL_STATE(110)] = 8281,
  [SMALL_STATE(111)] = 8315,
  [SMALL_STATE(112)] = 8348,
  [SMALL_STATE(113)] = 8381,
  [SMALL_STATE(114)] = 8414,
  [SMALL_STATE(115)] = 8447,
  [SMALL_STATE(116)] = 8480,
  [SMALL_STATE(117)] = 8513,
  [SMALL_STATE(118)] = 8572,
  [SMALL_STATE(119)] = 8605,
  [SMALL_STATE(120)] = 8638,
  [SMALL_STATE(121)] = 8671,
  [SMALL_STATE(122)] = 8701,
  [SMALL_STATE(123)] = 8735,
  [SMALL_STATE(124)] = 8765,
  [SMALL_STATE(125)] = 8795,
  [SMALL_STATE(126)] = 8825,
  [SMALL_STATE(127)] = 8855,
  [SMALL_STATE(128)] = 8885,
  [SMALL_STATE(129)] = 8915,
  [SMALL_STATE(130)] = 8949,
  [SMALL_STATE(131)] = 8979,
  [SMALL_STATE(132)] = 9009,
  [SMALL_STATE(133)] = 9039,
  [SMALL_STATE(134)] = 9069,
  [SMALL_STATE(135)] = 9099,
  [SMALL_STATE(136)] = 9145,
  [SMALL_STATE(137)] = 9178,
  [SMALL_STATE(138)] = 9207,
  [SMALL_STATE(139)] = 9236,
  [SMALL_STATE(140)] = 9265,
  [SMALL_STATE(141)] = 9292,
  [SMALL_STATE(142)] = 9319,
  [SMALL_STATE(143)] = 9342,
  [SMALL_STATE(144)] = 9365,
  [SMALL_STATE(145)] = 9388,
  [SMALL_STATE(146)] = 9422,
  [SMALL_STATE(147)] = 9444,
  [SMALL_STATE(148)] = 9466,
  [SMALL_STATE(149)] = 9500,
  [SMALL_STATE(150)] = 9523,
  [SMALL_STATE(151)] = 9552,
  [SMALL_STATE(152)] = 9575,
  [SMALL_STATE(153)] = 9596,
  [SMALL_STATE(154)] = 9615,
  [SMALL_STATE(155)] = 9643,
  [SMALL_STATE(156)] = 9661,
  [SMALL_STATE(157)] = 9689,
  [SMALL_STATE(158)] = 9715,
  [SMALL_STATE(159)] = 9743,
  [SMALL_STATE(160)] = 9771,
  [SMALL_STATE(161)] = 9789,
  [SMALL_STATE(162)] = 9813,
  [SMALL_STATE(163)] = 9835,
  [SMALL_STATE(164)] = 9863,
  [SMALL_STATE(165)] = 9881,
  [SMALL_STATE(166)] = 9909,
  [SMALL_STATE(167)] = 9933,
  [SMALL_STATE(168)] = 9958,
  [SMALL_STATE(169)] = 9981,
  [SMALL_STATE(170)] = 10006,
  [SMALL_STATE(171)] = 10031,
  [SMALL_STATE(172)] = 10056,
  [SMALL_STATE(173)] = 10079,
  [SMALL_STATE(174)] = 10104,
  [SMALL_STATE(175)] = 10121,
  [SMALL_STATE(176)] = 10138,
  [SMALL_STATE(177)] = 10161,
  [SMALL_STATE(178)] = 10186,
  [SMALL_STATE(179)] = 10211,
  [SMALL_STATE(180)] = 10234,
  [SMALL_STATE(181)] = 10259,
  [SMALL_STATE(182)] = 10284,
  [SMALL_STATE(183)] = 10309,
  [SMALL_STATE(184)] = 10334,
  [SMALL_STATE(185)] = 10357,
  [SMALL_STATE(186)] = 10380,
  [SMALL_STATE(187)] = 10405,
  [SMALL_STATE(188)] = 10423,
  [SMALL_STATE(189)] = 10445,
  [SMALL_STATE(190)] = 10465,
  [SMALL_STATE(191)] = 10483,
  [SMALL_STATE(192)] = 10499,
  [SMALL_STATE(193)] = 10515,
  [SMALL_STATE(194)] = 10531,
  [SMALL_STATE(195)] = 10547,
  [SMALL_STATE(196)] = 10563,
  [SMALL_STATE(197)] = 10579,
  [SMALL_STATE(198)] = 10595,
  [SMALL_STATE(199)] = 10611,
  [SMALL_STATE(200)] = 10627,
  [SMALL_STATE(201)] = 10643,
  [SMALL_STATE(202)] = 10663,
  [SMALL_STATE(203)] = 10685,
  [SMALL_STATE(204)] = 10705,
  [SMALL_STATE(205)] = 10725,
  [SMALL_STATE(206)] = 10745,
  [SMALL_STATE(207)] = 10767,
  [SMALL_STATE(208)] = 10789,
  [SMALL_STATE(209)] = 10811,
  [SMALL_STATE(210)] = 10833,
  [SMALL_STATE(211)] = 10855,
  [SMALL_STATE(212)] = 10871,
  [SMALL_STATE(213)] = 10887,
  [SMALL_STATE(214)] = 10903,
  [SMALL_STATE(215)] = 10923,
  [SMALL_STATE(216)] = 10943,
  [SMALL_STATE(217)] = 10963,
  [SMALL_STATE(218)] = 10985,
  [SMALL_STATE(219)] = 11001,
  [SMALL_STATE(220)] = 11021,
  [SMALL_STATE(221)] = 11041,
  [SMALL_STATE(222)] = 11059,
  [SMALL_STATE(223)] = 11075,
  [SMALL_STATE(224)] = 11097,
  [SMALL_STATE(225)] = 11119,
  [SMALL_STATE(226)] = 11139,
  [SMALL_STATE(227)] = 11161,
  [SMALL_STATE(228)] = 11183,
  [SMALL_STATE(229)] = 11202,
  [SMALL_STATE(230)] = 11221,
  [SMALL_STATE(231)] = 11240,
  [SMALL_STATE(232)] = 11259,
  [SMALL_STATE(233)] = 11276,
  [SMALL_STATE(234)] = 11295,
  [SMALL_STATE(235)] = 11314,
  [SMALL_STATE(236)] = 11333,
  [SMALL_STATE(237)] = 11352,
  [SMALL_STATE(238)] = 11371,
  [SMALL_STATE(239)] = 11390,
  [SMALL_STATE(240)] = 11409,
  [SMALL_STATE(241)] = 11428,
  [SMALL_STATE(242)] = 11447,
  [SMALL_STATE(243)] = 11466,
  [SMALL_STATE(244)] = 11485,
  [SMALL_STATE(245)] = 11504,
  [SMALL_STATE(246)] = 11523,
  [SMALL_STATE(247)] = 11538,
  [SMALL_STATE(248)] = 11557,
  [SMALL_STATE(249)] = 11572,
  [SMALL_STATE(250)] = 11587,
  [SMALL_STATE(251)] = 11604,
  [SMALL_STATE(252)] = 11623,
  [SMALL_STATE(253)] = 11638,
  [SMALL_STATE(254)] = 11657,
  [SMALL_STATE(255)] = 11676,
  [SMALL_STATE(256)] = 11695,
  [SMALL_STATE(257)] = 11714,
  [SMALL_STATE(258)] = 11733,
  [SMALL_STATE(259)] = 11748,
  [SMALL_STATE(260)] = 11767,
  [SMALL_STATE(261)] = 11786,
  [SMALL_STATE(262)] = 11805,
  [SMALL_STATE(263)] = 11824,
  [SMALL_STATE(264)] = 11841,
  [SMALL_STATE(265)] = 11858,
  [SMALL_STATE(266)] = 11875,
  [SMALL_STATE(267)] = 11894,
  [SMALL_STATE(268)] = 11913,
  [SMALL_STATE(269)] = 11928,
  [SMALL_STATE(270)] = 11947,
  [SMALL_STATE(271)] = 11964,
  [SMALL_STATE(272)] = 11979,
  [SMALL_STATE(273)] = 11998,
  [SMALL_STATE(274)] = 12017,
  [SMALL_STATE(275)] = 12036,
  [SMALL_STATE(276)] = 12053,
  [SMALL_STATE(277)] = 12070,
  [SMALL_STATE(278)] = 12085,
  [SMALL_STATE(279)] = 12104,
  [SMALL_STATE(280)] = 12123,
  [SMALL_STATE(281)] = 12140,
  [SMALL_STATE(282)] = 12159,
  [SMALL_STATE(283)] = 12174,
  [SMALL_STATE(284)] = 12191,
  [SMALL_STATE(285)] = 12210,
  [SMALL_STATE(286)] = 12227,
  [SMALL_STATE(287)] = 12246,
  [SMALL_STATE(288)] = 12265,
  [SMALL_STATE(289)] = 12282,
  [SMALL_STATE(290)] = 12301,
  [SMALL_STATE(291)] = 12318,
  [SMALL_STATE(292)] = 12335,
  [SMALL_STATE(293)] = 12350,
  [SMALL_STATE(294)] = 12365,
  [SMALL_STATE(295)] = 12384,
  [SMALL_STATE(296)] = 12403,
  [SMALL_STATE(297)] = 12418,
  [SMALL_STATE(298)] = 12433,
  [SMALL_STATE(299)] = 12448,
  [SMALL_STATE(300)] = 12467,
  [SMALL_STATE(301)] = 12486,
  [SMALL_STATE(302)] = 12505,
  [SMALL_STATE(303)] = 12524,
  [SMALL_STATE(304)] = 12541,
  [SMALL_STATE(305)] = 12560,
  [SMALL_STATE(306)] = 12579,
  [SMALL_STATE(307)] = 12598,
  [SMALL_STATE(308)] = 12617,
  [SMALL_STATE(309)] = 12634,
  [SMALL_STATE(310)] = 12653,
  [SMALL_STATE(311)] = 12668,
  [SMALL_STATE(312)] = 12687,
  [SMALL_STATE(313)] = 12702,
  [SMALL_STATE(314)] = 12721,
  [SMALL_STATE(315)] = 12740,
  [SMALL_STATE(316)] = 12755,
  [SMALL_STATE(317)] = 12770,
  [SMALL_STATE(318)] = 12789,
  [SMALL_STATE(319)] = 12803,
  [SMALL_STATE(320)] = 12817,
  [SMALL_STATE(321)] = 12831,
  [SMALL_STATE(322)] = 12845,
  [SMALL_STATE(323)] = 12861,
  [SMALL_STATE(324)] = 12877,
  [SMALL_STATE(325)] = 12891,
  [SMALL_STATE(326)] = 12905,
  [SMALL_STATE(327)] = 12919,
  [SMALL_STATE(328)] = 12933,
  [SMALL_STATE(329)] = 12947,
  [SMALL_STATE(330)] = 12961,
  [SMALL_STATE(331)] = 12975,
  [SMALL_STATE(332)] = 12989,
  [SMALL_STATE(333)] = 13003,
  [SMALL_STATE(334)] = 13017,
  [SMALL_STATE(335)] = 13033,
  [SMALL_STATE(336)] = 13047,
  [SMALL_STATE(337)] = 13063,
  [SMALL_STATE(338)] = 13079,
  [SMALL_STATE(339)] = 13093,
  [SMALL_STATE(340)] = 13109,
  [SMALL_STATE(341)] = 13123,
  [SMALL_STATE(342)] = 13137,
  [SMALL_STATE(343)] = 13151,
  [SMALL_STATE(344)] = 13165,
  [SMALL_STATE(345)] = 13179,
  [SMALL_STATE(346)] = 13195,
  [SMALL_STATE(347)] = 13209,
  [SMALL_STATE(348)] = 13225,
  [SMALL_STATE(349)] = 13239,
  [SMALL_STATE(350)] = 13253,
  [SMALL_STATE(351)] = 13267,
  [SMALL_STATE(352)] = 13281,
  [SMALL_STATE(353)] = 13295,
  [SMALL_STATE(354)] = 13309,
  [SMALL_STATE(355)] = 13323,
  [SMALL_STATE(356)] = 13337,
  [SMALL_STATE(357)] = 13353,
  [SMALL_STATE(358)] = 13369,
  [SMALL_STATE(359)] = 13383,
  [SMALL_STATE(360)] = 13399,
  [SMALL_STATE(361)] = 13413,
  [SMALL_STATE(362)] = 13427,
  [SMALL_STATE(363)] = 13441,
  [SMALL_STATE(364)] = 13457,
  [SMALL_STATE(365)] = 13471,
  [SMALL_STATE(366)] = 13487,
  [SMALL_STATE(367)] = 13503,
  [SMALL_STATE(368)] = 13517,
  [SMALL_STATE(369)] = 13533,
  [SMALL_STATE(370)] = 13547,
  [SMALL_STATE(371)] = 13561,
  [SMALL_STATE(372)] = 13575,
  [SMALL_STATE(373)] = 13589,
  [SMALL_STATE(374)] = 13603,
  [SMALL_STATE(375)] = 13617,
  [SMALL_STATE(376)] = 13631,
  [SMALL_STATE(377)] = 13647,
  [SMALL_STATE(378)] = 13661,
  [SMALL_STATE(379)] = 13677,
  [SMALL_STATE(380)] = 13691,
  [SMALL_STATE(381)] = 13705,
  [SMALL_STATE(382)] = 13721,
  [SMALL_STATE(383)] = 13737,
  [SMALL_STATE(384)] = 13751,
  [SMALL_STATE(385)] = 13765,
  [SMALL_STATE(386)] = 13781,
  [SMALL_STATE(387)] = 13795,
  [SMALL_STATE(388)] = 13811,
  [SMALL_STATE(389)] = 13825,
  [SMALL_STATE(390)] = 13839,
  [SMALL_STATE(391)] = 13855,
  [SMALL_STATE(392)] = 13871,
  [SMALL_STATE(393)] = 13887,
  [SMALL_STATE(394)] = 13901,
  [SMALL_STATE(395)] = 13917,
  [SMALL_STATE(396)] = 13931,
  [SMALL_STATE(397)] = 13945,
  [SMALL_STATE(398)] = 13961,
  [SMALL_STATE(399)] = 13975,
  [SMALL_STATE(400)] = 13991,
  [SMALL_STATE(401)] = 14005,
  [SMALL_STATE(402)] = 14021,
  [SMALL_STATE(403)] = 14037,
  [SMALL_STATE(404)] = 14053,
  [SMALL_STATE(405)] = 14067,
  [SMALL_STATE(406)] = 14081,
  [SMALL_STATE(407)] = 14094,
  [SMALL_STATE(408)] = 14107,
  [SMALL_STATE(409)] = 14120,
  [SMALL_STATE(410)] = 14133,
  [SMALL_STATE(411)] = 14146,
  [SMALL_STATE(412)] = 14159,
  [SMALL_STATE(413)] = 14172,
  [SMALL_STATE(414)] = 14185,
  [SMALL_STATE(415)] = 14198,
  [SMALL_STATE(416)] = 14211,
  [SMALL_STATE(417)] = 14224,
  [SMALL_STATE(418)] = 14237,
  [SMALL_STATE(419)] = 14250,
  [SMALL_STATE(420)] = 14263,
  [SMALL_STATE(421)] = 14276,
  [SMALL_STATE(422)] = 14289,
  [SMALL_STATE(423)] = 14302,
  [SMALL_STATE(424)] = 14315,
  [SMALL_STATE(425)] = 14328,
  [SMALL_STATE(426)] = 14341,
  [SMALL_STATE(427)] = 14354,
  [SMALL_STATE(428)] = 14367,
  [SMALL_STATE(429)] = 14380,
  [SMALL_STATE(430)] = 14393,
  [SMALL_STATE(431)] = 14406,
  [SMALL_STATE(432)] = 14419,
  [SMALL_STATE(433)] = 14432,
  [SMALL_STATE(434)] = 14445,
  [SMALL_STATE(435)] = 14458,
  [SMALL_STATE(436)] = 14471,
  [SMALL_STATE(437)] = 14484,
  [SMALL_STATE(438)] = 14497,
  [SMALL_STATE(439)] = 14510,
  [SMALL_STATE(440)] = 14523,
  [SMALL_STATE(441)] = 14536,
  [SMALL_STATE(442)] = 14549,
  [SMALL_STATE(443)] = 14562,
  [SMALL_STATE(444)] = 14575,
  [SMALL_STATE(445)] = 14588,
  [SMALL_STATE(446)] = 14601,
  [SMALL_STATE(447)] = 14614,
  [SMALL_STATE(448)] = 14627,
  [SMALL_STATE(449)] = 14640,
  [SMALL_STATE(450)] = 14653,
  [SMALL_STATE(451)] = 14666,
  [SMALL_STATE(452)] = 14679,
  [SMALL_STATE(453)] = 14692,
  [SMALL_STATE(454)] = 14705,
  [SMALL_STATE(455)] = 14718,
  [SMALL_STATE(456)] = 14731,
  [SMALL_STATE(457)] = 14744,
  [SMALL_STATE(458)] = 14757,
  [SMALL_STATE(459)] = 14770,
  [SMALL_STATE(460)] = 14783,
  [SMALL_STATE(461)] = 14796,
  [SMALL_STATE(462)] = 14809,
  [SMALL_STATE(463)] = 14822,
  [SMALL_STATE(464)] = 14835,
  [SMALL_STATE(465)] = 14848,
  [SMALL_STATE(466)] = 14861,
  [SMALL_STATE(467)] = 14874,
  [SMALL_STATE(468)] = 14887,
  [SMALL_STATE(469)] = 14900,
  [SMALL_STATE(470)] = 14913,
  [SMALL_STATE(471)] = 14926,
  [SMALL_STATE(472)] = 14939,
  [SMALL_STATE(473)] = 14952,
  [SMALL_STATE(474)] = 14965,
  [SMALL_STATE(475)] = 14978,
  [SMALL_STATE(476)] = 14991,
  [SMALL_STATE(477)] = 15004,
  [SMALL_STATE(478)] = 15017,
  [SMALL_STATE(479)] = 15030,
  [SMALL_STATE(480)] = 15043,
  [SMALL_STATE(481)] = 15056,
  [SMALL_STATE(482)] = 15069,
  [SMALL_STATE(483)] = 15082,
  [SMALL_STATE(484)] = 15095,
  [SMALL_STATE(485)] = 15108,
  [SMALL_STATE(486)] = 15121,
  [SMALL_STATE(487)] = 15134,
  [SMALL_STATE(488)] = 15147,
  [SMALL_STATE(489)] = 15160,
  [SMALL_STATE(490)] = 15173,
  [SMALL_STATE(491)] = 15186,
  [SMALL_STATE(492)] = 15199,
  [SMALL_STATE(493)] = 15212,
  [SMALL_STATE(494)] = 15225,
  [SMALL_STATE(495)] = 15238,
  [SMALL_STATE(496)] = 15251,
  [SMALL_STATE(497)] = 15264,
  [SMALL_STATE(498)] = 15277,
  [SMALL_STATE(499)] = 15290,
  [SMALL_STATE(500)] = 15303,
  [SMALL_STATE(501)] = 15316,
  [SMALL_STATE(502)] = 15329,
  [SMALL_STATE(503)] = 15342,
  [SMALL_STATE(504)] = 15355,
  [SMALL_STATE(505)] = 15368,
  [SMALL_STATE(506)] = 15381,
  [SMALL_STATE(507)] = 15394,
  [SMALL_STATE(508)] = 15407,
  [SMALL_STATE(509)] = 15420,
  [SMALL_STATE(510)] = 15433,
  [SMALL_STATE(511)] = 15446,
  [SMALL_STATE(512)] = 15459,
  [SMALL_STATE(513)] = 15472,
  [SMALL_STATE(514)] = 15485,
  [SMALL_STATE(515)] = 15498,
  [SMALL_STATE(516)] = 15511,
  [SMALL_STATE(517)] = 15524,
  [SMALL_STATE(518)] = 15537,
  [SMALL_STATE(519)] = 15550,
  [SMALL_STATE(520)] = 15563,
  [SMALL_STATE(521)] = 15576,
  [SMALL_STATE(522)] = 15589,
  [SMALL_STATE(523)] = 15602,
  [SMALL_STATE(524)] = 15615,
  [SMALL_STATE(525)] = 15628,
  [SMALL_STATE(526)] = 15641,
  [SMALL_STATE(527)] = 15654,
  [SMALL_STATE(528)] = 15667,
  [SMALL_STATE(529)] = 15680,
  [SMALL_STATE(530)] = 15693,
  [SMALL_STATE(531)] = 15706,
  [SMALL_STATE(532)] = 15719,
  [SMALL_STATE(533)] = 15732,
  [SMALL_STATE(534)] = 15745,
  [SMALL_STATE(535)] = 15758,
  [SMALL_STATE(536)] = 15771,
  [SMALL_STATE(537)] = 15784,
  [SMALL_STATE(538)] = 15797,
  [SMALL_STATE(539)] = 15810,
  [SMALL_STATE(540)] = 15823,
  [SMALL_STATE(541)] = 15836,
  [SMALL_STATE(542)] = 15849,
  [SMALL_STATE(543)] = 15862,
  [SMALL_STATE(544)] = 15875,
  [SMALL_STATE(545)] = 15888,
  [SMALL_STATE(546)] = 15901,
  [SMALL_STATE(547)] = 15914,
  [SMALL_STATE(548)] = 15927,
  [SMALL_STATE(549)] = 15940,
  [SMALL_STATE(550)] = 15953,
  [SMALL_STATE(551)] = 15966,
  [SMALL_STATE(552)] = 15979,
  [SMALL_STATE(553)] = 15992,
  [SMALL_STATE(554)] = 16005,
  [SMALL_STATE(555)] = 16018,
  [SMALL_STATE(556)] = 16031,
  [SMALL_STATE(557)] = 16044,
  [SMALL_STATE(558)] = 16057,
  [SMALL_STATE(559)] = 16070,
  [SMALL_STATE(560)] = 16074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(200),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(199),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(198),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(198),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(197),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(277),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(515),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(196),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(195),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(195),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(194),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(193),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(193),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(271),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(271),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(192),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(546),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(187),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(282),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(520),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(514),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(510),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(496),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(494),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(39),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(558),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(557),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(244),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(545),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(544),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(543),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(57),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(37),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(489),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(13),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(542),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(376),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(155),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(200),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(199),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(198),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(198),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(197),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(277),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(515),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(196),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(195),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(195),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(194),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(193),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(193),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(271),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(271),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(192),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(546),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(187),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(282),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(520),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(514),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(510),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(496),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(494),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(39),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(558),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(557),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(244),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(545),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(544),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(543),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(57),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(13),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(542),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(376),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(155),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(200),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(199),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(198),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(198),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(197),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(523),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(521),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(196),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(195),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(195),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(194),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(193),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(193),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(271),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(271),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(192),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(546),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(187),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(479),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(520),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(543),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(57),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(13),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(542),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(155),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(200),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(199),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(198),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(198),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(197),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(277),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(515),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(196),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(195),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(195),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(194),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(193),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(193),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(271),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(271),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(192),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(546),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(187),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(282),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(520),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(514),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(155),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(510),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(533),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(401),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(558),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(557),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(554),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(244),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(245),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(550),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(545),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(544),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(543),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(57),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(314),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(13),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(542),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(376),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(541),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(510),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(533),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(401),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(558),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(557),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(554),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(244),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(245),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(550),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(545),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(544),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(543),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(57),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(13),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(542),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(376),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(541),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(240),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 6),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 6),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 6),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 6),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(322),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 1),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat2, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 3),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4, .production_id = 7),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4, .production_id = 7),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 4),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(244),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(473),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(94),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(89),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(480),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(255),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(389),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(238),
  [1162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(203),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 5),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 3),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(167),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(11),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(337),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [1297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(516),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(309),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(390),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(169),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(372),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(208),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(172),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(385),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(215),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 8),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 5),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 5),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 8),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 6),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1776] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_idl() {
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
