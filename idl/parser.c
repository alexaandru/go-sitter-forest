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
#define STATE_COUNT 784
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 348
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
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
  anon_sym_local = 59,
  anon_sym_abstract = 60,
  anon_sym_interface = 61,
  anon_sym_COLON = 62,
  anon_sym_SEMI = 63,
  anon_sym_void = 64,
  anon_sym_in = 65,
  anon_sym_out = 66,
  anon_sym_inout = 67,
  anon_sym_raises = 68,
  anon_sym_readonly = 69,
  anon_sym_attribute = 70,
  anon_sym_getraises = 71,
  anon_sym_setraises = 72,
  anon_sym_bitset = 73,
  anon_sym_bitfield = 74,
  anon_sym_bitmask = 75,
  anon_sym_ATannotation = 76,
  anon_sym_default = 77,
  anon_sym_AT = 78,
  anon_sym_EQ = 79,
  anon_sym_module = 80,
  anon_sym_typename = 81,
  anon_sym_valuetype = 82,
  anon_sym_eventtype = 83,
  anon_sym_struct = 84,
  anon_sym_union = 85,
  anon_sym_enum = 86,
  anon_sym_const = 87,
  anon_sym_alias = 88,
  anon_sym_custom = 89,
  anon_sym_truncatable = 90,
  anon_sym_supports = 91,
  anon_sym_public = 92,
  anon_sym_private = 93,
  anon_sym_factory = 94,
  anon_sym_typedef = 95,
  anon_sym_LBRACK = 96,
  anon_sym_RBRACK = 97,
  anon_sym_ATdefault_literal = 98,
  anon_sym_ATignore_literal_names = 99,
  anon_sym_switch = 100,
  anon_sym_case = 101,
  anon_sym_typeid = 102,
  anon_sym_typeprefix = 103,
  anon_sym_import = 104,
  anon_sym_Object = 105,
  anon_sym_oneway = 106,
  anon_sym_context = 107,
  sym_value_base_type = 108,
  anon_sym_component = 109,
  anon_sym_provides = 110,
  anon_sym_uses = 111,
  anon_sym_multiple = 112,
  anon_sym_home = 113,
  anon_sym_manages = 114,
  anon_sym_emits = 115,
  anon_sym_publishes = 116,
  anon_sym_consumes = 117,
  anon_sym_primarykey = 118,
  anon_sym_finder = 119,
  anon_sym_porttype = 120,
  anon_sym_port = 121,
  anon_sym_mirrorport = 122,
  anon_sym_connector = 123,
  anon_sym_native = 124,
  anon_sym_POUNDdefine = 125,
  aux_sym_predefine_token1 = 126,
  sym_identifier = 127,
  anon_sym_SLASH_SLASH = 128,
  aux_sym_comment_token1 = 129,
  aux_sym_comment_token2 = 130,
  anon_sym_SLASH_STAR = 131,
  aux_sym_comment_token3 = 132,
  sym_specification = 133,
  sym_signed_short_int = 134,
  sym_signed_long_int = 135,
  sym_signed_longlong_int = 136,
  sym_unsigned_int = 137,
  sym_fixed_pt_const_type = 138,
  sym_integer_type = 139,
  sym_signed_int = 140,
  sym_unsigned_short_int = 141,
  sym_unsigned_long_int = 142,
  sym_unsigned_longlong_int = 143,
  sym_floating_pt_type = 144,
  sym_char_type = 145,
  sym_scoped_name = 146,
  sym_string_type = 147,
  sym_type_spec = 148,
  sym_simple_type_spec = 149,
  sym_base_type_spec = 150,
  sym_any_type = 151,
  sym_fixed_pt_type = 152,
  sym_template_type_spec = 153,
  sym_sequence_type = 154,
  sym_map_type = 155,
  sym_positive_int_const = 156,
  sym_const_expr = 157,
  sym_or_expr = 158,
  sym_xor_expr = 159,
  sym_and_expr = 160,
  sym_shift_expr = 161,
  sym_add_expr = 162,
  sym_mult_expr = 163,
  sym_unary_expr = 164,
  sym_unary_operator = 165,
  sym_literal = 166,
  sym_string_literal = 167,
  sym_char_literal = 168,
  sym_boolean_literal = 169,
  sym_preproc_call = 170,
  sym_except_dcl = 171,
  sym_interface_dcl = 172,
  sym_interface_kind = 173,
  sym_interface_forward_dcl = 174,
  sym_interface_def = 175,
  sym_interface_header = 176,
  sym_interface_inheritance_spec = 177,
  sym_interface_name = 178,
  sym_interface_body = 179,
  sym_export = 180,
  sym_op_dcl = 181,
  sym_op_type_spec = 182,
  sym_parameter_dcls = 183,
  sym_param_dcl = 184,
  sym_param_attribute = 185,
  sym_raises_expr = 186,
  sym_attr_dcl = 187,
  sym_readonly_attr_spec = 188,
  sym_readonly_attr_declarator = 189,
  sym_attr_spec = 190,
  sym_attr_declarator = 191,
  sym_attr_raises_expr = 192,
  sym_get_excep_expr = 193,
  sym_set_excep_expr = 194,
  sym_exception_list = 195,
  sym_bitset_dcl = 196,
  sym_bitfield = 197,
  sym_bitfield_spec = 198,
  sym_destination_type = 199,
  sym_bitmask_dcl = 200,
  sym_bit_value = 201,
  sym_annotation_dcl = 202,
  sym_annotation_body = 203,
  sym_annotation_member = 204,
  sym_annotation_member_type = 205,
  sym_any_const_type = 206,
  sym_annotation_appl = 207,
  sym_annotation_appl_params = 208,
  sym_annotation_appl_param = 209,
  sym_template_module_dcl = 210,
  sym_formal_parameters = 211,
  sym_formal_parameter = 212,
  sym_formal_parameter_type = 213,
  sym_tpl_definition = 214,
  sym_template_module_inst = 215,
  sym_actual_parameters = 216,
  sym_actual_parameter = 217,
  sym_template_module_ref = 218,
  sym_formal_parameter_names = 219,
  sym_value_dcl = 220,
  sym_value_def = 221,
  sym_value_kind = 222,
  sym_value_header = 223,
  sym_value_inheritance_spec = 224,
  sym_value_name = 225,
  sym_value_element = 226,
  sym_state_member = 227,
  sym_init_dcl = 228,
  sym_init_param_dcls = 229,
  sym_init_param_dcl = 230,
  sym_value_forward_dcl = 231,
  sym_typedef_dcl = 232,
  sym_type_declarator = 233,
  sym_any_declarators = 234,
  sym_any_declarator = 235,
  sym_simple_declarator = 236,
  sym_declarator = 237,
  sym_declarators = 238,
  sym_array_declarator = 239,
  sym_fixed_array_size = 240,
  sym_enum_dcl = 241,
  sym_enumerator = 242,
  sym_enum_modifier = 243,
  sym_enum_anno = 244,
  sym_union_forward_dcl = 245,
  sym_union_def = 246,
  sym_case = 247,
  sym_case_label = 248,
  sym_element_spec = 249,
  sym_switch_type_spec = 250,
  sym_type_id_dcl = 251,
  sym_type_prefix_dcl = 252,
  sym_import_dcl = 253,
  sym_imported_scope = 254,
  sym_object_type = 255,
  sym_op_oneway_dcl = 256,
  sym_in_parameter_dcls = 257,
  sym_in_param_dcl = 258,
  sym_op_with_context = 259,
  sym_context_expr = 260,
  sym_value_box_def = 261,
  sym_value_abs_def = 262,
  sym_component_dcl = 263,
  sym_component_forward_dcl = 264,
  sym_component_def = 265,
  sym_component_header = 266,
  sym_component_inheritance_spec = 267,
  sym_component_body = 268,
  sym_component_export = 269,
  sym_provides_dcl = 270,
  sym_interface_type = 271,
  sym_uses_dcl = 272,
  sym_home_dcl = 273,
  sym_home_header = 274,
  sym_home_inheritance_spec = 275,
  sym_home_body = 276,
  sym_home_export = 277,
  sym_factory_dcl = 278,
  sym_factory_param_dcls = 279,
  sym_factory_param_dcl = 280,
  sym_supported_interface_spec = 281,
  sym_emits_dcl = 282,
  sym_publishes_dcl = 283,
  sym_consumes_dcl = 284,
  sym_primary_key_spec = 285,
  sym_finder_dcl = 286,
  sym_event_dcl = 287,
  sym_event_forward_dcl = 288,
  sym_event_abs_def = 289,
  sym_event_def = 290,
  sym_event_header = 291,
  sym_porttype_dcl = 292,
  sym_porttype_forward_dcl = 293,
  sym_porttype_def = 294,
  sym_port_body = 295,
  sym_port_ref = 296,
  sym_port_export = 297,
  sym_port_dcl = 298,
  sym_connector_dcl = 299,
  sym_connector_header = 300,
  sym_connector_inherit_spec = 301,
  sym_connector_export = 302,
  sym_definition = 303,
  sym_native_dcl = 304,
  sym_module_dcl = 305,
  sym_struct_forward_dcl = 306,
  sym_struct_def = 307,
  sym_member = 308,
  sym_default = 309,
  sym_predefine = 310,
  sym_const_dcl = 311,
  sym_const_type = 312,
  sym_comment = 313,
  aux_sym_specification_repeat1 = 314,
  aux_sym_except_dcl_repeat1 = 315,
  aux_sym_interface_def_repeat1 = 316,
  aux_sym_interface_inheritance_spec_repeat1 = 317,
  aux_sym_interface_body_repeat1 = 318,
  aux_sym_parameter_dcls_repeat1 = 319,
  aux_sym_raises_expr_repeat1 = 320,
  aux_sym_readonly_attr_declarator_repeat1 = 321,
  aux_sym_bitset_dcl_repeat1 = 322,
  aux_sym_bitfield_repeat1 = 323,
  aux_sym_bitmask_dcl_repeat1 = 324,
  aux_sym_annotation_dcl_repeat1 = 325,
  aux_sym_annotation_appl_params_repeat1 = 326,
  aux_sym_template_module_dcl_repeat1 = 327,
  aux_sym_formal_parameters_repeat1 = 328,
  aux_sym_actual_parameters_repeat1 = 329,
  aux_sym_formal_parameter_names_repeat1 = 330,
  aux_sym_value_def_repeat1 = 331,
  aux_sym_value_inheritance_spec_repeat1 = 332,
  aux_sym_init_param_dcls_repeat1 = 333,
  aux_sym_any_declarators_repeat1 = 334,
  aux_sym_declarators_repeat1 = 335,
  aux_sym_array_declarator_repeat1 = 336,
  aux_sym_enum_dcl_repeat1 = 337,
  aux_sym_enumerator_repeat1 = 338,
  aux_sym_union_def_repeat1 = 339,
  aux_sym_in_parameter_dcls_repeat1 = 340,
  aux_sym_context_expr_repeat1 = 341,
  aux_sym_component_body_repeat1 = 342,
  aux_sym_home_body_repeat1 = 343,
  aux_sym_factory_param_dcls_repeat1 = 344,
  aux_sym_port_body_repeat1 = 345,
  aux_sym_connector_dcl_repeat1 = 346,
  aux_sym_module_dcl_repeat1 = 347,
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
  [anon_sym_local] = "local",
  [anon_sym_abstract] = "abstract",
  [anon_sym_interface] = "interface",
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
  [anon_sym_custom] = "custom",
  [anon_sym_truncatable] = "truncatable",
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
  [anon_sym_typeid] = "typeid",
  [anon_sym_typeprefix] = "typeprefix",
  [anon_sym_import] = "import",
  [anon_sym_Object] = "Object",
  [anon_sym_oneway] = "oneway",
  [anon_sym_context] = "context",
  [sym_value_base_type] = "value_base_type",
  [anon_sym_component] = "component",
  [anon_sym_provides] = "provides",
  [anon_sym_uses] = "uses",
  [anon_sym_multiple] = "multiple",
  [anon_sym_home] = "home",
  [anon_sym_manages] = "manages",
  [anon_sym_emits] = "emits",
  [anon_sym_publishes] = "publishes",
  [anon_sym_consumes] = "consumes",
  [anon_sym_primarykey] = "primarykey",
  [anon_sym_finder] = "finder",
  [anon_sym_porttype] = "porttype",
  [anon_sym_port] = "port",
  [anon_sym_mirrorport] = "mirrorport",
  [anon_sym_connector] = "connector",
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
  [sym_interface_kind] = "interface_kind",
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
  [sym_value_kind] = "value_kind",
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
  [sym_type_id_dcl] = "type_id_dcl",
  [sym_type_prefix_dcl] = "type_prefix_dcl",
  [sym_import_dcl] = "import_dcl",
  [sym_imported_scope] = "imported_scope",
  [sym_object_type] = "object_type",
  [sym_op_oneway_dcl] = "op_oneway_dcl",
  [sym_in_parameter_dcls] = "in_parameter_dcls",
  [sym_in_param_dcl] = "in_param_dcl",
  [sym_op_with_context] = "op_with_context",
  [sym_context_expr] = "context_expr",
  [sym_value_box_def] = "value_box_def",
  [sym_value_abs_def] = "value_abs_def",
  [sym_component_dcl] = "component_dcl",
  [sym_component_forward_dcl] = "component_forward_dcl",
  [sym_component_def] = "component_def",
  [sym_component_header] = "component_header",
  [sym_component_inheritance_spec] = "component_inheritance_spec",
  [sym_component_body] = "component_body",
  [sym_component_export] = "component_export",
  [sym_provides_dcl] = "provides_dcl",
  [sym_interface_type] = "interface_type",
  [sym_uses_dcl] = "uses_dcl",
  [sym_home_dcl] = "home_dcl",
  [sym_home_header] = "home_header",
  [sym_home_inheritance_spec] = "home_inheritance_spec",
  [sym_home_body] = "home_body",
  [sym_home_export] = "home_export",
  [sym_factory_dcl] = "factory_dcl",
  [sym_factory_param_dcls] = "factory_param_dcls",
  [sym_factory_param_dcl] = "factory_param_dcl",
  [sym_supported_interface_spec] = "supported_interface_spec",
  [sym_emits_dcl] = "emits_dcl",
  [sym_publishes_dcl] = "publishes_dcl",
  [sym_consumes_dcl] = "consumes_dcl",
  [sym_primary_key_spec] = "primary_key_spec",
  [sym_finder_dcl] = "finder_dcl",
  [sym_event_dcl] = "event_dcl",
  [sym_event_forward_dcl] = "event_forward_dcl",
  [sym_event_abs_def] = "event_abs_def",
  [sym_event_def] = "event_def",
  [sym_event_header] = "event_header",
  [sym_porttype_dcl] = "porttype_dcl",
  [sym_porttype_forward_dcl] = "porttype_forward_dcl",
  [sym_porttype_def] = "porttype_def",
  [sym_port_body] = "port_body",
  [sym_port_ref] = "port_ref",
  [sym_port_export] = "port_export",
  [sym_port_dcl] = "port_dcl",
  [sym_connector_dcl] = "connector_dcl",
  [sym_connector_header] = "connector_header",
  [sym_connector_inherit_spec] = "connector_inherit_spec",
  [sym_connector_export] = "connector_export",
  [sym_definition] = "definition",
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
  [aux_sym_value_inheritance_spec_repeat1] = "value_inheritance_spec_repeat1",
  [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
  [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
  [aux_sym_declarators_repeat1] = "declarators_repeat1",
  [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
  [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
  [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
  [aux_sym_union_def_repeat1] = "union_def_repeat1",
  [aux_sym_in_parameter_dcls_repeat1] = "in_parameter_dcls_repeat1",
  [aux_sym_context_expr_repeat1] = "context_expr_repeat1",
  [aux_sym_component_body_repeat1] = "component_body_repeat1",
  [aux_sym_home_body_repeat1] = "home_body_repeat1",
  [aux_sym_factory_param_dcls_repeat1] = "factory_param_dcls_repeat1",
  [aux_sym_port_body_repeat1] = "port_body_repeat1",
  [aux_sym_connector_dcl_repeat1] = "connector_dcl_repeat1",
  [aux_sym_module_dcl_repeat1] = "module_dcl_repeat1",
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
  [anon_sym_local] = anon_sym_local,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_interface] = anon_sym_interface,
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
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_truncatable] = anon_sym_truncatable,
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
  [anon_sym_typeid] = anon_sym_typeid,
  [anon_sym_typeprefix] = anon_sym_typeprefix,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_oneway] = anon_sym_oneway,
  [anon_sym_context] = anon_sym_context,
  [sym_value_base_type] = sym_value_base_type,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_provides] = anon_sym_provides,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_home] = anon_sym_home,
  [anon_sym_manages] = anon_sym_manages,
  [anon_sym_emits] = anon_sym_emits,
  [anon_sym_publishes] = anon_sym_publishes,
  [anon_sym_consumes] = anon_sym_consumes,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_finder] = anon_sym_finder,
  [anon_sym_porttype] = anon_sym_porttype,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_mirrorport] = anon_sym_mirrorport,
  [anon_sym_connector] = anon_sym_connector,
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
  [sym_interface_kind] = sym_interface_kind,
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
  [sym_value_kind] = sym_value_kind,
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
  [sym_type_id_dcl] = sym_type_id_dcl,
  [sym_type_prefix_dcl] = sym_type_prefix_dcl,
  [sym_import_dcl] = sym_import_dcl,
  [sym_imported_scope] = sym_imported_scope,
  [sym_object_type] = sym_object_type,
  [sym_op_oneway_dcl] = sym_op_oneway_dcl,
  [sym_in_parameter_dcls] = sym_in_parameter_dcls,
  [sym_in_param_dcl] = sym_in_param_dcl,
  [sym_op_with_context] = sym_op_with_context,
  [sym_context_expr] = sym_context_expr,
  [sym_value_box_def] = sym_value_box_def,
  [sym_value_abs_def] = sym_value_abs_def,
  [sym_component_dcl] = sym_component_dcl,
  [sym_component_forward_dcl] = sym_component_forward_dcl,
  [sym_component_def] = sym_component_def,
  [sym_component_header] = sym_component_header,
  [sym_component_inheritance_spec] = sym_component_inheritance_spec,
  [sym_component_body] = sym_component_body,
  [sym_component_export] = sym_component_export,
  [sym_provides_dcl] = sym_provides_dcl,
  [sym_interface_type] = sym_interface_type,
  [sym_uses_dcl] = sym_uses_dcl,
  [sym_home_dcl] = sym_home_dcl,
  [sym_home_header] = sym_home_header,
  [sym_home_inheritance_spec] = sym_home_inheritance_spec,
  [sym_home_body] = sym_home_body,
  [sym_home_export] = sym_home_export,
  [sym_factory_dcl] = sym_factory_dcl,
  [sym_factory_param_dcls] = sym_factory_param_dcls,
  [sym_factory_param_dcl] = sym_factory_param_dcl,
  [sym_supported_interface_spec] = sym_supported_interface_spec,
  [sym_emits_dcl] = sym_emits_dcl,
  [sym_publishes_dcl] = sym_publishes_dcl,
  [sym_consumes_dcl] = sym_consumes_dcl,
  [sym_primary_key_spec] = sym_primary_key_spec,
  [sym_finder_dcl] = sym_finder_dcl,
  [sym_event_dcl] = sym_event_dcl,
  [sym_event_forward_dcl] = sym_event_forward_dcl,
  [sym_event_abs_def] = sym_event_abs_def,
  [sym_event_def] = sym_event_def,
  [sym_event_header] = sym_event_header,
  [sym_porttype_dcl] = sym_porttype_dcl,
  [sym_porttype_forward_dcl] = sym_porttype_forward_dcl,
  [sym_porttype_def] = sym_porttype_def,
  [sym_port_body] = sym_port_body,
  [sym_port_ref] = sym_port_ref,
  [sym_port_export] = sym_port_export,
  [sym_port_dcl] = sym_port_dcl,
  [sym_connector_dcl] = sym_connector_dcl,
  [sym_connector_header] = sym_connector_header,
  [sym_connector_inherit_spec] = sym_connector_inherit_spec,
  [sym_connector_export] = sym_connector_export,
  [sym_definition] = sym_definition,
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
  [aux_sym_value_inheritance_spec_repeat1] = aux_sym_value_inheritance_spec_repeat1,
  [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
  [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
  [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
  [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
  [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
  [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
  [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
  [aux_sym_in_parameter_dcls_repeat1] = aux_sym_in_parameter_dcls_repeat1,
  [aux_sym_context_expr_repeat1] = aux_sym_context_expr_repeat1,
  [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
  [aux_sym_home_body_repeat1] = aux_sym_home_body_repeat1,
  [aux_sym_factory_param_dcls_repeat1] = aux_sym_factory_param_dcls_repeat1,
  [aux_sym_port_body_repeat1] = aux_sym_port_body_repeat1,
  [aux_sym_connector_dcl_repeat1] = aux_sym_connector_dcl_repeat1,
  [aux_sym_module_dcl_repeat1] = aux_sym_module_dcl_repeat1,
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
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_truncatable] = {
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
  [anon_sym_typeid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [sym_value_base_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_manages] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_publishes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consumes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_porttype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mirrorport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connector] = {
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
  [sym_interface_kind] = {
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
  [sym_value_kind] = {
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
  [sym_type_id_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_prefix_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_import_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_imported_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_op_oneway_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_in_parameter_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_in_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_with_context] = {
    .visible = true,
    .named = true,
  },
  [sym_context_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_value_box_def] = {
    .visible = true,
    .named = true,
  },
  [sym_value_abs_def] = {
    .visible = true,
    .named = true,
  },
  [sym_component_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_def] = {
    .visible = true,
    .named = true,
  },
  [sym_component_header] = {
    .visible = true,
    .named = true,
  },
  [sym_component_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_component_export] = {
    .visible = true,
    .named = true,
  },
  [sym_provides_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_type] = {
    .visible = true,
    .named = true,
  },
  [sym_uses_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_home_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_home_header] = {
    .visible = true,
    .named = true,
  },
  [sym_home_inheritance_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_home_body] = {
    .visible = true,
    .named = true,
  },
  [sym_home_export] = {
    .visible = true,
    .named = true,
  },
  [sym_factory_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_factory_param_dcls] = {
    .visible = true,
    .named = true,
  },
  [sym_factory_param_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_supported_interface_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_emits_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_publishes_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_consumes_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_key_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_finder_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_event_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_event_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_event_abs_def] = {
    .visible = true,
    .named = true,
  },
  [sym_event_def] = {
    .visible = true,
    .named = true,
  },
  [sym_event_header] = {
    .visible = true,
    .named = true,
  },
  [sym_porttype_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_porttype_forward_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_porttype_def] = {
    .visible = true,
    .named = true,
  },
  [sym_port_body] = {
    .visible = true,
    .named = true,
  },
  [sym_port_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_port_export] = {
    .visible = true,
    .named = true,
  },
  [sym_port_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_dcl] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_header] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_inherit_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_connector_export] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
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
  [aux_sym_value_inheritance_spec_repeat1] = {
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
  [aux_sym_in_parameter_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_home_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_factory_param_dcls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_port_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connector_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_dcl_repeat1] = {
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 54,
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
  [74] = 54,
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
  [97] = 84,
  [98] = 85,
  [99] = 99,
  [100] = 82,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 101,
  [112] = 103,
  [113] = 113,
  [114] = 113,
  [115] = 115,
  [116] = 113,
  [117] = 113,
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
  [178] = 80,
  [179] = 179,
  [180] = 180,
  [181] = 79,
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
  [197] = 82,
  [198] = 198,
  [199] = 199,
  [200] = 84,
  [201] = 201,
  [202] = 202,
  [203] = 94,
  [204] = 85,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 95,
  [211] = 211,
  [212] = 212,
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
  [232] = 232,
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
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
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
  [284] = 80,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 79,
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
  [305] = 84,
  [306] = 82,
  [307] = 307,
  [308] = 85,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 80,
  [314] = 79,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 266,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 321,
  [325] = 325,
  [326] = 322,
  [327] = 327,
  [328] = 321,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 321,
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
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
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
  [400] = 322,
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
  [522] = 94,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 95,
  [532] = 532,
  [533] = 533,
  [534] = 94,
  [535] = 95,
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
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
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
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
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
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 738,
  [765] = 721,
  [766] = 615,
  [767] = 697,
  [768] = 628,
  [769] = 769,
  [770] = 549,
  [771] = 771,
  [772] = 615,
  [773] = 697,
  [774] = 628,
  [775] = 775,
  [776] = 549,
  [777] = 777,
  [778] = 615,
  [779] = 549,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
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
      if (eof) ADVANCE(572);
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(632);
      if (lookahead == '%') ADVANCE(641);
      if (lookahead == '\'') ADVANCE(649);
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '/') ADVANCE(640);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '=') ADVANCE(757);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == 'L') ADVANCE(645);
      if (lookahead == 'O') ADVANCE(660);
      if (lookahead == 'T') ADVANCE(652);
      if (lookahead == 'V') ADVANCE(653);
      if (lookahead == '[') ADVANCE(788);
      if (lookahead == '\\') SKIP(568)
      if (lookahead == ']') ADVANCE(789);
      if (lookahead == '^') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'b') ADVANCE(668);
      if (lookahead == 'c') ADVANCE(655);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'g') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(671);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == 'u') ADVANCE(667);
      if (lookahead == 'v') ADVANCE(659);
      if (lookahead == 'w') ADVANCE(662);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '|') ADVANCE(630);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '~') ADVANCE(644);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(95)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(95)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1121);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') SKIP(44)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(77)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '\r') SKIP(46)
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(48)
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '\r') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(1126);
      if (lookahead != 0) ADVANCE(1125);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(51)
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(709);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(101)
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(709);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(62)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(709);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(62)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(709);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101)
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 60:
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(59)
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(99)
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(99)
      if (lookahead == '\r') SKIP(61)
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(63)
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(100)
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '\r') SKIP(65)
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(328);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '$') ADVANCE(632);
      if (lookahead == '%') ADVANCE(641);
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '/') ADVANCE(640);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'L') ADVANCE(645);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(789);
      if (lookahead == '^') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '|') ADVANCE(630);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '\'') ADVANCE(649);
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == '+') ADVANCE(636);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(686);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(844);
      if (lookahead == 'L') ADVANCE(646);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'T') ADVANCE(849);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '~') ADVANCE(644);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '\'') ADVANCE(649);
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == '+') ADVANCE(636);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(686);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(844);
      if (lookahead == 'L') ADVANCE(646);
      if (lookahead == 'T') ADVANCE(849);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == '~') ADVANCE(644);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(646);
      if (lookahead == '\\') SKIP(32)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '$') ADVANCE(632);
      if (lookahead == '%') ADVANCE(641);
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '/') ADVANCE(640);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(789);
      if (lookahead == '^') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(294);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '|') ADVANCE(630);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (lookahead == '$') ADVANCE(632);
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == ']') ADVANCE(789);
      if (lookahead == '^') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '|') ADVANCE(630);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(642);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 76:
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 77:
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(47)
      if (lookahead == 'i') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(1128);
      if (lookahead == '/') ADVANCE(1117);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead == '/') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '<') ADVANCE(619);
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(789);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == 'f') ADVANCE(855);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == 'p') ADVANCE(1036);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead == 'u') ADVANCE(960);
      if (lookahead == 'v') ADVANCE(873);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '0') ADVANCE(683);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '{') ADVANCE(724);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == 'f') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead == 'u') ADVANCE(960);
      if (lookahead == 'v') ADVANCE(873);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(64)
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead == 'u') ADVANCE(960);
      if (lookahead == 'v') ADVANCE(873);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(868);
      if (lookahead == 'd') ADVANCE(924);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 'u') ADVANCE(960);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 'u') ADVANCE(960);
      if (lookahead == 'w') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 't') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(852);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead == 'f') ADVANCE(973);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(904);
      if (lookahead == 't') ADVANCE(1113);
      if (lookahead == 'u') ADVANCE(960);
      if (lookahead == 'v') ADVANCE(874);
      if (lookahead == 'w') ADVANCE(882);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'm') ADVANCE(1097);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(875);
      if (lookahead == '\\') SKIP(40)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(881);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == 'l') ADVANCE(1020);
      if (lookahead == 's') ADVANCE(951);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(882);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 't') ADVANCE(1045);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '\\') SKIP(49)
      if (lookahead == '{') ADVANCE(724);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '\\') SKIP(52)
      if (lookahead == 's') ADVANCE(1104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 98:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(60)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 99:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(62)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') SKIP(66)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 101:
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(716);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101)
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '6') ADVANCE(106);
      if (lookahead == '8') ADVANCE(586);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '3') ADVANCE(105);
      if (lookahead == '6') ADVANCE(107);
      if (lookahead == '8') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(600);
      END_STATE();
    case 105:
      if (lookahead == '2') ADVANCE(581);
      END_STATE();
    case 106:
      if (lookahead == '4') ADVANCE(603);
      END_STATE();
    case 107:
      if (lookahead == '4') ADVANCE(584);
      END_STATE();
    case 108:
      if (lookahead == '6') ADVANCE(597);
      END_STATE();
    case 109:
      if (lookahead == '6') ADVANCE(575);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(614);
      END_STATE();
    case 111:
      if (lookahead == '<') ADVANCE(634);
      END_STATE();
    case 112:
      if (lookahead == 'B') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(675);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(677);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(474);
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(314);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(540);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(780);
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(488);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(520);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(796);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 251:
      if (lookahead == 'f') ADVANCE(786);
      END_STATE();
    case 252:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 253:
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 257:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(615);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(617);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(583);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(602);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(579);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(792);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 305:
      if (lookahead == 'j') ADVANCE(242);
      END_STATE();
    case 306:
      if (lookahead == 'k') ADVANCE(750);
      END_STATE();
    case 307:
      if (lookahead == 'k') ADVANCE(225);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(790);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(769);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(774);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == 'v') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(628);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(509);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(405);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 423:
      if (lookahead == 'q') ADVANCE(533);
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(810);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(773);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(815);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(817);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(778);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(822);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(727);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(823);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 541:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 543:
      if (lookahead == 'v') ADVANCE(297);
      END_STATE();
    case 544:
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 545:
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 546:
      if (lookahead == 'x') ADVANCE(798);
      END_STATE();
    case 547:
      if (lookahead == 'x') ADVANCE(489);
      END_STATE();
    case 548:
      if (lookahead == 'y') ADVANCE(623);
      END_STATE();
    case 549:
      if (lookahead == 'y') ADVANCE(803);
      END_STATE();
    case 550:
      if (lookahead == 'y') ADVANCE(784);
      END_STATE();
    case 551:
      if (lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 552:
      if (lookahead == 'y') ADVANCE(818);
      END_STATE();
    case 553:
      if (lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 554:
      if (lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 555:
      if (lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 556:
      if (lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 557:
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 558:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 559:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 560:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      END_STATE();
    case 561:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      END_STATE();
    case 562:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 563:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      END_STATE();
    case 564:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(681);
      END_STATE();
    case 565:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1125);
      if (lookahead == '\r') ADVANCE(1127);
      if (lookahead == '\\') ADVANCE(1126);
      END_STATE();
    case 566:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(719);
      END_STATE();
    case 567:
      if (eof) ADVANCE(572);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 568:
      if (eof) ADVANCE(572);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(567)
      END_STATE();
    case 569:
      if (eof) ADVANCE(572);
      if (lookahead == '\n') SKIP(571)
      END_STATE();
    case 570:
      if (eof) ADVANCE(572);
      if (lookahead == '\n') SKIP(571)
      if (lookahead == '\r') SKIP(569)
      END_STATE();
    case 571:
      if (eof) ADVANCE(572);
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '$') ADVANCE(632);
      if (lookahead == '%') ADVANCE(641);
      if (lookahead == ')') ADVANCE(643);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '+') ADVANCE(635);
      if (lookahead == ',') ADVANCE(625);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '/') ADVANCE(640);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == ';') ADVANCE(733);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(757);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(756);
      if (lookahead == 'L') ADVANCE(645);
      if (lookahead == '[') ADVANCE(788);
      if (lookahead == '\\') SKIP(570)
      if (lookahead == ']') ADVANCE(789);
      if (lookahead == '^') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == 'g') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '|') ADVANCE(630);
      if (lookahead == '}') ADVANCE(725);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(571)
      END_STATE();
    case 572:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(634);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(633);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '0') ADVANCE(687);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '0') ADVANCE(687);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1128);
      if (lookahead == '/') ADVANCE(1117);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'b') ADVANCE(305);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'b') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'c') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead == 'w') ADVANCE(289);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'm') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == 'v') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 'y') ADVANCE(411);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(564);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(680);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(680);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(564);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(681);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(696);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(702);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1115);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(697);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(698);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(699);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(702);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(697);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(561);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(699);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(700);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(834);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(701);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(703);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(705);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1115);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(706);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(563);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(703);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(708);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(693);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(702);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(697);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(699);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(702);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(697);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(702);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(697);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(699);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '0') ADVANCE(688);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '0') ADVANCE(689);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(691);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(708);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(564);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(680);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(680);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(564);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(681);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(681);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(693);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(101)
      if (lookahead == '\r') ADVANCE(717);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(720);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(101)
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(720);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1128);
      if (lookahead == '/') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(719);
      if (lookahead == '\r') ADVANCE(721);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(719);
      if (lookahead == '/') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(720);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(614);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_truncatable);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_truncatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_supports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_typeprefix);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_oneway);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_value_base_type);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_value_base_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_manages);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_emits);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_publishes);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_consumes);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_finder);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_finder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_porttype);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_mirrorport);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_connector);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(832);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(1131);
      if (lookahead == '/') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(832);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(829);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(832);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '0') ADVANCE(682);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(842);
      if (lookahead == '3') ADVANCE(838);
      if (lookahead == '6') ADVANCE(840);
      if (lookahead == '8') ADVANCE(595);
      if (lookahead == 'e') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(842);
      if (lookahead == '3') ADVANCE(838);
      if (lookahead == '6') ADVANCE(840);
      if (lookahead == '8') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(843);
      if (lookahead == '3') ADVANCE(839);
      if (lookahead == '6') ADVANCE(841);
      if (lookahead == '8') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'i') ADVANCE(1105);
      if (lookahead == 'l') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'i') ADVANCE(1001);
      if (lookahead == 'l') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(982);
      if (lookahead == 'o') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1059);
      if (lookahead == 'n') ADVANCE(1106);
      if (lookahead == 't') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 's') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1078);
      if (lookahead == 'n') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(912);
      if (lookahead == 'i') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == 'h') ADVANCE(1015);
      if (lookahead == 't') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == 'h') ADVANCE(1015);
      if (lookahead == 't') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == 'h') ADVANCE(1015);
      if (lookahead == 't') ADVANCE(1046);
      if (lookahead == 'u') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == 'h') ADVANCE(1015);
      if (lookahead == 't') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(940);
      if (lookahead == 'o') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(860);
      if (lookahead == 'o') ADVANCE(1009);
      if (lookahead == 'u') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(860);
      if (lookahead == 'o') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1105);
      if (lookahead == 'l') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 'n') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 'n') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(997);
      if (lookahead == 'u') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead == 's') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1032);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 's') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == 'v') ADVANCE(938);
      if (lookahead == 'x') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == 'x') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == 'x') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(954);
      if (lookahead == 'u') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(697);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1116);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1125);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(832);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1121);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '@') ADVANCE(755);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(565);
      if (lookahead != 0) ADVANCE(1125);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(1130);
      if (lookahead == '/') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1125);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(1123);
      if (lookahead == '@') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1125);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1125);
      if (lookahead == '\r') ADVANCE(1127);
      if (lookahead == '\\') ADVANCE(1126);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(565);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(80);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1125);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(832);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 571},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 85},
  [9] = {.lex_state = 85},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 86},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 86},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 86},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 571},
  [26] = {.lex_state = 571},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 74},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 74},
  [41] = {.lex_state = 74},
  [42] = {.lex_state = 74},
  [43] = {.lex_state = 74},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 89},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 89},
  [48] = {.lex_state = 84},
  [49] = {.lex_state = 90},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 74},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 82},
  [55] = {.lex_state = 90},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 85},
  [61] = {.lex_state = 85},
  [62] = {.lex_state = 85},
  [63] = {.lex_state = 85},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 74},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 86},
  [74] = {.lex_state = 86},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 93},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 74},
  [80] = {.lex_state = 74},
  [81] = {.lex_state = 74},
  [82] = {.lex_state = 74},
  [83] = {.lex_state = 74},
  [84] = {.lex_state = 74},
  [85] = {.lex_state = 74},
  [86] = {.lex_state = 74},
  [87] = {.lex_state = 89},
  [88] = {.lex_state = 89},
  [89] = {.lex_state = 89},
  [90] = {.lex_state = 74},
  [91] = {.lex_state = 89},
  [92] = {.lex_state = 74},
  [93] = {.lex_state = 89},
  [94] = {.lex_state = 74},
  [95] = {.lex_state = 74},
  [96] = {.lex_state = 94},
  [97] = {.lex_state = 68},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 74},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 571},
  [102] = {.lex_state = 72},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 571},
  [105] = {.lex_state = 571},
  [106] = {.lex_state = 571},
  [107] = {.lex_state = 571},
  [108] = {.lex_state = 72},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 571},
  [113] = {.lex_state = 70},
  [114] = {.lex_state = 70},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 70},
  [117] = {.lex_state = 70},
  [118] = {.lex_state = 70},
  [119] = {.lex_state = 70},
  [120] = {.lex_state = 70},
  [121] = {.lex_state = 70},
  [122] = {.lex_state = 70},
  [123] = {.lex_state = 70},
  [124] = {.lex_state = 70},
  [125] = {.lex_state = 70},
  [126] = {.lex_state = 70},
  [127] = {.lex_state = 70},
  [128] = {.lex_state = 70},
  [129] = {.lex_state = 571},
  [130] = {.lex_state = 70},
  [131] = {.lex_state = 70},
  [132] = {.lex_state = 70},
  [133] = {.lex_state = 70},
  [134] = {.lex_state = 70},
  [135] = {.lex_state = 68},
  [136] = {.lex_state = 70},
  [137] = {.lex_state = 68},
  [138] = {.lex_state = 70},
  [139] = {.lex_state = 68},
  [140] = {.lex_state = 70},
  [141] = {.lex_state = 70},
  [142] = {.lex_state = 571},
  [143] = {.lex_state = 571},
  [144] = {.lex_state = 72},
  [145] = {.lex_state = 72},
  [146] = {.lex_state = 68},
  [147] = {.lex_state = 72},
  [148] = {.lex_state = 72},
  [149] = {.lex_state = 72},
  [150] = {.lex_state = 72},
  [151] = {.lex_state = 72},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 72},
  [154] = {.lex_state = 72},
  [155] = {.lex_state = 72},
  [156] = {.lex_state = 68},
  [157] = {.lex_state = 68},
  [158] = {.lex_state = 72},
  [159] = {.lex_state = 68},
  [160] = {.lex_state = 72},
  [161] = {.lex_state = 68},
  [162] = {.lex_state = 72},
  [163] = {.lex_state = 68},
  [164] = {.lex_state = 70},
  [165] = {.lex_state = 571},
  [166] = {.lex_state = 72},
  [167] = {.lex_state = 72},
  [168] = {.lex_state = 571},
  [169] = {.lex_state = 72},
  [170] = {.lex_state = 72},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 68},
  [173] = {.lex_state = 68},
  [174] = {.lex_state = 68},
  [175] = {.lex_state = 70},
  [176] = {.lex_state = 73},
  [177] = {.lex_state = 73},
  [178] = {.lex_state = 68},
  [179] = {.lex_state = 73},
  [180] = {.lex_state = 571},
  [181] = {.lex_state = 68},
  [182] = {.lex_state = 73},
  [183] = {.lex_state = 68},
  [184] = {.lex_state = 68},
  [185] = {.lex_state = 68},
  [186] = {.lex_state = 68},
  [187] = {.lex_state = 68},
  [188] = {.lex_state = 571},
  [189] = {.lex_state = 73},
  [190] = {.lex_state = 73},
  [191] = {.lex_state = 68},
  [192] = {.lex_state = 68},
  [193] = {.lex_state = 71},
  [194] = {.lex_state = 571},
  [195] = {.lex_state = 76},
  [196] = {.lex_state = 571},
  [197] = {.lex_state = 75},
  [198] = {.lex_state = 571},
  [199] = {.lex_state = 571},
  [200] = {.lex_state = 75},
  [201] = {.lex_state = 75},
  [202] = {.lex_state = 76},
  [203] = {.lex_state = 68},
  [204] = {.lex_state = 75},
  [205] = {.lex_state = 571},
  [206] = {.lex_state = 75},
  [207] = {.lex_state = 571},
  [208] = {.lex_state = 72},
  [209] = {.lex_state = 91},
  [210] = {.lex_state = 68},
  [211] = {.lex_state = 75},
  [212] = {.lex_state = 571},
  [213] = {.lex_state = 72},
  [214] = {.lex_state = 571},
  [215] = {.lex_state = 571},
  [216] = {.lex_state = 72},
  [217] = {.lex_state = 76},
  [218] = {.lex_state = 76},
  [219] = {.lex_state = 571},
  [220] = {.lex_state = 76},
  [221] = {.lex_state = 571},
  [222] = {.lex_state = 571},
  [223] = {.lex_state = 76},
  [224] = {.lex_state = 76},
  [225] = {.lex_state = 72},
  [226] = {.lex_state = 92},
  [227] = {.lex_state = 76},
  [228] = {.lex_state = 76},
  [229] = {.lex_state = 92},
  [230] = {.lex_state = 75},
  [231] = {.lex_state = 76},
  [232] = {.lex_state = 76},
  [233] = {.lex_state = 76},
  [234] = {.lex_state = 76},
  [235] = {.lex_state = 76},
  [236] = {.lex_state = 571},
  [237] = {.lex_state = 76},
  [238] = {.lex_state = 76},
  [239] = {.lex_state = 76},
  [240] = {.lex_state = 76},
  [241] = {.lex_state = 75},
  [242] = {.lex_state = 68},
  [243] = {.lex_state = 95},
  [244] = {.lex_state = 571},
  [245] = {.lex_state = 73},
  [246] = {.lex_state = 75},
  [247] = {.lex_state = 571},
  [248] = {.lex_state = 76},
  [249] = {.lex_state = 571},
  [250] = {.lex_state = 571},
  [251] = {.lex_state = 76},
  [252] = {.lex_state = 45},
  [253] = {.lex_state = 571},
  [254] = {.lex_state = 571},
  [255] = {.lex_state = 76},
  [256] = {.lex_state = 76},
  [257] = {.lex_state = 76},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 76},
  [260] = {.lex_state = 76},
  [261] = {.lex_state = 571},
  [262] = {.lex_state = 76},
  [263] = {.lex_state = 72},
  [264] = {.lex_state = 76},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 76},
  [267] = {.lex_state = 571},
  [268] = {.lex_state = 77},
  [269] = {.lex_state = 96},
  [270] = {.lex_state = 76},
  [271] = {.lex_state = 76},
  [272] = {.lex_state = 571},
  [273] = {.lex_state = 76},
  [274] = {.lex_state = 76},
  [275] = {.lex_state = 571},
  [276] = {.lex_state = 76},
  [277] = {.lex_state = 72},
  [278] = {.lex_state = 76},
  [279] = {.lex_state = 76},
  [280] = {.lex_state = 76},
  [281] = {.lex_state = 571},
  [282] = {.lex_state = 571},
  [283] = {.lex_state = 76},
  [284] = {.lex_state = 45},
  [285] = {.lex_state = 571},
  [286] = {.lex_state = 571},
  [287] = {.lex_state = 76},
  [288] = {.lex_state = 571},
  [289] = {.lex_state = 571},
  [290] = {.lex_state = 45},
  [291] = {.lex_state = 76},
  [292] = {.lex_state = 76},
  [293] = {.lex_state = 76},
  [294] = {.lex_state = 76},
  [295] = {.lex_state = 571},
  [296] = {.lex_state = 72},
  [297] = {.lex_state = 571},
  [298] = {.lex_state = 1124},
  [299] = {.lex_state = 76},
  [300] = {.lex_state = 76},
  [301] = {.lex_state = 571},
  [302] = {.lex_state = 571},
  [303] = {.lex_state = 77},
  [304] = {.lex_state = 76},
  [305] = {.lex_state = 45},
  [306] = {.lex_state = 45},
  [307] = {.lex_state = 77},
  [308] = {.lex_state = 45},
  [309] = {.lex_state = 77},
  [310] = {.lex_state = 571},
  [311] = {.lex_state = 76},
  [312] = {.lex_state = 571},
  [313] = {.lex_state = 75},
  [314] = {.lex_state = 75},
  [315] = {.lex_state = 571},
  [316] = {.lex_state = 82},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 76},
  [322] = {.lex_state = 571},
  [323] = {.lex_state = 571},
  [324] = {.lex_state = 76},
  [325] = {.lex_state = 82},
  [326] = {.lex_state = 571},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 76},
  [329] = {.lex_state = 76},
  [330] = {.lex_state = 571},
  [331] = {.lex_state = 571},
  [332] = {.lex_state = 82},
  [333] = {.lex_state = 571},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 76},
  [336] = {.lex_state = 76},
  [337] = {.lex_state = 76},
  [338] = {.lex_state = 82},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 72},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 76},
  [343] = {.lex_state = 76},
  [344] = {.lex_state = 76},
  [345] = {.lex_state = 82},
  [346] = {.lex_state = 76},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 82},
  [350] = {.lex_state = 571},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 82},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 76},
  [356] = {.lex_state = 76},
  [357] = {.lex_state = 76},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 571},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 571},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 571},
  [364] = {.lex_state = 76},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 571},
  [367] = {.lex_state = 76},
  [368] = {.lex_state = 82},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 571},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 82},
  [375] = {.lex_state = 76},
  [376] = {.lex_state = 571},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 76},
  [381] = {.lex_state = 571},
  [382] = {.lex_state = 571},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 571},
  [385] = {.lex_state = 97},
  [386] = {.lex_state = 76},
  [387] = {.lex_state = 76},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 82},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 76},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 76},
  [398] = {.lex_state = 76},
  [399] = {.lex_state = 76},
  [400] = {.lex_state = 571},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 76},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 76},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 571},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 571},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 72},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 76},
  [419] = {.lex_state = 76},
  [420] = {.lex_state = 76},
  [421] = {.lex_state = 571},
  [422] = {.lex_state = 76},
  [423] = {.lex_state = 76},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 571},
  [428] = {.lex_state = 82},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 571},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 82},
  [433] = {.lex_state = 82},
  [434] = {.lex_state = 76},
  [435] = {.lex_state = 77},
  [436] = {.lex_state = 53},
  [437] = {.lex_state = 82},
  [438] = {.lex_state = 76},
  [439] = {.lex_state = 76},
  [440] = {.lex_state = 76},
  [441] = {.lex_state = 76},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 76},
  [444] = {.lex_state = 76},
  [445] = {.lex_state = 76},
  [446] = {.lex_state = 571},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 77},
  [449] = {.lex_state = 77},
  [450] = {.lex_state = 72},
  [451] = {.lex_state = 76},
  [452] = {.lex_state = 76},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 571},
  [455] = {.lex_state = 571},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 76},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 571},
  [462] = {.lex_state = 571},
  [463] = {.lex_state = 76},
  [464] = {.lex_state = 571},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 571},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 76},
  [470] = {.lex_state = 72},
  [471] = {.lex_state = 76},
  [472] = {.lex_state = 76},
  [473] = {.lex_state = 571},
  [474] = {.lex_state = 76},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 82},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 76},
  [480] = {.lex_state = 76},
  [481] = {.lex_state = 76},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 76},
  [484] = {.lex_state = 76},
  [485] = {.lex_state = 76},
  [486] = {.lex_state = 76},
  [487] = {.lex_state = 76},
  [488] = {.lex_state = 76},
  [489] = {.lex_state = 76},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 76},
  [492] = {.lex_state = 76},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 571},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 76},
  [498] = {.lex_state = 76},
  [499] = {.lex_state = 76},
  [500] = {.lex_state = 76},
  [501] = {.lex_state = 76},
  [502] = {.lex_state = 571},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 82},
  [506] = {.lex_state = 571},
  [507] = {.lex_state = 76},
  [508] = {.lex_state = 76},
  [509] = {.lex_state = 571},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 76},
  [512] = {.lex_state = 76},
  [513] = {.lex_state = 76},
  [514] = {.lex_state = 571},
  [515] = {.lex_state = 82},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 76},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 45},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 76},
  [526] = {.lex_state = 76},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 82},
  [531] = {.lex_state = 45},
  [532] = {.lex_state = 82},
  [533] = {.lex_state = 571},
  [534] = {.lex_state = 75},
  [535] = {.lex_state = 75},
  [536] = {.lex_state = 82},
  [537] = {.lex_state = 76},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 76},
  [540] = {.lex_state = 76},
  [541] = {.lex_state = 82},
  [542] = {.lex_state = 79},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 76},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 76},
  [548] = {.lex_state = 76},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 76},
  [552] = {.lex_state = 76},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 98},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 98},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 82},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 82},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 571},
  [586] = {.lex_state = 76},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 76},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 76},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 82},
  [598] = {.lex_state = 76},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 76},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 76},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 571},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 76},
  [615] = {.lex_state = 76},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 571},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 571},
  [622] = {.lex_state = 76},
  [623] = {.lex_state = 76},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 571},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 76},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 76},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 54},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 76},
  [650] = {.lex_state = 82},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 82},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 76},
  [661] = {.lex_state = 76},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 82},
  [665] = {.lex_state = 82},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 76},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 76},
  [674] = {.lex_state = 72},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 82},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 571},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 100},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 82},
  [697] = {.lex_state = 76},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 76},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 76},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 76},
  [709] = {.lex_state = 72},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 100},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 76},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 82},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 82},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 76},
  [729] = {.lex_state = 76},
  [730] = {.lex_state = 76},
  [731] = {.lex_state = 76},
  [732] = {.lex_state = 76},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 76},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 831},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 76},
  [741] = {.lex_state = 76},
  [742] = {.lex_state = 76},
  [743] = {.lex_state = 76},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 571},
  [747] = {.lex_state = 76},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 76},
  [750] = {.lex_state = 76},
  [751] = {.lex_state = 76},
  [752] = {.lex_state = 76},
  [753] = {.lex_state = 76},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 571},
  [757] = {.lex_state = 76},
  [758] = {.lex_state = 76},
  [759] = {.lex_state = 76},
  [760] = {.lex_state = 76},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 82},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 831},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 76},
  [767] = {.lex_state = 76},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 76},
  [772] = {.lex_state = 76},
  [773] = {.lex_state = 76},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 82},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 76},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 571},
  [782] = {(TSStateId)(-1)},
  [783] = {(TSStateId)(-1)},
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
    [anon_sym_abstract] = ACTIONS(1),
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
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_truncatable] = ACTIONS(1),
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
    [anon_sym_typeid] = ACTIONS(1),
    [anon_sym_typeprefix] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_oneway] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [sym_value_base_type] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_provides] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_home] = ACTIONS(1),
    [anon_sym_manages] = ACTIONS(1),
    [anon_sym_emits] = ACTIONS(1),
    [anon_sym_publishes] = ACTIONS(1),
    [anon_sym_consumes] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_finder] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_mirrorport] = ACTIONS(1),
    [anon_sym_connector] = ACTIONS(1),
    [anon_sym_native] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_specification] = STATE(724),
    [sym_preproc_call] = STATE(105),
    [sym_except_dcl] = STATE(721),
    [sym_interface_dcl] = STATE(721),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(721),
    [sym_bitmask_dcl] = STATE(721),
    [sym_annotation_dcl] = STATE(721),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(721),
    [sym_template_module_inst] = STATE(721),
    [sym_value_dcl] = STATE(721),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(721),
    [sym_enum_dcl] = STATE(721),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(721),
    [sym_union_def] = STATE(721),
    [sym_type_id_dcl] = STATE(721),
    [sym_type_prefix_dcl] = STATE(721),
    [sym_import_dcl] = STATE(721),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(721),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(721),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(721),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(721),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(721),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(105),
    [sym_native_dcl] = STATE(721),
    [sym_module_dcl] = STATE(721),
    [sym_struct_forward_dcl] = STATE(721),
    [sym_struct_def] = STATE(721),
    [sym_predefine] = STATE(104),
    [sym_const_dcl] = STATE(721),
    [sym_comment] = STATE(1),
    [aux_sym_specification_repeat1] = STATE(25),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_preproc_directive] = ACTIONS(9),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(768),
    [sym_export] = STATE(57),
    [sym_op_dcl] = STATE(326),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(768),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(768),
    [sym_bitmask_dcl] = STATE(768),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(768),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(57),
    [sym_init_dcl] = STATE(57),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(768),
    [sym_enum_dcl] = STATE(768),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(768),
    [sym_union_def] = STATE(768),
    [sym_type_id_dcl] = STATE(768),
    [sym_import_dcl] = STATE(768),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(326),
    [sym_op_with_context] = STATE(768),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(768),
    [sym_struct_forward_dcl] = STATE(768),
    [sym_struct_def] = STATE(768),
    [sym_const_dcl] = STATE(768),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_value_def_repeat1] = STATE(5),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(139),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(768),
    [sym_export] = STATE(57),
    [sym_op_dcl] = STATE(326),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(768),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(768),
    [sym_bitmask_dcl] = STATE(768),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(768),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(57),
    [sym_init_dcl] = STATE(57),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(768),
    [sym_enum_dcl] = STATE(768),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(768),
    [sym_union_def] = STATE(768),
    [sym_type_id_dcl] = STATE(768),
    [sym_import_dcl] = STATE(768),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(326),
    [sym_op_with_context] = STATE(768),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(768),
    [sym_struct_forward_dcl] = STATE(768),
    [sym_struct_def] = STATE(768),
    [sym_const_dcl] = STATE(768),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_value_def_repeat1] = STATE(7),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(139),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(774),
    [sym_export] = STATE(63),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(774),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(774),
    [sym_bitmask_dcl] = STATE(774),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(774),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(774),
    [sym_enum_dcl] = STATE(774),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(774),
    [sym_union_def] = STATE(774),
    [sym_type_id_dcl] = STATE(774),
    [sym_import_dcl] = STATE(774),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(774),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_home_body] = STATE(676),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(680),
    [sym_finder_dcl] = STATE(680),
    [sym_native_dcl] = STATE(774),
    [sym_struct_forward_dcl] = STATE(774),
    [sym_struct_def] = STATE(774),
    [sym_const_dcl] = STATE(774),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_home_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(161),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(768),
    [sym_export] = STATE(57),
    [sym_op_dcl] = STATE(326),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(768),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(768),
    [sym_bitmask_dcl] = STATE(768),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(768),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(57),
    [sym_init_dcl] = STATE(57),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(768),
    [sym_enum_dcl] = STATE(768),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(768),
    [sym_union_def] = STATE(768),
    [sym_type_id_dcl] = STATE(768),
    [sym_import_dcl] = STATE(768),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(326),
    [sym_op_with_context] = STATE(768),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(768),
    [sym_struct_forward_dcl] = STATE(768),
    [sym_struct_def] = STATE(768),
    [sym_const_dcl] = STATE(768),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_value_def_repeat1] = STATE(6),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(139),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(768),
    [sym_export] = STATE(57),
    [sym_op_dcl] = STATE(326),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(768),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(768),
    [sym_bitmask_dcl] = STATE(768),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(768),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(57),
    [sym_init_dcl] = STATE(57),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(768),
    [sym_enum_dcl] = STATE(768),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(768),
    [sym_union_def] = STATE(768),
    [sym_type_id_dcl] = STATE(768),
    [sym_import_dcl] = STATE(768),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(326),
    [sym_op_with_context] = STATE(768),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(768),
    [sym_struct_forward_dcl] = STATE(768),
    [sym_struct_def] = STATE(768),
    [sym_const_dcl] = STATE(768),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_value_def_repeat1] = STATE(6),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_int16] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(168),
    [anon_sym_int32] = ACTIONS(168),
    [anon_sym_longlong] = ACTIONS(171),
    [anon_sym_int64] = ACTIONS(174),
    [sym_unsigned_tiny_int] = ACTIONS(177),
    [sym_boolean_type] = ACTIONS(180),
    [anon_sym_fixed] = ACTIONS(183),
    [sym_octet_type] = ACTIONS(180),
    [sym_signed_tiny_int] = ACTIONS(186),
    [anon_sym_unsignedshort] = ACTIONS(189),
    [anon_sym_uint16] = ACTIONS(192),
    [anon_sym_unsignedlong] = ACTIONS(195),
    [anon_sym_uint32] = ACTIONS(195),
    [anon_sym_unsignedlonglong] = ACTIONS(198),
    [anon_sym_uint64] = ACTIONS(201),
    [anon_sym_float] = ACTIONS(204),
    [anon_sym_double] = ACTIONS(204),
    [anon_sym_longdouble] = ACTIONS(207),
    [anon_sym_char] = ACTIONS(210),
    [anon_sym_wchar] = ACTIONS(210),
    [anon_sym_COLON_COLON] = ACTIONS(213),
    [anon_sym_string] = ACTIONS(216),
    [anon_sym_wstring] = ACTIONS(216),
    [anon_sym_any] = ACTIONS(219),
    [anon_sym_sequence] = ACTIONS(222),
    [anon_sym_map] = ACTIONS(225),
    [anon_sym_exception] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_abstract] = ACTIONS(233),
    [anon_sym_void] = ACTIONS(236),
    [anon_sym_readonly] = ACTIONS(239),
    [anon_sym_attribute] = ACTIONS(242),
    [anon_sym_bitset] = ACTIONS(245),
    [anon_sym_bitmask] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_valuetype] = ACTIONS(254),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_union] = ACTIONS(260),
    [anon_sym_enum] = ACTIONS(263),
    [anon_sym_const] = ACTIONS(266),
    [anon_sym_custom] = ACTIONS(269),
    [anon_sym_public] = ACTIONS(272),
    [anon_sym_private] = ACTIONS(272),
    [anon_sym_factory] = ACTIONS(275),
    [anon_sym_typedef] = ACTIONS(278),
    [anon_sym_ATignore_literal_names] = ACTIONS(281),
    [anon_sym_typeid] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(287),
    [anon_sym_Object] = ACTIONS(290),
    [anon_sym_oneway] = ACTIONS(293),
    [sym_value_base_type] = ACTIONS(180),
    [anon_sym_native] = ACTIONS(296),
    [sym_identifier] = ACTIONS(299),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(768),
    [sym_export] = STATE(57),
    [sym_op_dcl] = STATE(326),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(768),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(768),
    [sym_bitmask_dcl] = STATE(768),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(768),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(57),
    [sym_init_dcl] = STATE(57),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(768),
    [sym_enum_dcl] = STATE(768),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(768),
    [sym_union_def] = STATE(768),
    [sym_type_id_dcl] = STATE(768),
    [sym_import_dcl] = STATE(768),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(326),
    [sym_op_with_context] = STATE(768),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(768),
    [sym_struct_forward_dcl] = STATE(768),
    [sym_struct_def] = STATE(768),
    [sym_const_dcl] = STATE(768),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_value_def_repeat1] = STATE(6),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_factory] = ACTIONS(139),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(774),
    [sym_export] = STATE(63),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(774),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(774),
    [sym_bitmask_dcl] = STATE(774),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(774),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(774),
    [sym_enum_dcl] = STATE(774),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(774),
    [sym_union_def] = STATE(774),
    [sym_type_id_dcl] = STATE(774),
    [sym_import_dcl] = STATE(774),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(774),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(680),
    [sym_finder_dcl] = STATE(680),
    [sym_native_dcl] = STATE(774),
    [sym_struct_forward_dcl] = STATE(774),
    [sym_struct_def] = STATE(774),
    [sym_const_dcl] = STATE(774),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_home_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(304),
    [anon_sym_int16] = ACTIONS(304),
    [anon_sym_long] = ACTIONS(307),
    [anon_sym_int32] = ACTIONS(307),
    [anon_sym_longlong] = ACTIONS(310),
    [anon_sym_int64] = ACTIONS(313),
    [sym_unsigned_tiny_int] = ACTIONS(316),
    [sym_boolean_type] = ACTIONS(319),
    [anon_sym_fixed] = ACTIONS(322),
    [sym_octet_type] = ACTIONS(319),
    [sym_signed_tiny_int] = ACTIONS(325),
    [anon_sym_unsignedshort] = ACTIONS(328),
    [anon_sym_uint16] = ACTIONS(331),
    [anon_sym_unsignedlong] = ACTIONS(334),
    [anon_sym_uint32] = ACTIONS(334),
    [anon_sym_unsignedlonglong] = ACTIONS(337),
    [anon_sym_uint64] = ACTIONS(340),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_longdouble] = ACTIONS(346),
    [anon_sym_char] = ACTIONS(349),
    [anon_sym_wchar] = ACTIONS(349),
    [anon_sym_COLON_COLON] = ACTIONS(352),
    [anon_sym_string] = ACTIONS(355),
    [anon_sym_wstring] = ACTIONS(355),
    [anon_sym_any] = ACTIONS(358),
    [anon_sym_sequence] = ACTIONS(361),
    [anon_sym_map] = ACTIONS(364),
    [anon_sym_exception] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_abstract] = ACTIONS(372),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_readonly] = ACTIONS(378),
    [anon_sym_attribute] = ACTIONS(381),
    [anon_sym_bitset] = ACTIONS(384),
    [anon_sym_bitmask] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_valuetype] = ACTIONS(393),
    [anon_sym_struct] = ACTIONS(396),
    [anon_sym_union] = ACTIONS(399),
    [anon_sym_enum] = ACTIONS(402),
    [anon_sym_const] = ACTIONS(405),
    [anon_sym_custom] = ACTIONS(408),
    [anon_sym_factory] = ACTIONS(411),
    [anon_sym_typedef] = ACTIONS(414),
    [anon_sym_ATignore_literal_names] = ACTIONS(417),
    [anon_sym_typeid] = ACTIONS(420),
    [anon_sym_import] = ACTIONS(423),
    [anon_sym_Object] = ACTIONS(426),
    [anon_sym_oneway] = ACTIONS(429),
    [sym_value_base_type] = ACTIONS(319),
    [anon_sym_finder] = ACTIONS(432),
    [anon_sym_native] = ACTIONS(435),
    [sym_identifier] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(774),
    [sym_export] = STATE(63),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(774),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(774),
    [sym_bitmask_dcl] = STATE(774),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(774),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(774),
    [sym_enum_dcl] = STATE(774),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(774),
    [sym_union_def] = STATE(774),
    [sym_type_id_dcl] = STATE(774),
    [sym_import_dcl] = STATE(774),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(774),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(680),
    [sym_finder_dcl] = STATE(680),
    [sym_native_dcl] = STATE(774),
    [sym_struct_forward_dcl] = STATE(774),
    [sym_struct_def] = STATE(774),
    [sym_const_dcl] = STATE(774),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_home_body_repeat1] = STATE(8),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(161),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [10] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_interface_body] = STATE(706),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(10),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(16),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [11] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_interface_body] = STATE(629),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(11),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(16),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [12] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(21),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [13] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(449),
    [anon_sym_int16] = ACTIONS(449),
    [anon_sym_long] = ACTIONS(452),
    [anon_sym_int32] = ACTIONS(452),
    [anon_sym_longlong] = ACTIONS(455),
    [anon_sym_int64] = ACTIONS(458),
    [sym_unsigned_tiny_int] = ACTIONS(461),
    [sym_boolean_type] = ACTIONS(464),
    [anon_sym_fixed] = ACTIONS(467),
    [sym_octet_type] = ACTIONS(464),
    [sym_signed_tiny_int] = ACTIONS(470),
    [anon_sym_unsignedshort] = ACTIONS(473),
    [anon_sym_uint16] = ACTIONS(476),
    [anon_sym_unsignedlong] = ACTIONS(479),
    [anon_sym_uint32] = ACTIONS(479),
    [anon_sym_unsignedlonglong] = ACTIONS(482),
    [anon_sym_uint64] = ACTIONS(485),
    [anon_sym_float] = ACTIONS(488),
    [anon_sym_double] = ACTIONS(488),
    [anon_sym_longdouble] = ACTIONS(491),
    [anon_sym_char] = ACTIONS(494),
    [anon_sym_wchar] = ACTIONS(494),
    [anon_sym_COLON_COLON] = ACTIONS(497),
    [anon_sym_string] = ACTIONS(500),
    [anon_sym_wstring] = ACTIONS(500),
    [anon_sym_any] = ACTIONS(503),
    [anon_sym_sequence] = ACTIONS(506),
    [anon_sym_map] = ACTIONS(509),
    [anon_sym_exception] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_abstract] = ACTIONS(517),
    [anon_sym_void] = ACTIONS(520),
    [anon_sym_readonly] = ACTIONS(523),
    [anon_sym_attribute] = ACTIONS(526),
    [anon_sym_bitset] = ACTIONS(529),
    [anon_sym_bitmask] = ACTIONS(532),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_valuetype] = ACTIONS(538),
    [anon_sym_struct] = ACTIONS(541),
    [anon_sym_union] = ACTIONS(544),
    [anon_sym_enum] = ACTIONS(547),
    [anon_sym_const] = ACTIONS(550),
    [anon_sym_custom] = ACTIONS(553),
    [anon_sym_typedef] = ACTIONS(556),
    [anon_sym_ATignore_literal_names] = ACTIONS(559),
    [anon_sym_typeid] = ACTIONS(562),
    [anon_sym_import] = ACTIONS(565),
    [anon_sym_Object] = ACTIONS(568),
    [anon_sym_oneway] = ACTIONS(571),
    [sym_value_base_type] = ACTIONS(464),
    [anon_sym_native] = ACTIONS(574),
    [sym_identifier] = ACTIONS(577),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [14] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(14),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [15] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(15),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [16] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(16),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(584),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [17] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(17),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(15),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [18] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(18),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(14),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [19] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(19),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(20),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [20] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(20),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [21] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(614),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_except_dcl] = STATE(628),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(400),
    [sym_op_type_spec] = STATE(637),
    [sym_attr_dcl] = STATE(628),
    [sym_readonly_attr_spec] = STATE(638),
    [sym_attr_spec] = STATE(638),
    [sym_bitset_dcl] = STATE(628),
    [sym_bitmask_dcl] = STATE(628),
    [sym_annotation_appl] = STATE(203),
    [sym_value_dcl] = STATE(628),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(628),
    [sym_enum_dcl] = STATE(628),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(628),
    [sym_union_def] = STATE(628),
    [sym_type_id_dcl] = STATE(628),
    [sym_import_dcl] = STATE(628),
    [sym_object_type] = STATE(251),
    [sym_op_oneway_dcl] = STATE(400),
    [sym_op_with_context] = STATE(628),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_native_dcl] = STATE(628),
    [sym_struct_forward_dcl] = STATE(628),
    [sym_struct_def] = STATE(628),
    [sym_const_dcl] = STATE(628),
    [sym_comment] = STATE(21),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [aux_sym_interface_body_repeat1] = STATE(13),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_exception] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(588),
    [anon_sym_abstract] = ACTIONS(111),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_readonly] = ACTIONS(115),
    [anon_sym_attribute] = ACTIONS(117),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_valuetype] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_custom] = ACTIONS(135),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [22] = {
    [sym_except_dcl] = STATE(765),
    [sym_interface_dcl] = STATE(765),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(765),
    [sym_tpl_definition] = STATE(110),
    [sym_template_module_inst] = STATE(765),
    [sym_template_module_ref] = STATE(613),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_type_prefix_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(765),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(765),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(765),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(765),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(765),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(765),
    [sym_module_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_predefine] = STATE(108),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(22),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(23),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_alias] = ACTIONS(594),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [23] = {
    [sym_except_dcl] = STATE(765),
    [sym_interface_dcl] = STATE(765),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(765),
    [sym_tpl_definition] = STATE(110),
    [sym_template_module_inst] = STATE(765),
    [sym_template_module_ref] = STATE(613),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_type_prefix_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(765),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(765),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(765),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(765),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(765),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(765),
    [sym_module_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_predefine] = STATE(108),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(23),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(24),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(598),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_alias] = ACTIONS(594),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [24] = {
    [sym_except_dcl] = STATE(765),
    [sym_interface_dcl] = STATE(765),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(765),
    [sym_tpl_definition] = STATE(110),
    [sym_template_module_inst] = STATE(765),
    [sym_template_module_ref] = STATE(613),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_type_prefix_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(765),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(765),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(765),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(765),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(765),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(765),
    [sym_module_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_predefine] = STATE(108),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(24),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(24),
    [anon_sym_exception] = ACTIONS(600),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_local] = ACTIONS(605),
    [anon_sym_abstract] = ACTIONS(608),
    [anon_sym_interface] = ACTIONS(611),
    [anon_sym_bitset] = ACTIONS(614),
    [anon_sym_bitmask] = ACTIONS(617),
    [anon_sym_ATannotation] = ACTIONS(620),
    [anon_sym_AT] = ACTIONS(623),
    [anon_sym_module] = ACTIONS(626),
    [anon_sym_valuetype] = ACTIONS(629),
    [anon_sym_eventtype] = ACTIONS(632),
    [anon_sym_struct] = ACTIONS(635),
    [anon_sym_union] = ACTIONS(638),
    [anon_sym_enum] = ACTIONS(641),
    [anon_sym_const] = ACTIONS(644),
    [anon_sym_alias] = ACTIONS(647),
    [anon_sym_custom] = ACTIONS(650),
    [anon_sym_typedef] = ACTIONS(653),
    [anon_sym_ATignore_literal_names] = ACTIONS(656),
    [anon_sym_typeid] = ACTIONS(659),
    [anon_sym_typeprefix] = ACTIONS(662),
    [anon_sym_import] = ACTIONS(665),
    [anon_sym_component] = ACTIONS(668),
    [anon_sym_home] = ACTIONS(671),
    [anon_sym_porttype] = ACTIONS(674),
    [anon_sym_connector] = ACTIONS(677),
    [anon_sym_native] = ACTIONS(680),
    [anon_sym_POUNDdefine] = ACTIONS(683),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [25] = {
    [sym_preproc_call] = STATE(105),
    [sym_except_dcl] = STATE(721),
    [sym_interface_dcl] = STATE(721),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(721),
    [sym_bitmask_dcl] = STATE(721),
    [sym_annotation_dcl] = STATE(721),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(721),
    [sym_template_module_inst] = STATE(721),
    [sym_value_dcl] = STATE(721),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(721),
    [sym_enum_dcl] = STATE(721),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(721),
    [sym_union_def] = STATE(721),
    [sym_type_id_dcl] = STATE(721),
    [sym_type_prefix_dcl] = STATE(721),
    [sym_import_dcl] = STATE(721),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(721),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(721),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(721),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(721),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(721),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(105),
    [sym_native_dcl] = STATE(721),
    [sym_module_dcl] = STATE(721),
    [sym_struct_forward_dcl] = STATE(721),
    [sym_struct_def] = STATE(721),
    [sym_predefine] = STATE(104),
    [sym_const_dcl] = STATE(721),
    [sym_comment] = STATE(25),
    [aux_sym_specification_repeat1] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(686),
    [sym_preproc_directive] = ACTIONS(9),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [26] = {
    [sym_preproc_call] = STATE(105),
    [sym_except_dcl] = STATE(721),
    [sym_interface_dcl] = STATE(721),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(721),
    [sym_bitmask_dcl] = STATE(721),
    [sym_annotation_dcl] = STATE(721),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(721),
    [sym_template_module_inst] = STATE(721),
    [sym_value_dcl] = STATE(721),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(721),
    [sym_enum_dcl] = STATE(721),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(721),
    [sym_union_def] = STATE(721),
    [sym_type_id_dcl] = STATE(721),
    [sym_type_prefix_dcl] = STATE(721),
    [sym_import_dcl] = STATE(721),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(721),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(721),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(721),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(721),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(721),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(105),
    [sym_native_dcl] = STATE(721),
    [sym_module_dcl] = STATE(721),
    [sym_struct_forward_dcl] = STATE(721),
    [sym_struct_def] = STATE(721),
    [sym_predefine] = STATE(104),
    [sym_const_dcl] = STATE(721),
    [sym_comment] = STATE(26),
    [aux_sym_specification_repeat1] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(688),
    [sym_preproc_directive] = ACTIONS(690),
    [anon_sym_exception] = ACTIONS(693),
    [anon_sym_local] = ACTIONS(696),
    [anon_sym_abstract] = ACTIONS(699),
    [anon_sym_interface] = ACTIONS(702),
    [anon_sym_bitset] = ACTIONS(705),
    [anon_sym_bitmask] = ACTIONS(708),
    [anon_sym_ATannotation] = ACTIONS(711),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_module] = ACTIONS(717),
    [anon_sym_valuetype] = ACTIONS(720),
    [anon_sym_eventtype] = ACTIONS(723),
    [anon_sym_struct] = ACTIONS(726),
    [anon_sym_union] = ACTIONS(729),
    [anon_sym_enum] = ACTIONS(732),
    [anon_sym_const] = ACTIONS(735),
    [anon_sym_custom] = ACTIONS(738),
    [anon_sym_typedef] = ACTIONS(741),
    [anon_sym_ATignore_literal_names] = ACTIONS(744),
    [anon_sym_typeid] = ACTIONS(747),
    [anon_sym_typeprefix] = ACTIONS(750),
    [anon_sym_import] = ACTIONS(753),
    [anon_sym_component] = ACTIONS(756),
    [anon_sym_home] = ACTIONS(759),
    [anon_sym_porttype] = ACTIONS(762),
    [anon_sym_connector] = ACTIONS(765),
    [anon_sym_native] = ACTIONS(768),
    [anon_sym_POUNDdefine] = ACTIONS(771),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [27] = {
    [sym_except_dcl] = STATE(765),
    [sym_interface_dcl] = STATE(765),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(765),
    [sym_template_module_inst] = STATE(765),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_type_prefix_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(765),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(765),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(765),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(765),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(765),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(115),
    [sym_native_dcl] = STATE(765),
    [sym_module_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_predefine] = STATE(108),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(27),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_module_dcl_repeat1] = STATE(28),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [28] = {
    [sym_except_dcl] = STATE(765),
    [sym_interface_dcl] = STATE(765),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(765),
    [sym_template_module_inst] = STATE(765),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_type_prefix_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(765),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(765),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(765),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(765),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(765),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(115),
    [sym_native_dcl] = STATE(765),
    [sym_module_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_predefine] = STATE(108),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(28),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_module_dcl_repeat1] = STATE(28),
    [anon_sym_exception] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_local] = ACTIONS(781),
    [anon_sym_abstract] = ACTIONS(784),
    [anon_sym_interface] = ACTIONS(787),
    [anon_sym_bitset] = ACTIONS(790),
    [anon_sym_bitmask] = ACTIONS(793),
    [anon_sym_ATannotation] = ACTIONS(796),
    [anon_sym_AT] = ACTIONS(799),
    [anon_sym_module] = ACTIONS(802),
    [anon_sym_valuetype] = ACTIONS(805),
    [anon_sym_eventtype] = ACTIONS(808),
    [anon_sym_struct] = ACTIONS(811),
    [anon_sym_union] = ACTIONS(814),
    [anon_sym_enum] = ACTIONS(817),
    [anon_sym_const] = ACTIONS(820),
    [anon_sym_custom] = ACTIONS(823),
    [anon_sym_typedef] = ACTIONS(826),
    [anon_sym_ATignore_literal_names] = ACTIONS(829),
    [anon_sym_typeid] = ACTIONS(832),
    [anon_sym_typeprefix] = ACTIONS(835),
    [anon_sym_import] = ACTIONS(838),
    [anon_sym_component] = ACTIONS(841),
    [anon_sym_home] = ACTIONS(844),
    [anon_sym_porttype] = ACTIONS(847),
    [anon_sym_connector] = ACTIONS(850),
    [anon_sym_native] = ACTIONS(853),
    [anon_sym_POUNDdefine] = ACTIONS(856),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [29] = {
    [sym_except_dcl] = STATE(765),
    [sym_interface_dcl] = STATE(765),
    [sym_interface_kind] = STATE(715),
    [sym_interface_forward_dcl] = STATE(714),
    [sym_interface_def] = STATE(714),
    [sym_interface_header] = STATE(713),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(203),
    [sym_template_module_dcl] = STATE(765),
    [sym_template_module_inst] = STATE(765),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(710),
    [sym_value_kind] = STATE(708),
    [sym_value_header] = STATE(693),
    [sym_value_forward_dcl] = STATE(710),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_type_prefix_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_value_box_def] = STATE(710),
    [sym_value_abs_def] = STATE(710),
    [sym_component_dcl] = STATE(765),
    [sym_component_forward_dcl] = STATE(678),
    [sym_component_def] = STATE(678),
    [sym_component_header] = STATE(677),
    [sym_home_dcl] = STATE(765),
    [sym_home_header] = STATE(675),
    [sym_event_dcl] = STATE(765),
    [sym_event_forward_dcl] = STATE(670),
    [sym_event_abs_def] = STATE(670),
    [sym_event_def] = STATE(670),
    [sym_event_header] = STATE(668),
    [sym_porttype_dcl] = STATE(765),
    [sym_porttype_forward_dcl] = STATE(666),
    [sym_porttype_def] = STATE(666),
    [sym_connector_dcl] = STATE(765),
    [sym_connector_header] = STATE(663),
    [sym_definition] = STATE(115),
    [sym_native_dcl] = STATE(765),
    [sym_module_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_predefine] = STATE(108),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(29),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_module_dcl_repeat1] = STATE(27),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_local] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(19),
    [anon_sym_bitmask] = ACTIONS(21),
    [anon_sym_ATannotation] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_valuetype] = ACTIONS(29),
    [anon_sym_eventtype] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_custom] = ACTIONS(41),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(47),
    [anon_sym_typeprefix] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_home] = ACTIONS(55),
    [anon_sym_porttype] = ACTIONS(57),
    [anon_sym_connector] = ACTIONS(59),
    [anon_sym_native] = ACTIONS(61),
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [30] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(168),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(536),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_const_expr] = STATE(536),
    [sym_or_expr] = STATE(189),
    [sym_xor_expr] = STATE(182),
    [sym_and_expr] = STATE(176),
    [sym_shift_expr] = STATE(170),
    [sym_add_expr] = STATE(166),
    [sym_mult_expr] = STATE(145),
    [sym_unary_expr] = STATE(153),
    [sym_unary_operator] = STATE(164),
    [sym_literal] = STATE(152),
    [sym_string_literal] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_actual_parameters] = STATE(775),
    [sym_actual_parameter] = STATE(325),
    [sym_object_type] = STATE(251),
    [sym_comment] = STATE(30),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(865),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_L] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_TRUE] = ACTIONS(875),
    [anon_sym_FALSE] = ACTIONS(875),
    [sym_number_literal] = ACTIONS(877),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [31] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(168),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(536),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_const_expr] = STATE(536),
    [sym_or_expr] = STATE(189),
    [sym_xor_expr] = STATE(182),
    [sym_and_expr] = STATE(176),
    [sym_shift_expr] = STATE(170),
    [sym_add_expr] = STATE(166),
    [sym_mult_expr] = STATE(145),
    [sym_unary_expr] = STATE(153),
    [sym_unary_operator] = STATE(164),
    [sym_literal] = STATE(152),
    [sym_string_literal] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_actual_parameter] = STATE(532),
    [sym_object_type] = STATE(251),
    [sym_comment] = STATE(31),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(861),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(865),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_L] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_TRUE] = ACTIONS(875),
    [anon_sym_FALSE] = ACTIONS(875),
    [sym_number_literal] = ACTIONS(877),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [32] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_type_spec] = STATE(260),
    [sym_simple_type_spec] = STATE(291),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(291),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_bitset_dcl] = STATE(260),
    [sym_bitmask_dcl] = STATE(260),
    [sym_annotation_appl] = STATE(203),
    [sym_enum_dcl] = STATE(260),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(260),
    [sym_union_def] = STATE(260),
    [sym_element_spec] = STATE(711),
    [sym_object_type] = STATE(251),
    [sym_struct_forward_dcl] = STATE(260),
    [sym_struct_def] = STATE(260),
    [sym_comment] = STATE(32),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_default] = ACTIONS(883),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_case] = ACTIONS(883),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [33] = {
    [sym_signed_short_int] = STATE(231),
    [sym_signed_long_int] = STATE(231),
    [sym_signed_longlong_int] = STATE(231),
    [sym_unsigned_int] = STATE(224),
    [sym_integer_type] = STATE(251),
    [sym_signed_int] = STATE(224),
    [sym_unsigned_short_int] = STATE(228),
    [sym_unsigned_long_int] = STATE(228),
    [sym_unsigned_longlong_int] = STATE(228),
    [sym_floating_pt_type] = STATE(251),
    [sym_char_type] = STATE(251),
    [sym_scoped_name] = STATE(266),
    [sym_string_type] = STATE(262),
    [sym_simple_type_spec] = STATE(235),
    [sym_base_type_spec] = STATE(248),
    [sym_any_type] = STATE(251),
    [sym_fixed_pt_type] = STATE(262),
    [sym_template_type_spec] = STATE(235),
    [sym_sequence_type] = STATE(262),
    [sym_map_type] = STATE(262),
    [sym_bitset_dcl] = STATE(235),
    [sym_bitmask_dcl] = STATE(235),
    [sym_annotation_appl] = STATE(203),
    [sym_type_declarator] = STATE(577),
    [sym_enum_dcl] = STATE(235),
    [sym_enum_anno] = STATE(681),
    [sym_union_forward_dcl] = STATE(235),
    [sym_union_def] = STATE(235),
    [sym_object_type] = STATE(251),
    [sym_struct_forward_dcl] = STATE(235),
    [sym_struct_def] = STATE(235),
    [sym_comment] = STATE(33),
    [aux_sym_interface_def_repeat1] = STATE(242),
    [anon_sym_short] = ACTIONS(65),
    [anon_sym_int16] = ACTIONS(65),
    [anon_sym_long] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_longlong] = ACTIONS(69),
    [anon_sym_int64] = ACTIONS(71),
    [sym_unsigned_tiny_int] = ACTIONS(73),
    [sym_boolean_type] = ACTIONS(75),
    [anon_sym_fixed] = ACTIONS(77),
    [sym_octet_type] = ACTIONS(75),
    [sym_signed_tiny_int] = ACTIONS(79),
    [anon_sym_unsignedshort] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(83),
    [anon_sym_unsignedlong] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_unsignedlonglong] = ACTIONS(87),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_longdouble] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_wchar] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
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
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [145] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [290] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_except_dcl_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [435] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [580] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [725] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [870] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1015] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(907), 1,
      anon_sym_longlong,
    ACTIONS(910), 1,
      anon_sym_int64,
    ACTIONS(913), 1,
      sym_unsigned_tiny_int,
    ACTIONS(919), 1,
      anon_sym_fixed,
    ACTIONS(922), 1,
      sym_signed_tiny_int,
    ACTIONS(925), 1,
      anon_sym_unsignedshort,
    ACTIONS(928), 1,
      anon_sym_uint16,
    ACTIONS(934), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(937), 1,
      anon_sym_uint64,
    ACTIONS(943), 1,
      anon_sym_longdouble,
    ACTIONS(949), 1,
      anon_sym_COLON_COLON,
    ACTIONS(955), 1,
      anon_sym_any,
    ACTIONS(958), 1,
      anon_sym_sequence,
    ACTIONS(961), 1,
      anon_sym_map,
    ACTIONS(964), 1,
      anon_sym_RBRACE,
    ACTIONS(966), 1,
      anon_sym_AT,
    ACTIONS(969), 1,
      anon_sym_Object,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(901), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(904), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(931), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(940), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(946), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(952), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(41), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(916), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1158] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1303] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_except_dcl_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1448] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_except_dcl_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(86), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1593] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(131), 1,
      anon_sym_enum,
    ACTIONS(133), 1,
      anon_sym_const,
    ACTIONS(141), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(981), 1,
      anon_sym_fixed,
    ACTIONS(983), 1,
      anon_sym_any,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
    ACTIONS(987), 1,
      anon_sym_ATignore_literal_names,
    STATE(45), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(88), 1,
      sym_annotation_member,
    STATE(93), 1,
      sym_annotation_body,
    STATE(479), 1,
      sym_scoped_name,
    STATE(492), 1,
      sym_annotation_member_type,
    STATE(681), 1,
      sym_enum_anno,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(979), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(705), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(707), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(603), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1737] = 41,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(131), 1,
      anon_sym_enum,
    ACTIONS(133), 1,
      anon_sym_const,
    ACTIONS(141), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(981), 1,
      anon_sym_fixed,
    ACTIONS(983), 1,
      anon_sym_any,
    ACTIONS(987), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(88), 1,
      sym_annotation_member,
    STATE(93), 1,
      sym_annotation_body,
    STATE(479), 1,
      sym_scoped_name,
    STATE(492), 1,
      sym_annotation_member_type,
    STATE(681), 1,
      sym_enum_anno,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(979), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(705), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(707), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(603), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1881] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(997), 1,
      anon_sym_longlong,
    ACTIONS(1000), 1,
      anon_sym_int64,
    ACTIONS(1003), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1009), 1,
      anon_sym_fixed,
    ACTIONS(1012), 1,
      sym_signed_tiny_int,
    ACTIONS(1015), 1,
      anon_sym_unsignedshort,
    ACTIONS(1018), 1,
      anon_sym_uint16,
    ACTIONS(1024), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(1027), 1,
      anon_sym_uint64,
    ACTIONS(1033), 1,
      anon_sym_longdouble,
    ACTIONS(1039), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1045), 1,
      anon_sym_any,
    ACTIONS(1048), 1,
      anon_sym_sequence,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
    ACTIONS(1053), 1,
      anon_sym_enum,
    ACTIONS(1056), 1,
      anon_sym_const,
    ACTIONS(1059), 1,
      anon_sym_typedef,
    ACTIONS(1062), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1065), 1,
      sym_identifier,
    STATE(88), 1,
      sym_annotation_member,
    STATE(93), 1,
      sym_annotation_body,
    STATE(479), 1,
      sym_scoped_name,
    STATE(492), 1,
      sym_annotation_member_type,
    STATE(681), 1,
      sym_enum_anno,
    ACTIONS(991), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(994), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(1006), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(1021), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(1030), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(1036), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(1042), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(47), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(705), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(707), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(603), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2023] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
    ACTIONS(1070), 1,
      anon_sym_COLON,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    ACTIONS(1074), 1,
      anon_sym_supports,
    STATE(48), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(320), 1,
      sym_scoped_name,
    STATE(640), 1,
      sym_type_spec,
    STATE(644), 1,
      sym_value_inheritance_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2165] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      anon_sym_sequence,
    ACTIONS(1080), 1,
      anon_sym_const,
    STATE(49), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(345), 1,
      sym_formal_parameter,
    STATE(735), 1,
      sym_formal_parameter_type,
    STATE(762), 1,
      sym_formal_parameters,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(771), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(1078), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2295] = 38,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_interface_def_repeat1,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(237), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2431] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(1084), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1082), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2500] = 37,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1086), 1,
      anon_sym_GT,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(656), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(1092), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1090), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2702] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(1096), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1094), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2771] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      anon_sym_sequence,
    ACTIONS(1080), 1,
      anon_sym_const,
    STATE(55), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(530), 1,
      sym_formal_parameter,
    STATE(735), 1,
      sym_formal_parameter_type,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(771), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(1078), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2898] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(1100), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1098), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [2967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      sym_comment,
    ACTIONS(1104), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1102), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3036] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(1108), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1106), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3105] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(1112), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1110), 48,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_public,
      anon_sym_private,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [3174] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(1096), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1094), 47,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3242] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(1116), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1114), 47,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(1120), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1118), 47,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3378] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(1124), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1122), 47,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_factory,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_finder,
      anon_sym_native,
      sym_identifier,
  [3446] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(441), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3573] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(65), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(444), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3700] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(343), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3827] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(394), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [3954] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(437), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4081] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(451), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4208] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    STATE(233), 1,
      sym_type_spec,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4335] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(266), 1,
      sym_scoped_name,
    STATE(452), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4462] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(77), 1,
      anon_sym_fixed,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
    STATE(248), 1,
      sym_base_type_spec,
    STATE(320), 1,
      sym_scoped_name,
    STATE(777), 1,
      sym_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(291), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(262), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(251), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [4589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(1128), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1126), 45,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [4655] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(1096), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1094), 45,
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
      anon_sym_abstract,
      anon_sym_void,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_valuetype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_ATignore_literal_names,
      anon_sym_typeid,
      anon_sym_import,
      anon_sym_Object,
      anon_sym_oneway,
      sym_value_base_type,
      anon_sym_native,
      sym_identifier,
  [4721] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(981), 1,
      anon_sym_fixed,
    STATE(75), 1,
      sym_comment,
    STATE(485), 1,
      sym_scoped_name,
    STATE(593), 1,
      sym_const_type,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(979), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(603), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [4826] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(93), 1,
      anon_sym_longdouble,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(981), 1,
      anon_sym_fixed,
    STATE(76), 1,
      sym_comment,
    STATE(485), 1,
      sym_scoped_name,
    STATE(673), 1,
      sym_const_type,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(91), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(99), 2,
      anon_sym_string,
      anon_sym_wstring,
    ACTIONS(979), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(603), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [4931] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(1132), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1130), 34,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [4986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(1136), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1134), 34,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5041] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1142), 1,
      anon_sym_AT,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(79), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1140), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1138), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5093] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1149), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_comment,
    ACTIONS(1147), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1145), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(1153), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1151), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5189] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(1157), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1155), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(1161), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1159), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(1165), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1163), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5330] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(1169), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1167), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(1173), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1171), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5424] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(1177), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1175), 26,
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
  [5471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(1181), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1179), 26,
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
  [5518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(1185), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1183), 26,
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
  [5565] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(1189), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1187), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(1193), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1191), 26,
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
  [5659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(1197), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1195), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5706] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(1201), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1199), 26,
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
  [5753] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(1205), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1203), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(1209), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1207), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [5845] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_longlong,
    ACTIONS(71), 1,
      anon_sym_int64,
    ACTIONS(73), 1,
      sym_unsigned_tiny_int,
    ACTIONS(79), 1,
      sym_signed_tiny_int,
    ACTIONS(81), 1,
      anon_sym_unsignedshort,
    ACTIONS(83), 1,
      anon_sym_uint16,
    ACTIONS(87), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(89), 1,
      anon_sym_uint64,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1211), 1,
      sym_boolean_type,
    STATE(96), 1,
      sym_comment,
    STATE(442), 1,
      sym_scoped_name,
    STATE(654), 1,
      sym_switch_type_spec,
    ACTIONS(65), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(67), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(85), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(95), 2,
      anon_sym_char,
      anon_sym_wchar,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(655), 2,
      sym_integer_type,
      sym_char_type,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
  [5928] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(1163), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1165), 27,
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
      anon_sym_L,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
      anon_sym_manages,
      anon_sym_primarykey,
  [5973] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(1167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1169), 27,
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
      anon_sym_L,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
      anon_sym_manages,
      anon_sym_primarykey,
  [6018] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(1215), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1213), 26,
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
      anon_sym_Object,
      sym_value_base_type,
      sym_identifier,
  [6063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(1155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1157), 27,
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
      anon_sym_L,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_SEMI,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_supports,
      anon_sym_RBRACK,
      anon_sym_manages,
      anon_sym_primarykey,
  [6108] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(1219), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1217), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(1223), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1221), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(1227), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1225), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(1231), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1229), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6280] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(1235), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1233), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(1239), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1237), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(1243), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1241), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6409] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(1231), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1229), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6452] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(1247), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1245), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(1251), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1249), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6538] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(1219), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1217), 27,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_alias,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6581] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(1227), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1225), 25,
      ts_builtin_sym_end,
      anon_sym_exception,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
  [6624] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(113), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(317), 1,
      sym_annotation_appl_param,
    STATE(549), 1,
      sym_annotation_appl_params,
    STATE(763), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6710] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(114), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(317), 1,
      sym_annotation_appl_param,
    STATE(763), 1,
      sym_const_expr,
    STATE(779), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(1257), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1255), 26,
      anon_sym_exception,
      anon_sym_RBRACE,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitset,
      anon_sym_bitmask,
      anon_sym_ATannotation,
      anon_sym_module,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_custom,
      anon_sym_typedef,
      anon_sym_typeid,
      anon_sym_typeprefix,
      anon_sym_import,
      anon_sym_component,
      anon_sym_home,
      anon_sym_porttype,
      anon_sym_connector,
      anon_sym_native,
      anon_sym_POUNDdefine,
  [6838] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(116), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(317), 1,
      sym_annotation_appl_param,
    STATE(763), 1,
      sym_const_expr,
    STATE(770), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6924] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(317), 1,
      sym_annotation_appl_param,
    STATE(763), 1,
      sym_const_expr,
    STATE(776), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7010] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(118), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(718), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7093] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(119), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(505), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7176] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(120), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(541), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7259] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(780), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7342] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(122), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(679), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7425] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(650), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7508] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(124), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(316), 1,
      sym_const_expr,
    STATE(641), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7591] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(125), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(556), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7671] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(126), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(520), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7751] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(127), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(648), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7831] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(128), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(596), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7911] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_long,
    ACTIONS(85), 1,
      anon_sym_unsignedlong,
    ACTIONS(1261), 1,
      anon_sym_int32,
    ACTIONS(1263), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1267), 1,
      sym_signed_tiny_int,
    ACTIONS(1269), 1,
      anon_sym_uint32,
    STATE(129), 1,
      sym_comment,
    STATE(664), 1,
      sym_integer_type,
    STATE(665), 1,
      sym_destination_type,
    ACTIONS(69), 2,
      anon_sym_longlong,
      anon_sym_int64,
    ACTIONS(81), 2,
      anon_sym_unsignedshort,
      anon_sym_uint16,
    ACTIONS(87), 2,
      anon_sym_unsignedlonglong,
      anon_sym_uint64,
    ACTIONS(1259), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(1265), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(224), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(228), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(231), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
  [7979] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(130), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(607), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8059] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(131), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(692), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8139] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(182), 1,
      sym_xor_expr,
    STATE(189), 1,
      sym_or_expr,
    STATE(709), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8219] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(133), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    STATE(179), 1,
      sym_xor_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8293] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(134), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    STATE(177), 1,
      sym_and_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8364] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
    ACTIONS(1273), 1,
      anon_sym_readonly,
    ACTIONS(1275), 1,
      anon_sym_attribute,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1281), 1,
      anon_sym_emits,
    ACTIONS(1283), 1,
      anon_sym_publishes,
    ACTIONS(1285), 1,
      anon_sym_consumes,
    STATE(135), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_component_body_repeat1,
    STATE(171), 1,
      sym_component_export,
    STATE(657), 1,
      sym_component_body,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(652), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8424] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(136), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(169), 1,
      sym_shift_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8492] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_readonly,
    ACTIONS(1275), 1,
      anon_sym_attribute,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1281), 1,
      anon_sym_emits,
    ACTIONS(1283), 1,
      anon_sym_publishes,
    ACTIONS(1285), 1,
      anon_sym_consumes,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_component_body_repeat1,
    STATE(171), 1,
      sym_component_export,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(652), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8549] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(138), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(145), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    STATE(167), 1,
      sym_add_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8614] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1291), 1,
      anon_sym_RBRACE,
    ACTIONS(1293), 1,
      anon_sym_readonly,
    ACTIONS(1296), 1,
      anon_sym_attribute,
    ACTIONS(1299), 1,
      anon_sym_provides,
    ACTIONS(1302), 1,
      anon_sym_uses,
    ACTIONS(1305), 1,
      anon_sym_emits,
    ACTIONS(1308), 1,
      anon_sym_publishes,
    ACTIONS(1311), 1,
      anon_sym_consumes,
    STATE(171), 1,
      sym_component_export,
    ACTIONS(1314), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(139), 2,
      sym_comment,
      aux_sym_component_body_repeat1,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(652), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8669] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(140), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(151), 1,
      sym_mult_expr,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym_unary_expr,
    STATE(164), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8731] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      anon_sym_TILDE,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(141), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(147), 1,
      sym_unary_expr,
    STATE(152), 1,
      sym_literal,
    STATE(164), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8790] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(142), 1,
      sym_comment,
    ACTIONS(1319), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1321), 13,
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
  [8823] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(143), 1,
      sym_comment,
    ACTIONS(1323), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1325), 13,
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
  [8856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(1327), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1329), 14,
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
  [8886] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1331), 1,
      anon_sym_GT,
    ACTIONS(1337), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym_comment,
    ACTIONS(1335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1333), 12,
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
  [8920] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1339), 1,
      anon_sym_RBRACE,
    ACTIONS(1341), 1,
      anon_sym_readonly,
    ACTIONS(1344), 1,
      anon_sym_attribute,
    ACTIONS(1347), 1,
      anon_sym_provides,
    ACTIONS(1350), 1,
      anon_sym_uses,
    STATE(183), 1,
      sym_port_ref,
    STATE(186), 1,
      sym_connector_export,
    STATE(683), 1,
      sym_attr_dcl,
    ACTIONS(1353), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(146), 2,
      sym_comment,
      aux_sym_connector_dcl_repeat1,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [8968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
      sym_comment,
    ACTIONS(1356), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1358), 14,
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
  [8998] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(148), 1,
      sym_comment,
    ACTIONS(1360), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1362), 14,
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
  [9028] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_comment,
    ACTIONS(1364), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1366), 14,
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
  [9058] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(1368), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1370), 14,
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
  [9088] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1337), 1,
      anon_sym_SLASH,
    ACTIONS(1372), 1,
      anon_sym_GT,
    STATE(151), 1,
      sym_comment,
    ACTIONS(1335), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1374), 12,
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
  [9122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(1323), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1325), 14,
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
  [9152] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(153), 1,
      sym_comment,
    ACTIONS(1376), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1378), 14,
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
  [9182] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(1380), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1382), 14,
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
  [9212] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(1384), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1386), 14,
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
  [9242] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_readonly,
    ACTIONS(1275), 1,
      anon_sym_attribute,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1388), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(156), 1,
      sym_comment,
    STATE(183), 1,
      sym_port_ref,
    STATE(186), 1,
      sym_connector_export,
    STATE(683), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9292] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1390), 1,
      anon_sym_RBRACE,
    ACTIONS(1392), 1,
      anon_sym_readonly,
    ACTIONS(1395), 1,
      anon_sym_attribute,
    ACTIONS(1398), 1,
      anon_sym_provides,
    ACTIONS(1401), 1,
      anon_sym_uses,
    STATE(184), 1,
      sym_port_export,
    STATE(192), 1,
      sym_port_ref,
    STATE(630), 1,
      sym_attr_dcl,
    ACTIONS(1404), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(157), 2,
      sym_comment,
      aux_sym_port_body_repeat1,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9340] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(1407), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1409), 14,
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
  [9370] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_readonly,
    ACTIONS(1275), 1,
      anon_sym_attribute,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1411), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_port_body_repeat1,
    STATE(184), 1,
      sym_port_export,
    STATE(192), 1,
      sym_port_ref,
    STATE(630), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9420] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(1413), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1415), 14,
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
  [9450] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_readonly,
    ACTIONS(1275), 1,
      anon_sym_attribute,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1417), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym_port_body_repeat1,
    STATE(161), 1,
      sym_comment,
    STATE(184), 1,
      sym_port_export,
    STATE(192), 1,
      sym_port_ref,
    STATE(630), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(162), 1,
      sym_comment,
    ACTIONS(1319), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1321), 14,
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
  [9530] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_readonly,
    ACTIONS(1275), 1,
      anon_sym_attribute,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    STATE(156), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(163), 1,
      sym_comment,
    STATE(183), 1,
      sym_port_ref,
    STATE(186), 1,
      sym_connector_export,
    STATE(683), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(638), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9577] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(869), 1,
      anon_sym_L,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_SQUOTE,
    ACTIONS(877), 1,
      sym_number_literal,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1419), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_scoped_name,
    STATE(162), 1,
      sym_literal,
    STATE(164), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(155), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9623] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1163), 1,
      anon_sym_SLASH,
    ACTIONS(1421), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_comment,
    ACTIONS(1165), 11,
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
  [9652] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1423), 1,
      anon_sym_GT,
    STATE(166), 1,
      sym_comment,
    ACTIONS(1427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1425), 10,
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
  [9681] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1429), 1,
      anon_sym_GT,
    STATE(167), 1,
      sym_comment,
    ACTIONS(1427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1431), 10,
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
  [9710] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1323), 1,
      anon_sym_SLASH,
    ACTIONS(1433), 1,
      anon_sym_GT,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      sym_comment,
    ACTIONS(1325), 9,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9743] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1437), 1,
      anon_sym_GT,
    STATE(169), 1,
      sym_comment,
    ACTIONS(1441), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1439), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9770] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1443), 1,
      anon_sym_GT,
    STATE(170), 1,
      sym_comment,
    ACTIONS(1441), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1445), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(171), 1,
      sym_comment,
    ACTIONS(1447), 10,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_emits,
      anon_sym_publishes,
      anon_sym_consumes,
      anon_sym_port,
      anon_sym_mirrorport,
  [9819] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1449), 1,
      anon_sym_bitmask,
    ACTIONS(1451), 1,
      anon_sym_struct,
    STATE(172), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_interface_def_repeat1,
    STATE(203), 1,
      sym_annotation_appl,
    STATE(547), 1,
      sym_interface_kind,
    STATE(550), 1,
      sym_interface_header,
    ACTIONS(13), 2,
      anon_sym_local,
      anon_sym_abstract,
  [9857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(173), 1,
      sym_comment,
    ACTIONS(1453), 10,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_emits,
      anon_sym_publishes,
      anon_sym_consumes,
      anon_sym_port,
      anon_sym_mirrorport,
  [9879] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1455), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym_port_ref,
    STATE(174), 1,
      sym_comment,
    STATE(754), 1,
      sym_port_body,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(684), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      sym_comment,
    ACTIONS(1457), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1459), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [9936] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1463), 1,
      anon_sym_DOLLAR,
    STATE(176), 1,
      sym_comment,
    ACTIONS(1461), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9959] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1463), 1,
      anon_sym_DOLLAR,
    STATE(177), 1,
      sym_comment,
    ACTIONS(1465), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9982] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_comment,
    ACTIONS(1147), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10006] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1471), 1,
      anon_sym_CARET,
    STATE(179), 1,
      sym_comment,
    ACTIONS(1469), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10028] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    ACTIONS(1475), 1,
      anon_sym_SEMI,
    ACTIONS(1477), 1,
      anon_sym_getraises,
    ACTIONS(1479), 1,
      anon_sym_setraises,
    STATE(180), 1,
      sym_comment,
    STATE(350), 1,
      sym_get_excep_expr,
    STATE(354), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(566), 1,
      sym_attr_raises_expr,
    STATE(568), 1,
      sym_set_excep_expr,
  [10062] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1481), 1,
      anon_sym_AT,
    STATE(203), 1,
      sym_annotation_appl,
    STATE(181), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1140), 5,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_struct,
  [10086] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1471), 1,
      anon_sym_CARET,
    STATE(182), 1,
      sym_comment,
    ACTIONS(1484), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(183), 1,
      sym_comment,
    ACTIONS(1486), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(184), 1,
      sym_comment,
    ACTIONS(1488), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      sym_comment,
    ACTIONS(1490), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10165] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      sym_comment,
    ACTIONS(1492), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(187), 1,
      sym_comment,
    ACTIONS(1494), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(188), 1,
      sym_comment,
    ACTIONS(1496), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [10222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1500), 1,
      anon_sym_PIPE,
    STATE(189), 1,
      sym_comment,
    ACTIONS(1498), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10243] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    ACTIONS(1504), 1,
      anon_sym_in,
    STATE(71), 1,
      sym_param_attribute,
    STATE(190), 1,
      sym_comment,
    STATE(362), 1,
      sym_param_dcl,
    STATE(575), 1,
      sym_parameter_dcls,
    ACTIONS(1506), 2,
      anon_sym_out,
      anon_sym_inout,
  [10272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(191), 1,
      sym_comment,
    ACTIONS(1508), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(192), 1,
      sym_comment,
    ACTIONS(1510), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10310] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1512), 1,
      anon_sym_L,
    STATE(193), 1,
      sym_comment,
    STATE(503), 1,
      sym_scoped_name,
    STATE(558), 1,
      sym_imported_scope,
    STATE(562), 1,
      sym_string_literal,
  [10341] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1516), 1,
      anon_sym_LBRACK,
    STATE(297), 1,
      sym_fixed_array_size,
    STATE(194), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1514), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10363] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1519), 1,
      anon_sym_RBRACE,
    ACTIONS(1521), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1523), 1,
      sym_identifier,
    STATE(195), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_enumerator_repeat1,
    STATE(383), 1,
      sym_enumerator,
    STATE(497), 1,
      sym_enum_modifier,
  [10391] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1527), 1,
      anon_sym_LBRACK,
    STATE(194), 1,
      aux_sym_array_declarator_repeat1,
    STATE(196), 1,
      sym_comment,
    STATE(297), 1,
      sym_fixed_array_size,
    ACTIONS(1525), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(197), 1,
      sym_comment,
    ACTIONS(1157), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10433] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1529), 1,
      anon_sym_RBRACE,
    ACTIONS(1531), 1,
      anon_sym_default,
    ACTIONS(1533), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(198), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym_union_def_repeat1,
    STATE(421), 1,
      sym_case,
  [10461] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1531), 1,
      anon_sym_default,
    ACTIONS(1533), 1,
      anon_sym_case,
    ACTIONS(1535), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_case_label,
    STATE(199), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_union_def_repeat1,
    STATE(421), 1,
      sym_case,
  [10489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      sym_comment,
    ACTIONS(1165), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10507] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1537), 1,
      anon_sym_RBRACE,
    ACTIONS(1539), 1,
      anon_sym_AT,
    ACTIONS(1541), 1,
      sym_identifier,
    STATE(201), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_interface_def_repeat1,
    STATE(392), 1,
      sym_bit_value,
    STATE(534), 1,
      sym_annotation_appl,
  [10535] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1521), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1523), 1,
      sym_identifier,
    ACTIONS(1543), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_enumerator_repeat1,
    STATE(365), 1,
      sym_enumerator,
    STATE(497), 1,
      sym_enum_modifier,
  [10563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(203), 1,
      sym_comment,
    ACTIONS(1205), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(204), 1,
      sym_comment,
    ACTIONS(1169), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10599] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1545), 1,
      anon_sym_RBRACE,
    ACTIONS(1547), 1,
      anon_sym_default,
    ACTIONS(1550), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(421), 1,
      sym_case,
    STATE(205), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [10625] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_AT,
    ACTIONS(1541), 1,
      sym_identifier,
    ACTIONS(1553), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_interface_def_repeat1,
    STATE(404), 1,
      sym_bit_value,
    STATE(534), 1,
      sym_annotation_appl,
  [10653] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1527), 1,
      anon_sym_LBRACK,
    STATE(196), 1,
      aux_sym_array_declarator_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(297), 1,
      sym_fixed_array_size,
    ACTIONS(1496), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10677] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1555), 1,
      anon_sym_LBRACE,
    ACTIONS(1557), 1,
      anon_sym_COLON,
    ACTIONS(1559), 1,
      anon_sym_SEMI,
    ACTIONS(1561), 1,
      anon_sym_supports,
    STATE(208), 1,
      sym_comment,
    STATE(359), 1,
      sym_component_inheritance_spec,
    STATE(582), 1,
      sym_supported_interface_spec,
  [10705] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1563), 1,
      anon_sym_Object,
    ACTIONS(1565), 1,
      anon_sym_multiple,
    STATE(209), 1,
      sym_comment,
    STATE(507), 1,
      sym_scoped_name,
    STATE(728), 1,
      sym_interface_type,
  [10733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(210), 1,
      sym_comment,
    ACTIONS(1209), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10751] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_AT,
    ACTIONS(1541), 1,
      sym_identifier,
    STATE(211), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_interface_def_repeat1,
    STATE(482), 1,
      sym_bit_value,
    STATE(534), 1,
      sym_annotation_appl,
  [10776] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1567), 1,
      anon_sym_RBRACE,
    ACTIONS(1569), 1,
      anon_sym_bitfield,
    STATE(386), 1,
      sym_bitfield_spec,
    STATE(464), 1,
      sym_bitfield,
    STATE(212), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [10799] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1572), 1,
      anon_sym_LBRACE,
    ACTIONS(1574), 1,
      anon_sym_COLON,
    ACTIONS(1576), 1,
      anon_sym_SEMI,
    ACTIONS(1578), 1,
      anon_sym_supports,
    STATE(213), 1,
      sym_comment,
    STATE(689), 1,
      sym_value_inheritance_spec,
  [10824] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1580), 1,
      anon_sym_RBRACE,
    ACTIONS(1582), 1,
      anon_sym_bitfield,
    STATE(214), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(386), 1,
      sym_bitfield_spec,
    STATE(464), 1,
      sym_bitfield,
  [10849] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    ACTIONS(1584), 1,
      anon_sym_SEMI,
    ACTIONS(1586), 1,
      anon_sym_raises,
    STATE(215), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(626), 1,
      sym_raises_expr,
  [10874] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1561), 1,
      anon_sym_supports,
    ACTIONS(1588), 1,
      anon_sym_COLON,
    ACTIONS(1590), 1,
      anon_sym_manages,
    STATE(216), 1,
      sym_comment,
    STATE(370), 1,
      sym_home_inheritance_spec,
    STATE(585), 1,
      sym_supported_interface_spec,
  [10899] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(217), 1,
      sym_comment,
    ACTIONS(1592), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(218), 1,
      sym_comment,
    ACTIONS(1594), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10933] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_bitfield,
    ACTIONS(1596), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(219), 1,
      sym_comment,
    STATE(386), 1,
      sym_bitfield_spec,
    STATE(464), 1,
      sym_bitfield,
  [10958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1598), 1,
      anon_sym_LT,
    STATE(220), 1,
      sym_comment,
    ACTIONS(1600), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [10977] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(221), 1,
      sym_comment,
    ACTIONS(1602), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [10996] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1606), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(223), 1,
      sym_comment,
    ACTIONS(1608), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(224), 1,
      sym_comment,
    ACTIONS(1610), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11053] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1574), 1,
      anon_sym_COLON,
    ACTIONS(1578), 1,
      anon_sym_supports,
    ACTIONS(1612), 1,
      anon_sym_LBRACE,
    ACTIONS(1614), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      sym_comment,
    STATE(557), 1,
      sym_value_inheritance_spec,
  [11078] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1563), 1,
      anon_sym_Object,
    STATE(226), 1,
      sym_comment,
    STATE(507), 1,
      sym_scoped_name,
    STATE(729), 1,
      sym_interface_type,
  [11103] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1521), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1523), 1,
      sym_identifier,
    STATE(227), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_enumerator_repeat1,
    STATE(497), 1,
      sym_enum_modifier,
    STATE(538), 1,
      sym_enumerator,
  [11128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(228), 1,
      sym_comment,
    ACTIONS(1616), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11145] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1563), 1,
      anon_sym_Object,
    STATE(229), 1,
      sym_comment,
    STATE(507), 1,
      sym_scoped_name,
    STATE(605), 1,
      sym_interface_type,
  [11170] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_AT,
    ACTIONS(1541), 1,
      sym_identifier,
    STATE(230), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_interface_def_repeat1,
    STATE(379), 1,
      sym_bit_value,
    STATE(534), 1,
      sym_annotation_appl,
  [11195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(231), 1,
      sym_comment,
    ACTIONS(1618), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11212] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(232), 1,
      sym_comment,
    ACTIONS(1620), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11229] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(233), 1,
      sym_comment,
    STATE(261), 1,
      sym_declarator,
    STATE(611), 1,
      sym_declarators,
    STATE(382), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(234), 1,
      sym_comment,
    ACTIONS(1624), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11269] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(235), 1,
      sym_comment,
    STATE(348), 1,
      sym_any_declarator,
    STATE(563), 1,
      sym_any_declarators,
    STATE(519), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11292] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_COMMA,
    STATE(236), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1602), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11311] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(237), 1,
      sym_comment,
    STATE(261), 1,
      sym_declarator,
    STATE(361), 1,
      sym_declarators,
    STATE(382), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11334] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(238), 1,
      sym_comment,
    STATE(261), 1,
      sym_declarator,
    STATE(384), 1,
      sym_declarators,
    STATE(382), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(239), 1,
      sym_comment,
    ACTIONS(1629), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
      sym_comment,
    ACTIONS(1631), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11391] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_AT,
    ACTIONS(1541), 1,
      sym_identifier,
    STATE(241), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_interface_def_repeat1,
    STATE(404), 1,
      sym_bit_value,
    STATE(534), 1,
      sym_annotation_appl,
  [11416] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1449), 1,
      anon_sym_bitmask,
    ACTIONS(1451), 1,
      anon_sym_struct,
    STATE(181), 1,
      aux_sym_interface_def_repeat1,
    STATE(203), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_comment,
  [11441] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1633), 1,
      anon_sym_truncatable,
    STATE(243), 1,
      sym_comment,
    STATE(288), 1,
      sym_scoped_name,
    STATE(289), 1,
      sym_value_name,
  [11466] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_bitfield,
    ACTIONS(1635), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(244), 1,
      sym_comment,
    STATE(386), 1,
      sym_bitfield_spec,
    STATE(464), 1,
      sym_bitfield,
  [11491] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1504), 1,
      anon_sym_in,
    STATE(71), 1,
      sym_param_attribute,
    STATE(245), 1,
      sym_comment,
    STATE(456), 1,
      sym_param_dcl,
    ACTIONS(1506), 2,
      anon_sym_out,
      anon_sym_inout,
  [11514] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_AT,
    ACTIONS(1541), 1,
      sym_identifier,
    STATE(211), 1,
      aux_sym_interface_def_repeat1,
    STATE(246), 1,
      sym_comment,
    STATE(510), 1,
      sym_bit_value,
    STATE(534), 1,
      sym_annotation_appl,
  [11539] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_bitfield,
    ACTIONS(1637), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(247), 1,
      sym_comment,
    STATE(386), 1,
      sym_bitfield_spec,
    STATE(464), 1,
      sym_bitfield,
  [11564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(248), 1,
      sym_comment,
    ACTIONS(1435), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11580] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    STATE(249), 1,
      sym_comment,
    STATE(455), 1,
      sym_raises_expr,
    ACTIONS(1639), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [11600] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1641), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1643), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [11620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(251), 1,
      sym_comment,
    ACTIONS(1645), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11636] = 7,
    ACTIONS(1647), 1,
      anon_sym_AT,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1651), 1,
      aux_sym_comment_token1,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      sym_comment,
    STATE(290), 1,
      aux_sym_interface_def_repeat1,
    STATE(522), 1,
      sym_annotation_appl,
  [11658] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1655), 1,
      anon_sym_L,
    STATE(253), 1,
      sym_comment,
    STATE(565), 1,
      sym_string_literal,
  [11680] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1655), 1,
      anon_sym_L,
    STATE(254), 1,
      sym_comment,
    STATE(567), 1,
      sym_string_literal,
  [11702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(255), 1,
      sym_comment,
    ACTIONS(1657), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(256), 1,
      sym_comment,
    ACTIONS(1659), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11734] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(257), 1,
      sym_comment,
    STATE(334), 1,
      sym_scoped_name,
    STATE(425), 1,
      sym_interface_name,
  [11756] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_comment,
    STATE(372), 1,
      aux_sym_raises_expr_repeat1,
  [11778] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(259), 1,
      sym_comment,
    STATE(334), 1,
      sym_scoped_name,
    STATE(748), 1,
      sym_interface_name,
  [11800] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(260), 1,
      sym_comment,
    STATE(725), 1,
      sym_declarator,
    STATE(382), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11820] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1641), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_declarators_repeat1,
    STATE(261), 1,
      sym_comment,
    ACTIONS(1665), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [11840] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(262), 1,
      sym_comment,
    ACTIONS(1667), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11856] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1574), 1,
      anon_sym_COLON,
    ACTIONS(1578), 1,
      anon_sym_supports,
    ACTIONS(1669), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_comment,
    STATE(543), 1,
      sym_value_inheritance_spec,
  [11878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(264), 1,
      sym_comment,
    ACTIONS(1671), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11894] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_comment,
    STATE(358), 1,
      aux_sym_raises_expr_repeat1,
  [11916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    STATE(266), 1,
      sym_comment,
    ACTIONS(1435), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [11934] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    STATE(267), 1,
      sym_comment,
    STATE(454), 1,
      sym_raises_expr,
    ACTIONS(1677), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [11954] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
    ACTIONS(1681), 1,
      anon_sym_in,
    STATE(268), 1,
      sym_comment,
    STATE(406), 1,
      sym_in_param_dcl,
    STATE(636), 1,
      sym_in_parameter_dcls,
  [11976] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1683), 1,
      anon_sym_LBRACE,
    ACTIONS(1685), 1,
      anon_sym_COLON,
    STATE(269), 1,
      sym_comment,
    ACTIONS(1687), 2,
      anon_sym_SEMI,
      sym_identifier,
  [11996] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(270), 1,
      sym_comment,
    ACTIONS(1689), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(271), 1,
      sym_comment,
    ACTIONS(1691), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12028] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_COMMA,
    ACTIONS(1695), 1,
      anon_sym_LBRACE,
    ACTIONS(1697), 1,
      anon_sym_supports,
    STATE(272), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12050] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(273), 1,
      sym_comment,
    STATE(288), 1,
      sym_scoped_name,
    STATE(323), 1,
      sym_value_name,
  [12072] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(274), 1,
      sym_comment,
    STATE(319), 1,
      sym_interface_name,
    STATE(334), 1,
      sym_scoped_name,
  [12094] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_COMMA,
    ACTIONS(1695), 1,
      anon_sym_LBRACE,
    ACTIONS(1697), 1,
      anon_sym_supports,
    STATE(275), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12116] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1699), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1702), 1,
      sym_identifier,
    STATE(497), 1,
      sym_enum_modifier,
    STATE(276), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [12136] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1574), 1,
      anon_sym_COLON,
    ACTIONS(1578), 1,
      anon_sym_supports,
    ACTIONS(1704), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_comment,
    STATE(688), 1,
      sym_value_inheritance_spec,
  [12158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(278), 1,
      sym_comment,
    ACTIONS(1706), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12174] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(279), 1,
      sym_comment,
    STATE(334), 1,
      sym_scoped_name,
    STATE(390), 1,
      sym_interface_name,
  [12196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(280), 1,
      sym_comment,
    ACTIONS(1708), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12212] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_COMMA,
    ACTIONS(1710), 1,
      anon_sym_LBRACE,
    ACTIONS(1712), 1,
      anon_sym_supports,
    STATE(281), 1,
      sym_comment,
    STATE(282), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1714), 1,
      anon_sym_COMMA,
    ACTIONS(1717), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
    STATE(282), 2,
      sym_comment,
      aux_sym_value_inheritance_spec_repeat1,
  [12252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(283), 1,
      sym_comment,
    ACTIONS(1719), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12268] = 6,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1721), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1723), 1,
      anon_sym_LPAREN,
    STATE(284), 1,
      sym_comment,
    ACTIONS(1145), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12288] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_raises_expr_repeat1,
    STATE(285), 1,
      sym_comment,
    ACTIONS(1725), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12308] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1727), 1,
      anon_sym_LBRACE,
    ACTIONS(1729), 1,
      anon_sym_primarykey,
    STATE(286), 1,
      sym_comment,
    STATE(555), 1,
      sym_primary_key_spec,
  [12330] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(272), 1,
      sym_value_name,
    STATE(287), 1,
      sym_comment,
    STATE(288), 1,
      sym_scoped_name,
  [12352] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(288), 1,
      sym_comment,
    ACTIONS(1731), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [12370] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_COMMA,
    ACTIONS(1733), 1,
      anon_sym_LBRACE,
    ACTIONS(1735), 1,
      anon_sym_supports,
    STATE(275), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(289), 1,
      sym_comment,
  [12392] = 6,
    ACTIONS(1138), 1,
      aux_sym_comment_token1,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1737), 1,
      anon_sym_AT,
    STATE(522), 1,
      sym_annotation_appl,
    STATE(290), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(291), 1,
      sym_comment,
    ACTIONS(1740), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12428] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1521), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1742), 1,
      sym_identifier,
    STATE(276), 1,
      aux_sym_enumerator_repeat1,
    STATE(292), 1,
      sym_comment,
    STATE(497), 1,
      sym_enum_modifier,
  [12450] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(293), 1,
      sym_comment,
    ACTIONS(1744), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(294), 1,
      sym_comment,
    ACTIONS(1746), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(295), 1,
      sym_comment,
    ACTIONS(1748), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12498] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1750), 1,
      anon_sym_LBRACE,
    ACTIONS(1752), 1,
      anon_sym_COLON,
    ACTIONS(1754), 1,
      anon_sym_SEMI,
    STATE(296), 1,
      sym_comment,
    STATE(591), 1,
      sym_interface_inheritance_spec,
  [12520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_comment,
    ACTIONS(1756), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12536] = 7,
    ACTIONS(1647), 1,
      anon_sym_AT,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1758), 1,
      aux_sym_comment_token2,
    STATE(252), 1,
      aux_sym_interface_def_repeat1,
    STATE(298), 1,
      sym_comment,
    STATE(522), 1,
      sym_annotation_appl,
  [12558] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(299), 1,
      sym_comment,
    STATE(457), 1,
      sym_any_declarator,
    STATE(519), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12578] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(300), 1,
      sym_comment,
    STATE(334), 1,
      sym_scoped_name,
    STATE(523), 1,
      sym_interface_name,
  [12600] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1655), 1,
      anon_sym_L,
    ACTIONS(1760), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_comment,
    STATE(360), 1,
      sym_string_literal,
  [12622] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      anon_sym_primarykey,
    ACTIONS(1762), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym_comment,
    STATE(634), 1,
      sym_primary_key_spec,
  [12644] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1764), 1,
      anon_sym_RPAREN,
    ACTIONS(1766), 1,
      anon_sym_in,
    STATE(303), 1,
      sym_comment,
    STATE(371), 1,
      sym_init_param_dcl,
    STATE(581), 1,
      sym_init_param_dcls,
  [12666] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(304), 1,
      sym_comment,
    STATE(334), 1,
      sym_scoped_name,
    STATE(341), 1,
      sym_interface_name,
  [12688] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(305), 1,
      sym_comment,
    ACTIONS(1163), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12704] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(306), 1,
      sym_comment,
    ACTIONS(1155), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12720] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1768), 1,
      anon_sym_RPAREN,
    ACTIONS(1770), 1,
      anon_sym_in,
    STATE(307), 1,
      sym_comment,
    STATE(378), 1,
      sym_factory_param_dcl,
    STATE(587), 1,
      sym_factory_param_dcls,
  [12742] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(308), 1,
      sym_comment,
    ACTIONS(1167), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12758] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1766), 1,
      anon_sym_in,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_comment,
    STATE(371), 1,
      sym_init_param_dcl,
    STATE(590), 1,
      sym_init_param_dcls,
  [12780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1774), 1,
      anon_sym_COMMA,
    ACTIONS(1777), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(310), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [12798] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1622), 1,
      sym_identifier,
    STATE(311), 1,
      sym_comment,
    STATE(381), 1,
      sym_declarator,
    STATE(382), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12818] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      anon_sym_primarykey,
    ACTIONS(1779), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym_comment,
    STATE(624), 1,
      sym_primary_key_spec,
  [12840] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1781), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym_comment,
    ACTIONS(1147), 2,
      anon_sym_AT,
      sym_identifier,
  [12860] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      sym_identifier,
    ACTIONS(1783), 1,
      anon_sym_AT,
    STATE(534), 1,
      sym_annotation_appl,
    STATE(314), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12880] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    ACTIONS(1786), 1,
      anon_sym_SEMI,
    STATE(315), 1,
      sym_comment,
    STATE(658), 1,
      sym_raises_expr,
  [12899] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1788), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12914] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1790), 1,
      anon_sym_COMMA,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_comment,
    STATE(424), 1,
      aux_sym_annotation_appl_params_repeat1,
  [12933] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1794), 1,
      anon_sym_COMMA,
    ACTIONS(1797), 1,
      anon_sym_RBRACE,
    STATE(318), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [12950] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1710), 1,
      anon_sym_LBRACE,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      sym_comment,
    STATE(393), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [12969] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1435), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12986] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1801), 1,
      sym_identifier,
    STATE(313), 1,
      sym_scoped_name,
    STATE(321), 1,
      sym_comment,
  [13005] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1803), 1,
      anon_sym_SEMI,
    ACTIONS(1805), 1,
      anon_sym_context,
    STATE(322), 1,
      sym_comment,
    STATE(739), 1,
      sym_context_expr,
  [13024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1717), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13039] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1807), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1809), 1,
      sym_identifier,
    STATE(80), 1,
      sym_scoped_name,
    STATE(324), 1,
      sym_comment,
  [13058] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1811), 1,
      anon_sym_GT,
    ACTIONS(1813), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      sym_comment,
    STATE(374), 1,
      aux_sym_actual_parameters_repeat1,
  [13077] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1805), 1,
      anon_sym_context,
    ACTIONS(1815), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      sym_comment,
    STATE(739), 1,
      sym_context_expr,
  [13096] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1817), 1,
      anon_sym_COMMA,
    ACTIONS(1819), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      sym_comment,
    STATE(407), 1,
      aux_sym_any_declarators_repeat1,
  [13115] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1823), 1,
      sym_identifier,
    STATE(284), 1,
      sym_scoped_name,
    STATE(328), 1,
      sym_comment,
  [13134] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(329), 1,
      sym_comment,
    STATE(467), 1,
      sym_scoped_name,
  [13153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(330), 1,
      sym_comment,
    ACTIONS(1825), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1827), 1,
      anon_sym_interface,
    ACTIONS(1829), 1,
      anon_sym_valuetype,
    ACTIONS(1831), 1,
      anon_sym_eventtype,
    STATE(331), 1,
      sym_comment,
  [13189] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_GT,
    ACTIONS(1835), 1,
      anon_sym_COMMA,
    STATE(332), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [13206] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1838), 2,
      anon_sym_supports,
      anon_sym_manages,
  [13223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1840), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13240] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(286), 1,
      sym_scoped_name,
    STATE(335), 1,
      sym_comment,
  [13259] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(178), 1,
      sym_scoped_name,
    STATE(336), 1,
      sym_comment,
  [13278] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1842), 1,
      sym_identifier,
    STATE(337), 1,
      sym_comment,
    STATE(477), 1,
      sym_scoped_name,
  [13297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1844), 1,
      anon_sym_GT,
    ACTIONS(1846), 1,
      anon_sym_COMMA,
    STATE(338), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [13314] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1849), 1,
      anon_sym_COMMA,
    ACTIONS(1852), 1,
      anon_sym_RPAREN,
    STATE(339), 2,
      sym_comment,
      aux_sym_annotation_appl_params_repeat1,
  [13331] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1854), 1,
      anon_sym_LBRACE,
    ACTIONS(1856), 1,
      anon_sym_COLON,
    STATE(340), 1,
      sym_comment,
    STATE(588), 1,
      sym_connector_inherit_spec,
  [13350] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(1858), 1,
      anon_sym_LBRACE,
    STATE(341), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13369] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(342), 1,
      sym_comment,
    STATE(521), 1,
      sym_scoped_name,
  [13388] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(180), 1,
      sym_simple_declarator,
    STATE(343), 1,
      sym_comment,
    STATE(619), 1,
      sym_attr_declarator,
  [13407] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(253), 1,
      sym_scoped_name,
    STATE(344), 1,
      sym_comment,
  [13426] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1862), 1,
      anon_sym_GT,
    ACTIONS(1864), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      sym_comment,
    STATE(428), 1,
      aux_sym_formal_parameters_repeat1,
  [13445] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(254), 1,
      sym_scoped_name,
    STATE(346), 1,
      sym_comment,
  [13464] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1866), 1,
      anon_sym_COMMA,
    ACTIONS(1869), 1,
      anon_sym_LBRACE,
    STATE(347), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [13481] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1817), 1,
      anon_sym_COMMA,
    ACTIONS(1871), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      aux_sym_any_declarators_repeat1,
    STATE(348), 1,
      sym_comment,
  [13500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1873), 1,
      anon_sym_GT,
    ACTIONS(1875), 1,
      anon_sym_COMMA,
    STATE(349), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [13517] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1479), 1,
      anon_sym_setraises,
    ACTIONS(1878), 1,
      anon_sym_SEMI,
    STATE(350), 1,
      sym_comment,
    STATE(632), 1,
      sym_set_excep_expr,
  [13536] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    ACTIONS(1882), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_bitmask_dcl_repeat1,
  [13555] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1884), 1,
      anon_sym_COMMA,
    ACTIONS(1887), 1,
      anon_sym_RBRACE,
    STATE(352), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [13572] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1889), 1,
      anon_sym_GT,
    ACTIONS(1891), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(353), 1,
      sym_comment,
  [13591] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    ACTIONS(1893), 1,
      anon_sym_SEMI,
    STATE(354), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [13610] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(330), 1,
      sym_scoped_name,
    STATE(355), 1,
      sym_comment,
  [13629] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1895), 1,
      anon_sym_SEMI,
    ACTIONS(1897), 1,
      sym_identifier,
    STATE(356), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [13646] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(222), 1,
      sym_scoped_name,
    STATE(357), 1,
      sym_comment,
  [13665] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    ACTIONS(1900), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_raises_expr_repeat1,
    STATE(358), 1,
      sym_comment,
  [13684] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1561), 1,
      anon_sym_supports,
    ACTIONS(1902), 1,
      anon_sym_LBRACE,
    STATE(359), 1,
      sym_comment,
    STATE(761), 1,
      sym_supported_interface_spec,
  [13703] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1904), 1,
      anon_sym_COMMA,
    ACTIONS(1906), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      sym_comment,
    STATE(410), 1,
      aux_sym_context_expr_repeat1,
  [13722] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1908), 1,
      anon_sym_SEMI,
    ACTIONS(1910), 1,
      anon_sym_default,
    STATE(361), 1,
      sym_comment,
    STATE(599), 1,
      sym_default,
  [13741] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1912), 1,
      anon_sym_COMMA,
    ACTIONS(1914), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_parameter_dcls_repeat1,
  [13760] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    ACTIONS(1916), 1,
      anon_sym_SEMI,
    STATE(363), 1,
      sym_comment,
    STATE(647), 1,
      sym_raises_expr,
  [13779] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(333), 1,
      sym_scoped_name,
    STATE(364), 1,
      sym_comment,
  [13798] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1519), 1,
      anon_sym_RBRACE,
    ACTIONS(1918), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      sym_comment,
    STATE(417), 1,
      aux_sym_enum_dcl_repeat1,
  [13817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1920), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [13832] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(302), 1,
      sym_scoped_name,
    STATE(367), 1,
      sym_comment,
  [13851] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1891), 1,
      anon_sym_COMMA,
    ACTIONS(1922), 1,
      anon_sym_GT,
    STATE(353), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(368), 1,
      sym_comment,
  [13870] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1924), 1,
      anon_sym_COMMA,
    ACTIONS(1927), 1,
      anon_sym_RPAREN,
    STATE(369), 2,
      sym_comment,
      aux_sym_in_parameter_dcls_repeat1,
  [13887] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1561), 1,
      anon_sym_supports,
    ACTIONS(1929), 1,
      anon_sym_manages,
    STATE(370), 1,
      sym_comment,
    STATE(756), 1,
      sym_supported_interface_spec,
  [13906] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1931), 1,
      anon_sym_COMMA,
    ACTIONS(1933), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_comment,
    STATE(416), 1,
      aux_sym_init_param_dcls_repeat1,
  [13925] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    ACTIONS(1935), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      aux_sym_raises_expr_repeat1,
    STATE(372), 1,
      sym_comment,
  [13944] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1918), 1,
      anon_sym_COMMA,
    ACTIONS(1937), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(373), 1,
      sym_comment,
  [13963] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1813), 1,
      anon_sym_COMMA,
    ACTIONS(1939), 1,
      anon_sym_GT,
    STATE(332), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(374), 1,
      sym_comment,
  [13982] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(375), 1,
      sym_comment,
    STATE(529), 1,
      sym_scoped_name,
  [14001] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    ACTIONS(1941), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      sym_comment,
    STATE(653), 1,
      sym_raises_expr,
  [14020] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(1943), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(377), 1,
      sym_comment,
  [14039] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1945), 1,
      anon_sym_COMMA,
    ACTIONS(1947), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_factory_param_dcls_repeat1,
  [14058] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    ACTIONS(1882), 1,
      anon_sym_RBRACE,
    STATE(379), 1,
      sym_comment,
    STATE(429), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14077] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(380), 1,
      sym_comment,
    STATE(493), 1,
      sym_scoped_name,
  [14096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(381), 1,
      sym_comment,
    ACTIONS(1777), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(382), 1,
      sym_comment,
    ACTIONS(1949), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14126] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1918), 1,
      anon_sym_COMMA,
    ACTIONS(1951), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(383), 1,
      sym_comment,
  [14145] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1910), 1,
      anon_sym_default,
    ACTIONS(1953), 1,
      anon_sym_SEMI,
    STATE(384), 1,
      sym_comment,
    STATE(579), 1,
      sym_default,
  [14164] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1955), 1,
      anon_sym_SEMI,
    ACTIONS(1957), 1,
      anon_sym_switch,
    ACTIONS(1959), 1,
      sym_identifier,
    STATE(385), 1,
      sym_comment,
  [14183] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1961), 1,
      anon_sym_SEMI,
    ACTIONS(1963), 1,
      sym_identifier,
    STATE(386), 1,
      sym_comment,
    STATE(397), 1,
      aux_sym_bitfield_repeat1,
  [14202] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(387), 1,
      sym_comment,
    STATE(432), 1,
      sym_scoped_name,
  [14221] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1965), 1,
      anon_sym_COMMA,
    ACTIONS(1968), 1,
      anon_sym_RPAREN,
    STATE(388), 2,
      sym_comment,
      aux_sym_factory_param_dcls_repeat1,
  [14238] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1970), 1,
      anon_sym_LT,
    ACTIONS(1972), 1,
      anon_sym_LBRACE,
    STATE(389), 1,
      sym_comment,
  [14257] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(1974), 1,
      anon_sym_LBRACE,
    STATE(390), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14276] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1976), 1,
      anon_sym_COMMA,
    ACTIONS(1979), 1,
      anon_sym_RPAREN,
    STATE(391), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [14293] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1553), 1,
      anon_sym_RBRACE,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14312] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(1974), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(393), 1,
      sym_comment,
  [14331] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(215), 1,
      sym_simple_declarator,
    STATE(394), 1,
      sym_comment,
    STATE(561), 1,
      sym_readonly_attr_declarator,
  [14350] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(1981), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(395), 1,
      sym_comment,
  [14369] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    ACTIONS(1983), 1,
      anon_sym_SEMI,
    STATE(396), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [14388] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1963), 1,
      sym_identifier,
    ACTIONS(1985), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      aux_sym_bitfield_repeat1,
    STATE(397), 1,
      sym_comment,
  [14407] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(258), 1,
      sym_scoped_name,
    STATE(398), 1,
      sym_comment,
  [14426] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(312), 1,
      sym_scoped_name,
    STATE(399), 1,
      sym_comment,
  [14445] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1805), 1,
      anon_sym_context,
    ACTIONS(1987), 1,
      anon_sym_SEMI,
    STATE(400), 1,
      sym_comment,
    STATE(739), 1,
      sym_context_expr,
  [14464] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1989), 1,
      anon_sym_COMMA,
    ACTIONS(1992), 1,
      anon_sym_SEMI,
    STATE(401), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [14481] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(402), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
  [14500] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    ACTIONS(1994), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(403), 1,
      sym_comment,
  [14519] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    ACTIONS(1994), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(404), 1,
      sym_comment,
  [14538] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(221), 1,
      sym_scoped_name,
    STATE(405), 1,
      sym_comment,
  [14557] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1996), 1,
      anon_sym_COMMA,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_in_parameter_dcls_repeat1,
  [14576] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2000), 1,
      anon_sym_COMMA,
    ACTIONS(2003), 1,
      anon_sym_SEMI,
    STATE(407), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [14593] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1655), 1,
      anon_sym_L,
    STATE(408), 1,
      sym_comment,
    STATE(453), 1,
      sym_string_literal,
  [14612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2005), 1,
      anon_sym_COMMA,
    ACTIONS(2008), 1,
      anon_sym_RPAREN,
    STATE(409), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [14629] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1904), 1,
      anon_sym_COMMA,
    ACTIONS(2010), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_comment,
    STATE(412), 1,
      aux_sym_context_expr_repeat1,
  [14648] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1912), 1,
      anon_sym_COMMA,
    ACTIONS(2012), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      aux_sym_parameter_dcls_repeat1,
    STATE(411), 1,
      sym_comment,
  [14667] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2014), 1,
      anon_sym_COMMA,
    ACTIONS(2017), 1,
      anon_sym_RPAREN,
    STATE(412), 2,
      sym_comment,
      aux_sym_context_expr_repeat1,
  [14684] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    ACTIONS(2019), 1,
      anon_sym_SEMI,
    STATE(413), 1,
      sym_comment,
    STATE(695), 1,
      sym_raises_expr,
  [14703] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1996), 1,
      anon_sym_COMMA,
    ACTIONS(2021), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_in_parameter_dcls_repeat1,
    STATE(414), 1,
      sym_comment,
  [14722] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1750), 1,
      anon_sym_LBRACE,
    ACTIONS(1752), 1,
      anon_sym_COLON,
    STATE(415), 1,
      sym_comment,
    STATE(591), 1,
      sym_interface_inheritance_spec,
  [14741] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1931), 1,
      anon_sym_COMMA,
    ACTIONS(2023), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(416), 1,
      sym_comment,
  [14760] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1918), 1,
      anon_sym_COMMA,
    ACTIONS(1951), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(417), 1,
      sym_comment,
  [14779] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1801), 1,
      sym_identifier,
    STATE(418), 1,
      sym_comment,
    STATE(501), 1,
      sym_scoped_name,
  [14798] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1801), 1,
      sym_identifier,
    STATE(419), 1,
      sym_comment,
    STATE(500), 1,
      sym_scoped_name,
  [14817] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1661), 1,
      sym_identifier,
    STATE(265), 1,
      sym_scoped_name,
    STATE(420), 1,
      sym_comment,
  [14836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(421), 1,
      sym_comment,
    ACTIONS(2025), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [14851] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1801), 1,
      sym_identifier,
    STATE(422), 1,
      sym_comment,
    STATE(499), 1,
      sym_scoped_name,
  [14870] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1801), 1,
      sym_identifier,
    STATE(423), 1,
      sym_comment,
    STATE(498), 1,
      sym_scoped_name,
  [14889] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1790), 1,
      anon_sym_COMMA,
    ACTIONS(2027), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(424), 1,
      sym_comment,
  [14908] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(2029), 1,
      anon_sym_LBRACE,
    STATE(377), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(425), 1,
      sym_comment,
  [14927] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    ACTIONS(2029), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(426), 1,
      sym_comment,
  [14946] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    ACTIONS(2031), 1,
      anon_sym_SEMI,
    STATE(427), 1,
      sym_comment,
    STATE(699), 1,
      sym_raises_expr,
  [14965] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1864), 1,
      anon_sym_COMMA,
    ACTIONS(2033), 1,
      anon_sym_GT,
    STATE(338), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(428), 1,
      sym_comment,
  [14984] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    ACTIONS(2035), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(429), 1,
      sym_comment,
  [15003] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_raises,
    ACTIONS(2037), 1,
      anon_sym_SEMI,
    STATE(430), 1,
      sym_comment,
    STATE(702), 1,
      sym_raises_expr,
  [15022] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1945), 1,
      anon_sym_COMMA,
    ACTIONS(2039), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(431), 1,
      sym_comment,
  [15041] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2041), 1,
      anon_sym_LT,
    STATE(432), 1,
      sym_comment,
  [15057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(433), 1,
      sym_comment,
    ACTIONS(2043), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(434), 1,
      sym_comment,
    ACTIONS(2045), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1770), 1,
      anon_sym_in,
    STATE(435), 1,
      sym_comment,
    STATE(478), 1,
      sym_factory_param_dcl,
  [15101] = 5,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2047), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(2049), 1,
      sym_preproc_arg,
    STATE(436), 1,
      sym_comment,
  [15117] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2051), 1,
      anon_sym_GT,
    ACTIONS(2053), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      sym_comment,
  [15133] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2055), 1,
      sym_identifier,
    STATE(438), 1,
      sym_comment,
    STATE(528), 1,
      sym_annotation_appl_param,
  [15149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(439), 1,
      sym_comment,
    ACTIONS(2057), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(440), 1,
      sym_comment,
    ACTIONS(2059), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(441), 1,
      sym_comment,
    STATE(476), 1,
      sym_simple_declarator,
  [15193] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2061), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_comment,
  [15209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(443), 1,
      sym_comment,
    ACTIONS(2063), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(444), 1,
      sym_comment,
    STATE(495), 1,
      sym_simple_declarator,
  [15239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(445), 1,
      sym_comment,
    ACTIONS(2065), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15253] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(446), 1,
      sym_comment,
    ACTIONS(2067), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(447), 1,
      sym_comment,
    ACTIONS(2069), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1681), 1,
      anon_sym_in,
    STATE(448), 1,
      sym_comment,
    STATE(496), 1,
      sym_in_param_dcl,
  [15297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1766), 1,
      anon_sym_in,
    STATE(449), 1,
      sym_comment,
    STATE(465), 1,
      sym_init_param_dcl,
  [15313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2071), 1,
      anon_sym_LBRACE,
    ACTIONS(2073), 1,
      anon_sym_COLON,
    STATE(450), 1,
      sym_comment,
  [15329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(451), 1,
      sym_comment,
    STATE(460), 1,
      sym_simple_declarator,
  [15345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(452), 1,
      sym_comment,
    STATE(459), 1,
      sym_simple_declarator,
  [15361] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(453), 1,
      sym_comment,
    ACTIONS(2017), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(454), 1,
      sym_comment,
    ACTIONS(1639), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_comment,
    ACTIONS(2075), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(456), 1,
      sym_comment,
    ACTIONS(2008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(457), 1,
      sym_comment,
    ACTIONS(2003), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(458), 1,
      sym_comment,
    ACTIONS(2077), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(459), 1,
      sym_comment,
    ACTIONS(2079), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(460), 1,
      sym_comment,
    ACTIONS(2081), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(461), 1,
      sym_comment,
    ACTIONS(2083), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2085), 1,
      anon_sym_SEMI,
    ACTIONS(2087), 1,
      anon_sym_default,
    STATE(462), 1,
      sym_comment,
  [15503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(463), 1,
      sym_comment,
    ACTIONS(2089), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(464), 1,
      sym_comment,
    ACTIONS(2091), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [15531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(465), 1,
      sym_comment,
    ACTIONS(1979), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(466), 1,
      sym_comment,
    ACTIONS(2093), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [15559] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2095), 1,
      anon_sym_LBRACE,
    STATE(467), 1,
      sym_comment,
  [15575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(468), 1,
      sym_comment,
    ACTIONS(1992), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(469), 1,
      sym_comment,
    ACTIONS(2097), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15603] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2099), 1,
      anon_sym_LBRACE,
    ACTIONS(2101), 1,
      anon_sym_COLON,
    STATE(470), 1,
      sym_comment,
  [15619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(471), 1,
      sym_comment,
    ACTIONS(2103), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(472), 1,
      sym_comment,
    ACTIONS(2105), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(473), 1,
      sym_comment,
    ACTIONS(2107), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [15661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(474), 1,
      sym_comment,
    ACTIONS(2109), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(475), 1,
      sym_comment,
    ACTIONS(2111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(476), 1,
      sym_comment,
    ACTIONS(2113), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15703] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2115), 1,
      anon_sym_LT,
    STATE(477), 1,
      sym_comment,
  [15719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(478), 1,
      sym_comment,
    ACTIONS(1968), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15733] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2117), 1,
      sym_identifier,
    STATE(479), 1,
      sym_comment,
  [15749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(480), 1,
      sym_comment,
    ACTIONS(2119), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(481), 1,
      sym_comment,
    ACTIONS(2121), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_comment,
    ACTIONS(2123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(483), 1,
      sym_comment,
    ACTIONS(2125), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(484), 1,
      sym_comment,
    ACTIONS(2127), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15819] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2129), 1,
      sym_identifier,
    STATE(485), 1,
      sym_comment,
  [15835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_comment,
    ACTIONS(2131), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(487), 1,
      sym_comment,
    ACTIONS(2133), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(488), 1,
      sym_comment,
    ACTIONS(2135), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15877] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2137), 1,
      sym_identifier,
    STATE(489), 1,
      sym_comment,
    STATE(723), 1,
      sym_formal_parameter_names,
  [15893] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2139), 1,
      anon_sym_DQUOTE,
    ACTIONS(2141), 1,
      anon_sym_SQUOTE,
    STATE(490), 1,
      sym_comment,
  [15909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(491), 1,
      sym_comment,
    ACTIONS(2143), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(462), 1,
      sym_simple_declarator,
    STATE(492), 1,
      sym_comment,
  [15939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2145), 1,
      anon_sym_LBRACE,
    STATE(493), 1,
      sym_comment,
  [15955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(494), 1,
      sym_comment,
    ACTIONS(2147), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [15969] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(495), 1,
      sym_comment,
    ACTIONS(2149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15983] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_comment,
    ACTIONS(1927), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_comment,
    ACTIONS(2151), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16011] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2153), 1,
      sym_identifier,
    STATE(498), 1,
      sym_comment,
  [16027] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2155), 1,
      sym_identifier,
    STATE(499), 1,
      sym_comment,
  [16043] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2157), 1,
      sym_identifier,
    STATE(500), 1,
      sym_comment,
  [16059] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2159), 1,
      sym_identifier,
    STATE(501), 1,
      sym_comment,
  [16075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(502), 1,
      sym_comment,
    ACTIONS(2161), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16089] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2163), 1,
      anon_sym_SEMI,
    STATE(503), 1,
      sym_comment,
  [16105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(504), 1,
      sym_comment,
    ACTIONS(2165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2167), 1,
      anon_sym_GT,
    ACTIONS(2169), 1,
      anon_sym_COMMA,
    STATE(505), 1,
      sym_comment,
  [16135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(506), 1,
      sym_comment,
    ACTIONS(2171), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16149] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2173), 1,
      sym_identifier,
    STATE(507), 1,
      sym_comment,
  [16165] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_comment,
    ACTIONS(2175), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(509), 1,
      sym_comment,
    ACTIONS(2177), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(510), 1,
      sym_comment,
    ACTIONS(1887), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(511), 1,
      sym_comment,
    ACTIONS(2179), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(512), 1,
      sym_comment,
    ACTIONS(2181), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(513), 1,
      sym_comment,
    ACTIONS(2183), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_comment,
    ACTIONS(2185), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(515), 1,
      sym_comment,
    ACTIONS(1873), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2187), 1,
      anon_sym_LPAREN,
    STATE(516), 1,
      sym_comment,
    STATE(631), 1,
      sym_exception_list,
  [16293] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2187), 1,
      anon_sym_LPAREN,
    STATE(466), 1,
      sym_exception_list,
    STATE(517), 1,
      sym_comment,
  [16309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(468), 1,
      sym_simple_declarator,
    STATE(518), 1,
      sym_comment,
  [16325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(519), 1,
      sym_comment,
    ACTIONS(2189), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(520), 1,
      sym_comment,
    ACTIONS(2191), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2193), 1,
      anon_sym_LBRACE,
    STATE(521), 1,
      sym_comment,
  [16369] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(522), 1,
      sym_comment,
    ACTIONS(1203), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16383] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(523), 1,
      sym_comment,
    ACTIONS(1869), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [16397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2195), 1,
      anon_sym_LBRACE,
    ACTIONS(2197), 1,
      anon_sym_SEMI,
    STATE(524), 1,
      sym_comment,
  [16413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(525), 1,
      sym_comment,
    STATE(553), 1,
      sym_simple_declarator,
  [16429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(526), 1,
      sym_comment,
    ACTIONS(2199), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16443] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2201), 1,
      anon_sym_LBRACE,
    STATE(527), 1,
      sym_comment,
  [16459] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(528), 1,
      sym_comment,
    ACTIONS(1852), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16473] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2203), 1,
      anon_sym_LBRACE,
    STATE(529), 1,
      sym_comment,
  [16489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(530), 1,
      sym_comment,
    ACTIONS(1844), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16503] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(531), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(532), 1,
      sym_comment,
    ACTIONS(1833), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2205), 1,
      anon_sym_valuetype,
    ACTIONS(2207), 1,
      anon_sym_eventtype,
    STATE(533), 1,
      sym_comment,
  [16547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(534), 1,
      sym_comment,
    ACTIONS(1205), 2,
      anon_sym_AT,
      sym_identifier,
  [16561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(535), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_AT,
      sym_identifier,
  [16575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(536), 1,
      sym_comment,
    ACTIONS(2209), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(537), 1,
      sym_comment,
    ACTIONS(2211), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(538), 1,
      sym_comment,
    ACTIONS(1797), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(539), 1,
      sym_comment,
    ACTIONS(2213), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2215), 1,
      anon_sym_LT,
    ACTIONS(2217), 1,
      sym_identifier,
    STATE(540), 1,
      sym_comment,
  [16647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2219), 1,
      anon_sym_GT,
    STATE(541), 1,
      sym_comment,
  [16660] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2221), 1,
      aux_sym_comment_token3,
    STATE(542), 1,
      sym_comment,
  [16673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2223), 1,
      anon_sym_LBRACE,
    STATE(543), 1,
      sym_comment,
  [16686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2225), 1,
      anon_sym_LBRACE,
    STATE(544), 1,
      sym_comment,
  [16699] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2227), 1,
      sym_identifier,
    STATE(545), 1,
      sym_comment,
  [16712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1421), 1,
      anon_sym_EQ,
    STATE(546), 1,
      sym_comment,
  [16725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2229), 1,
      sym_identifier,
    STATE(547), 1,
      sym_comment,
  [16738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2231), 1,
      sym_identifier,
    STATE(548), 1,
      sym_comment,
  [16751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2233), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_comment,
  [16764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2235), 1,
      anon_sym_LBRACE,
    STATE(550), 1,
      sym_comment,
  [16777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2237), 1,
      sym_identifier,
    STATE(551), 1,
      sym_comment,
  [16790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2239), 1,
      sym_identifier,
    STATE(552), 1,
      sym_comment,
  [16803] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2241), 1,
      anon_sym_SEMI,
    STATE(553), 1,
      sym_comment,
  [16816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2243), 1,
      anon_sym_SEMI,
    STATE(554), 1,
      sym_comment,
  [16829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1779), 1,
      anon_sym_LBRACE,
    STATE(555), 1,
      sym_comment,
  [16842] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2245), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      sym_comment,
  [16855] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1669), 1,
      anon_sym_LBRACE,
    STATE(557), 1,
      sym_comment,
  [16868] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2247), 1,
      anon_sym_SEMI,
    STATE(558), 1,
      sym_comment,
  [16881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2249), 1,
      anon_sym_LPAREN,
    STATE(559), 1,
      sym_comment,
  [16894] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2251), 1,
      anon_sym_EQ,
    STATE(560), 1,
      sym_comment,
  [16907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2253), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      sym_comment,
  [16920] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2163), 1,
      anon_sym_SEMI,
    STATE(562), 1,
      sym_comment,
  [16933] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2255), 1,
      anon_sym_SEMI,
    STATE(563), 1,
      sym_comment,
  [16946] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2257), 1,
      anon_sym_SQUOTE,
    STATE(564), 1,
      sym_comment,
  [16959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2259), 1,
      anon_sym_SEMI,
    STATE(565), 1,
      sym_comment,
  [16972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1893), 1,
      anon_sym_SEMI,
    STATE(566), 1,
      sym_comment,
  [16985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2261), 1,
      anon_sym_SEMI,
    STATE(567), 1,
      sym_comment,
  [16998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1878), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      sym_comment,
  [17011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2263), 1,
      aux_sym_string_literal_token1,
    STATE(569), 1,
      sym_comment,
  [17024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2265), 1,
      anon_sym_DQUOTE,
    STATE(570), 1,
      sym_comment,
  [17037] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2267), 1,
      anon_sym_SEMI,
    STATE(571), 1,
      sym_comment,
  [17050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2269), 1,
      anon_sym_SEMI,
    STATE(572), 1,
      sym_comment,
  [17063] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2271), 1,
      aux_sym_string_literal_token1,
    STATE(573), 1,
      sym_comment,
  [17076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2139), 1,
      anon_sym_DQUOTE,
    STATE(574), 1,
      sym_comment,
  [17089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2273), 1,
      anon_sym_RPAREN,
    STATE(575), 1,
      sym_comment,
  [17102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2275), 1,
      anon_sym_SEMI,
    STATE(576), 1,
      sym_comment,
  [17115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2277), 1,
      anon_sym_SEMI,
    STATE(577), 1,
      sym_comment,
  [17128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2279), 1,
      anon_sym_LT,
    STATE(578), 1,
      sym_comment,
  [17141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2281), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      sym_comment,
  [17154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2283), 1,
      anon_sym_LT,
    STATE(580), 1,
      sym_comment,
  [17167] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2285), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      sym_comment,
  [17180] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1902), 1,
      anon_sym_LBRACE,
    STATE(582), 1,
      sym_comment,
  [17193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2287), 1,
      anon_sym_SEMI,
    STATE(583), 1,
      sym_comment,
  [17206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2289), 1,
      anon_sym_SEMI,
    STATE(584), 1,
      sym_comment,
  [17219] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1929), 1,
      anon_sym_manages,
    STATE(585), 1,
      sym_comment,
  [17232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2291), 1,
      sym_identifier,
    STATE(586), 1,
      sym_comment,
  [17245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2293), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      sym_comment,
  [17258] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2295), 1,
      anon_sym_LBRACE,
    STATE(588), 1,
      sym_comment,
  [17271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2297), 1,
      sym_identifier,
    STATE(589), 1,
      sym_comment,
  [17284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2299), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      sym_comment,
  [17297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2301), 1,
      anon_sym_LBRACE,
    STATE(591), 1,
      sym_comment,
  [17310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2303), 1,
      anon_sym_SEMI,
    STATE(592), 1,
      sym_comment,
  [17323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2305), 1,
      sym_identifier,
    STATE(593), 1,
      sym_comment,
  [17336] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2307), 1,
      anon_sym_SEMI,
    STATE(594), 1,
      sym_comment,
  [17349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2309), 1,
      anon_sym_SEMI,
    STATE(595), 1,
      sym_comment,
  [17362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2311), 1,
      anon_sym_SEMI,
    STATE(596), 1,
      sym_comment,
  [17375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2215), 1,
      anon_sym_LT,
    STATE(597), 1,
      sym_comment,
  [17388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2313), 1,
      sym_identifier,
    STATE(598), 1,
      sym_comment,
  [17401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2315), 1,
      anon_sym_SEMI,
    STATE(599), 1,
      sym_comment,
  [17414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2317), 1,
      anon_sym_SEMI,
    STATE(600), 1,
      sym_comment,
  [17427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2319), 1,
      anon_sym_SEMI,
    STATE(601), 1,
      sym_comment,
  [17440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2321), 1,
      anon_sym_SEMI,
    STATE(602), 1,
      sym_comment,
  [17453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2129), 1,
      sym_identifier,
    STATE(603), 1,
      sym_comment,
  [17466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2323), 1,
      anon_sym_SEMI,
    STATE(604), 1,
      sym_comment,
  [17479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2325), 1,
      sym_identifier,
    STATE(605), 1,
      sym_comment,
  [17492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2327), 1,
      anon_sym_SEMI,
    STATE(606), 1,
      sym_comment,
  [17505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2329), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      sym_comment,
  [17518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2331), 1,
      anon_sym_LBRACE,
    STATE(608), 1,
      sym_comment,
  [17531] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2333), 1,
      anon_sym_SEMI,
    STATE(609), 1,
      sym_comment,
  [17544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2335), 1,
      anon_sym_SEMI,
    STATE(610), 1,
      sym_comment,
  [17557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2337), 1,
      anon_sym_SEMI,
    STATE(611), 1,
      sym_comment,
  [17570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1829), 1,
      anon_sym_valuetype,
    STATE(612), 1,
      sym_comment,
  [17583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2339), 1,
      anon_sym_SEMI,
    STATE(613), 1,
      sym_comment,
  [17596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2341), 1,
      sym_identifier,
    STATE(614), 1,
      sym_comment,
  [17609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2343), 1,
      sym_identifier,
    STATE(615), 1,
      sym_comment,
  [17622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2345), 1,
      anon_sym_LPAREN,
    STATE(616), 1,
      sym_comment,
  [17635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2347), 1,
      anon_sym_LBRACE,
    STATE(617), 1,
      sym_comment,
  [17648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2349), 1,
      anon_sym_attribute,
    STATE(618), 1,
      sym_comment,
  [17661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2351), 1,
      anon_sym_SEMI,
    STATE(619), 1,
      sym_comment,
  [17674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2353), 1,
      anon_sym_LBRACE,
    STATE(620), 1,
      sym_comment,
  [17687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2205), 1,
      anon_sym_valuetype,
    STATE(621), 1,
      sym_comment,
  [17700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2355), 1,
      sym_identifier,
    STATE(622), 1,
      sym_comment,
  [17713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2357), 1,
      sym_identifier,
    STATE(623), 1,
      sym_comment,
  [17726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2359), 1,
      anon_sym_LBRACE,
    STATE(624), 1,
      sym_comment,
  [17739] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2361), 1,
      anon_sym_LPAREN,
    STATE(625), 1,
      sym_comment,
  [17752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1983), 1,
      anon_sym_SEMI,
    STATE(626), 1,
      sym_comment,
  [17765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2363), 1,
      anon_sym_void,
    STATE(627), 1,
      sym_comment,
  [17778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1987), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_comment,
  [17791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(629), 1,
      sym_comment,
  [17804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2365), 1,
      anon_sym_SEMI,
    STATE(630), 1,
      sym_comment,
  [17817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2367), 1,
      anon_sym_SEMI,
    STATE(631), 1,
      sym_comment,
  [17830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2369), 1,
      anon_sym_SEMI,
    STATE(632), 1,
      sym_comment,
  [17843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2371), 1,
      anon_sym_SEMI,
    STATE(633), 1,
      sym_comment,
  [17856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1727), 1,
      anon_sym_LBRACE,
    STATE(634), 1,
      sym_comment,
  [17869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2373), 1,
      sym_identifier,
    STATE(635), 1,
      sym_comment,
  [17882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2375), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      sym_comment,
  [17895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2377), 1,
      sym_identifier,
    STATE(637), 1,
      sym_comment,
  [17908] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2379), 1,
      anon_sym_SEMI,
    STATE(638), 1,
      sym_comment,
  [17921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2381), 1,
      anon_sym_SEMI,
    STATE(639), 1,
      sym_comment,
  [17934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2383), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      sym_comment,
  [17947] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2385), 1,
      anon_sym_RBRACK,
    STATE(641), 1,
      sym_comment,
  [17960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2387), 1,
      anon_sym_LBRACE,
    STATE(642), 1,
      sym_comment,
  [17973] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2389), 1,
      aux_sym_preproc_call_token1,
    STATE(643), 1,
      sym_comment,
  [17986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2391), 1,
      anon_sym_LBRACE,
    STATE(644), 1,
      sym_comment,
  [17999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2393), 1,
      anon_sym_SEMI,
    STATE(645), 1,
      sym_comment,
  [18012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1651), 1,
      anon_sym_SLASH,
    STATE(646), 1,
      sym_comment,
  [18025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2019), 1,
      anon_sym_SEMI,
    STATE(647), 1,
      sym_comment,
  [18038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2395), 1,
      anon_sym_SEMI,
    STATE(648), 1,
      sym_comment,
  [18051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2397), 1,
      sym_identifier,
    STATE(649), 1,
      sym_comment,
  [18064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2399), 1,
      anon_sym_GT,
    STATE(650), 1,
      sym_comment,
  [18077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2401), 1,
      anon_sym_LBRACE,
    STATE(651), 1,
      sym_comment,
  [18090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2403), 1,
      anon_sym_SEMI,
    STATE(652), 1,
      sym_comment,
  [18103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2031), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_comment,
  [18116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2405), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      sym_comment,
  [18129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2061), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      sym_comment,
  [18142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2407), 1,
      anon_sym_GT,
    STATE(656), 1,
      sym_comment,
  [18155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2409), 1,
      anon_sym_RBRACE,
    STATE(657), 1,
      sym_comment,
  [18168] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2037), 1,
      anon_sym_SEMI,
    STATE(658), 1,
      sym_comment,
  [18181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2411), 1,
      anon_sym_SEMI,
    STATE(659), 1,
      sym_comment,
  [18194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2413), 1,
      sym_identifier,
    STATE(660), 1,
      sym_comment,
  [18207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2415), 1,
      sym_identifier,
    STATE(661), 1,
      sym_comment,
  [18220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2417), 1,
      anon_sym_SEMI,
    STATE(662), 1,
      sym_comment,
  [18233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2419), 1,
      anon_sym_LBRACE,
    STATE(663), 1,
      sym_comment,
  [18246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2421), 1,
      anon_sym_GT,
    STATE(664), 1,
      sym_comment,
  [18259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2423), 1,
      anon_sym_GT,
    STATE(665), 1,
      sym_comment,
  [18272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2425), 1,
      anon_sym_SEMI,
    STATE(666), 1,
      sym_comment,
  [18285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2427), 1,
      anon_sym_SEMI,
    STATE(667), 1,
      sym_comment,
  [18298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2429), 1,
      anon_sym_LBRACE,
    STATE(668), 1,
      sym_comment,
  [18311] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2431), 1,
      anon_sym_SEMI,
    STATE(669), 1,
      sym_comment,
  [18324] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2433), 1,
      anon_sym_SEMI,
    STATE(670), 1,
      sym_comment,
  [18337] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2435), 1,
      sym_identifier,
    STATE(671), 1,
      sym_comment,
  [18350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2437), 1,
      anon_sym_LBRACE,
    STATE(672), 1,
      sym_comment,
  [18363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2439), 1,
      sym_identifier,
    STATE(673), 1,
      sym_comment,
  [18376] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2441), 1,
      anon_sym_COLON,
    STATE(674), 1,
      sym_comment,
  [18389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2443), 1,
      anon_sym_LBRACE,
    STATE(675), 1,
      sym_comment,
  [18402] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2445), 1,
      anon_sym_RBRACE,
    STATE(676), 1,
      sym_comment,
  [18415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2447), 1,
      anon_sym_LBRACE,
    STATE(677), 1,
      sym_comment,
  [18428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2449), 1,
      anon_sym_SEMI,
    STATE(678), 1,
      sym_comment,
  [18441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2451), 1,
      anon_sym_GT,
    STATE(679), 1,
      sym_comment,
  [18454] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2453), 1,
      anon_sym_SEMI,
    STATE(680), 1,
      sym_comment,
  [18467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2455), 1,
      anon_sym_enum,
    STATE(681), 1,
      sym_comment,
  [18480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2457), 1,
      anon_sym_SEMI,
    STATE(682), 1,
      sym_comment,
  [18493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2459), 1,
      anon_sym_SEMI,
    STATE(683), 1,
      sym_comment,
  [18506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2461), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_comment,
  [18519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2463), 1,
      anon_sym_LBRACE,
    STATE(685), 1,
      sym_comment,
  [18532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2465), 1,
      anon_sym_SEMI,
    STATE(686), 1,
      sym_comment,
  [18545] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2467), 1,
      anon_sym_SEMI,
    STATE(687), 1,
      sym_comment,
  [18558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2469), 1,
      anon_sym_LBRACE,
    STATE(688), 1,
      sym_comment,
  [18571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2471), 1,
      anon_sym_LBRACE,
    STATE(689), 1,
      sym_comment,
  [18584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2473), 1,
      anon_sym_SQUOTE,
    STATE(690), 1,
      sym_comment,
  [18597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2475), 1,
      aux_sym_char_literal_token1,
    STATE(691), 1,
      sym_comment,
  [18610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2477), 1,
      anon_sym_RPAREN,
    STATE(692), 1,
      sym_comment,
  [18623] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2479), 1,
      anon_sym_LBRACE,
    STATE(693), 1,
      sym_comment,
  [18636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2481), 1,
      anon_sym_SEMI,
    STATE(694), 1,
      sym_comment,
  [18649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2483), 1,
      anon_sym_SEMI,
    STATE(695), 1,
      sym_comment,
  [18662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2485), 1,
      anon_sym_LT,
    STATE(696), 1,
      sym_comment,
  [18675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2487), 1,
      sym_identifier,
    STATE(697), 1,
      sym_comment,
  [18688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2489), 1,
      anon_sym_SEMI,
    STATE(698), 1,
      sym_comment,
  [18701] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2491), 1,
      anon_sym_SEMI,
    STATE(699), 1,
      sym_comment,
  [18714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2493), 1,
      sym_identifier,
    STATE(700), 1,
      sym_comment,
  [18727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2495), 1,
      anon_sym_SEMI,
    STATE(701), 1,
      sym_comment,
  [18740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2497), 1,
      anon_sym_SEMI,
    STATE(702), 1,
      sym_comment,
  [18753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2499), 1,
      anon_sym_SEMI,
    STATE(703), 1,
      sym_comment,
  [18766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2501), 1,
      anon_sym_SEMI,
    STATE(704), 1,
      sym_comment,
  [18779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2117), 1,
      sym_identifier,
    STATE(705), 1,
      sym_comment,
  [18792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2503), 1,
      anon_sym_RBRACE,
    STATE(706), 1,
      sym_comment,
  [18805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2505), 1,
      anon_sym_SEMI,
    STATE(707), 1,
      sym_comment,
  [18818] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2507), 1,
      sym_identifier,
    STATE(708), 1,
      sym_comment,
  [18831] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2509), 1,
      anon_sym_COLON,
    STATE(709), 1,
      sym_comment,
  [18844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2511), 1,
      anon_sym_SEMI,
    STATE(710), 1,
      sym_comment,
  [18857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2513), 1,
      anon_sym_SEMI,
    STATE(711), 1,
      sym_comment,
  [18870] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2515), 1,
      aux_sym_char_literal_token1,
    STATE(712), 1,
      sym_comment,
  [18883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2517), 1,
      anon_sym_LBRACE,
    STATE(713), 1,
      sym_comment,
  [18896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2519), 1,
      anon_sym_SEMI,
    STATE(714), 1,
      sym_comment,
  [18909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2521), 1,
      sym_identifier,
    STATE(715), 1,
      sym_comment,
  [18922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2523), 1,
      anon_sym_SEMI,
    STATE(716), 1,
      sym_comment,
  [18935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2525), 1,
      anon_sym_SEMI,
    STATE(717), 1,
      sym_comment,
  [18948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2527), 1,
      anon_sym_GT,
    STATE(718), 1,
      sym_comment,
  [18961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2529), 1,
      anon_sym_SEMI,
    STATE(719), 1,
      sym_comment,
  [18974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2531), 1,
      anon_sym_SEMI,
    STATE(720), 1,
      sym_comment,
  [18987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2533), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_comment,
  [19000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2535), 1,
      anon_sym_LPAREN,
    STATE(722), 1,
      sym_comment,
  [19013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2537), 1,
      anon_sym_GT,
    STATE(723), 1,
      sym_comment,
  [19026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2539), 1,
      ts_builtin_sym_end,
    STATE(724), 1,
      sym_comment,
  [19039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2541), 1,
      anon_sym_SEMI,
    STATE(725), 1,
      sym_comment,
  [19052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2543), 1,
      anon_sym_LPAREN,
    STATE(726), 1,
      sym_comment,
  [19065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2545), 1,
      anon_sym_SEMI,
    STATE(727), 1,
      sym_comment,
  [19078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2547), 1,
      sym_identifier,
    STATE(728), 1,
      sym_comment,
  [19091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2549), 1,
      sym_identifier,
    STATE(729), 1,
      sym_comment,
  [19104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2551), 1,
      sym_identifier,
    STATE(730), 1,
      sym_comment,
  [19117] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2173), 1,
      sym_identifier,
    STATE(731), 1,
      sym_comment,
  [19130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2553), 1,
      sym_identifier,
    STATE(732), 1,
      sym_comment,
  [19143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2555), 1,
      anon_sym_SEMI,
    STATE(733), 1,
      sym_comment,
  [19156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2557), 1,
      anon_sym_LPAREN,
    STATE(734), 1,
      sym_comment,
  [19169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2559), 1,
      sym_identifier,
    STATE(735), 1,
      sym_comment,
  [19182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2561), 1,
      anon_sym_SEMI,
    STATE(736), 1,
      sym_comment,
  [19195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2563), 1,
      anon_sym_LPAREN,
    STATE(737), 1,
      sym_comment,
  [19208] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2565), 1,
      aux_sym_predefine_token1,
    STATE(738), 1,
      sym_comment,
  [19221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2567), 1,
      anon_sym_SEMI,
    STATE(739), 1,
      sym_comment,
  [19234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2569), 1,
      sym_identifier,
    STATE(740), 1,
      sym_comment,
  [19247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2571), 1,
      sym_identifier,
    STATE(741), 1,
      sym_comment,
  [19260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2573), 1,
      sym_identifier,
    STATE(742), 1,
      sym_comment,
  [19273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2575), 1,
      sym_identifier,
    STATE(743), 1,
      sym_comment,
  [19286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2577), 1,
      anon_sym_LPAREN,
    STATE(744), 1,
      sym_comment,
  [19299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2579), 1,
      anon_sym_SEMI,
    STATE(745), 1,
      sym_comment,
  [19312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2581), 1,
      anon_sym_enum,
    STATE(746), 1,
      sym_comment,
  [19325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2583), 1,
      sym_identifier,
    STATE(747), 1,
      sym_comment,
  [19338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1733), 1,
      anon_sym_LBRACE,
    STATE(748), 1,
      sym_comment,
  [19351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2585), 1,
      sym_identifier,
    STATE(749), 1,
      sym_comment,
  [19364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2587), 1,
      sym_identifier,
    STATE(750), 1,
      sym_comment,
  [19377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2589), 1,
      sym_identifier,
    STATE(751), 1,
      sym_comment,
  [19390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2591), 1,
      sym_identifier,
    STATE(752), 1,
      sym_comment,
  [19403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2593), 1,
      sym_identifier,
    STATE(753), 1,
      sym_comment,
  [19416] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2595), 1,
      anon_sym_RBRACE,
    STATE(754), 1,
      sym_comment,
  [19429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2597), 1,
      anon_sym_SEMI,
    STATE(755), 1,
      sym_comment,
  [19442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2599), 1,
      anon_sym_manages,
    STATE(756), 1,
      sym_comment,
  [19455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2601), 1,
      sym_identifier,
    STATE(757), 1,
      sym_comment,
  [19468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2603), 1,
      sym_identifier,
    STATE(758), 1,
      sym_comment,
  [19481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2605), 1,
      sym_identifier,
    STATE(759), 1,
      sym_comment,
  [19494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2607), 1,
      sym_identifier,
    STATE(760), 1,
      sym_comment,
  [19507] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2609), 1,
      anon_sym_LBRACE,
    STATE(761), 1,
      sym_comment,
  [19520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2611), 1,
      anon_sym_GT,
    STATE(762), 1,
      sym_comment,
  [19533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
    STATE(763), 1,
      sym_comment,
  [19546] = 4,
    ACTIONS(1649), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2613), 1,
      aux_sym_predefine_token1,
    STATE(764), 1,
      sym_comment,
  [19559] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2615), 1,
      anon_sym_SEMI,
    STATE(765), 1,
      sym_comment,
  [19572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2617), 1,
      sym_identifier,
    STATE(766), 1,
      sym_comment,
  [19585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2619), 1,
      sym_identifier,
    STATE(767), 1,
      sym_comment,
  [19598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1815), 1,
      anon_sym_SEMI,
    STATE(768), 1,
      sym_comment,
  [19611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2621), 1,
      anon_sym_DQUOTE,
    STATE(769), 1,
      sym_comment,
  [19624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2623), 1,
      anon_sym_RPAREN,
    STATE(770), 1,
      sym_comment,
  [19637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2217), 1,
      sym_identifier,
    STATE(771), 1,
      sym_comment,
  [19650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2625), 1,
      sym_identifier,
    STATE(772), 1,
      sym_comment,
  [19663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2627), 1,
      sym_identifier,
    STATE(773), 1,
      sym_comment,
  [19676] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1803), 1,
      anon_sym_SEMI,
    STATE(774), 1,
      sym_comment,
  [19689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2629), 1,
      anon_sym_GT,
    STATE(775), 1,
      sym_comment,
  [19702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2631), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_comment,
  [19715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2633), 1,
      anon_sym_COMMA,
    STATE(777), 1,
      sym_comment,
  [19728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2635), 1,
      sym_identifier,
    STATE(778), 1,
      sym_comment,
  [19741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2637), 1,
      anon_sym_RPAREN,
    STATE(779), 1,
      sym_comment,
  [19754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2639), 1,
      anon_sym_COMMA,
    STATE(780), 1,
      sym_comment,
  [19767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1827), 1,
      anon_sym_interface,
    STATE(781), 1,
      sym_comment,
  [19780] = 1,
    ACTIONS(2641), 1,
      ts_builtin_sym_end,
  [19784] = 1,
    ACTIONS(2643), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 145,
  [SMALL_STATE(36)] = 290,
  [SMALL_STATE(37)] = 435,
  [SMALL_STATE(38)] = 580,
  [SMALL_STATE(39)] = 725,
  [SMALL_STATE(40)] = 870,
  [SMALL_STATE(41)] = 1015,
  [SMALL_STATE(42)] = 1158,
  [SMALL_STATE(43)] = 1303,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1593,
  [SMALL_STATE(46)] = 1737,
  [SMALL_STATE(47)] = 1881,
  [SMALL_STATE(48)] = 2023,
  [SMALL_STATE(49)] = 2165,
  [SMALL_STATE(50)] = 2295,
  [SMALL_STATE(51)] = 2431,
  [SMALL_STATE(52)] = 2500,
  [SMALL_STATE(53)] = 2633,
  [SMALL_STATE(54)] = 2702,
  [SMALL_STATE(55)] = 2771,
  [SMALL_STATE(56)] = 2898,
  [SMALL_STATE(57)] = 2967,
  [SMALL_STATE(58)] = 3036,
  [SMALL_STATE(59)] = 3105,
  [SMALL_STATE(60)] = 3174,
  [SMALL_STATE(61)] = 3242,
  [SMALL_STATE(62)] = 3310,
  [SMALL_STATE(63)] = 3378,
  [SMALL_STATE(64)] = 3446,
  [SMALL_STATE(65)] = 3573,
  [SMALL_STATE(66)] = 3700,
  [SMALL_STATE(67)] = 3827,
  [SMALL_STATE(68)] = 3954,
  [SMALL_STATE(69)] = 4081,
  [SMALL_STATE(70)] = 4208,
  [SMALL_STATE(71)] = 4335,
  [SMALL_STATE(72)] = 4462,
  [SMALL_STATE(73)] = 4589,
  [SMALL_STATE(74)] = 4655,
  [SMALL_STATE(75)] = 4721,
  [SMALL_STATE(76)] = 4826,
  [SMALL_STATE(77)] = 4931,
  [SMALL_STATE(78)] = 4986,
  [SMALL_STATE(79)] = 5041,
  [SMALL_STATE(80)] = 5093,
  [SMALL_STATE(81)] = 5142,
  [SMALL_STATE(82)] = 5189,
  [SMALL_STATE(83)] = 5236,
  [SMALL_STATE(84)] = 5283,
  [SMALL_STATE(85)] = 5330,
  [SMALL_STATE(86)] = 5377,
  [SMALL_STATE(87)] = 5424,
  [SMALL_STATE(88)] = 5471,
  [SMALL_STATE(89)] = 5518,
  [SMALL_STATE(90)] = 5565,
  [SMALL_STATE(91)] = 5612,
  [SMALL_STATE(92)] = 5659,
  [SMALL_STATE(93)] = 5706,
  [SMALL_STATE(94)] = 5753,
  [SMALL_STATE(95)] = 5799,
  [SMALL_STATE(96)] = 5845,
  [SMALL_STATE(97)] = 5928,
  [SMALL_STATE(98)] = 5973,
  [SMALL_STATE(99)] = 6018,
  [SMALL_STATE(100)] = 6063,
  [SMALL_STATE(101)] = 6108,
  [SMALL_STATE(102)] = 6151,
  [SMALL_STATE(103)] = 6194,
  [SMALL_STATE(104)] = 6237,
  [SMALL_STATE(105)] = 6280,
  [SMALL_STATE(106)] = 6323,
  [SMALL_STATE(107)] = 6366,
  [SMALL_STATE(108)] = 6409,
  [SMALL_STATE(109)] = 6452,
  [SMALL_STATE(110)] = 6495,
  [SMALL_STATE(111)] = 6538,
  [SMALL_STATE(112)] = 6581,
  [SMALL_STATE(113)] = 6624,
  [SMALL_STATE(114)] = 6710,
  [SMALL_STATE(115)] = 6796,
  [SMALL_STATE(116)] = 6838,
  [SMALL_STATE(117)] = 6924,
  [SMALL_STATE(118)] = 7010,
  [SMALL_STATE(119)] = 7093,
  [SMALL_STATE(120)] = 7176,
  [SMALL_STATE(121)] = 7259,
  [SMALL_STATE(122)] = 7342,
  [SMALL_STATE(123)] = 7425,
  [SMALL_STATE(124)] = 7508,
  [SMALL_STATE(125)] = 7591,
  [SMALL_STATE(126)] = 7671,
  [SMALL_STATE(127)] = 7751,
  [SMALL_STATE(128)] = 7831,
  [SMALL_STATE(129)] = 7911,
  [SMALL_STATE(130)] = 7979,
  [SMALL_STATE(131)] = 8059,
  [SMALL_STATE(132)] = 8139,
  [SMALL_STATE(133)] = 8219,
  [SMALL_STATE(134)] = 8293,
  [SMALL_STATE(135)] = 8364,
  [SMALL_STATE(136)] = 8424,
  [SMALL_STATE(137)] = 8492,
  [SMALL_STATE(138)] = 8549,
  [SMALL_STATE(139)] = 8614,
  [SMALL_STATE(140)] = 8669,
  [SMALL_STATE(141)] = 8731,
  [SMALL_STATE(142)] = 8790,
  [SMALL_STATE(143)] = 8823,
  [SMALL_STATE(144)] = 8856,
  [SMALL_STATE(145)] = 8886,
  [SMALL_STATE(146)] = 8920,
  [SMALL_STATE(147)] = 8968,
  [SMALL_STATE(148)] = 8998,
  [SMALL_STATE(149)] = 9028,
  [SMALL_STATE(150)] = 9058,
  [SMALL_STATE(151)] = 9088,
  [SMALL_STATE(152)] = 9122,
  [SMALL_STATE(153)] = 9152,
  [SMALL_STATE(154)] = 9182,
  [SMALL_STATE(155)] = 9212,
  [SMALL_STATE(156)] = 9242,
  [SMALL_STATE(157)] = 9292,
  [SMALL_STATE(158)] = 9340,
  [SMALL_STATE(159)] = 9370,
  [SMALL_STATE(160)] = 9420,
  [SMALL_STATE(161)] = 9450,
  [SMALL_STATE(162)] = 9500,
  [SMALL_STATE(163)] = 9530,
  [SMALL_STATE(164)] = 9577,
  [SMALL_STATE(165)] = 9623,
  [SMALL_STATE(166)] = 9652,
  [SMALL_STATE(167)] = 9681,
  [SMALL_STATE(168)] = 9710,
  [SMALL_STATE(169)] = 9743,
  [SMALL_STATE(170)] = 9770,
  [SMALL_STATE(171)] = 9797,
  [SMALL_STATE(172)] = 9819,
  [SMALL_STATE(173)] = 9857,
  [SMALL_STATE(174)] = 9879,
  [SMALL_STATE(175)] = 9913,
  [SMALL_STATE(176)] = 9936,
  [SMALL_STATE(177)] = 9959,
  [SMALL_STATE(178)] = 9982,
  [SMALL_STATE(179)] = 10006,
  [SMALL_STATE(180)] = 10028,
  [SMALL_STATE(181)] = 10062,
  [SMALL_STATE(182)] = 10086,
  [SMALL_STATE(183)] = 10108,
  [SMALL_STATE(184)] = 10127,
  [SMALL_STATE(185)] = 10146,
  [SMALL_STATE(186)] = 10165,
  [SMALL_STATE(187)] = 10184,
  [SMALL_STATE(188)] = 10203,
  [SMALL_STATE(189)] = 10222,
  [SMALL_STATE(190)] = 10243,
  [SMALL_STATE(191)] = 10272,
  [SMALL_STATE(192)] = 10291,
  [SMALL_STATE(193)] = 10310,
  [SMALL_STATE(194)] = 10341,
  [SMALL_STATE(195)] = 10363,
  [SMALL_STATE(196)] = 10391,
  [SMALL_STATE(197)] = 10415,
  [SMALL_STATE(198)] = 10433,
  [SMALL_STATE(199)] = 10461,
  [SMALL_STATE(200)] = 10489,
  [SMALL_STATE(201)] = 10507,
  [SMALL_STATE(202)] = 10535,
  [SMALL_STATE(203)] = 10563,
  [SMALL_STATE(204)] = 10581,
  [SMALL_STATE(205)] = 10599,
  [SMALL_STATE(206)] = 10625,
  [SMALL_STATE(207)] = 10653,
  [SMALL_STATE(208)] = 10677,
  [SMALL_STATE(209)] = 10705,
  [SMALL_STATE(210)] = 10733,
  [SMALL_STATE(211)] = 10751,
  [SMALL_STATE(212)] = 10776,
  [SMALL_STATE(213)] = 10799,
  [SMALL_STATE(214)] = 10824,
  [SMALL_STATE(215)] = 10849,
  [SMALL_STATE(216)] = 10874,
  [SMALL_STATE(217)] = 10899,
  [SMALL_STATE(218)] = 10916,
  [SMALL_STATE(219)] = 10933,
  [SMALL_STATE(220)] = 10958,
  [SMALL_STATE(221)] = 10977,
  [SMALL_STATE(222)] = 10996,
  [SMALL_STATE(223)] = 11019,
  [SMALL_STATE(224)] = 11036,
  [SMALL_STATE(225)] = 11053,
  [SMALL_STATE(226)] = 11078,
  [SMALL_STATE(227)] = 11103,
  [SMALL_STATE(228)] = 11128,
  [SMALL_STATE(229)] = 11145,
  [SMALL_STATE(230)] = 11170,
  [SMALL_STATE(231)] = 11195,
  [SMALL_STATE(232)] = 11212,
  [SMALL_STATE(233)] = 11229,
  [SMALL_STATE(234)] = 11252,
  [SMALL_STATE(235)] = 11269,
  [SMALL_STATE(236)] = 11292,
  [SMALL_STATE(237)] = 11311,
  [SMALL_STATE(238)] = 11334,
  [SMALL_STATE(239)] = 11357,
  [SMALL_STATE(240)] = 11374,
  [SMALL_STATE(241)] = 11391,
  [SMALL_STATE(242)] = 11416,
  [SMALL_STATE(243)] = 11441,
  [SMALL_STATE(244)] = 11466,
  [SMALL_STATE(245)] = 11491,
  [SMALL_STATE(246)] = 11514,
  [SMALL_STATE(247)] = 11539,
  [SMALL_STATE(248)] = 11564,
  [SMALL_STATE(249)] = 11580,
  [SMALL_STATE(250)] = 11600,
  [SMALL_STATE(251)] = 11620,
  [SMALL_STATE(252)] = 11636,
  [SMALL_STATE(253)] = 11658,
  [SMALL_STATE(254)] = 11680,
  [SMALL_STATE(255)] = 11702,
  [SMALL_STATE(256)] = 11718,
  [SMALL_STATE(257)] = 11734,
  [SMALL_STATE(258)] = 11756,
  [SMALL_STATE(259)] = 11778,
  [SMALL_STATE(260)] = 11800,
  [SMALL_STATE(261)] = 11820,
  [SMALL_STATE(262)] = 11840,
  [SMALL_STATE(263)] = 11856,
  [SMALL_STATE(264)] = 11878,
  [SMALL_STATE(265)] = 11894,
  [SMALL_STATE(266)] = 11916,
  [SMALL_STATE(267)] = 11934,
  [SMALL_STATE(268)] = 11954,
  [SMALL_STATE(269)] = 11976,
  [SMALL_STATE(270)] = 11996,
  [SMALL_STATE(271)] = 12012,
  [SMALL_STATE(272)] = 12028,
  [SMALL_STATE(273)] = 12050,
  [SMALL_STATE(274)] = 12072,
  [SMALL_STATE(275)] = 12094,
  [SMALL_STATE(276)] = 12116,
  [SMALL_STATE(277)] = 12136,
  [SMALL_STATE(278)] = 12158,
  [SMALL_STATE(279)] = 12174,
  [SMALL_STATE(280)] = 12196,
  [SMALL_STATE(281)] = 12212,
  [SMALL_STATE(282)] = 12234,
  [SMALL_STATE(283)] = 12252,
  [SMALL_STATE(284)] = 12268,
  [SMALL_STATE(285)] = 12288,
  [SMALL_STATE(286)] = 12308,
  [SMALL_STATE(287)] = 12330,
  [SMALL_STATE(288)] = 12352,
  [SMALL_STATE(289)] = 12370,
  [SMALL_STATE(290)] = 12392,
  [SMALL_STATE(291)] = 12412,
  [SMALL_STATE(292)] = 12428,
  [SMALL_STATE(293)] = 12450,
  [SMALL_STATE(294)] = 12466,
  [SMALL_STATE(295)] = 12482,
  [SMALL_STATE(296)] = 12498,
  [SMALL_STATE(297)] = 12520,
  [SMALL_STATE(298)] = 12536,
  [SMALL_STATE(299)] = 12558,
  [SMALL_STATE(300)] = 12578,
  [SMALL_STATE(301)] = 12600,
  [SMALL_STATE(302)] = 12622,
  [SMALL_STATE(303)] = 12644,
  [SMALL_STATE(304)] = 12666,
  [SMALL_STATE(305)] = 12688,
  [SMALL_STATE(306)] = 12704,
  [SMALL_STATE(307)] = 12720,
  [SMALL_STATE(308)] = 12742,
  [SMALL_STATE(309)] = 12758,
  [SMALL_STATE(310)] = 12780,
  [SMALL_STATE(311)] = 12798,
  [SMALL_STATE(312)] = 12818,
  [SMALL_STATE(313)] = 12840,
  [SMALL_STATE(314)] = 12860,
  [SMALL_STATE(315)] = 12880,
  [SMALL_STATE(316)] = 12899,
  [SMALL_STATE(317)] = 12914,
  [SMALL_STATE(318)] = 12933,
  [SMALL_STATE(319)] = 12950,
  [SMALL_STATE(320)] = 12969,
  [SMALL_STATE(321)] = 12986,
  [SMALL_STATE(322)] = 13005,
  [SMALL_STATE(323)] = 13024,
  [SMALL_STATE(324)] = 13039,
  [SMALL_STATE(325)] = 13058,
  [SMALL_STATE(326)] = 13077,
  [SMALL_STATE(327)] = 13096,
  [SMALL_STATE(328)] = 13115,
  [SMALL_STATE(329)] = 13134,
  [SMALL_STATE(330)] = 13153,
  [SMALL_STATE(331)] = 13170,
  [SMALL_STATE(332)] = 13189,
  [SMALL_STATE(333)] = 13206,
  [SMALL_STATE(334)] = 13223,
  [SMALL_STATE(335)] = 13240,
  [SMALL_STATE(336)] = 13259,
  [SMALL_STATE(337)] = 13278,
  [SMALL_STATE(338)] = 13297,
  [SMALL_STATE(339)] = 13314,
  [SMALL_STATE(340)] = 13331,
  [SMALL_STATE(341)] = 13350,
  [SMALL_STATE(342)] = 13369,
  [SMALL_STATE(343)] = 13388,
  [SMALL_STATE(344)] = 13407,
  [SMALL_STATE(345)] = 13426,
  [SMALL_STATE(346)] = 13445,
  [SMALL_STATE(347)] = 13464,
  [SMALL_STATE(348)] = 13481,
  [SMALL_STATE(349)] = 13500,
  [SMALL_STATE(350)] = 13517,
  [SMALL_STATE(351)] = 13536,
  [SMALL_STATE(352)] = 13555,
  [SMALL_STATE(353)] = 13572,
  [SMALL_STATE(354)] = 13591,
  [SMALL_STATE(355)] = 13610,
  [SMALL_STATE(356)] = 13629,
  [SMALL_STATE(357)] = 13646,
  [SMALL_STATE(358)] = 13665,
  [SMALL_STATE(359)] = 13684,
  [SMALL_STATE(360)] = 13703,
  [SMALL_STATE(361)] = 13722,
  [SMALL_STATE(362)] = 13741,
  [SMALL_STATE(363)] = 13760,
  [SMALL_STATE(364)] = 13779,
  [SMALL_STATE(365)] = 13798,
  [SMALL_STATE(366)] = 13817,
  [SMALL_STATE(367)] = 13832,
  [SMALL_STATE(368)] = 13851,
  [SMALL_STATE(369)] = 13870,
  [SMALL_STATE(370)] = 13887,
  [SMALL_STATE(371)] = 13906,
  [SMALL_STATE(372)] = 13925,
  [SMALL_STATE(373)] = 13944,
  [SMALL_STATE(374)] = 13963,
  [SMALL_STATE(375)] = 13982,
  [SMALL_STATE(376)] = 14001,
  [SMALL_STATE(377)] = 14020,
  [SMALL_STATE(378)] = 14039,
  [SMALL_STATE(379)] = 14058,
  [SMALL_STATE(380)] = 14077,
  [SMALL_STATE(381)] = 14096,
  [SMALL_STATE(382)] = 14111,
  [SMALL_STATE(383)] = 14126,
  [SMALL_STATE(384)] = 14145,
  [SMALL_STATE(385)] = 14164,
  [SMALL_STATE(386)] = 14183,
  [SMALL_STATE(387)] = 14202,
  [SMALL_STATE(388)] = 14221,
  [SMALL_STATE(389)] = 14238,
  [SMALL_STATE(390)] = 14257,
  [SMALL_STATE(391)] = 14276,
  [SMALL_STATE(392)] = 14293,
  [SMALL_STATE(393)] = 14312,
  [SMALL_STATE(394)] = 14331,
  [SMALL_STATE(395)] = 14350,
  [SMALL_STATE(396)] = 14369,
  [SMALL_STATE(397)] = 14388,
  [SMALL_STATE(398)] = 14407,
  [SMALL_STATE(399)] = 14426,
  [SMALL_STATE(400)] = 14445,
  [SMALL_STATE(401)] = 14464,
  [SMALL_STATE(402)] = 14481,
  [SMALL_STATE(403)] = 14500,
  [SMALL_STATE(404)] = 14519,
  [SMALL_STATE(405)] = 14538,
  [SMALL_STATE(406)] = 14557,
  [SMALL_STATE(407)] = 14576,
  [SMALL_STATE(408)] = 14593,
  [SMALL_STATE(409)] = 14612,
  [SMALL_STATE(410)] = 14629,
  [SMALL_STATE(411)] = 14648,
  [SMALL_STATE(412)] = 14667,
  [SMALL_STATE(413)] = 14684,
  [SMALL_STATE(414)] = 14703,
  [SMALL_STATE(415)] = 14722,
  [SMALL_STATE(416)] = 14741,
  [SMALL_STATE(417)] = 14760,
  [SMALL_STATE(418)] = 14779,
  [SMALL_STATE(419)] = 14798,
  [SMALL_STATE(420)] = 14817,
  [SMALL_STATE(421)] = 14836,
  [SMALL_STATE(422)] = 14851,
  [SMALL_STATE(423)] = 14870,
  [SMALL_STATE(424)] = 14889,
  [SMALL_STATE(425)] = 14908,
  [SMALL_STATE(426)] = 14927,
  [SMALL_STATE(427)] = 14946,
  [SMALL_STATE(428)] = 14965,
  [SMALL_STATE(429)] = 14984,
  [SMALL_STATE(430)] = 15003,
  [SMALL_STATE(431)] = 15022,
  [SMALL_STATE(432)] = 15041,
  [SMALL_STATE(433)] = 15057,
  [SMALL_STATE(434)] = 15071,
  [SMALL_STATE(435)] = 15085,
  [SMALL_STATE(436)] = 15101,
  [SMALL_STATE(437)] = 15117,
  [SMALL_STATE(438)] = 15133,
  [SMALL_STATE(439)] = 15149,
  [SMALL_STATE(440)] = 15163,
  [SMALL_STATE(441)] = 15177,
  [SMALL_STATE(442)] = 15193,
  [SMALL_STATE(443)] = 15209,
  [SMALL_STATE(444)] = 15223,
  [SMALL_STATE(445)] = 15239,
  [SMALL_STATE(446)] = 15253,
  [SMALL_STATE(447)] = 15267,
  [SMALL_STATE(448)] = 15281,
  [SMALL_STATE(449)] = 15297,
  [SMALL_STATE(450)] = 15313,
  [SMALL_STATE(451)] = 15329,
  [SMALL_STATE(452)] = 15345,
  [SMALL_STATE(453)] = 15361,
  [SMALL_STATE(454)] = 15375,
  [SMALL_STATE(455)] = 15389,
  [SMALL_STATE(456)] = 15403,
  [SMALL_STATE(457)] = 15417,
  [SMALL_STATE(458)] = 15431,
  [SMALL_STATE(459)] = 15445,
  [SMALL_STATE(460)] = 15459,
  [SMALL_STATE(461)] = 15473,
  [SMALL_STATE(462)] = 15487,
  [SMALL_STATE(463)] = 15503,
  [SMALL_STATE(464)] = 15517,
  [SMALL_STATE(465)] = 15531,
  [SMALL_STATE(466)] = 15545,
  [SMALL_STATE(467)] = 15559,
  [SMALL_STATE(468)] = 15575,
  [SMALL_STATE(469)] = 15589,
  [SMALL_STATE(470)] = 15603,
  [SMALL_STATE(471)] = 15619,
  [SMALL_STATE(472)] = 15633,
  [SMALL_STATE(473)] = 15647,
  [SMALL_STATE(474)] = 15661,
  [SMALL_STATE(475)] = 15675,
  [SMALL_STATE(476)] = 15689,
  [SMALL_STATE(477)] = 15703,
  [SMALL_STATE(478)] = 15719,
  [SMALL_STATE(479)] = 15733,
  [SMALL_STATE(480)] = 15749,
  [SMALL_STATE(481)] = 15763,
  [SMALL_STATE(482)] = 15777,
  [SMALL_STATE(483)] = 15791,
  [SMALL_STATE(484)] = 15805,
  [SMALL_STATE(485)] = 15819,
  [SMALL_STATE(486)] = 15835,
  [SMALL_STATE(487)] = 15849,
  [SMALL_STATE(488)] = 15863,
  [SMALL_STATE(489)] = 15877,
  [SMALL_STATE(490)] = 15893,
  [SMALL_STATE(491)] = 15909,
  [SMALL_STATE(492)] = 15923,
  [SMALL_STATE(493)] = 15939,
  [SMALL_STATE(494)] = 15955,
  [SMALL_STATE(495)] = 15969,
  [SMALL_STATE(496)] = 15983,
  [SMALL_STATE(497)] = 15997,
  [SMALL_STATE(498)] = 16011,
  [SMALL_STATE(499)] = 16027,
  [SMALL_STATE(500)] = 16043,
  [SMALL_STATE(501)] = 16059,
  [SMALL_STATE(502)] = 16075,
  [SMALL_STATE(503)] = 16089,
  [SMALL_STATE(504)] = 16105,
  [SMALL_STATE(505)] = 16119,
  [SMALL_STATE(506)] = 16135,
  [SMALL_STATE(507)] = 16149,
  [SMALL_STATE(508)] = 16165,
  [SMALL_STATE(509)] = 16179,
  [SMALL_STATE(510)] = 16193,
  [SMALL_STATE(511)] = 16207,
  [SMALL_STATE(512)] = 16221,
  [SMALL_STATE(513)] = 16235,
  [SMALL_STATE(514)] = 16249,
  [SMALL_STATE(515)] = 16263,
  [SMALL_STATE(516)] = 16277,
  [SMALL_STATE(517)] = 16293,
  [SMALL_STATE(518)] = 16309,
  [SMALL_STATE(519)] = 16325,
  [SMALL_STATE(520)] = 16339,
  [SMALL_STATE(521)] = 16353,
  [SMALL_STATE(522)] = 16369,
  [SMALL_STATE(523)] = 16383,
  [SMALL_STATE(524)] = 16397,
  [SMALL_STATE(525)] = 16413,
  [SMALL_STATE(526)] = 16429,
  [SMALL_STATE(527)] = 16443,
  [SMALL_STATE(528)] = 16459,
  [SMALL_STATE(529)] = 16473,
  [SMALL_STATE(530)] = 16489,
  [SMALL_STATE(531)] = 16503,
  [SMALL_STATE(532)] = 16517,
  [SMALL_STATE(533)] = 16531,
  [SMALL_STATE(534)] = 16547,
  [SMALL_STATE(535)] = 16561,
  [SMALL_STATE(536)] = 16575,
  [SMALL_STATE(537)] = 16589,
  [SMALL_STATE(538)] = 16603,
  [SMALL_STATE(539)] = 16617,
  [SMALL_STATE(540)] = 16631,
  [SMALL_STATE(541)] = 16647,
  [SMALL_STATE(542)] = 16660,
  [SMALL_STATE(543)] = 16673,
  [SMALL_STATE(544)] = 16686,
  [SMALL_STATE(545)] = 16699,
  [SMALL_STATE(546)] = 16712,
  [SMALL_STATE(547)] = 16725,
  [SMALL_STATE(548)] = 16738,
  [SMALL_STATE(549)] = 16751,
  [SMALL_STATE(550)] = 16764,
  [SMALL_STATE(551)] = 16777,
  [SMALL_STATE(552)] = 16790,
  [SMALL_STATE(553)] = 16803,
  [SMALL_STATE(554)] = 16816,
  [SMALL_STATE(555)] = 16829,
  [SMALL_STATE(556)] = 16842,
  [SMALL_STATE(557)] = 16855,
  [SMALL_STATE(558)] = 16868,
  [SMALL_STATE(559)] = 16881,
  [SMALL_STATE(560)] = 16894,
  [SMALL_STATE(561)] = 16907,
  [SMALL_STATE(562)] = 16920,
  [SMALL_STATE(563)] = 16933,
  [SMALL_STATE(564)] = 16946,
  [SMALL_STATE(565)] = 16959,
  [SMALL_STATE(566)] = 16972,
  [SMALL_STATE(567)] = 16985,
  [SMALL_STATE(568)] = 16998,
  [SMALL_STATE(569)] = 17011,
  [SMALL_STATE(570)] = 17024,
  [SMALL_STATE(571)] = 17037,
  [SMALL_STATE(572)] = 17050,
  [SMALL_STATE(573)] = 17063,
  [SMALL_STATE(574)] = 17076,
  [SMALL_STATE(575)] = 17089,
  [SMALL_STATE(576)] = 17102,
  [SMALL_STATE(577)] = 17115,
  [SMALL_STATE(578)] = 17128,
  [SMALL_STATE(579)] = 17141,
  [SMALL_STATE(580)] = 17154,
  [SMALL_STATE(581)] = 17167,
  [SMALL_STATE(582)] = 17180,
  [SMALL_STATE(583)] = 17193,
  [SMALL_STATE(584)] = 17206,
  [SMALL_STATE(585)] = 17219,
  [SMALL_STATE(586)] = 17232,
  [SMALL_STATE(587)] = 17245,
  [SMALL_STATE(588)] = 17258,
  [SMALL_STATE(589)] = 17271,
  [SMALL_STATE(590)] = 17284,
  [SMALL_STATE(591)] = 17297,
  [SMALL_STATE(592)] = 17310,
  [SMALL_STATE(593)] = 17323,
  [SMALL_STATE(594)] = 17336,
  [SMALL_STATE(595)] = 17349,
  [SMALL_STATE(596)] = 17362,
  [SMALL_STATE(597)] = 17375,
  [SMALL_STATE(598)] = 17388,
  [SMALL_STATE(599)] = 17401,
  [SMALL_STATE(600)] = 17414,
  [SMALL_STATE(601)] = 17427,
  [SMALL_STATE(602)] = 17440,
  [SMALL_STATE(603)] = 17453,
  [SMALL_STATE(604)] = 17466,
  [SMALL_STATE(605)] = 17479,
  [SMALL_STATE(606)] = 17492,
  [SMALL_STATE(607)] = 17505,
  [SMALL_STATE(608)] = 17518,
  [SMALL_STATE(609)] = 17531,
  [SMALL_STATE(610)] = 17544,
  [SMALL_STATE(611)] = 17557,
  [SMALL_STATE(612)] = 17570,
  [SMALL_STATE(613)] = 17583,
  [SMALL_STATE(614)] = 17596,
  [SMALL_STATE(615)] = 17609,
  [SMALL_STATE(616)] = 17622,
  [SMALL_STATE(617)] = 17635,
  [SMALL_STATE(618)] = 17648,
  [SMALL_STATE(619)] = 17661,
  [SMALL_STATE(620)] = 17674,
  [SMALL_STATE(621)] = 17687,
  [SMALL_STATE(622)] = 17700,
  [SMALL_STATE(623)] = 17713,
  [SMALL_STATE(624)] = 17726,
  [SMALL_STATE(625)] = 17739,
  [SMALL_STATE(626)] = 17752,
  [SMALL_STATE(627)] = 17765,
  [SMALL_STATE(628)] = 17778,
  [SMALL_STATE(629)] = 17791,
  [SMALL_STATE(630)] = 17804,
  [SMALL_STATE(631)] = 17817,
  [SMALL_STATE(632)] = 17830,
  [SMALL_STATE(633)] = 17843,
  [SMALL_STATE(634)] = 17856,
  [SMALL_STATE(635)] = 17869,
  [SMALL_STATE(636)] = 17882,
  [SMALL_STATE(637)] = 17895,
  [SMALL_STATE(638)] = 17908,
  [SMALL_STATE(639)] = 17921,
  [SMALL_STATE(640)] = 17934,
  [SMALL_STATE(641)] = 17947,
  [SMALL_STATE(642)] = 17960,
  [SMALL_STATE(643)] = 17973,
  [SMALL_STATE(644)] = 17986,
  [SMALL_STATE(645)] = 17999,
  [SMALL_STATE(646)] = 18012,
  [SMALL_STATE(647)] = 18025,
  [SMALL_STATE(648)] = 18038,
  [SMALL_STATE(649)] = 18051,
  [SMALL_STATE(650)] = 18064,
  [SMALL_STATE(651)] = 18077,
  [SMALL_STATE(652)] = 18090,
  [SMALL_STATE(653)] = 18103,
  [SMALL_STATE(654)] = 18116,
  [SMALL_STATE(655)] = 18129,
  [SMALL_STATE(656)] = 18142,
  [SMALL_STATE(657)] = 18155,
  [SMALL_STATE(658)] = 18168,
  [SMALL_STATE(659)] = 18181,
  [SMALL_STATE(660)] = 18194,
  [SMALL_STATE(661)] = 18207,
  [SMALL_STATE(662)] = 18220,
  [SMALL_STATE(663)] = 18233,
  [SMALL_STATE(664)] = 18246,
  [SMALL_STATE(665)] = 18259,
  [SMALL_STATE(666)] = 18272,
  [SMALL_STATE(667)] = 18285,
  [SMALL_STATE(668)] = 18298,
  [SMALL_STATE(669)] = 18311,
  [SMALL_STATE(670)] = 18324,
  [SMALL_STATE(671)] = 18337,
  [SMALL_STATE(672)] = 18350,
  [SMALL_STATE(673)] = 18363,
  [SMALL_STATE(674)] = 18376,
  [SMALL_STATE(675)] = 18389,
  [SMALL_STATE(676)] = 18402,
  [SMALL_STATE(677)] = 18415,
  [SMALL_STATE(678)] = 18428,
  [SMALL_STATE(679)] = 18441,
  [SMALL_STATE(680)] = 18454,
  [SMALL_STATE(681)] = 18467,
  [SMALL_STATE(682)] = 18480,
  [SMALL_STATE(683)] = 18493,
  [SMALL_STATE(684)] = 18506,
  [SMALL_STATE(685)] = 18519,
  [SMALL_STATE(686)] = 18532,
  [SMALL_STATE(687)] = 18545,
  [SMALL_STATE(688)] = 18558,
  [SMALL_STATE(689)] = 18571,
  [SMALL_STATE(690)] = 18584,
  [SMALL_STATE(691)] = 18597,
  [SMALL_STATE(692)] = 18610,
  [SMALL_STATE(693)] = 18623,
  [SMALL_STATE(694)] = 18636,
  [SMALL_STATE(695)] = 18649,
  [SMALL_STATE(696)] = 18662,
  [SMALL_STATE(697)] = 18675,
  [SMALL_STATE(698)] = 18688,
  [SMALL_STATE(699)] = 18701,
  [SMALL_STATE(700)] = 18714,
  [SMALL_STATE(701)] = 18727,
  [SMALL_STATE(702)] = 18740,
  [SMALL_STATE(703)] = 18753,
  [SMALL_STATE(704)] = 18766,
  [SMALL_STATE(705)] = 18779,
  [SMALL_STATE(706)] = 18792,
  [SMALL_STATE(707)] = 18805,
  [SMALL_STATE(708)] = 18818,
  [SMALL_STATE(709)] = 18831,
  [SMALL_STATE(710)] = 18844,
  [SMALL_STATE(711)] = 18857,
  [SMALL_STATE(712)] = 18870,
  [SMALL_STATE(713)] = 18883,
  [SMALL_STATE(714)] = 18896,
  [SMALL_STATE(715)] = 18909,
  [SMALL_STATE(716)] = 18922,
  [SMALL_STATE(717)] = 18935,
  [SMALL_STATE(718)] = 18948,
  [SMALL_STATE(719)] = 18961,
  [SMALL_STATE(720)] = 18974,
  [SMALL_STATE(721)] = 18987,
  [SMALL_STATE(722)] = 19000,
  [SMALL_STATE(723)] = 19013,
  [SMALL_STATE(724)] = 19026,
  [SMALL_STATE(725)] = 19039,
  [SMALL_STATE(726)] = 19052,
  [SMALL_STATE(727)] = 19065,
  [SMALL_STATE(728)] = 19078,
  [SMALL_STATE(729)] = 19091,
  [SMALL_STATE(730)] = 19104,
  [SMALL_STATE(731)] = 19117,
  [SMALL_STATE(732)] = 19130,
  [SMALL_STATE(733)] = 19143,
  [SMALL_STATE(734)] = 19156,
  [SMALL_STATE(735)] = 19169,
  [SMALL_STATE(736)] = 19182,
  [SMALL_STATE(737)] = 19195,
  [SMALL_STATE(738)] = 19208,
  [SMALL_STATE(739)] = 19221,
  [SMALL_STATE(740)] = 19234,
  [SMALL_STATE(741)] = 19247,
  [SMALL_STATE(742)] = 19260,
  [SMALL_STATE(743)] = 19273,
  [SMALL_STATE(744)] = 19286,
  [SMALL_STATE(745)] = 19299,
  [SMALL_STATE(746)] = 19312,
  [SMALL_STATE(747)] = 19325,
  [SMALL_STATE(748)] = 19338,
  [SMALL_STATE(749)] = 19351,
  [SMALL_STATE(750)] = 19364,
  [SMALL_STATE(751)] = 19377,
  [SMALL_STATE(752)] = 19390,
  [SMALL_STATE(753)] = 19403,
  [SMALL_STATE(754)] = 19416,
  [SMALL_STATE(755)] = 19429,
  [SMALL_STATE(756)] = 19442,
  [SMALL_STATE(757)] = 19455,
  [SMALL_STATE(758)] = 19468,
  [SMALL_STATE(759)] = 19481,
  [SMALL_STATE(760)] = 19494,
  [SMALL_STATE(761)] = 19507,
  [SMALL_STATE(762)] = 19520,
  [SMALL_STATE(763)] = 19533,
  [SMALL_STATE(764)] = 19546,
  [SMALL_STATE(765)] = 19559,
  [SMALL_STATE(766)] = 19572,
  [SMALL_STATE(767)] = 19585,
  [SMALL_STATE(768)] = 19598,
  [SMALL_STATE(769)] = 19611,
  [SMALL_STATE(770)] = 19624,
  [SMALL_STATE(771)] = 19637,
  [SMALL_STATE(772)] = 19650,
  [SMALL_STATE(773)] = 19663,
  [SMALL_STATE(774)] = 19676,
  [SMALL_STATE(775)] = 19689,
  [SMALL_STATE(776)] = 19702,
  [SMALL_STATE(777)] = 19715,
  [SMALL_STATE(778)] = 19728,
  [SMALL_STATE(779)] = 19741,
  [SMALL_STATE(780)] = 19754,
  [SMALL_STATE(781)] = 19767,
  [SMALL_STATE(782)] = 19780,
  [SMALL_STATE(783)] = 19784,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(218),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(217),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(223),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(223),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(228),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(251),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(580),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(231),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(232),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(232),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(234),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(239),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(239),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(283),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(283),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(240),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(766),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(220),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(271),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(597),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(578),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(545),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(612),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(614),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(618),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(66),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(759),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(758),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(336),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(753),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(751),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(750),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(749),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(75),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(621),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(70),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(649),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(33),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(746),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(344),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(193),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(270),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(627),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(525),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(200),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(218),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(217),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(223),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(223),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(228),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(251),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(580),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(231),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(232),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(232),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(234),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(239),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(239),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(283),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(283),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(240),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(766),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(220),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(271),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(597),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(578),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(545),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(612),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(614),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(618),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(66),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(759),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(758),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(336),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(753),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(751),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(750),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(749),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(75),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(621),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(661),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(33),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(746),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(344),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(193),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(270),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(627),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(671),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(525),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(200),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_body, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(218),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(217),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(223),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(223),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(228),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(251),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(580),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(231),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(232),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(232),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(234),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(239),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(239),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(283),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(283),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(240),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(766),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(220),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(271),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(597),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(578),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(545),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(612),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(614),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(618),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(66),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(759),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(758),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(336),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(753),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(751),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(750),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(749),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(75),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(621),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(33),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(746),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(344),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(193),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(270),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(627),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(525),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(200),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(545),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(781),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(331),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(760),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(336),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(337),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(753),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(752),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(751),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(750),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(749),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(75),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(387),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(533),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(746),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(344),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(346),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(193),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(743),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(742),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(741),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(740),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(525),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(436),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(545),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(781),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(331),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(760),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(759),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(758),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(757),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(336),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(337),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(753),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(752),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(751),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(750),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(749),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(75),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(533),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(33),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(746),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(344),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(346),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(193),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(743),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(742),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(741),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(740),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(525),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(738),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(545),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(781),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(331),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(760),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(336),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(337),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(753),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(752),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(751),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(750),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(749),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(75),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(533),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(746),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(344),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(346),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(193),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(743),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(742),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(741),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(740),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(525),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(218),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(217),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(228),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(251),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(580),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(231),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(232),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(232),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(234),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [937] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(283),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(283),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(271),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(597),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(578),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(324),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(270),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(200),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(218),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(217),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(228),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(603),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(598),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(231),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(232),
  [1018] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(232),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(234),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(283),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(283),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(240),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(766),
  [1042] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [1045] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(700),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(597),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(749),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(75),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(746),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(200),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 2),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(324),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 6),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 6),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 6),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 6),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [1293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(618),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(66),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(226),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(209),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(418),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(419),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(422),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(423),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 4),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 4),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2),
  [1341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(618),
  [1344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(66),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(209),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(423),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4, .production_id = 7),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4, .production_id = 7),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 3),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 3),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2),
  [1392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(618),
  [1395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(66),
  [1398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(226),
  [1401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(209),
  [1404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(423),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 1),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [1437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 1),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_export, 2),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(336),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 1),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 1),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 2),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 1),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_ref, 2),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 1),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(124),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(674),
  [1550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(132),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 2),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_forward_dcl, 2),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(696),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 3),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 2),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 2),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 2),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(405),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 3),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 3),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(511),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2), SHIFT_REPEAT(273),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 3),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 5),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(328),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 3),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 5),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 4),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(311),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 6),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(321),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 4),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [1794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(227),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inheritance_spec, 2),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_inheritance_spec, 2),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(55),
  [1849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(438),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 2),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(300),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [1875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(730),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(246),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(472),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 3),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [1924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2), SHIFT_REPEAT(448),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 4),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 7),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 1),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [1957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2), SHIFT_REPEAT(435),
  [1968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 5),
  [1976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(449),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [1981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(518),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 1),
  [2000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(299),
  [2003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [2005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(245),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [2014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2), SHIFT_REPEAT(408),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 2),
  [2023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [2025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [2027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [2029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 6),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 5),
  [2033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 5),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 2),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [2045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 8),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [2059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 6),
  [2069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [2077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [2081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [2083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 5),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [2091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [2093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 5),
  [2105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [2107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [2109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [2111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [2113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcl, 3),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [2119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [2121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [2123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [2125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [2127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [2129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [2131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 8),
  [2133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [2135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [2149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_param_dcl, 3),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [2163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_scope, 1),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [2173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [2177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [2179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [2181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [2183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [2185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [2189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_forward_dcl, 2),
  [2199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [2201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_spec, 2),
  [2203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_inherit_spec, 2),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [2211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 5),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [2223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 4),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [2241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [2243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 3),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_dcl, 2),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [2255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id_dcl, 3),
  [2261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_prefix_dcl, 3),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 3),
  [2269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 6),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 6),
  [2277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [2289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 4),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [2295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 3),
  [2297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 2),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [2301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [2303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_dcl, 3),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consumes_dcl, 3),
  [2309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publishes_dcl, 3),
  [2311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [2313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 7),
  [2319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 7),
  [2321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emits_dcl, 3),
  [2323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 3),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_dcl, 3),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [2335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 7),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [2369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [2371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 5),
  [2373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 2),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [2381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 4),
  [2383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_box_def, 3),
  [2385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [2393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [2395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 3),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_dcl, 1),
  [2427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [2429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [2431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [2433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dcl, 1),
  [2435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_dcl, 1),
  [2451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 3),
  [2459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [2467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 5),
  [2469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [2481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [2483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 5),
  [2491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 6),
  [2493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [2495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [2497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 6),
  [2499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 5),
  [2501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [2503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [2513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [2521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_dcl, 4),
  [2525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4),
  [2527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [2531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 4),
  [2533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2539] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [2543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 4),
  [2547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [2557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [2563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [2567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_with_context, 2),
  [2569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [2581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [2583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 1),
  [2595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 4),
  [2599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 1),
  [2609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 4),
  [2611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [2615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [2633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [2643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
