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
#define STATE_COUNT 781
#define LARGE_STATE_COUNT 35
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
  sym__definition = 303,
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
  aux_sym_specification_repeat2 = 315,
  aux_sym_except_dcl_repeat1 = 316,
  aux_sym_interface_def_repeat1 = 317,
  aux_sym_interface_inheritance_spec_repeat1 = 318,
  aux_sym_interface_body_repeat1 = 319,
  aux_sym_parameter_dcls_repeat1 = 320,
  aux_sym_raises_expr_repeat1 = 321,
  aux_sym_readonly_attr_declarator_repeat1 = 322,
  aux_sym_bitset_dcl_repeat1 = 323,
  aux_sym_bitfield_repeat1 = 324,
  aux_sym_bitmask_dcl_repeat1 = 325,
  aux_sym_annotation_dcl_repeat1 = 326,
  aux_sym_annotation_appl_params_repeat1 = 327,
  aux_sym_template_module_dcl_repeat1 = 328,
  aux_sym_formal_parameters_repeat1 = 329,
  aux_sym_actual_parameters_repeat1 = 330,
  aux_sym_formal_parameter_names_repeat1 = 331,
  aux_sym_value_def_repeat1 = 332,
  aux_sym_value_inheritance_spec_repeat1 = 333,
  aux_sym_init_param_dcls_repeat1 = 334,
  aux_sym_any_declarators_repeat1 = 335,
  aux_sym_declarators_repeat1 = 336,
  aux_sym_array_declarator_repeat1 = 337,
  aux_sym_enum_dcl_repeat1 = 338,
  aux_sym_enumerator_repeat1 = 339,
  aux_sym_union_def_repeat1 = 340,
  aux_sym_in_parameter_dcls_repeat1 = 341,
  aux_sym_context_expr_repeat1 = 342,
  aux_sym_component_body_repeat1 = 343,
  aux_sym_home_body_repeat1 = 344,
  aux_sym_factory_param_dcls_repeat1 = 345,
  aux_sym_port_body_repeat1 = 346,
  aux_sym_connector_dcl_repeat1 = 347,
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
  [60] = 60,
  [61] = 58,
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
  [74] = 58,
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
  [98] = 87,
  [99] = 85,
  [100] = 100,
  [101] = 94,
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
  [114] = 113,
  [115] = 113,
  [116] = 113,
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
  [178] = 80,
  [179] = 86,
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
  [194] = 85,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 96,
  [199] = 199,
  [200] = 200,
  [201] = 87,
  [202] = 202,
  [203] = 94,
  [204] = 204,
  [205] = 95,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
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
  [296] = 86,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 80,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 85,
  [307] = 87,
  [308] = 308,
  [309] = 94,
  [310] = 310,
  [311] = 311,
  [312] = 86,
  [313] = 80,
  [314] = 314,
  [315] = 315,
  [316] = 253,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 317,
  [322] = 320,
  [323] = 317,
  [324] = 324,
  [325] = 317,
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
  [423] = 320,
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
  [435] = 95,
  [436] = 96,
  [437] = 437,
  [438] = 438,
  [439] = 95,
  [440] = 440,
  [441] = 441,
  [442] = 96,
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
  [763] = 611,
  [764] = 556,
  [765] = 702,
  [766] = 766,
  [767] = 733,
  [768] = 768,
  [769] = 611,
  [770] = 556,
  [771] = 702,
  [772] = 772,
  [773] = 733,
  [774] = 774,
  [775] = 611,
  [776] = 733,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
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
      if (eof) ADVANCE(569);
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(629);
      if (lookahead == '%') ADVANCE(638);
      if (lookahead == '\'') ADVANCE(646);
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '+') ADVANCE(632);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '<') ADVANCE(617);
      if (lookahead == '=') ADVANCE(754);
      if (lookahead == '>') ADVANCE(619);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == 'F') ADVANCE(648);
      if (lookahead == 'L') ADVANCE(642);
      if (lookahead == 'O') ADVANCE(657);
      if (lookahead == 'T') ADVANCE(649);
      if (lookahead == 'V') ADVANCE(650);
      if (lookahead == '[') ADVANCE(785);
      if (lookahead == '\\') SKIP(562)
      if (lookahead == ']') ADVANCE(786);
      if (lookahead == '^') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead == 'b') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(653);
      if (lookahead == 'g') ADVANCE(663);
      if (lookahead == 'h') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead == 'm') ADVANCE(651);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(670);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(664);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(659);
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(722);
      if (lookahead == '~') ADVANCE(641);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(81)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(81)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(83)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(78)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(78)
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
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1118);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '\\') SKIP(42)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1121);
      if (lookahead == '\r') ADVANCE(1119);
      if (lookahead == '\\') ADVANCE(1123);
      if (lookahead != 0) ADVANCE(1122);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(45)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(47)
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == '\\') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(95)
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') SKIP(56)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') SKIP(56)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == '\\') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(53)
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 56:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(55)
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 60:
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(59)
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(61)
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '$') ADVANCE(629);
      if (lookahead == '%') ADVANCE(638);
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '+') ADVANCE(632);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '<') ADVANCE(617);
      if (lookahead == '>') ADVANCE(619);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(642);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == ']') ADVANCE(786);
      if (lookahead == '^') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '\'') ADVANCE(646);
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(683);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(841);
      if (lookahead == 'L') ADVANCE(643);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'T') ADVANCE(846);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '~') ADVANCE(641);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '\'') ADVANCE(646);
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(683);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(841);
      if (lookahead == 'L') ADVANCE(643);
      if (lookahead == 'T') ADVANCE(846);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '~') ADVANCE(641);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(643);
      if (lookahead == '\\') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 68:
      if (lookahead == '$') ADVANCE(629);
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '>') ADVANCE(618);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == ']') ADVANCE(786);
      if (lookahead == '^') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == '|') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '>') ADVANCE(618);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(639);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '>') ADVANCE(618);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') SKIP(46)
      if (lookahead == 'i') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      if (lookahead == '*') ADVANCE(1125);
      if (lookahead == '/') ADVANCE(1114);
      END_STATE();
    case 73:
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '*') ADVANCE(1126);
      if (lookahead == '/') ADVANCE(1115);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(616);
      if (lookahead == '>') ADVANCE(618);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(786);
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'c') ADVANCE(945);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == 'f') ADVANCE(852);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(859);
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead == 'p') ADVANCE(1033);
      if (lookahead == 'r') ADVANCE(924);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 't') ADVANCE(1107);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == 'v') ADVANCE(870);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '0') ADVANCE(680);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(902);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '{') ADVANCE(721);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'c') ADVANCE(945);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == 'f') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(859);
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead == 'r') ADVANCE(924);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 't') ADVANCE(1107);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == 'v') ADVANCE(870);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(60)
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'c') ADVANCE(945);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(859);
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead == 'r') ADVANCE(924);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 't') ADVANCE(1107);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == 'v') ADVANCE(870);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'c') ADVANCE(865);
      if (lookahead == 'd') ADVANCE(921);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == 'w') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '@') ADVANCE(284);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(946);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == 'V') ADVANCE(849);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(946);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == 'f') ADVANCE(970);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(901);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == 'v') ADVANCE(871);
      if (lookahead == 'w') ADVANCE(879);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'm') ADVANCE(1094);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == '\\') SKIP(38)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 's') ADVANCE(903);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(878);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == 'l') ADVANCE(1017);
      if (lookahead == 's') ADVANCE(948);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(879);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 't') ADVANCE(1042);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '@') ADVANCE(185);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '\\') SKIP(48)
      if (lookahead == 's') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') SKIP(54)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') SKIP(56)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') SKIP(62)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == '\\') ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 96:
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '3') ADVANCE(98);
      if (lookahead == '6') ADVANCE(100);
      if (lookahead == '8') ADVANCE(583);
      END_STATE();
    case 97:
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '6') ADVANCE(101);
      if (lookahead == '8') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 98:
      if (lookahead == '2') ADVANCE(597);
      END_STATE();
    case 99:
      if (lookahead == '2') ADVANCE(578);
      END_STATE();
    case 100:
      if (lookahead == '4') ADVANCE(600);
      END_STATE();
    case 101:
      if (lookahead == '4') ADVANCE(581);
      END_STATE();
    case 102:
      if (lookahead == '6') ADVANCE(594);
      END_STATE();
    case 103:
      if (lookahead == '6') ADVANCE(572);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(611);
      END_STATE();
    case 105:
      if (lookahead == '<') ADVANCE(631);
      END_STATE();
    case 106:
      if (lookahead == 'B') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(672);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(674);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'S') ADVANCE(108);
      END_STATE();
    case 111:
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(374);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(324);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(468);
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(308);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(534);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(310);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(777);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(501);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(499);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(587);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(793);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(746);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'h') ADVANCE(394);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 245:
      if (lookahead == 'f') ADVANCE(783);
      END_STATE();
    case 246:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 248:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 249:
      if (lookahead == 'f') ADVANCE(292);
      END_STATE();
    case 250:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 251:
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(574);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(612);
      END_STATE();
    case 254:
      if (lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(596);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(576);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(789);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 299:
      if (lookahead == 'j') ADVANCE(236);
      END_STATE();
    case 300:
      if (lookahead == 'k') ADVANCE(747);
      END_STATE();
    case 301:
      if (lookahead == 'k') ADVANCE(219);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(766);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(771);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 'v') ADVANCE(235);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(625);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 405:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 406:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 407:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(398);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 417:
      if (lookahead == 'q') ADVANCE(527);
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(816);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(807);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(812);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(737);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(811);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(775);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(788);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(819);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(768);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(750);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(820);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 522:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 523:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 526:
      if (lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 527:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 537:
      if (lookahead == 'v') ADVANCE(291);
      END_STATE();
    case 538:
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 539:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 540:
      if (lookahead == 'x') ADVANCE(795);
      END_STATE();
    case 541:
      if (lookahead == 'x') ADVANCE(483);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(620);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(800);
      END_STATE();
    case 544:
      if (lookahead == 'y') ADVANCE(781);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(738);
      END_STATE();
    case 546:
      if (lookahead == 'y') ADVANCE(815);
      END_STATE();
    case 547:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 548:
      if (lookahead == 'y') ADVANCE(406);
      END_STATE();
    case 549:
      if (lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 550:
      if (lookahead == 'y') ADVANCE(408);
      END_STATE();
    case 551:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 552:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 553:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 554:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 555:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      END_STATE();
    case 556:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      END_STATE();
    case 557:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      END_STATE();
    case 558:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(678);
      END_STATE();
    case 559:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1122);
      if (lookahead == '\r') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(1123);
      END_STATE();
    case 560:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(716);
      END_STATE();
    case 561:
      if (eof) ADVANCE(569);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 562:
      if (eof) ADVANCE(569);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(561)
      END_STATE();
    case 563:
      if (eof) ADVANCE(569);
      if (lookahead == '\n') SKIP(567)
      END_STATE();
    case 564:
      if (eof) ADVANCE(569);
      if (lookahead == '\n') SKIP(567)
      if (lookahead == '\r') SKIP(563)
      END_STATE();
    case 565:
      if (eof) ADVANCE(569);
      if (lookahead == '\n') SKIP(568)
      END_STATE();
    case 566:
      if (eof) ADVANCE(569);
      if (lookahead == '\n') SKIP(568)
      if (lookahead == '\r') SKIP(565)
      END_STATE();
    case 567:
      if (eof) ADVANCE(569);
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '$') ADVANCE(629);
      if (lookahead == '%') ADVANCE(638);
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '+') ADVANCE(632);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(754);
      if (lookahead == '>') ADVANCE(619);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == 'L') ADVANCE(642);
      if (lookahead == '[') ADVANCE(785);
      if (lookahead == '\\') SKIP(564)
      if (lookahead == ']') ADVANCE(786);
      if (lookahead == '^') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(142);
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(567)
      END_STATE();
    case 568:
      if (eof) ADVANCE(569);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(629);
      if (lookahead == '%') ADVANCE(638);
      if (lookahead == ')') ADVANCE(640);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '+') ADVANCE(632);
      if (lookahead == ',') ADVANCE(622);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == ';') ADVANCE(730);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '>') ADVANCE(619);
      if (lookahead == '@') ADVANCE(753);
      if (lookahead == '\\') SKIP(566)
      if (lookahead == ']') ADVANCE(786);
      if (lookahead == '^') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(568)
      END_STATE();
    case 569:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(323);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(631);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(630);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '0') ADVANCE(684);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '0') ADVANCE(684);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1125);
      if (lookahead == '/') ADVANCE(1114);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'b') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(394);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == 'w') ADVANCE(283);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == 'v') ADVANCE(235);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(705);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(558);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(677);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(677);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(558);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(678);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(693);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1112);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(694);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(695);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(696);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(694);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(696);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(697);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(831);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(699);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(698);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(700);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(702);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1112);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(699);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(703);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(700);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(705);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(558);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(558);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(694);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(558);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(696);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(694);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(694);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(696);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '0') ADVANCE(685);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '0') ADVANCE(686);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(705);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(558);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(677);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(677);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(558);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(678);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(678);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(690);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(705);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(95)
      if (lookahead == '\r') ADVANCE(714);
      if (lookahead == '/') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(717);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(95)
      if (lookahead == '/') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(717);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1125);
      if (lookahead == '/') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(716);
      if (lookahead == '\r') ADVANCE(718);
      if (lookahead == '/') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(716);
      if (lookahead == '/') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(717);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(611);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_truncatable);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_truncatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_supports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_typeprefix);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_oneway);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_value_base_type);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_value_base_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_manages);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_emits);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_publishes);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_consumes);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_finder);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_finder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_porttype);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_mirrorport);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_connector);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(829);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(1128);
      if (lookahead == '/') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(829);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(827);
      if (lookahead == '\\') ADVANCE(826);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(829);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == '0') ADVANCE(679);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(839);
      if (lookahead == '3') ADVANCE(835);
      if (lookahead == '6') ADVANCE(837);
      if (lookahead == '8') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(839);
      if (lookahead == '3') ADVANCE(835);
      if (lookahead == '6') ADVANCE(837);
      if (lookahead == '8') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(840);
      if (lookahead == '3') ADVANCE(836);
      if (lookahead == '6') ADVANCE(838);
      if (lookahead == '8') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'i') ADVANCE(1102);
      if (lookahead == 'l') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'i') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1055);
      if (lookahead == 'h') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'o') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1056);
      if (lookahead == 'n') ADVANCE(1103);
      if (lookahead == 't') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == 's') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1075);
      if (lookahead == 'n') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 'i') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == 't') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == 't') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == 't') ADVANCE(1043);
      if (lookahead == 'u') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == 't') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(1006);
      if (lookahead == 'u') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1102);
      if (lookahead == 'l') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1057);
      if (lookahead == 'o') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(999);
      if (lookahead == 'n') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(999);
      if (lookahead == 'n') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(994);
      if (lookahead == 'u') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1013);
      if (lookahead == 's') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1029);
      if (lookahead == 'n') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(851);
      if (lookahead == 's') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1088);
      if (lookahead == 'v') ADVANCE(935);
      if (lookahead == 'x') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1088);
      if (lookahead == 'x') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(898);
      if (lookahead == 'x') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(951);
      if (lookahead == 'u') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1113);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1122);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(829);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1118);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == '@') ADVANCE(752);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead != 0) ADVANCE(1122);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(1127);
      if (lookahead == '/') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1122);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(1120);
      if (lookahead == '@') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1122);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1122);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1122);
      if (lookahead == '\r') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(1123);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(559);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(74);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1122);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(829);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 567},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 79},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 80},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 568},
  [23] = {.lex_state = 568},
  [24] = {.lex_state = 568},
  [25] = {.lex_state = 567},
  [26] = {.lex_state = 568},
  [27] = {.lex_state = 568},
  [28] = {.lex_state = 568},
  [29] = {.lex_state = 568},
  [30] = {.lex_state = 568},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 81},
  [34] = {.lex_state = 82},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 70},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 70},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 70},
  [44] = {.lex_state = 70},
  [45] = {.lex_state = 70},
  [46] = {.lex_state = 83},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 78},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 70},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 84},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 70},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 79},
  [62] = {.lex_state = 79},
  [63] = {.lex_state = 79},
  [64] = {.lex_state = 79},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 70},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 70},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 70},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 80},
  [76] = {.lex_state = 87},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 81},
  [79] = {.lex_state = 81},
  [80] = {.lex_state = 70},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 70},
  [83] = {.lex_state = 83},
  [84] = {.lex_state = 70},
  [85] = {.lex_state = 70},
  [86] = {.lex_state = 70},
  [87] = {.lex_state = 70},
  [88] = {.lex_state = 83},
  [89] = {.lex_state = 83},
  [90] = {.lex_state = 83},
  [91] = {.lex_state = 70},
  [92] = {.lex_state = 70},
  [93] = {.lex_state = 70},
  [94] = {.lex_state = 70},
  [95] = {.lex_state = 70},
  [96] = {.lex_state = 70},
  [97] = {.lex_state = 567},
  [98] = {.lex_state = 64},
  [99] = {.lex_state = 64},
  [100] = {.lex_state = 88},
  [101] = {.lex_state = 64},
  [102] = {.lex_state = 70},
  [103] = {.lex_state = 568},
  [104] = {.lex_state = 568},
  [105] = {.lex_state = 568},
  [106] = {.lex_state = 568},
  [107] = {.lex_state = 568},
  [108] = {.lex_state = 568},
  [109] = {.lex_state = 567},
  [110] = {.lex_state = 567},
  [111] = {.lex_state = 568},
  [112] = {.lex_state = 567},
  [113] = {.lex_state = 66},
  [114] = {.lex_state = 66},
  [115] = {.lex_state = 66},
  [116] = {.lex_state = 66},
  [117] = {.lex_state = 66},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 66},
  [122] = {.lex_state = 66},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 66},
  [125] = {.lex_state = 66},
  [126] = {.lex_state = 66},
  [127] = {.lex_state = 66},
  [128] = {.lex_state = 567},
  [129] = {.lex_state = 66},
  [130] = {.lex_state = 66},
  [131] = {.lex_state = 66},
  [132] = {.lex_state = 66},
  [133] = {.lex_state = 66},
  [134] = {.lex_state = 64},
  [135] = {.lex_state = 66},
  [136] = {.lex_state = 64},
  [137] = {.lex_state = 66},
  [138] = {.lex_state = 64},
  [139] = {.lex_state = 66},
  [140] = {.lex_state = 66},
  [141] = {.lex_state = 567},
  [142] = {.lex_state = 567},
  [143] = {.lex_state = 64},
  [144] = {.lex_state = 568},
  [145] = {.lex_state = 568},
  [146] = {.lex_state = 568},
  [147] = {.lex_state = 64},
  [148] = {.lex_state = 64},
  [149] = {.lex_state = 568},
  [150] = {.lex_state = 568},
  [151] = {.lex_state = 568},
  [152] = {.lex_state = 568},
  [153] = {.lex_state = 568},
  [154] = {.lex_state = 568},
  [155] = {.lex_state = 64},
  [156] = {.lex_state = 568},
  [157] = {.lex_state = 568},
  [158] = {.lex_state = 568},
  [159] = {.lex_state = 568},
  [160] = {.lex_state = 568},
  [161] = {.lex_state = 64},
  [162] = {.lex_state = 64},
  [163] = {.lex_state = 66},
  [164] = {.lex_state = 568},
  [165] = {.lex_state = 567},
  [166] = {.lex_state = 568},
  [167] = {.lex_state = 567},
  [168] = {.lex_state = 568},
  [169] = {.lex_state = 568},
  [170] = {.lex_state = 64},
  [171] = {.lex_state = 64},
  [172] = {.lex_state = 64},
  [173] = {.lex_state = 64},
  [174] = {.lex_state = 68},
  [175] = {.lex_state = 68},
  [176] = {.lex_state = 66},
  [177] = {.lex_state = 68},
  [178] = {.lex_state = 64},
  [179] = {.lex_state = 64},
  [180] = {.lex_state = 68},
  [181] = {.lex_state = 567},
  [182] = {.lex_state = 64},
  [183] = {.lex_state = 64},
  [184] = {.lex_state = 64},
  [185] = {.lex_state = 64},
  [186] = {.lex_state = 68},
  [187] = {.lex_state = 64},
  [188] = {.lex_state = 68},
  [189] = {.lex_state = 64},
  [190] = {.lex_state = 64},
  [191] = {.lex_state = 567},
  [192] = {.lex_state = 67},
  [193] = {.lex_state = 567},
  [194] = {.lex_state = 69},
  [195] = {.lex_state = 567},
  [196] = {.lex_state = 567},
  [197] = {.lex_state = 69},
  [198] = {.lex_state = 64},
  [199] = {.lex_state = 567},
  [200] = {.lex_state = 568},
  [201] = {.lex_state = 69},
  [202] = {.lex_state = 567},
  [203] = {.lex_state = 69},
  [204] = {.lex_state = 90},
  [205] = {.lex_state = 64},
  [206] = {.lex_state = 567},
  [207] = {.lex_state = 69},
  [208] = {.lex_state = 90},
  [209] = {.lex_state = 85},
  [210] = {.lex_state = 69},
  [211] = {.lex_state = 568},
  [212] = {.lex_state = 69},
  [213] = {.lex_state = 69},
  [214] = {.lex_state = 86},
  [215] = {.lex_state = 69},
  [216] = {.lex_state = 89},
  [217] = {.lex_state = 567},
  [218] = {.lex_state = 568},
  [219] = {.lex_state = 567},
  [220] = {.lex_state = 568},
  [221] = {.lex_state = 69},
  [222] = {.lex_state = 90},
  [223] = {.lex_state = 69},
  [224] = {.lex_state = 69},
  [225] = {.lex_state = 69},
  [226] = {.lex_state = 567},
  [227] = {.lex_state = 68},
  [228] = {.lex_state = 69},
  [229] = {.lex_state = 69},
  [230] = {.lex_state = 69},
  [231] = {.lex_state = 567},
  [232] = {.lex_state = 567},
  [233] = {.lex_state = 69},
  [234] = {.lex_state = 567},
  [235] = {.lex_state = 69},
  [236] = {.lex_state = 69},
  [237] = {.lex_state = 69},
  [238] = {.lex_state = 64},
  [239] = {.lex_state = 567},
  [240] = {.lex_state = 567},
  [241] = {.lex_state = 69},
  [242] = {.lex_state = 69},
  [243] = {.lex_state = 69},
  [244] = {.lex_state = 69},
  [245] = {.lex_state = 567},
  [246] = {.lex_state = 86},
  [247] = {.lex_state = 69},
  [248] = {.lex_state = 43},
  [249] = {.lex_state = 567},
  [250] = {.lex_state = 69},
  [251] = {.lex_state = 567},
  [252] = {.lex_state = 69},
  [253] = {.lex_state = 69},
  [254] = {.lex_state = 69},
  [255] = {.lex_state = 69},
  [256] = {.lex_state = 567},
  [257] = {.lex_state = 567},
  [258] = {.lex_state = 567},
  [259] = {.lex_state = 567},
  [260] = {.lex_state = 69},
  [261] = {.lex_state = 567},
  [262] = {.lex_state = 69},
  [263] = {.lex_state = 568},
  [264] = {.lex_state = 567},
  [265] = {.lex_state = 1121},
  [266] = {.lex_state = 69},
  [267] = {.lex_state = 568},
  [268] = {.lex_state = 567},
  [269] = {.lex_state = 69},
  [270] = {.lex_state = 69},
  [271] = {.lex_state = 567},
  [272] = {.lex_state = 567},
  [273] = {.lex_state = 90},
  [274] = {.lex_state = 69},
  [275] = {.lex_state = 69},
  [276] = {.lex_state = 568},
  [277] = {.lex_state = 90},
  [278] = {.lex_state = 69},
  [279] = {.lex_state = 69},
  [280] = {.lex_state = 71},
  [281] = {.lex_state = 567},
  [282] = {.lex_state = 69},
  [283] = {.lex_state = 69},
  [284] = {.lex_state = 567},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 69},
  [287] = {.lex_state = 69},
  [288] = {.lex_state = 69},
  [289] = {.lex_state = 567},
  [290] = {.lex_state = 567},
  [291] = {.lex_state = 69},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 90},
  [294] = {.lex_state = 69},
  [295] = {.lex_state = 71},
  [296] = {.lex_state = 43},
  [297] = {.lex_state = 69},
  [298] = {.lex_state = 567},
  [299] = {.lex_state = 567},
  [300] = {.lex_state = 69},
  [301] = {.lex_state = 43},
  [302] = {.lex_state = 567},
  [303] = {.lex_state = 567},
  [304] = {.lex_state = 71},
  [305] = {.lex_state = 71},
  [306] = {.lex_state = 43},
  [307] = {.lex_state = 43},
  [308] = {.lex_state = 69},
  [309] = {.lex_state = 43},
  [310] = {.lex_state = 567},
  [311] = {.lex_state = 69},
  [312] = {.lex_state = 69},
  [313] = {.lex_state = 69},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 76},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 69},
  [318] = {.lex_state = 76},
  [319] = {.lex_state = 76},
  [320] = {.lex_state = 567},
  [321] = {.lex_state = 69},
  [322] = {.lex_state = 567},
  [323] = {.lex_state = 69},
  [324] = {.lex_state = 567},
  [325] = {.lex_state = 69},
  [326] = {.lex_state = 69},
  [327] = {.lex_state = 69},
  [328] = {.lex_state = 69},
  [329] = {.lex_state = 76},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 76},
  [332] = {.lex_state = 76},
  [333] = {.lex_state = 567},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 567},
  [336] = {.lex_state = 567},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 69},
  [339] = {.lex_state = 76},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 69},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 69},
  [352] = {.lex_state = 567},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 567},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 567},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 567},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 567},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 69},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 69},
  [371] = {.lex_state = 76},
  [372] = {.lex_state = 91},
  [373] = {.lex_state = 567},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 567},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 567},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 567},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 69},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 567},
  [386] = {.lex_state = 567},
  [387] = {.lex_state = 567},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 568},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 567},
  [394] = {.lex_state = 76},
  [395] = {.lex_state = 69},
  [396] = {.lex_state = 76},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 69},
  [399] = {.lex_state = 69},
  [400] = {.lex_state = 69},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 69},
  [405] = {.lex_state = 567},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 69},
  [409] = {.lex_state = 69},
  [410] = {.lex_state = 567},
  [411] = {.lex_state = 568},
  [412] = {.lex_state = 69},
  [413] = {.lex_state = 69},
  [414] = {.lex_state = 567},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 69},
  [417] = {.lex_state = 69},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 69},
  [420] = {.lex_state = 69},
  [421] = {.lex_state = 69},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 567},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 69},
  [426] = {.lex_state = 69},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 69},
  [429] = {.lex_state = 69},
  [430] = {.lex_state = 76},
  [431] = {.lex_state = 69},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 69},
  [434] = {.lex_state = 49},
  [435] = {.lex_state = 69},
  [436] = {.lex_state = 69},
  [437] = {.lex_state = 76},
  [438] = {.lex_state = 567},
  [439] = {.lex_state = 43},
  [440] = {.lex_state = 76},
  [441] = {.lex_state = 69},
  [442] = {.lex_state = 43},
  [443] = {.lex_state = 76},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 567},
  [446] = {.lex_state = 567},
  [447] = {.lex_state = 69},
  [448] = {.lex_state = 69},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 567},
  [451] = {.lex_state = 69},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 69},
  [455] = {.lex_state = 567},
  [456] = {.lex_state = 69},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 69},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 69},
  [461] = {.lex_state = 69},
  [462] = {.lex_state = 69},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 567},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 71},
  [471] = {.lex_state = 567},
  [472] = {.lex_state = 69},
  [473] = {.lex_state = 69},
  [474] = {.lex_state = 69},
  [475] = {.lex_state = 76},
  [476] = {.lex_state = 69},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 71},
  [480] = {.lex_state = 69},
  [481] = {.lex_state = 69},
  [482] = {.lex_state = 69},
  [483] = {.lex_state = 71},
  [484] = {.lex_state = 69},
  [485] = {.lex_state = 69},
  [486] = {.lex_state = 69},
  [487] = {.lex_state = 567},
  [488] = {.lex_state = 69},
  [489] = {.lex_state = 69},
  [490] = {.lex_state = 567},
  [491] = {.lex_state = 69},
  [492] = {.lex_state = 568},
  [493] = {.lex_state = 567},
  [494] = {.lex_state = 69},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 90},
  [498] = {.lex_state = 69},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 568},
  [501] = {.lex_state = 69},
  [502] = {.lex_state = 567},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 69},
  [505] = {.lex_state = 76},
  [506] = {.lex_state = 69},
  [507] = {.lex_state = 76},
  [508] = {.lex_state = 567},
  [509] = {.lex_state = 69},
  [510] = {.lex_state = 69},
  [511] = {.lex_state = 69},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 69},
  [514] = {.lex_state = 69},
  [515] = {.lex_state = 69},
  [516] = {.lex_state = 69},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 69},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 69},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 69},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 76},
  [530] = {.lex_state = 69},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 567},
  [533] = {.lex_state = 90},
  [534] = {.lex_state = 76},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 69},
  [537] = {.lex_state = 76},
  [538] = {.lex_state = 567},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 69},
  [542] = {.lex_state = 69},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 69},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 76},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 69},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 69},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 69},
  [560] = {.lex_state = 92},
  [561] = {.lex_state = 69},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 76},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 76},
  [576] = {.lex_state = 76},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 69},
  [580] = {.lex_state = 69},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 69},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 76},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 69},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 69},
  [596] = {.lex_state = 69},
  [597] = {.lex_state = 69},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 92},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 69},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 69},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 69},
  [623] = {.lex_state = 69},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 50},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 94},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 567},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 69},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 69},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 69},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 76},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 69},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 69},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 73},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 76},
  [667] = {.lex_state = 76},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 69},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 568},
  [677] = {.lex_state = 567},
  [678] = {.lex_state = 567},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 69},
  [681] = {.lex_state = 76},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 69},
  [685] = {.lex_state = 567},
  [686] = {.lex_state = 567},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 567},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 69},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 69},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 69},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 568},
  [712] = {.lex_state = 69},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 69},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 828},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 76},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 76},
  [726] = {.lex_state = 69},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 567},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 69},
  [732] = {.lex_state = 69},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 69},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 69},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 69},
  [743] = {.lex_state = 76},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 567},
  [746] = {.lex_state = 69},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 69},
  [749] = {.lex_state = 69},
  [750] = {.lex_state = 69},
  [751] = {.lex_state = 69},
  [752] = {.lex_state = 69},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 94},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 69},
  [757] = {.lex_state = 69},
  [758] = {.lex_state = 69},
  [759] = {.lex_state = 69},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 69},
  [764] = {.lex_state = 69},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 69},
  [770] = {.lex_state = 69},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 76},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 69},
  [775] = {.lex_state = 69},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 76},
  [778] = {.lex_state = 567},
  [779] = {(TSStateId)(-1)},
  [780] = {(TSStateId)(-1)},
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
    [sym_specification] = STATE(716),
    [sym_preproc_call] = STATE(110),
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(1),
    [aux_sym_specification_repeat1] = STATE(25),
    [aux_sym_specification_repeat2] = STATE(27),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(765),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(765),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(60),
    [sym_init_dcl] = STATE(60),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(765),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_value_def_repeat1] = STATE(3),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(765),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(765),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(60),
    [sym_init_dcl] = STATE(60),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(765),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(765),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(765),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(60),
    [sym_init_dcl] = STATE(60),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(765),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
  [5] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(765),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(765),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(60),
    [sym_init_dcl] = STATE(60),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(765),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_value_def_repeat1] = STATE(4),
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
    [anon_sym_RBRACE] = ACTIONS(159),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(765),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(322),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(765),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(765),
    [sym_bitmask_dcl] = STATE(765),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(765),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_element] = STATE(59),
    [sym_state_member] = STATE(60),
    [sym_init_dcl] = STATE(60),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(765),
    [sym_enum_dcl] = STATE(765),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(765),
    [sym_union_def] = STATE(765),
    [sym_type_id_dcl] = STATE(765),
    [sym_import_dcl] = STATE(765),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(322),
    [sym_op_with_context] = STATE(765),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(765),
    [sym_struct_forward_dcl] = STATE(765),
    [sym_struct_def] = STATE(765),
    [sym_const_dcl] = STATE(765),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_value_def_repeat1] = STATE(6),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_int16] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(164),
    [anon_sym_int32] = ACTIONS(164),
    [anon_sym_longlong] = ACTIONS(167),
    [anon_sym_int64] = ACTIONS(170),
    [sym_unsigned_tiny_int] = ACTIONS(173),
    [sym_boolean_type] = ACTIONS(176),
    [anon_sym_fixed] = ACTIONS(179),
    [sym_octet_type] = ACTIONS(176),
    [sym_signed_tiny_int] = ACTIONS(182),
    [anon_sym_unsignedshort] = ACTIONS(185),
    [anon_sym_uint16] = ACTIONS(188),
    [anon_sym_unsignedlong] = ACTIONS(191),
    [anon_sym_uint32] = ACTIONS(191),
    [anon_sym_unsignedlonglong] = ACTIONS(194),
    [anon_sym_uint64] = ACTIONS(197),
    [anon_sym_float] = ACTIONS(200),
    [anon_sym_double] = ACTIONS(200),
    [anon_sym_longdouble] = ACTIONS(203),
    [anon_sym_char] = ACTIONS(206),
    [anon_sym_wchar] = ACTIONS(206),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_string] = ACTIONS(212),
    [anon_sym_wstring] = ACTIONS(212),
    [anon_sym_any] = ACTIONS(215),
    [anon_sym_sequence] = ACTIONS(218),
    [anon_sym_map] = ACTIONS(221),
    [anon_sym_exception] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_abstract] = ACTIONS(229),
    [anon_sym_void] = ACTIONS(232),
    [anon_sym_readonly] = ACTIONS(235),
    [anon_sym_attribute] = ACTIONS(238),
    [anon_sym_bitset] = ACTIONS(241),
    [anon_sym_bitmask] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_valuetype] = ACTIONS(250),
    [anon_sym_struct] = ACTIONS(253),
    [anon_sym_union] = ACTIONS(256),
    [anon_sym_enum] = ACTIONS(259),
    [anon_sym_const] = ACTIONS(262),
    [anon_sym_custom] = ACTIONS(265),
    [anon_sym_public] = ACTIONS(268),
    [anon_sym_private] = ACTIONS(268),
    [anon_sym_factory] = ACTIONS(271),
    [anon_sym_typedef] = ACTIONS(274),
    [anon_sym_ATignore_literal_names] = ACTIONS(277),
    [anon_sym_typeid] = ACTIONS(280),
    [anon_sym_import] = ACTIONS(283),
    [anon_sym_Object] = ACTIONS(286),
    [anon_sym_oneway] = ACTIONS(289),
    [sym_value_base_type] = ACTIONS(176),
    [anon_sym_native] = ACTIONS(292),
    [sym_identifier] = ACTIONS(295),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(771),
    [sym_export] = STATE(62),
    [sym_op_dcl] = STATE(320),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(771),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(771),
    [sym_bitmask_dcl] = STATE(771),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(771),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(771),
    [sym_enum_dcl] = STATE(771),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(771),
    [sym_union_def] = STATE(771),
    [sym_type_id_dcl] = STATE(771),
    [sym_import_dcl] = STATE(771),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(320),
    [sym_op_with_context] = STATE(771),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_home_body] = STATE(700),
    [sym_home_export] = STATE(63),
    [sym_factory_dcl] = STATE(692),
    [sym_finder_dcl] = STATE(692),
    [sym_native_dcl] = STATE(771),
    [sym_struct_forward_dcl] = STATE(771),
    [sym_struct_def] = STATE(771),
    [sym_const_dcl] = STATE(771),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [anon_sym_RBRACE] = ACTIONS(298),
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
    [anon_sym_factory] = ACTIONS(300),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(302),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(771),
    [sym_export] = STATE(62),
    [sym_op_dcl] = STATE(320),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(771),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(771),
    [sym_bitmask_dcl] = STATE(771),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(771),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(771),
    [sym_enum_dcl] = STATE(771),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(771),
    [sym_union_def] = STATE(771),
    [sym_type_id_dcl] = STATE(771),
    [sym_import_dcl] = STATE(771),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(320),
    [sym_op_with_context] = STATE(771),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_home_export] = STATE(63),
    [sym_factory_dcl] = STATE(692),
    [sym_finder_dcl] = STATE(692),
    [sym_native_dcl] = STATE(771),
    [sym_struct_forward_dcl] = STATE(771),
    [sym_struct_def] = STATE(771),
    [sym_const_dcl] = STATE(771),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [anon_sym_RBRACE] = ACTIONS(304),
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
    [anon_sym_factory] = ACTIONS(300),
    [anon_sym_typedef] = ACTIONS(141),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_oneway] = ACTIONS(149),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(302),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(771),
    [sym_export] = STATE(62),
    [sym_op_dcl] = STATE(320),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(771),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(771),
    [sym_bitmask_dcl] = STATE(771),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(771),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(771),
    [sym_enum_dcl] = STATE(771),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(771),
    [sym_union_def] = STATE(771),
    [sym_type_id_dcl] = STATE(771),
    [sym_import_dcl] = STATE(771),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(320),
    [sym_op_with_context] = STATE(771),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_home_export] = STATE(63),
    [sym_factory_dcl] = STATE(692),
    [sym_finder_dcl] = STATE(692),
    [sym_native_dcl] = STATE(771),
    [sym_struct_forward_dcl] = STATE(771),
    [sym_struct_def] = STATE(771),
    [sym_const_dcl] = STATE(771),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_home_body_repeat1] = STATE(9),
    [anon_sym_short] = ACTIONS(306),
    [anon_sym_int16] = ACTIONS(306),
    [anon_sym_long] = ACTIONS(309),
    [anon_sym_int32] = ACTIONS(309),
    [anon_sym_longlong] = ACTIONS(312),
    [anon_sym_int64] = ACTIONS(315),
    [sym_unsigned_tiny_int] = ACTIONS(318),
    [sym_boolean_type] = ACTIONS(321),
    [anon_sym_fixed] = ACTIONS(324),
    [sym_octet_type] = ACTIONS(321),
    [sym_signed_tiny_int] = ACTIONS(327),
    [anon_sym_unsignedshort] = ACTIONS(330),
    [anon_sym_uint16] = ACTIONS(333),
    [anon_sym_unsignedlong] = ACTIONS(336),
    [anon_sym_uint32] = ACTIONS(336),
    [anon_sym_unsignedlonglong] = ACTIONS(339),
    [anon_sym_uint64] = ACTIONS(342),
    [anon_sym_float] = ACTIONS(345),
    [anon_sym_double] = ACTIONS(345),
    [anon_sym_longdouble] = ACTIONS(348),
    [anon_sym_char] = ACTIONS(351),
    [anon_sym_wchar] = ACTIONS(351),
    [anon_sym_COLON_COLON] = ACTIONS(354),
    [anon_sym_string] = ACTIONS(357),
    [anon_sym_wstring] = ACTIONS(357),
    [anon_sym_any] = ACTIONS(360),
    [anon_sym_sequence] = ACTIONS(363),
    [anon_sym_map] = ACTIONS(366),
    [anon_sym_exception] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_abstract] = ACTIONS(374),
    [anon_sym_void] = ACTIONS(377),
    [anon_sym_readonly] = ACTIONS(380),
    [anon_sym_attribute] = ACTIONS(383),
    [anon_sym_bitset] = ACTIONS(386),
    [anon_sym_bitmask] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_valuetype] = ACTIONS(395),
    [anon_sym_struct] = ACTIONS(398),
    [anon_sym_union] = ACTIONS(401),
    [anon_sym_enum] = ACTIONS(404),
    [anon_sym_const] = ACTIONS(407),
    [anon_sym_custom] = ACTIONS(410),
    [anon_sym_factory] = ACTIONS(413),
    [anon_sym_typedef] = ACTIONS(416),
    [anon_sym_ATignore_literal_names] = ACTIONS(419),
    [anon_sym_typeid] = ACTIONS(422),
    [anon_sym_import] = ACTIONS(425),
    [anon_sym_Object] = ACTIONS(428),
    [anon_sym_oneway] = ACTIONS(431),
    [sym_value_base_type] = ACTIONS(321),
    [anon_sym_finder] = ACTIONS(434),
    [anon_sym_native] = ACTIONS(437),
    [sym_identifier] = ACTIONS(440),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [10] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_interface_body] = STATE(574),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(10),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_interface_body_repeat1] = STATE(18),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_interface_body] = STATE(706),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(11),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_interface_body_repeat1] = STATE(18),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(14),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(15),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_interface_body_repeat1] = STATE(19),
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
  [16] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(16),
    [aux_sym_interface_def_repeat1] = STATE(238),
    [aux_sym_interface_body_repeat1] = STATE(12),
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
  [17] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(17),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
  [18] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(18),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
  [19] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(19),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
  [20] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(20),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
  [21] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(684),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_except_dcl] = STATE(702),
    [sym_export] = STATE(75),
    [sym_op_dcl] = STATE(423),
    [sym_op_type_spec] = STATE(714),
    [sym_attr_dcl] = STATE(702),
    [sym_readonly_attr_spec] = STATE(718),
    [sym_attr_spec] = STATE(718),
    [sym_bitset_dcl] = STATE(702),
    [sym_bitmask_dcl] = STATE(702),
    [sym_annotation_appl] = STATE(198),
    [sym_value_dcl] = STATE(702),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(702),
    [sym_enum_dcl] = STATE(702),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(702),
    [sym_union_def] = STATE(702),
    [sym_type_id_dcl] = STATE(702),
    [sym_import_dcl] = STATE(702),
    [sym_object_type] = STATE(252),
    [sym_op_oneway_dcl] = STATE(423),
    [sym_op_with_context] = STATE(702),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_native_dcl] = STATE(702),
    [sym_struct_forward_dcl] = STATE(702),
    [sym_struct_def] = STATE(702),
    [sym_const_dcl] = STATE(702),
    [sym_comment] = STATE(21),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
  [22] = {
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_tpl_definition] = STATE(111),
    [sym_template_module_inst] = STATE(715),
    [sym_template_module_ref] = STATE(615),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(108),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(22),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(24),
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
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_tpl_definition] = STATE(111),
    [sym_template_module_inst] = STATE(715),
    [sym_template_module_ref] = STATE(615),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(108),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(23),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(23),
    [anon_sym_exception] = ACTIONS(598),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_local] = ACTIONS(603),
    [anon_sym_abstract] = ACTIONS(606),
    [anon_sym_interface] = ACTIONS(609),
    [anon_sym_bitset] = ACTIONS(612),
    [anon_sym_bitmask] = ACTIONS(615),
    [anon_sym_ATannotation] = ACTIONS(618),
    [anon_sym_AT] = ACTIONS(621),
    [anon_sym_module] = ACTIONS(624),
    [anon_sym_valuetype] = ACTIONS(627),
    [anon_sym_eventtype] = ACTIONS(630),
    [anon_sym_struct] = ACTIONS(633),
    [anon_sym_union] = ACTIONS(636),
    [anon_sym_enum] = ACTIONS(639),
    [anon_sym_const] = ACTIONS(642),
    [anon_sym_alias] = ACTIONS(645),
    [anon_sym_custom] = ACTIONS(648),
    [anon_sym_typedef] = ACTIONS(651),
    [anon_sym_ATignore_literal_names] = ACTIONS(654),
    [anon_sym_typeid] = ACTIONS(657),
    [anon_sym_typeprefix] = ACTIONS(660),
    [anon_sym_import] = ACTIONS(663),
    [anon_sym_component] = ACTIONS(666),
    [anon_sym_home] = ACTIONS(669),
    [anon_sym_porttype] = ACTIONS(672),
    [anon_sym_connector] = ACTIONS(675),
    [anon_sym_native] = ACTIONS(678),
    [anon_sym_POUNDdefine] = ACTIONS(681),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [24] = {
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_tpl_definition] = STATE(111),
    [sym_template_module_inst] = STATE(715),
    [sym_template_module_ref] = STATE(615),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(108),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(24),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(23),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(684),
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
  [25] = {
    [sym_preproc_call] = STATE(110),
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(25),
    [aux_sym_specification_repeat1] = STATE(97),
    [aux_sym_specification_repeat2] = STATE(30),
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
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(26),
    [aux_sym_specification_repeat2] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(688),
    [anon_sym_exception] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(688),
    [anon_sym_local] = ACTIONS(693),
    [anon_sym_abstract] = ACTIONS(696),
    [anon_sym_interface] = ACTIONS(699),
    [anon_sym_bitset] = ACTIONS(702),
    [anon_sym_bitmask] = ACTIONS(705),
    [anon_sym_ATannotation] = ACTIONS(708),
    [anon_sym_AT] = ACTIONS(711),
    [anon_sym_module] = ACTIONS(714),
    [anon_sym_valuetype] = ACTIONS(717),
    [anon_sym_eventtype] = ACTIONS(720),
    [anon_sym_struct] = ACTIONS(723),
    [anon_sym_union] = ACTIONS(726),
    [anon_sym_enum] = ACTIONS(729),
    [anon_sym_const] = ACTIONS(732),
    [anon_sym_custom] = ACTIONS(735),
    [anon_sym_typedef] = ACTIONS(738),
    [anon_sym_ATignore_literal_names] = ACTIONS(741),
    [anon_sym_typeid] = ACTIONS(744),
    [anon_sym_typeprefix] = ACTIONS(747),
    [anon_sym_import] = ACTIONS(750),
    [anon_sym_component] = ACTIONS(753),
    [anon_sym_home] = ACTIONS(756),
    [anon_sym_porttype] = ACTIONS(759),
    [anon_sym_connector] = ACTIONS(762),
    [anon_sym_native] = ACTIONS(765),
    [anon_sym_POUNDdefine] = ACTIONS(768),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [27] = {
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(27),
    [aux_sym_specification_repeat2] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(686),
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
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [28] = {
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(28),
    [aux_sym_specification_repeat2] = STATE(29),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(771),
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
  [29] = {
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(29),
    [aux_sym_specification_repeat2] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(773),
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
    [sym_except_dcl] = STATE(715),
    [sym_interface_dcl] = STATE(715),
    [sym_interface_kind] = STATE(712),
    [sym_interface_forward_dcl] = STATE(710),
    [sym_interface_def] = STATE(710),
    [sym_interface_header] = STATE(695),
    [sym_bitset_dcl] = STATE(715),
    [sym_bitmask_dcl] = STATE(715),
    [sym_annotation_dcl] = STATE(715),
    [sym_annotation_appl] = STATE(198),
    [sym_template_module_dcl] = STATE(715),
    [sym_template_module_inst] = STATE(715),
    [sym_value_dcl] = STATE(715),
    [sym_value_def] = STATE(683),
    [sym_value_kind] = STATE(680),
    [sym_value_header] = STATE(679),
    [sym_value_forward_dcl] = STATE(683),
    [sym_typedef_dcl] = STATE(715),
    [sym_enum_dcl] = STATE(715),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(715),
    [sym_union_def] = STATE(715),
    [sym_type_id_dcl] = STATE(715),
    [sym_type_prefix_dcl] = STATE(715),
    [sym_import_dcl] = STATE(715),
    [sym_value_box_def] = STATE(683),
    [sym_value_abs_def] = STATE(683),
    [sym_component_dcl] = STATE(715),
    [sym_component_forward_dcl] = STATE(672),
    [sym_component_def] = STATE(672),
    [sym_component_header] = STATE(670),
    [sym_home_dcl] = STATE(715),
    [sym_home_header] = STATE(668),
    [sym_event_dcl] = STATE(715),
    [sym_event_forward_dcl] = STATE(665),
    [sym_event_abs_def] = STATE(665),
    [sym_event_def] = STATE(665),
    [sym_event_header] = STATE(543),
    [sym_porttype_dcl] = STATE(715),
    [sym_porttype_forward_dcl] = STATE(648),
    [sym_porttype_def] = STATE(648),
    [sym_connector_dcl] = STATE(715),
    [sym_connector_header] = STATE(645),
    [sym__definition] = STATE(107),
    [sym_native_dcl] = STATE(715),
    [sym_module_dcl] = STATE(715),
    [sym_struct_forward_dcl] = STATE(715),
    [sym_struct_def] = STATE(715),
    [sym_predefine] = STATE(105),
    [sym_const_dcl] = STATE(715),
    [sym_comment] = STATE(30),
    [aux_sym_specification_repeat2] = STATE(26),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(775),
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
    [anon_sym_POUNDdefine] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [31] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(165),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(440),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_const_expr] = STATE(440),
    [sym_or_expr] = STATE(186),
    [sym_xor_expr] = STATE(177),
    [sym_and_expr] = STATE(174),
    [sym_shift_expr] = STATE(168),
    [sym_add_expr] = STATE(166),
    [sym_mult_expr] = STATE(151),
    [sym_unary_expr] = STATE(144),
    [sym_unary_operator] = STATE(163),
    [sym_literal] = STATE(146),
    [sym_string_literal] = STATE(145),
    [sym_char_literal] = STATE(145),
    [sym_boolean_literal] = STATE(145),
    [sym_actual_parameters] = STATE(743),
    [sym_actual_parameter] = STATE(332),
    [sym_object_type] = STATE(252),
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
    [anon_sym_COLON_COLON] = ACTIONS(777),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(779),
    [anon_sym_DASH] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(783),
    [anon_sym_L] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [anon_sym_TRUE] = ACTIONS(791),
    [anon_sym_FALSE] = ACTIONS(791),
    [sym_number_literal] = ACTIONS(793),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(795),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [32] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(165),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(440),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_const_expr] = STATE(440),
    [sym_or_expr] = STATE(186),
    [sym_xor_expr] = STATE(177),
    [sym_and_expr] = STATE(174),
    [sym_shift_expr] = STATE(168),
    [sym_add_expr] = STATE(166),
    [sym_mult_expr] = STATE(151),
    [sym_unary_expr] = STATE(144),
    [sym_unary_operator] = STATE(163),
    [sym_literal] = STATE(146),
    [sym_string_literal] = STATE(145),
    [sym_char_literal] = STATE(145),
    [sym_boolean_literal] = STATE(145),
    [sym_actual_parameter] = STATE(537),
    [sym_object_type] = STATE(252),
    [sym_comment] = STATE(32),
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
    [anon_sym_COLON_COLON] = ACTIONS(777),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_wstring] = ACTIONS(99),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_sequence] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(779),
    [anon_sym_DASH] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(783),
    [anon_sym_L] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [anon_sym_TRUE] = ACTIONS(791),
    [anon_sym_FALSE] = ACTIONS(791),
    [sym_number_literal] = ACTIONS(793),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(795),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [33] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_type_spec] = STATE(286),
    [sym_simple_type_spec] = STATE(297),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(297),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_bitset_dcl] = STATE(286),
    [sym_bitmask_dcl] = STATE(286),
    [sym_annotation_appl] = STATE(198),
    [sym_enum_dcl] = STATE(286),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(286),
    [sym_union_def] = STATE(286),
    [sym_element_spec] = STATE(713),
    [sym_object_type] = STATE(252),
    [sym_struct_forward_dcl] = STATE(286),
    [sym_struct_def] = STATE(286),
    [sym_comment] = STATE(33),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    [anon_sym_RBRACE] = ACTIONS(797),
    [anon_sym_bitset] = ACTIONS(119),
    [anon_sym_bitmask] = ACTIONS(121),
    [anon_sym_default] = ACTIONS(799),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_struct] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_case] = ACTIONS(799),
    [anon_sym_Object] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [34] = {
    [sym_signed_short_int] = STATE(210),
    [sym_signed_long_int] = STATE(210),
    [sym_signed_longlong_int] = STATE(210),
    [sym_unsigned_int] = STATE(244),
    [sym_integer_type] = STATE(252),
    [sym_signed_int] = STATE(244),
    [sym_unsigned_short_int] = STATE(215),
    [sym_unsigned_long_int] = STATE(215),
    [sym_unsigned_longlong_int] = STATE(215),
    [sym_floating_pt_type] = STATE(252),
    [sym_char_type] = STATE(252),
    [sym_scoped_name] = STATE(253),
    [sym_string_type] = STATE(254),
    [sym_simple_type_spec] = STATE(243),
    [sym_base_type_spec] = STATE(255),
    [sym_any_type] = STATE(252),
    [sym_fixed_pt_type] = STATE(254),
    [sym_template_type_spec] = STATE(243),
    [sym_sequence_type] = STATE(254),
    [sym_map_type] = STATE(254),
    [sym_bitset_dcl] = STATE(243),
    [sym_bitmask_dcl] = STATE(243),
    [sym_annotation_appl] = STATE(198),
    [sym_type_declarator] = STATE(572),
    [sym_enum_dcl] = STATE(243),
    [sym_enum_anno] = STATE(677),
    [sym_union_forward_dcl] = STATE(243),
    [sym_union_def] = STATE(243),
    [sym_object_type] = STATE(252),
    [sym_struct_forward_dcl] = STATE(243),
    [sym_struct_def] = STATE(243),
    [sym_comment] = STATE(34),
    [aux_sym_interface_def_repeat1] = STATE(238),
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
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_except_dcl_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_except_dcl_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1015] = 41,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_except_dcl_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1160] = 41,
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
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_AT,
    STATE(43), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_except_dcl_repeat1,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1305] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(825), 1,
      anon_sym_longlong,
    ACTIONS(828), 1,
      anon_sym_int64,
    ACTIONS(831), 1,
      sym_unsigned_tiny_int,
    ACTIONS(837), 1,
      anon_sym_fixed,
    ACTIONS(840), 1,
      sym_signed_tiny_int,
    ACTIONS(843), 1,
      anon_sym_unsignedshort,
    ACTIONS(846), 1,
      anon_sym_uint16,
    ACTIONS(852), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(855), 1,
      anon_sym_uint64,
    ACTIONS(861), 1,
      anon_sym_longdouble,
    ACTIONS(867), 1,
      anon_sym_COLON_COLON,
    ACTIONS(873), 1,
      anon_sym_any,
    ACTIONS(876), 1,
      anon_sym_sequence,
    ACTIONS(879), 1,
      anon_sym_map,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    ACTIONS(884), 1,
      anon_sym_AT,
    ACTIONS(887), 1,
      anon_sym_Object,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    ACTIONS(819), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(822), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(849), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(858), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(864), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(870), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(44), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(834), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_interface_def_repeat1,
    STATE(91), 1,
      sym_member,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(242), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1593] = 40,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(901), 1,
      anon_sym_longlong,
    ACTIONS(904), 1,
      anon_sym_int64,
    ACTIONS(907), 1,
      sym_unsigned_tiny_int,
    ACTIONS(913), 1,
      anon_sym_fixed,
    ACTIONS(916), 1,
      sym_signed_tiny_int,
    ACTIONS(919), 1,
      anon_sym_unsignedshort,
    ACTIONS(922), 1,
      anon_sym_uint16,
    ACTIONS(928), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(931), 1,
      anon_sym_uint64,
    ACTIONS(937), 1,
      anon_sym_longdouble,
    ACTIONS(943), 1,
      anon_sym_COLON_COLON,
    ACTIONS(949), 1,
      anon_sym_any,
    ACTIONS(952), 1,
      anon_sym_sequence,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
    ACTIONS(957), 1,
      anon_sym_enum,
    ACTIONS(960), 1,
      anon_sym_const,
    ACTIONS(963), 1,
      anon_sym_typedef,
    ACTIONS(966), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(969), 1,
      sym_identifier,
    STATE(88), 1,
      sym_annotation_member,
    STATE(89), 1,
      sym_annotation_body,
    STATE(515), 1,
      sym_annotation_member_type,
    STATE(516), 1,
      sym_scoped_name,
    STATE(677), 1,
      sym_enum_anno,
    ACTIONS(895), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(898), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(910), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(925), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(934), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(940), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(946), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(46), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(590), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(591), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(597), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1735] = 41,
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
    ACTIONS(974), 1,
      anon_sym_fixed,
    ACTIONS(976), 1,
      anon_sym_any,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    ACTIONS(980), 1,
      anon_sym_ATignore_literal_names,
    STATE(46), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(88), 1,
      sym_annotation_member,
    STATE(89), 1,
      sym_annotation_body,
    STATE(515), 1,
      sym_annotation_member_type,
    STATE(516), 1,
      sym_scoped_name,
    STATE(677), 1,
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
    ACTIONS(972), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(590), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(591), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(597), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1879] = 40,
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
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(982), 1,
      anon_sym_LBRACE,
    ACTIONS(984), 1,
      anon_sym_COLON,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(988), 1,
      anon_sym_supports,
    STATE(48), 1,
      sym_comment,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(316), 1,
      sym_scoped_name,
    STATE(720), 1,
      sym_type_spec,
    STATE(723), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2021] = 41,
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
    ACTIONS(974), 1,
      anon_sym_fixed,
    ACTIONS(976), 1,
      anon_sym_any,
    ACTIONS(980), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(88), 1,
      sym_annotation_member,
    STATE(89), 1,
      sym_annotation_body,
    STATE(515), 1,
      sym_annotation_member_type,
    STATE(516), 1,
      sym_scoped_name,
    STATE(677), 1,
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
    ACTIONS(972), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(590), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(591), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(597), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [2165] = 38,
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
    ACTIONS(803), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_interface_def_repeat1,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(236), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2301] = 35,
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
    ACTIONS(992), 1,
      anon_sym_sequence,
    ACTIONS(996), 1,
      anon_sym_const,
    STATE(51), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(319), 1,
      sym_formal_parameter,
    STATE(651), 1,
      sym_formal_parameters,
    STATE(774), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(674), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(994), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2431] = 34,
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
    ACTIONS(992), 1,
      anon_sym_sequence,
    ACTIONS(996), 1,
      anon_sym_const,
    STATE(52), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(534), 1,
      sym_formal_parameter,
    STATE(774), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(674), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
    ACTIONS(994), 8,
      anon_sym_exception,
      anon_sym_interface,
      anon_sym_typename,
      anon_sym_valuetype,
      anon_sym_eventtype,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_enum,
  [2558] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(1000), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(998), 48,
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
  [2627] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(1004), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1002), 48,
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
  [2696] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(1008), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1006), 48,
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
  [2765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(1012), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1010), 48,
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
  [2834] = 37,
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
    ACTIONS(1014), 1,
      anon_sym_GT,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(772), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [2967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(1020), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1018), 48,
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
    STATE(59), 1,
      sym_comment,
    ACTIONS(1024), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1022), 48,
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
    STATE(60), 1,
      sym_comment,
    ACTIONS(1028), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1026), 48,
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
    STATE(61), 1,
      sym_comment,
    ACTIONS(1020), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1018), 47,
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
    STATE(62), 1,
      sym_comment,
    ACTIONS(1032), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1030), 47,
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
    STATE(63), 1,
      sym_comment,
    ACTIONS(1036), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1034), 47,
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
    STATE(64), 1,
      sym_comment,
    ACTIONS(1040), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1038), 47,
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
    STATE(65), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(472), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(66), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(346), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(67), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(485), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(68), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(480), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(69), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(484), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(70), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(417), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    ACTIONS(101), 1,
      anon_sym_any,
    ACTIONS(103), 1,
      anon_sym_sequence,
    ACTIONS(105), 1,
      anon_sym_map,
    ACTIONS(147), 1,
      anon_sym_Object,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(316), 1,
      sym_scoped_name,
    STATE(760), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(72), 1,
      sym_comment,
    STATE(235), 1,
      sym_type_spec,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(73), 1,
      sym_comment,
    STATE(253), 1,
      sym_scoped_name,
    STATE(255), 1,
      sym_base_type_spec,
    STATE(529), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(297), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(254), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(252), 5,
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
    STATE(74), 1,
      sym_comment,
    ACTIONS(1020), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1018), 45,
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
    STATE(75), 1,
      sym_comment,
    ACTIONS(1044), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1042), 45,
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
    ACTIONS(974), 1,
      anon_sym_fixed,
    STATE(76), 1,
      sym_comment,
    STATE(513), 1,
      sym_scoped_name,
    STATE(582), 1,
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
    ACTIONS(972), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(597), 6,
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
    ACTIONS(974), 1,
      anon_sym_fixed,
    STATE(77), 1,
      sym_comment,
    STATE(513), 1,
      sym_scoped_name,
    STATE(554), 1,
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
    ACTIONS(972), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(597), 6,
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
    STATE(78), 1,
      sym_comment,
    ACTIONS(1048), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1046), 34,
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
    STATE(79), 1,
      sym_comment,
    ACTIONS(1052), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1050), 34,
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
    ACTIONS(1058), 1,
      anon_sym_AT,
    STATE(96), 1,
      sym_annotation_appl,
    STATE(80), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1056), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1054), 26,
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
  [5093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(1063), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1061), 26,
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
  [5140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(1067), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1065), 26,
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
  [5187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(1071), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1069), 26,
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
  [5234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(1075), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1073), 26,
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
  [5281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(1079), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1077), 26,
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
  [5328] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_comment,
    ACTIONS(1083), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1081), 26,
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
    STATE(87), 1,
      sym_comment,
    ACTIONS(1089), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1087), 26,
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
    STATE(88), 1,
      sym_comment,
    ACTIONS(1093), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1091), 26,
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
    STATE(89), 1,
      sym_comment,
    ACTIONS(1097), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1095), 26,
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
    STATE(90), 1,
      sym_comment,
    ACTIONS(1101), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1099), 26,
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
    STATE(91), 1,
      sym_comment,
    ACTIONS(1105), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1103), 26,
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
    STATE(92), 1,
      sym_comment,
    ACTIONS(1109), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1107), 26,
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
  [5659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(1113), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1111), 26,
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
    STATE(94), 1,
      sym_comment,
    ACTIONS(1117), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
    ACTIONS(1115), 26,
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
  [5753] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(1121), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1119), 26,
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
    STATE(96), 1,
      sym_comment,
    ACTIONS(1125), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1123), 26,
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
  [5845] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1129), 1,
      sym_preproc_directive,
    STATE(110), 1,
      sym_preproc_call,
    STATE(97), 2,
      sym_comment,
      aux_sym_specification_repeat1,
    ACTIONS(1132), 3,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1127), 25,
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
  [5894] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(1087), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1089), 27,
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
  [5939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(1077), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1079), 27,
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
  [5984] = 24,
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
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(1134), 1,
      sym_boolean_type,
    STATE(100), 1,
      sym_comment,
    STATE(444), 1,
      sym_scoped_name,
    STATE(735), 1,
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
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(736), 2,
      sym_integer_type,
      sym_char_type,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [6067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(1115), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1117), 27,
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
  [6112] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(1138), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1136), 26,
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
  [6157] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(1142), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1140), 28,
      ts_builtin_sym_end,
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
  [6201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(1146), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1144), 28,
      ts_builtin_sym_end,
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
  [6245] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1148), 28,
      ts_builtin_sym_end,
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
  [6289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(1154), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1152), 27,
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
  [6332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1156), 27,
      ts_builtin_sym_end,
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
  [6375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(1162), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1160), 27,
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
  [6418] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(1166), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1164), 25,
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
  [6461] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(1170), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1168), 25,
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
  [6504] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(1174), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1172), 27,
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
  [6547] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(1178), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1176), 25,
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
  [6590] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(1180), 1,
      sym_identifier,
    STATE(113), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(337), 1,
      sym_annotation_appl_param,
    STATE(733), 1,
      sym_annotation_appl_params,
    STATE(753), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6676] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(1180), 1,
      sym_identifier,
    STATE(114), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(337), 1,
      sym_annotation_appl_param,
    STATE(753), 1,
      sym_const_expr,
    STATE(773), 1,
      sym_annotation_appl_params,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6762] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(1180), 1,
      sym_identifier,
    STATE(115), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(337), 1,
      sym_annotation_appl_param,
    STATE(753), 1,
      sym_const_expr,
    STATE(767), 1,
      sym_annotation_appl_params,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6848] = 27,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(1180), 1,
      sym_identifier,
    STATE(116), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(337), 1,
      sym_annotation_appl_param,
    STATE(753), 1,
      sym_const_expr,
    STATE(776), 1,
      sym_annotation_appl_params,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6934] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(762), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7017] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(118), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(721), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7100] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(119), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(681), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7183] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(120), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(507), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7266] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(709), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7349] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(122), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(777), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7432] = 26,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(318), 1,
      sym_const_expr,
    STATE(551), 1,
      sym_positive_int_const,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7515] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(124), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(522), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7595] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(125), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(609), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7675] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(126), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(719), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7755] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(127), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(621), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7835] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_long,
    ACTIONS(85), 1,
      anon_sym_unsignedlong,
    ACTIONS(1184), 1,
      anon_sym_int32,
    ACTIONS(1186), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1190), 1,
      sym_signed_tiny_int,
    ACTIONS(1192), 1,
      anon_sym_uint32,
    STATE(128), 1,
      sym_comment,
    STATE(666), 1,
      sym_integer_type,
    STATE(667), 1,
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
    ACTIONS(1182), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(1188), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(244), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(210), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(215), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
  [7903] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(129), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(552), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7983] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(130), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(598), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8063] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(131), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(177), 1,
      sym_xor_expr,
    STATE(186), 1,
      sym_or_expr,
    STATE(711), 1,
      sym_const_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8143] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(174), 1,
      sym_and_expr,
    STATE(180), 1,
      sym_xor_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8217] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(133), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(168), 1,
      sym_shift_expr,
    STATE(175), 1,
      sym_and_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8288] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
    ACTIONS(1196), 1,
      anon_sym_readonly,
    ACTIONS(1198), 1,
      anon_sym_attribute,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    ACTIONS(1204), 1,
      anon_sym_emits,
    ACTIONS(1206), 1,
      anon_sym_publishes,
    ACTIONS(1208), 1,
      anon_sym_consumes,
    STATE(134), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_component_body_repeat1,
    STATE(170), 1,
      sym_component_export,
    STATE(694), 1,
      sym_component_body,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(755), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8348] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(135), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(169), 1,
      sym_shift_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8416] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1196), 1,
      anon_sym_readonly,
    ACTIONS(1198), 1,
      anon_sym_attribute,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    ACTIONS(1204), 1,
      anon_sym_emits,
    ACTIONS(1206), 1,
      anon_sym_publishes,
    ACTIONS(1208), 1,
      anon_sym_consumes,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_component_body_repeat1,
    STATE(170), 1,
      sym_component_export,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(755), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8473] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(137), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(151), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    STATE(164), 1,
      sym_add_expr,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8538] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
    ACTIONS(1216), 1,
      anon_sym_readonly,
    ACTIONS(1219), 1,
      anon_sym_attribute,
    ACTIONS(1222), 1,
      anon_sym_provides,
    ACTIONS(1225), 1,
      anon_sym_uses,
    ACTIONS(1228), 1,
      anon_sym_emits,
    ACTIONS(1231), 1,
      anon_sym_publishes,
    ACTIONS(1234), 1,
      anon_sym_consumes,
    STATE(170), 1,
      sym_component_export,
    ACTIONS(1237), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(138), 2,
      sym_comment,
      aux_sym_component_body_repeat1,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(755), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8593] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(139), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(144), 1,
      sym_unary_expr,
    STATE(146), 1,
      sym_literal,
    STATE(149), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_operator,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8655] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(783), 1,
      anon_sym_TILDE,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(140), 1,
      sym_comment,
    STATE(141), 1,
      sym_scoped_name,
    STATE(146), 1,
      sym_literal,
    STATE(152), 1,
      sym_unary_expr,
    STATE(163), 1,
      sym_unary_operator,
    ACTIONS(779), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8714] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(141), 1,
      sym_comment,
    ACTIONS(1242), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1244), 13,
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
  [8747] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(142), 1,
      sym_comment,
    ACTIONS(1246), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1248), 13,
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
  [8780] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1196), 1,
      anon_sym_readonly,
    ACTIONS(1198), 1,
      anon_sym_attribute,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(182), 1,
      sym_port_ref,
    STATE(189), 1,
      sym_connector_export,
    STATE(669), 1,
      sym_attr_dcl,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [8830] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(144), 1,
      sym_comment,
    ACTIONS(1252), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1254), 14,
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
  [8860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(1256), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1258), 14,
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
  [8890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
      sym_comment,
    ACTIONS(1242), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1244), 14,
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
  [8920] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1196), 1,
      anon_sym_readonly,
    ACTIONS(1198), 1,
      anon_sym_attribute,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    ACTIONS(1260), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_port_body_repeat1,
    STATE(184), 1,
      sym_port_ref,
    STATE(187), 1,
      sym_port_export,
    STATE(688), 1,
      sym_attr_dcl,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [8970] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1262), 1,
      anon_sym_RBRACE,
    ACTIONS(1264), 1,
      anon_sym_readonly,
    ACTIONS(1267), 1,
      anon_sym_attribute,
    ACTIONS(1270), 1,
      anon_sym_provides,
    ACTIONS(1273), 1,
      anon_sym_uses,
    STATE(184), 1,
      sym_port_ref,
    STATE(187), 1,
      sym_port_export,
    STATE(688), 1,
      sym_attr_dcl,
    ACTIONS(1276), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(148), 2,
      sym_comment,
      aux_sym_port_body_repeat1,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9018] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1279), 1,
      anon_sym_GT,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_comment,
    ACTIONS(1283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1281), 12,
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
  [9052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(1287), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1289), 14,
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
  [9082] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1291), 1,
      anon_sym_GT,
    STATE(151), 1,
      sym_comment,
    ACTIONS(1283), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1293), 12,
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
  [9116] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(1295), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1297), 14,
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
  [9146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(153), 1,
      sym_comment,
    ACTIONS(1299), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1301), 14,
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
  [9176] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(1246), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1248), 14,
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
  [9206] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1303), 1,
      anon_sym_RBRACE,
    ACTIONS(1305), 1,
      anon_sym_readonly,
    ACTIONS(1308), 1,
      anon_sym_attribute,
    ACTIONS(1311), 1,
      anon_sym_provides,
    ACTIONS(1314), 1,
      anon_sym_uses,
    STATE(182), 1,
      sym_port_ref,
    STATE(189), 1,
      sym_connector_export,
    STATE(669), 1,
      sym_attr_dcl,
    ACTIONS(1317), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(155), 2,
      sym_comment,
      aux_sym_connector_dcl_repeat1,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_comment,
    ACTIONS(1320), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1322), 14,
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
  [9284] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(1324), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1326), 14,
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
  [9314] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(1328), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1330), 14,
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
  [9344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(159), 1,
      sym_comment,
    ACTIONS(1332), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1334), 14,
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
  [9374] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(1336), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1338), 14,
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
  [9404] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1196), 1,
      anon_sym_readonly,
    ACTIONS(1198), 1,
      anon_sym_attribute,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    ACTIONS(1340), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_port_body_repeat1,
    STATE(161), 1,
      sym_comment,
    STATE(184), 1,
      sym_port_ref,
    STATE(187), 1,
      sym_port_export,
    STATE(688), 1,
      sym_attr_dcl,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9454] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1196), 1,
      anon_sym_readonly,
    ACTIONS(1198), 1,
      anon_sym_attribute,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    STATE(143), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(162), 1,
      sym_comment,
    STATE(182), 1,
      sym_port_ref,
    STATE(189), 1,
      sym_connector_export,
    STATE(669), 1,
      sym_attr_dcl,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(718), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9501] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(785), 1,
      anon_sym_L,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    ACTIONS(793), 1,
      sym_number_literal,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(1342), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_scoped_name,
    STATE(154), 1,
      sym_literal,
    STATE(163), 1,
      sym_comment,
    ACTIONS(791), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(145), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9547] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1344), 1,
      anon_sym_GT,
    STATE(164), 1,
      sym_comment,
    ACTIONS(1348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1346), 10,
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
  [9576] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1242), 1,
      anon_sym_SLASH,
    ACTIONS(1350), 1,
      anon_sym_GT,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      sym_comment,
    ACTIONS(1244), 9,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9609] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1354), 1,
      anon_sym_GT,
    STATE(166), 1,
      sym_comment,
    ACTIONS(1348), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1356), 10,
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
  [9638] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1077), 1,
      anon_sym_SLASH,
    ACTIONS(1358), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_comment,
    ACTIONS(1079), 11,
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
  [9667] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1360), 1,
      anon_sym_GT,
    STATE(168), 1,
      sym_comment,
    ACTIONS(1364), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1362), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9694] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1366), 1,
      anon_sym_GT,
    STATE(169), 1,
      sym_comment,
    ACTIONS(1364), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1368), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9721] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(170), 1,
      sym_comment,
    ACTIONS(1370), 10,
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
  [9743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(171), 1,
      sym_comment,
    ACTIONS(1372), 10,
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
  [9765] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1374), 1,
      anon_sym_bitmask,
    ACTIONS(1376), 1,
      anon_sym_struct,
    STATE(172), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_interface_def_repeat1,
    STATE(198), 1,
      sym_annotation_appl,
    STATE(548), 1,
      sym_interface_header,
    STATE(660), 1,
      sym_interface_kind,
    ACTIONS(13), 2,
      anon_sym_local,
      anon_sym_abstract,
  [9803] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1200), 1,
      anon_sym_provides,
    ACTIONS(1202), 1,
      anon_sym_uses,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_port_ref,
    STATE(173), 1,
      sym_comment,
    STATE(722), 1,
      sym_port_body,
    ACTIONS(1210), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(653), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9837] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1382), 1,
      anon_sym_DOLLAR,
    STATE(174), 1,
      sym_comment,
    ACTIONS(1380), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1382), 1,
      anon_sym_DOLLAR,
    STATE(175), 1,
      sym_comment,
    ACTIONS(1384), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9883] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(176), 1,
      sym_comment,
    ACTIONS(1386), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1388), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [9906] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1392), 1,
      anon_sym_CARET,
    STATE(177), 1,
      sym_comment,
    ACTIONS(1390), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9928] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1394), 1,
      anon_sym_AT,
    STATE(198), 1,
      sym_annotation_appl,
    STATE(178), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1056), 5,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_struct,
  [9952] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1397), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_comment,
    ACTIONS(1083), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [9976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1392), 1,
      anon_sym_CARET,
    STATE(180), 1,
      sym_comment,
    ACTIONS(1399), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9998] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_SEMI,
    ACTIONS(1405), 1,
      anon_sym_getraises,
    ACTIONS(1407), 1,
      anon_sym_setraises,
    STATE(181), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(386), 1,
      sym_get_excep_expr,
    STATE(568), 1,
      sym_attr_raises_expr,
    STATE(570), 1,
      sym_set_excep_expr,
  [10032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(182), 1,
      sym_comment,
    ACTIONS(1409), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10051] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(183), 1,
      sym_comment,
    ACTIONS(1411), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(184), 1,
      sym_comment,
    ACTIONS(1413), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      sym_comment,
    ACTIONS(1415), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10108] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1419), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      sym_comment,
    ACTIONS(1417), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(187), 1,
      sym_comment,
    ACTIONS(1421), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10148] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    ACTIONS(1425), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_param_attribute,
    STATE(188), 1,
      sym_comment,
    STATE(381), 1,
      sym_param_dcl,
    STATE(577), 1,
      sym_parameter_dcls,
    ACTIONS(1427), 2,
      anon_sym_out,
      anon_sym_inout,
  [10177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(189), 1,
      sym_comment,
    ACTIONS(1429), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      sym_comment,
    ACTIONS(1431), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(191), 1,
      sym_comment,
    ACTIONS(1433), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [10234] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(1435), 1,
      anon_sym_L,
    STATE(192), 1,
      sym_comment,
    STATE(525), 1,
      sym_scoped_name,
    STATE(555), 1,
      sym_imported_scope,
    STATE(558), 1,
      sym_string_literal,
  [10265] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1439), 1,
      anon_sym_LBRACK,
    STATE(193), 1,
      sym_comment,
    STATE(196), 1,
      aux_sym_array_declarator_repeat1,
    STATE(298), 1,
      sym_fixed_array_size,
    ACTIONS(1437), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(194), 1,
      sym_comment,
    ACTIONS(1079), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10307] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1441), 1,
      anon_sym_RBRACE,
    ACTIONS(1443), 1,
      anon_sym_default,
    ACTIONS(1446), 1,
      anon_sym_case,
    STATE(33), 1,
      sym_case_label,
    STATE(352), 1,
      sym_case,
    STATE(195), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [10333] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1451), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_fixed_array_size,
    STATE(196), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1449), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10355] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1454), 1,
      anon_sym_RBRACE,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 1,
      sym_identifier,
    STATE(197), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_interface_def_repeat1,
    STATE(407), 1,
      sym_bit_value,
    STATE(436), 1,
      sym_annotation_appl,
  [10383] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_comment,
    ACTIONS(1125), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10401] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1460), 1,
      anon_sym_RBRACE,
    ACTIONS(1462), 1,
      anon_sym_default,
    ACTIONS(1464), 1,
      anon_sym_case,
    STATE(33), 1,
      sym_case_label,
    STATE(195), 1,
      aux_sym_union_def_repeat1,
    STATE(199), 1,
      sym_comment,
    STATE(352), 1,
      sym_case,
  [10429] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1466), 1,
      anon_sym_LBRACE,
    ACTIONS(1468), 1,
      anon_sym_COLON,
    ACTIONS(1470), 1,
      anon_sym_SEMI,
    ACTIONS(1472), 1,
      anon_sym_supports,
    STATE(200), 1,
      sym_comment,
    STATE(410), 1,
      sym_component_inheritance_spec,
    STATE(629), 1,
      sym_supported_interface_spec,
  [10457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(201), 1,
      sym_comment,
    ACTIONS(1089), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10475] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1462), 1,
      anon_sym_default,
    ACTIONS(1464), 1,
      anon_sym_case,
    ACTIONS(1474), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_case_label,
    STATE(199), 1,
      aux_sym_union_def_repeat1,
    STATE(202), 1,
      sym_comment,
    STATE(352), 1,
      sym_case,
  [10503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(203), 1,
      sym_comment,
    ACTIONS(1117), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10521] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1476), 1,
      anon_sym_RBRACE,
    ACTIONS(1478), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1480), 1,
      sym_identifier,
    STATE(204), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_enumerator_repeat1,
    STATE(415), 1,
      sym_enumerator,
    STATE(533), 1,
      sym_enum_modifier,
  [10549] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(205), 1,
      sym_comment,
    ACTIONS(1121), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10567] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1439), 1,
      anon_sym_LBRACK,
    STATE(193), 1,
      aux_sym_array_declarator_repeat1,
    STATE(206), 1,
      sym_comment,
    STATE(298), 1,
      sym_fixed_array_size,
    ACTIONS(1433), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10591] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 1,
      sym_identifier,
    ACTIONS(1482), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_interface_def_repeat1,
    STATE(389), 1,
      sym_bit_value,
    STATE(436), 1,
      sym_annotation_appl,
  [10619] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1478), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1480), 1,
      sym_identifier,
    ACTIONS(1484), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_enumerator_repeat1,
    STATE(374), 1,
      sym_enumerator,
    STATE(533), 1,
      sym_enum_modifier,
  [10647] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1486), 1,
      anon_sym_Object,
    ACTIONS(1488), 1,
      anon_sym_multiple,
    STATE(209), 1,
      sym_comment,
    STATE(482), 1,
      sym_scoped_name,
    STATE(642), 1,
      sym_interface_type,
  [10675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(210), 1,
      sym_comment,
    ACTIONS(1490), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10692] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1472), 1,
      anon_sym_supports,
    ACTIONS(1492), 1,
      anon_sym_COLON,
    ACTIONS(1494), 1,
      anon_sym_manages,
    STATE(211), 1,
      sym_comment,
    STATE(414), 1,
      sym_home_inheritance_spec,
    STATE(635), 1,
      sym_supported_interface_spec,
  [10717] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(212), 1,
      sym_comment,
    ACTIONS(1496), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(213), 1,
      sym_comment,
    ACTIONS(1498), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10751] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1486), 1,
      anon_sym_Object,
    STATE(214), 1,
      sym_comment,
    STATE(482), 1,
      sym_scoped_name,
    STATE(561), 1,
      sym_interface_type,
  [10776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(215), 1,
      sym_comment,
    ACTIONS(1500), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10793] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(1502), 1,
      anon_sym_truncatable,
    STATE(216), 1,
      sym_comment,
    STATE(289), 1,
      sym_scoped_name,
    STATE(290), 1,
      sym_value_name,
  [10818] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1504), 1,
      anon_sym_RBRACE,
    ACTIONS(1506), 1,
      anon_sym_bitfield,
    STATE(217), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(395), 1,
      sym_bitfield_spec,
    STATE(538), 1,
      sym_bitfield,
  [10843] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1508), 1,
      anon_sym_LBRACE,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1512), 1,
      anon_sym_SEMI,
    ACTIONS(1514), 1,
      anon_sym_supports,
    STATE(218), 1,
      sym_comment,
    STATE(547), 1,
      sym_value_inheritance_spec,
  [10868] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1506), 1,
      anon_sym_bitfield,
    ACTIONS(1516), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(395), 1,
      sym_bitfield_spec,
    STATE(538), 1,
      sym_bitfield,
  [10893] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1518), 1,
      anon_sym_LBRACE,
    ACTIONS(1520), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      sym_comment,
    STATE(581), 1,
      sym_value_inheritance_spec,
  [10918] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 1,
      sym_identifier,
    STATE(221), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_interface_def_repeat1,
    STATE(436), 1,
      sym_annotation_appl,
    STATE(503), 1,
      sym_bit_value,
  [10943] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1478), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1480), 1,
      sym_identifier,
    STATE(222), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_enumerator_repeat1,
    STATE(533), 1,
      sym_enum_modifier,
    STATE(535), 1,
      sym_enumerator,
  [10968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(223), 1,
      sym_comment,
    ACTIONS(1522), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(224), 1,
      sym_comment,
    ACTIONS(1524), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(225), 1,
      sym_comment,
    ACTIONS(1526), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11019] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1506), 1,
      anon_sym_bitfield,
    ACTIONS(1528), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(395), 1,
      sym_bitfield_spec,
    STATE(538), 1,
      sym_bitfield,
  [11044] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1425), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_param_attribute,
    STATE(227), 1,
      sym_comment,
    STATE(467), 1,
      sym_param_dcl,
    ACTIONS(1427), 2,
      anon_sym_out,
      anon_sym_inout,
  [11067] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 1,
      sym_identifier,
    STATE(228), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_interface_def_repeat1,
    STATE(407), 1,
      sym_bit_value,
    STATE(436), 1,
      sym_annotation_appl,
  [11092] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(229), 1,
      sym_comment,
    ACTIONS(1530), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11109] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 1,
      sym_identifier,
    STATE(230), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_interface_def_repeat1,
    STATE(375), 1,
      sym_bit_value,
    STATE(436), 1,
      sym_annotation_appl,
  [11134] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(231), 1,
      sym_comment,
    ACTIONS(1532), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1534), 1,
      anon_sym_COMMA,
    STATE(232), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1532), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(233), 1,
      sym_comment,
    ACTIONS(1537), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11189] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1541), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11212] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(235), 1,
      sym_comment,
    STATE(258), 1,
      sym_declarator,
    STATE(654), 1,
      sym_declarators,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11235] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(236), 1,
      sym_comment,
    STATE(258), 1,
      sym_declarator,
    STATE(405), 1,
      sym_declarators,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11258] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1545), 1,
      anon_sym_LT,
    STATE(237), 1,
      sym_comment,
    ACTIONS(1547), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11277] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1374), 1,
      anon_sym_bitmask,
    ACTIONS(1376), 1,
      anon_sym_struct,
    STATE(178), 1,
      aux_sym_interface_def_repeat1,
    STATE(198), 1,
      sym_annotation_appl,
    STATE(238), 1,
      sym_comment,
  [11302] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1549), 1,
      anon_sym_SEMI,
    ACTIONS(1551), 1,
      anon_sym_raises,
    STATE(239), 1,
      sym_comment,
    STATE(367), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(628), 1,
      sym_raises_expr,
  [11327] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1506), 1,
      anon_sym_bitfield,
    ACTIONS(1553), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(395), 1,
      sym_bitfield_spec,
    STATE(538), 1,
      sym_bitfield,
  [11352] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 1,
      sym_identifier,
    STATE(221), 1,
      aux_sym_interface_def_repeat1,
    STATE(241), 1,
      sym_comment,
    STATE(436), 1,
      sym_annotation_appl,
    STATE(512), 1,
      sym_bit_value,
  [11377] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(242), 1,
      sym_comment,
    STATE(258), 1,
      sym_declarator,
    STATE(387), 1,
      sym_declarators,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11400] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(243), 1,
      sym_comment,
    STATE(401), 1,
      sym_any_declarator,
    STATE(567), 1,
      sym_any_declarators,
    STATE(517), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11423] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(244), 1,
      sym_comment,
    ACTIONS(1555), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11440] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1557), 1,
      anon_sym_RBRACE,
    ACTIONS(1559), 1,
      anon_sym_bitfield,
    STATE(395), 1,
      sym_bitfield_spec,
    STATE(538), 1,
      sym_bitfield,
    STATE(245), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [11463] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1486), 1,
      anon_sym_Object,
    STATE(246), 1,
      sym_comment,
    STATE(482), 1,
      sym_scoped_name,
    STATE(647), 1,
      sym_interface_type,
  [11488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(247), 1,
      sym_comment,
    ACTIONS(1562), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11504] = 7,
    ACTIONS(1564), 1,
      anon_sym_AT,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1568), 1,
      aux_sym_comment_token1,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    STATE(248), 1,
      sym_comment,
    STATE(301), 1,
      aux_sym_interface_def_repeat1,
    STATE(442), 1,
      sym_annotation_appl,
  [11526] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
    ACTIONS(1574), 1,
      anon_sym_L,
    STATE(249), 1,
      sym_comment,
    STATE(382), 1,
      sym_string_literal,
  [11548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(250), 1,
      sym_comment,
    ACTIONS(1576), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11564] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    STATE(251), 1,
      sym_comment,
    STATE(487), 1,
      sym_raises_expr,
    ACTIONS(1578), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [11584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      sym_comment,
    ACTIONS(1580), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11600] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    STATE(253), 1,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [11618] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(254), 1,
      sym_comment,
    ACTIONS(1584), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(255), 1,
      sym_comment,
    ACTIONS(1352), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11650] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1574), 1,
      anon_sym_L,
    STATE(256), 1,
      sym_comment,
    STATE(585), 1,
      sym_string_literal,
  [11672] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1574), 1,
      anon_sym_L,
    STATE(257), 1,
      sym_comment,
    STATE(594), 1,
      sym_string_literal,
  [11694] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      sym_comment,
    STATE(284), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1588), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [11714] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1590), 1,
      anon_sym_LBRACE,
    ACTIONS(1592), 1,
      anon_sym_primarykey,
    STATE(259), 1,
      sym_comment,
    STATE(626), 1,
      sym_primary_key_spec,
  [11736] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(260), 1,
      sym_comment,
    ACTIONS(1594), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(261), 1,
      sym_comment,
    ACTIONS(1596), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [11768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(262), 1,
      sym_comment,
    ACTIONS(1598), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11784] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1600), 1,
      anon_sym_LBRACE,
    ACTIONS(1602), 1,
      anon_sym_COLON,
    ACTIONS(1604), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      sym_comment,
    STATE(658), 1,
      sym_interface_inheritance_spec,
  [11806] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1606), 1,
      anon_sym_COMMA,
    ACTIONS(1609), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
    STATE(264), 2,
      sym_comment,
      aux_sym_value_inheritance_spec_repeat1,
  [11824] = 7,
    ACTIONS(1564), 1,
      anon_sym_AT,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1611), 1,
      aux_sym_comment_token2,
    STATE(248), 1,
      aux_sym_interface_def_repeat1,
    STATE(265), 1,
      sym_comment,
    STATE(442), 1,
      sym_annotation_appl,
  [11846] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(266), 1,
      sym_comment,
    STATE(345), 1,
      sym_scoped_name,
    STATE(369), 1,
      sym_interface_name,
  [11868] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1615), 1,
      anon_sym_LBRACE,
    STATE(267), 1,
      sym_comment,
    STATE(584), 1,
      sym_value_inheritance_spec,
  [11890] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_COMMA,
    ACTIONS(1619), 1,
      anon_sym_LBRACE,
    ACTIONS(1621), 1,
      anon_sym_supports,
    STATE(268), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [11912] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(269), 1,
      sym_comment,
    STATE(289), 1,
      sym_scoped_name,
    STATE(393), 1,
      sym_value_name,
  [11934] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(270), 1,
      sym_comment,
    STATE(345), 1,
      sym_scoped_name,
    STATE(392), 1,
      sym_interface_name,
  [11956] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_COMMA,
    ACTIONS(1619), 1,
      anon_sym_LBRACE,
    ACTIONS(1621), 1,
      anon_sym_supports,
    STATE(264), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(271), 1,
      sym_comment,
  [11978] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1623), 1,
      anon_sym_COMMA,
    ACTIONS(1626), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(272), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [11996] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1628), 1,
      anon_sym_LBRACE,
    ACTIONS(1630), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_comment,
    ACTIONS(1632), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12016] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(274), 1,
      sym_comment,
    STATE(345), 1,
      sym_scoped_name,
    STATE(699), 1,
      sym_interface_name,
  [12038] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(275), 1,
      sym_comment,
    STATE(345), 1,
      sym_scoped_name,
    STATE(353), 1,
      sym_interface_name,
  [12060] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      anon_sym_supports,
    ACTIONS(1634), 1,
      anon_sym_LBRACE,
    STATE(276), 1,
      sym_comment,
    STATE(766), 1,
      sym_value_inheritance_spec,
  [12082] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1636), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1639), 1,
      sym_identifier,
    STATE(533), 1,
      sym_enum_modifier,
    STATE(277), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [12102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(278), 1,
      sym_comment,
    ACTIONS(1641), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(279), 1,
      sym_comment,
    ACTIONS(1643), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12134] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
    ACTIONS(1647), 1,
      anon_sym_in,
    STATE(280), 1,
      sym_comment,
    STATE(364), 1,
      sym_in_param_dcl,
    STATE(638), 1,
      sym_in_parameter_dcls,
  [12156] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    STATE(281), 1,
      sym_comment,
    STATE(468), 1,
      sym_raises_expr,
    ACTIONS(1649), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(282), 1,
      sym_comment,
    ACTIONS(1651), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(283), 1,
      sym_comment,
    ACTIONS(1653), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1586), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_declarators_repeat1,
    STATE(284), 1,
      sym_comment,
    ACTIONS(1655), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [12228] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_comment,
    STATE(341), 1,
      aux_sym_raises_expr_repeat1,
  [12250] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(286), 1,
      sym_comment,
    STATE(727), 1,
      sym_declarator,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12270] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(287), 1,
      sym_comment,
    STATE(373), 1,
      sym_declarator,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12290] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(268), 1,
      sym_value_name,
    STATE(288), 1,
      sym_comment,
    STATE(289), 1,
      sym_scoped_name,
  [12312] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(289), 1,
      sym_comment,
    ACTIONS(1659), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [12330] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_COMMA,
    ACTIONS(1661), 1,
      anon_sym_LBRACE,
    ACTIONS(1663), 1,
      anon_sym_supports,
    STATE(271), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(290), 1,
      sym_comment,
  [12352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(291), 1,
      sym_comment,
    ACTIONS(1665), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12368] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    ACTIONS(1667), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_comment,
    STATE(334), 1,
      aux_sym_raises_expr_repeat1,
  [12390] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1478), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1669), 1,
      sym_identifier,
    STATE(277), 1,
      aux_sym_enumerator_repeat1,
    STATE(293), 1,
      sym_comment,
    STATE(533), 1,
      sym_enum_modifier,
  [12412] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(294), 1,
      sym_comment,
    ACTIONS(1671), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12428] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
    ACTIONS(1675), 1,
      anon_sym_in,
    STATE(295), 1,
      sym_comment,
    STATE(379), 1,
      sym_init_param_dcl,
    STATE(592), 1,
      sym_init_param_dcls,
  [12450] = 6,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1677), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1679), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_comment,
    ACTIONS(1081), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_comment,
    ACTIONS(1681), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(298), 1,
      sym_comment,
    ACTIONS(1683), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12502] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_raises_expr_repeat1,
    STATE(299), 1,
      sym_comment,
    ACTIONS(1685), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12522] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(300), 1,
      sym_comment,
    STATE(459), 1,
      sym_any_declarator,
    STATE(517), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12542] = 6,
    ACTIONS(1054), 1,
      aux_sym_comment_token1,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1687), 1,
      anon_sym_AT,
    STATE(442), 1,
      sym_annotation_appl,
    STATE(301), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12562] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1592), 1,
      anon_sym_primarykey,
    ACTIONS(1690), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym_comment,
    STATE(557), 1,
      sym_primary_key_spec,
  [12584] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1592), 1,
      anon_sym_primarykey,
    ACTIONS(1692), 1,
      anon_sym_LBRACE,
    STATE(303), 1,
      sym_comment,
    STATE(698), 1,
      sym_primary_key_spec,
  [12606] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1694), 1,
      anon_sym_RPAREN,
    ACTIONS(1696), 1,
      anon_sym_in,
    STATE(304), 1,
      sym_comment,
    STATE(377), 1,
      sym_factory_param_dcl,
    STATE(589), 1,
      sym_factory_param_dcls,
  [12628] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_in,
    ACTIONS(1698), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym_comment,
    STATE(379), 1,
      sym_init_param_dcl,
    STATE(583), 1,
      sym_init_param_dcls,
  [12650] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    STATE(306), 1,
      sym_comment,
    ACTIONS(1077), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12666] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    STATE(307), 1,
      sym_comment,
    ACTIONS(1087), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12682] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(308), 1,
      sym_comment,
    STATE(345), 1,
      sym_scoped_name,
    STATE(524), 1,
      sym_interface_name,
  [12704] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    STATE(309), 1,
      sym_comment,
    ACTIONS(1115), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12720] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1617), 1,
      anon_sym_COMMA,
    ACTIONS(1700), 1,
      anon_sym_LBRACE,
    ACTIONS(1702), 1,
      anon_sym_supports,
    STATE(264), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(310), 1,
      sym_comment,
  [12742] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(311), 1,
      sym_comment,
    STATE(344), 1,
      sym_interface_name,
    STATE(345), 1,
      sym_scoped_name,
  [12764] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1704), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_comment,
    ACTIONS(1083), 2,
      anon_sym_AT,
      sym_identifier,
  [12784] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_identifier,
    ACTIONS(1706), 1,
      anon_sym_AT,
    STATE(436), 1,
      sym_annotation_appl,
    STATE(313), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12804] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1709), 1,
      anon_sym_COMMA,
    ACTIONS(1711), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_comment,
    STATE(391), 1,
      aux_sym_enum_dcl_repeat1,
  [12823] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1713), 1,
      anon_sym_GT,
    ACTIONS(1715), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_formal_parameters_repeat1,
  [12842] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1352), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12859] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(312), 1,
      sym_scoped_name,
    STATE(317), 1,
      sym_comment,
  [12878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1719), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12893] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1715), 1,
      anon_sym_COMMA,
    ACTIONS(1721), 1,
      anon_sym_GT,
    STATE(315), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(319), 1,
      sym_comment,
  [12912] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1723), 1,
      anon_sym_SEMI,
    ACTIONS(1725), 1,
      anon_sym_context,
    STATE(320), 1,
      sym_comment,
    STATE(687), 1,
      sym_context_expr,
  [12931] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1727), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1729), 1,
      sym_identifier,
    STATE(86), 1,
      sym_scoped_name,
    STATE(321), 1,
      sym_comment,
  [12950] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1725), 1,
      anon_sym_context,
    ACTIONS(1731), 1,
      anon_sym_SEMI,
    STATE(322), 1,
      sym_comment,
    STATE(687), 1,
      sym_context_expr,
  [12969] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1733), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1735), 1,
      sym_identifier,
    STATE(296), 1,
      sym_scoped_name,
    STATE(323), 1,
      sym_comment,
  [12988] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1737), 1,
      anon_sym_interface,
    ACTIONS(1739), 1,
      anon_sym_valuetype,
    ACTIONS(1741), 1,
      anon_sym_eventtype,
    STATE(324), 1,
      sym_comment,
  [13007] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(179), 1,
      sym_scoped_name,
    STATE(325), 1,
      sym_comment,
  [13026] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1743), 1,
      sym_identifier,
    STATE(326), 1,
      sym_comment,
    STATE(505), 1,
      sym_scoped_name,
  [13045] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(256), 1,
      sym_scoped_name,
    STATE(327), 1,
      sym_comment,
  [13064] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(257), 1,
      sym_scoped_name,
    STATE(328), 1,
      sym_comment,
  [13083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1745), 1,
      anon_sym_GT,
    ACTIONS(1747), 1,
      anon_sym_COMMA,
    STATE(329), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [13100] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1750), 1,
      anon_sym_COMMA,
    ACTIONS(1752), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      sym_comment,
    STATE(422), 1,
      aux_sym_any_declarators_repeat1,
  [13119] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1754), 1,
      anon_sym_GT,
    ACTIONS(1756), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(331), 1,
      sym_comment,
  [13138] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1758), 1,
      anon_sym_GT,
    ACTIONS(1760), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_actual_parameters_repeat1,
  [13157] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1762), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13174] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    ACTIONS(1764), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_raises_expr_repeat1,
    STATE(334), 1,
      sym_comment,
  [13193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1766), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [13208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1768), 2,
      anon_sym_supports,
      anon_sym_manages,
  [13225] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1770), 1,
      anon_sym_COMMA,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_comment,
    STATE(427), 1,
      aux_sym_annotation_appl_params_repeat1,
  [13244] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(302), 1,
      sym_scoped_name,
    STATE(338), 1,
      sym_comment,
  [13263] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1756), 1,
      anon_sym_COMMA,
    ACTIONS(1774), 1,
      anon_sym_GT,
    STATE(331), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(339), 1,
      sym_comment,
  [13282] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1776), 1,
      anon_sym_COMMA,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
    STATE(340), 2,
      sym_comment,
      aux_sym_in_parameter_dcls_repeat1,
  [13299] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_raises_expr_repeat1,
    STATE(341), 1,
      sym_comment,
  [13318] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1785), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13337] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1787), 1,
      anon_sym_COMMA,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
    STATE(343), 2,
      sym_comment,
      aux_sym_factory_param_dcls_repeat1,
  [13354] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1792), 1,
      anon_sym_LBRACE,
    STATE(344), 1,
      sym_comment,
    STATE(418), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13373] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1794), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13390] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(181), 1,
      sym_simple_declarator,
    STATE(346), 1,
      sym_comment,
    STATE(663), 1,
      sym_attr_declarator,
  [13409] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1798), 1,
      anon_sym_COMMA,
    ACTIONS(1801), 1,
      anon_sym_RPAREN,
    STATE(347), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [13426] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1803), 1,
      anon_sym_COMMA,
    ACTIONS(1806), 1,
      anon_sym_RPAREN,
    STATE(348), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [13443] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1808), 1,
      anon_sym_COMMA,
    ACTIONS(1811), 1,
      anon_sym_RPAREN,
    STATE(349), 2,
      sym_comment,
      aux_sym_context_expr_repeat1,
  [13460] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1813), 1,
      anon_sym_COMMA,
    ACTIONS(1815), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_in_parameter_dcls_repeat1,
    STATE(350), 1,
      sym_comment,
  [13479] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(292), 1,
      sym_scoped_name,
    STATE(351), 1,
      sym_comment,
  [13498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1817), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [13513] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1819), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(353), 1,
      sym_comment,
  [13532] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1819), 1,
      anon_sym_LBRACE,
    STATE(354), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13551] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1823), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_bitmask_dcl_repeat1,
  [13570] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    ACTIONS(1825), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      sym_comment,
    STATE(704), 1,
      sym_raises_expr,
  [13589] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1827), 1,
      anon_sym_COMMA,
    ACTIONS(1829), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(357), 1,
      sym_comment,
  [13608] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    ACTIONS(1831), 1,
      anon_sym_SEMI,
    STATE(358), 1,
      sym_comment,
    STATE(701), 1,
      sym_raises_expr,
  [13627] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1835), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(359), 1,
      sym_comment,
  [13646] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    ACTIONS(1837), 1,
      anon_sym_SEMI,
    STATE(360), 1,
      sym_comment,
    STATE(697), 1,
      sym_raises_expr,
  [13665] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(1841), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_parameter_dcls_repeat1,
    STATE(361), 1,
      sym_comment,
  [13684] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1843), 1,
      anon_sym_COMMA,
    ACTIONS(1845), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      aux_sym_context_expr_repeat1,
    STATE(362), 1,
      sym_comment,
  [13703] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 1,
      anon_sym_L,
    STATE(363), 1,
      sym_comment,
    STATE(469), 1,
      sym_string_literal,
  [13722] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1813), 1,
      anon_sym_COMMA,
    ACTIONS(1847), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_in_parameter_dcls_repeat1,
    STATE(364), 1,
      sym_comment,
  [13741] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1849), 1,
      anon_sym_COMMA,
    ACTIONS(1852), 1,
      anon_sym_SEMI,
    STATE(365), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [13758] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(285), 1,
      sym_scoped_name,
    STATE(366), 1,
      sym_comment,
  [13777] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1854), 1,
      anon_sym_SEMI,
    STATE(365), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(367), 1,
      sym_comment,
  [13796] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1856), 1,
      anon_sym_LBRACE,
    STATE(368), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13815] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1856), 1,
      anon_sym_LBRACE,
    STATE(354), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(369), 1,
      sym_comment,
  [13834] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(370), 1,
      sym_comment,
    STATE(475), 1,
      sym_scoped_name,
  [13853] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1079), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1858), 1,
      anon_sym_LT,
    ACTIONS(1860), 1,
      anon_sym_LBRACE,
    STATE(371), 1,
      sym_comment,
  [13872] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1862), 1,
      anon_sym_SEMI,
    ACTIONS(1864), 1,
      anon_sym_switch,
    ACTIONS(1866), 1,
      sym_identifier,
    STATE(372), 1,
      sym_comment,
  [13891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(373), 1,
      sym_comment,
    ACTIONS(1626), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [13906] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1476), 1,
      anon_sym_RBRACE,
    ACTIONS(1709), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      sym_comment,
    STATE(424), 1,
      aux_sym_enum_dcl_repeat1,
  [13925] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1868), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(375), 1,
      sym_comment,
  [13944] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    ACTIONS(1870), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      sym_comment,
    STATE(540), 1,
      sym_raises_expr,
  [13963] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1827), 1,
      anon_sym_COMMA,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(377), 1,
      sym_comment,
  [13982] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    ACTIONS(1874), 1,
      anon_sym_SEMI,
    STATE(378), 1,
      sym_comment,
    STATE(655), 1,
      sym_raises_expr,
  [14001] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1833), 1,
      anon_sym_COMMA,
    ACTIONS(1876), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(379), 1,
      sym_comment,
  [14020] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1551), 1,
      anon_sym_raises,
    ACTIONS(1878), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      sym_comment,
    STATE(649), 1,
      sym_raises_expr,
  [14039] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1839), 1,
      anon_sym_COMMA,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_parameter_dcls_repeat1,
    STATE(381), 1,
      sym_comment,
  [14058] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1843), 1,
      anon_sym_COMMA,
    ACTIONS(1882), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_context_expr_repeat1,
    STATE(382), 1,
      sym_comment,
  [14077] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(383), 1,
      sym_comment,
    STATE(495), 1,
      sym_scoped_name,
  [14096] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    ACTIONS(1884), 1,
      anon_sym_SEMI,
    STATE(365), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(384), 1,
      sym_comment,
  [14115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(385), 1,
      sym_comment,
    ACTIONS(1886), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14130] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1407), 1,
      anon_sym_setraises,
    ACTIONS(1888), 1,
      anon_sym_SEMI,
    STATE(386), 1,
      sym_comment,
    STATE(634), 1,
      sym_set_excep_expr,
  [14149] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1890), 1,
      anon_sym_SEMI,
    ACTIONS(1892), 1,
      anon_sym_default,
    STATE(387), 1,
      sym_comment,
    STATE(608), 1,
      sym_default,
  [14168] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1894), 1,
      anon_sym_COMMA,
    ACTIONS(1897), 1,
      anon_sym_LBRACE,
    STATE(388), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [14185] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1454), 1,
      anon_sym_RBRACE,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14204] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1899), 1,
      anon_sym_LBRACE,
    ACTIONS(1901), 1,
      anon_sym_COLON,
    STATE(390), 1,
      sym_comment,
    STATE(656), 1,
      sym_connector_inherit_spec,
  [14223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1903), 1,
      anon_sym_COMMA,
    ACTIONS(1906), 1,
      anon_sym_RBRACE,
    STATE(391), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [14240] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1700), 1,
      anon_sym_LBRACE,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(392), 1,
      sym_comment,
  [14259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(393), 1,
      sym_comment,
    ACTIONS(1609), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [14274] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1908), 1,
      anon_sym_GT,
    ACTIONS(1910), 1,
      anon_sym_COMMA,
    STATE(394), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [14291] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1913), 1,
      anon_sym_SEMI,
    ACTIONS(1915), 1,
      sym_identifier,
    STATE(395), 1,
      sym_comment,
    STATE(400), 1,
      aux_sym_bitfield_repeat1,
  [14310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1917), 1,
      anon_sym_GT,
    ACTIONS(1919), 1,
      anon_sym_COMMA,
    STATE(396), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [14327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1922), 1,
      anon_sym_COMMA,
    ACTIONS(1925), 1,
      anon_sym_RPAREN,
    STATE(397), 2,
      sym_comment,
      aux_sym_annotation_appl_params_repeat1,
  [14344] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(398), 1,
      sym_comment,
    STATE(539), 1,
      sym_scoped_name,
  [14363] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(399), 1,
      sym_comment,
    STATE(477), 1,
      sym_scoped_name,
  [14382] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1915), 1,
      sym_identifier,
    ACTIONS(1927), 1,
      anon_sym_SEMI,
    STATE(400), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_bitfield_repeat1,
  [14401] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1750), 1,
      anon_sym_COMMA,
    ACTIONS(1929), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      aux_sym_any_declarators_repeat1,
    STATE(401), 1,
      sym_comment,
  [14420] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1868), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1931), 1,
      anon_sym_COMMA,
    ACTIONS(1934), 1,
      anon_sym_RBRACE,
    STATE(403), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [14456] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1936), 1,
      anon_sym_SEMI,
    ACTIONS(1938), 1,
      sym_identifier,
    STATE(404), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [14473] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1892), 1,
      anon_sym_default,
    ACTIONS(1941), 1,
      anon_sym_SEMI,
    STATE(405), 1,
      sym_comment,
    STATE(601), 1,
      sym_default,
  [14492] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1943), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(406), 1,
      sym_comment,
  [14511] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1943), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(407), 1,
      sym_comment,
  [14530] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(333), 1,
      sym_scoped_name,
    STATE(408), 1,
      sym_comment,
  [14549] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(234), 1,
      sym_scoped_name,
    STATE(409), 1,
      sym_comment,
  [14568] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1472), 1,
      anon_sym_supports,
    ACTIONS(1945), 1,
      anon_sym_LBRACE,
    STATE(410), 1,
      sym_comment,
    STATE(730), 1,
      sym_supported_interface_spec,
  [14587] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1600), 1,
      anon_sym_LBRACE,
    ACTIONS(1602), 1,
      anon_sym_COLON,
    STATE(411), 1,
      sym_comment,
    STATE(658), 1,
      sym_interface_inheritance_spec,
  [14606] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(336), 1,
      sym_scoped_name,
    STATE(412), 1,
      sym_comment,
  [14625] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(303), 1,
      sym_scoped_name,
    STATE(413), 1,
      sym_comment,
  [14644] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1472), 1,
      anon_sym_supports,
    ACTIONS(1947), 1,
      anon_sym_manages,
    STATE(414), 1,
      sym_comment,
    STATE(728), 1,
      sym_supported_interface_spec,
  [14663] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1709), 1,
      anon_sym_COMMA,
    ACTIONS(1949), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(415), 1,
      sym_comment,
  [14682] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(416), 1,
      sym_comment,
    STATE(457), 1,
      sym_scoped_name,
  [14701] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(239), 1,
      sym_simple_declarator,
    STATE(417), 1,
      sym_comment,
    STATE(563), 1,
      sym_readonly_attr_declarator,
  [14720] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1783), 1,
      anon_sym_COMMA,
    ACTIONS(1951), 1,
      anon_sym_LBRACE,
    STATE(388), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(418), 1,
      sym_comment,
  [14739] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(259), 1,
      sym_scoped_name,
    STATE(419), 1,
      sym_comment,
  [14758] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(420), 1,
      sym_comment,
    STATE(526), 1,
      sym_scoped_name,
  [14777] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1613), 1,
      sym_identifier,
    STATE(231), 1,
      sym_scoped_name,
    STATE(421), 1,
      sym_comment,
  [14796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1953), 1,
      anon_sym_COMMA,
    ACTIONS(1956), 1,
      anon_sym_SEMI,
    STATE(422), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [14813] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1725), 1,
      anon_sym_context,
    ACTIONS(1958), 1,
      anon_sym_SEMI,
    STATE(423), 1,
      sym_comment,
    STATE(687), 1,
      sym_context_expr,
  [14832] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1709), 1,
      anon_sym_COMMA,
    ACTIONS(1949), 1,
      anon_sym_RBRACE,
    STATE(391), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(424), 1,
      sym_comment,
  [14851] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(425), 1,
      sym_comment,
    STATE(491), 1,
      sym_scoped_name,
  [14870] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(426), 1,
      sym_comment,
    STATE(489), 1,
      sym_scoped_name,
  [14889] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1770), 1,
      anon_sym_COMMA,
    ACTIONS(1960), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(427), 1,
      sym_comment,
  [14908] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(428), 1,
      sym_comment,
    STATE(488), 1,
      sym_scoped_name,
  [14927] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(429), 1,
      sym_comment,
    STATE(494), 1,
      sym_scoped_name,
  [14946] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1760), 1,
      anon_sym_COMMA,
    ACTIONS(1962), 1,
      anon_sym_GT,
    STATE(394), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(430), 1,
      sym_comment,
  [14965] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(431), 1,
      sym_comment,
    ACTIONS(1964), 2,
      anon_sym_SEMI,
      sym_identifier,
  [14979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(432), 1,
      sym_comment,
    ACTIONS(1966), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14993] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1968), 1,
      sym_identifier,
    STATE(433), 1,
      sym_comment,
    STATE(531), 1,
      sym_annotation_appl_param,
  [15009] = 5,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1970), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(1972), 1,
      sym_preproc_arg,
    STATE(434), 1,
      sym_comment,
  [15025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(435), 1,
      sym_comment,
    ACTIONS(1121), 2,
      anon_sym_AT,
      sym_identifier,
  [15039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(436), 1,
      sym_comment,
    ACTIONS(1125), 2,
      anon_sym_AT,
      sym_identifier,
  [15053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(437), 1,
      sym_comment,
    ACTIONS(1974), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1976), 1,
      anon_sym_valuetype,
    ACTIONS(1978), 1,
      anon_sym_eventtype,
    STATE(438), 1,
      sym_comment,
  [15083] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    STATE(439), 1,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [15097] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(440), 1,
      sym_comment,
    ACTIONS(1980), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(441), 1,
      sym_comment,
    ACTIONS(1982), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15125] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    STATE(442), 1,
      sym_comment,
    ACTIONS(1123), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [15139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(443), 1,
      sym_comment,
    ACTIONS(1745), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1984), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_comment,
  [15169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(445), 1,
      sym_comment,
    ACTIONS(1986), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(446), 1,
      sym_comment,
    ACTIONS(1988), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [15197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(447), 1,
      sym_comment,
    ACTIONS(1990), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(448), 1,
      sym_comment,
    ACTIONS(1992), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15225] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(449), 1,
      sym_comment,
    ACTIONS(1994), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(450), 1,
      sym_comment,
    ACTIONS(1996), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15253] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(451), 1,
      sym_comment,
    STATE(550), 1,
      sym_simple_declarator,
  [15269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(452), 1,
      sym_comment,
    ACTIONS(1779), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(453), 1,
      sym_comment,
    ACTIONS(1998), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2000), 1,
      anon_sym_LT,
    ACTIONS(2002), 1,
      sym_identifier,
    STATE(454), 1,
      sym_comment,
  [15313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_comment,
    ACTIONS(2004), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [15327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(456), 1,
      sym_comment,
    ACTIONS(2006), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15341] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2008), 1,
      anon_sym_LBRACE,
    STATE(457), 1,
      sym_comment,
  [15357] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2010), 1,
      sym_identifier,
    STATE(458), 1,
      sym_comment,
    STATE(725), 1,
      sym_formal_parameter_names,
  [15373] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(459), 1,
      sym_comment,
    ACTIONS(1956), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(460), 1,
      sym_comment,
    ACTIONS(2012), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(461), 1,
      sym_comment,
    ACTIONS(2014), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(462), 1,
      sym_comment,
    ACTIONS(2016), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(463), 1,
      sym_comment,
    ACTIONS(1790), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(464), 1,
      sym_comment,
    ACTIONS(2018), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(465), 1,
      sym_comment,
    ACTIONS(1801), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(466), 1,
      sym_comment,
    ACTIONS(2020), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(467), 1,
      sym_comment,
    ACTIONS(1806), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(468), 1,
      sym_comment,
    ACTIONS(2022), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(469), 1,
      sym_comment,
    ACTIONS(1811), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15527] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1647), 1,
      anon_sym_in,
    STATE(452), 1,
      sym_in_param_dcl,
    STATE(470), 1,
      sym_comment,
  [15543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(471), 1,
      sym_comment,
    ACTIONS(2024), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(453), 1,
      sym_simple_declarator,
    STATE(472), 1,
      sym_comment,
  [15573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(473), 1,
      sym_comment,
    ACTIONS(2026), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15587] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(474), 1,
      sym_comment,
    ACTIONS(2028), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2030), 1,
      anon_sym_LT,
    STATE(475), 1,
      sym_comment,
  [15617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(476), 1,
      sym_comment,
    ACTIONS(2032), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2034), 1,
      anon_sym_LBRACE,
    STATE(477), 1,
      sym_comment,
  [15647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2036), 1,
      anon_sym_DQUOTE,
    ACTIONS(2038), 1,
      anon_sym_SQUOTE,
    STATE(478), 1,
      sym_comment,
  [15663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1696), 1,
      anon_sym_in,
    STATE(463), 1,
      sym_factory_param_dcl,
    STATE(479), 1,
      sym_comment,
  [15679] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(464), 1,
      sym_simple_declarator,
    STATE(480), 1,
      sym_comment,
  [15695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(481), 1,
      sym_comment,
    ACTIONS(2040), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15709] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2042), 1,
      sym_identifier,
    STATE(482), 1,
      sym_comment,
  [15725] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1675), 1,
      anon_sym_in,
    STATE(465), 1,
      sym_init_param_dcl,
    STATE(483), 1,
      sym_comment,
  [15741] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(466), 1,
      sym_simple_declarator,
    STATE(484), 1,
      sym_comment,
  [15757] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(432), 1,
      sym_simple_declarator,
    STATE(485), 1,
      sym_comment,
  [15773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_comment,
    ACTIONS(2044), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15787] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(487), 1,
      sym_comment,
    ACTIONS(1649), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15801] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2046), 1,
      sym_identifier,
    STATE(488), 1,
      sym_comment,
  [15817] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2048), 1,
      sym_identifier,
    STATE(489), 1,
      sym_comment,
  [15833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(490), 1,
      sym_comment,
    ACTIONS(2050), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15847] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2052), 1,
      sym_identifier,
    STATE(491), 1,
      sym_comment,
  [15863] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2054), 1,
      anon_sym_LBRACE,
    ACTIONS(2056), 1,
      anon_sym_COLON,
    STATE(492), 1,
      sym_comment,
  [15879] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(493), 1,
      sym_comment,
    ACTIONS(2058), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [15893] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2060), 1,
      sym_identifier,
    STATE(494), 1,
      sym_comment,
  [15909] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2062), 1,
      anon_sym_LBRACE,
    STATE(495), 1,
      sym_comment,
  [15925] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_comment,
    ACTIONS(1852), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_comment,
    ACTIONS(2064), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [15953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(498), 1,
      sym_comment,
    ACTIONS(2066), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(499), 1,
      sym_comment,
    ACTIONS(2068), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15981] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2070), 1,
      anon_sym_LBRACE,
    ACTIONS(2072), 1,
      anon_sym_COLON,
    STATE(500), 1,
      sym_comment,
  [15997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(501), 1,
      sym_comment,
    ACTIONS(2074), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16011] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2076), 1,
      anon_sym_SEMI,
    ACTIONS(2078), 1,
      anon_sym_default,
    STATE(502), 1,
      sym_comment,
  [16027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_comment,
    ACTIONS(2080), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(504), 1,
      sym_comment,
    ACTIONS(2082), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16055] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2084), 1,
      anon_sym_LT,
    STATE(505), 1,
      sym_comment,
  [16071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(506), 1,
      sym_comment,
    ACTIONS(2086), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2088), 1,
      anon_sym_GT,
    ACTIONS(2090), 1,
      anon_sym_COMMA,
    STATE(507), 1,
      sym_comment,
  [16101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_comment,
    ACTIONS(2092), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(509), 1,
      sym_comment,
    ACTIONS(2094), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(510), 1,
      sym_comment,
    ACTIONS(2096), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(511), 1,
      sym_comment,
    ACTIONS(2098), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(512), 1,
      sym_comment,
    ACTIONS(1934), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16171] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2100), 1,
      sym_identifier,
    STATE(513), 1,
      sym_comment,
  [16187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_comment,
    ACTIONS(2102), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(502), 1,
      sym_simple_declarator,
    STATE(515), 1,
      sym_comment,
  [16217] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1582), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2104), 1,
      sym_identifier,
    STATE(516), 1,
      sym_comment,
  [16233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(517), 1,
      sym_comment,
    ACTIONS(2106), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(518), 1,
      sym_comment,
    ACTIONS(2108), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2110), 1,
      anon_sym_LPAREN,
    STATE(519), 1,
      sym_comment,
    STATE(633), 1,
      sym_exception_list,
  [16277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2110), 1,
      anon_sym_LPAREN,
    STATE(493), 1,
      sym_exception_list,
    STATE(520), 1,
      sym_comment,
  [16293] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1796), 1,
      sym_identifier,
    STATE(496), 1,
      sym_simple_declarator,
    STATE(521), 1,
      sym_comment,
  [16309] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(522), 1,
      sym_comment,
    ACTIONS(2112), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(523), 1,
      sym_comment,
    ACTIONS(2114), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16337] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(524), 1,
      sym_comment,
    ACTIONS(1897), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [16351] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2116), 1,
      anon_sym_SEMI,
    STATE(525), 1,
      sym_comment,
  [16367] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2118), 1,
      anon_sym_LBRACE,
    STATE(526), 1,
      sym_comment,
  [16383] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(527), 1,
      sym_comment,
    ACTIONS(2120), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2122), 1,
      anon_sym_LBRACE,
    ACTIONS(2124), 1,
      anon_sym_SEMI,
    STATE(528), 1,
      sym_comment,
  [16413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2126), 1,
      anon_sym_GT,
    ACTIONS(2128), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      sym_comment,
  [16429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(530), 1,
      sym_comment,
    ACTIONS(2130), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(531), 1,
      sym_comment,
    ACTIONS(1925), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(532), 1,
      sym_comment,
    ACTIONS(2132), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(533), 1,
      sym_comment,
    ACTIONS(2134), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(534), 1,
      sym_comment,
    ACTIONS(1917), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(535), 1,
      sym_comment,
    ACTIONS(1906), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(536), 1,
      sym_comment,
    ACTIONS(2136), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(537), 1,
      sym_comment,
    ACTIONS(1908), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(538), 1,
      sym_comment,
    ACTIONS(2138), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16555] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2140), 1,
      anon_sym_LBRACE,
    STATE(539), 1,
      sym_comment,
  [16571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1825), 1,
      anon_sym_SEMI,
    STATE(540), 1,
      sym_comment,
  [16584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2142), 1,
      sym_identifier,
    STATE(541), 1,
      sym_comment,
  [16597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2144), 1,
      sym_identifier,
    STATE(542), 1,
      sym_comment,
  [16610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2146), 1,
      anon_sym_LBRACE,
    STATE(543), 1,
      sym_comment,
  [16623] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2148), 1,
      anon_sym_SEMI,
    STATE(544), 1,
      sym_comment,
  [16636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2150), 1,
      sym_identifier,
    STATE(545), 1,
      sym_comment,
  [16649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2152), 1,
      anon_sym_LBRACE,
    STATE(546), 1,
      sym_comment,
  [16662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1634), 1,
      anon_sym_LBRACE,
    STATE(547), 1,
      sym_comment,
  [16675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2154), 1,
      anon_sym_LBRACE,
    STATE(548), 1,
      sym_comment,
  [16688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1358), 1,
      anon_sym_EQ,
    STATE(549), 1,
      sym_comment,
  [16701] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2156), 1,
      anon_sym_SEMI,
    STATE(550), 1,
      sym_comment,
  [16714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2158), 1,
      anon_sym_GT,
    STATE(551), 1,
      sym_comment,
  [16727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2160), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_comment,
  [16740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2162), 1,
      anon_sym_SEMI,
    STATE(553), 1,
      sym_comment,
  [16753] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2164), 1,
      sym_identifier,
    STATE(554), 1,
      sym_comment,
  [16766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2166), 1,
      anon_sym_SEMI,
    STATE(555), 1,
      sym_comment,
  [16779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2168), 1,
      sym_identifier,
    STATE(556), 1,
      sym_comment,
  [16792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1590), 1,
      anon_sym_LBRACE,
    STATE(557), 1,
      sym_comment,
  [16805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2116), 1,
      anon_sym_SEMI,
    STATE(558), 1,
      sym_comment,
  [16818] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2170), 1,
      sym_identifier,
    STATE(559), 1,
      sym_comment,
  [16831] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2172), 1,
      aux_sym_string_literal_token1,
    STATE(560), 1,
      sym_comment,
  [16844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2174), 1,
      sym_identifier,
    STATE(561), 1,
      sym_comment,
  [16857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2176), 1,
      anon_sym_LPAREN,
    STATE(562), 1,
      sym_comment,
  [16870] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2178), 1,
      anon_sym_SEMI,
    STATE(563), 1,
      sym_comment,
  [16883] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2036), 1,
      anon_sym_DQUOTE,
    STATE(564), 1,
      sym_comment,
  [16896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2180), 1,
      anon_sym_EQ,
    STATE(565), 1,
      sym_comment,
  [16909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2182), 1,
      anon_sym_SQUOTE,
    STATE(566), 1,
      sym_comment,
  [16922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2184), 1,
      anon_sym_SEMI,
    STATE(567), 1,
      sym_comment,
  [16935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1884), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      sym_comment,
  [16948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2186), 1,
      anon_sym_SEMI,
    STATE(569), 1,
      sym_comment,
  [16961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1888), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      sym_comment,
  [16974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2188), 1,
      anon_sym_LT,
    STATE(571), 1,
      sym_comment,
  [16987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2190), 1,
      anon_sym_SEMI,
    STATE(572), 1,
      sym_comment,
  [17000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2192), 1,
      anon_sym_SEMI,
    STATE(573), 1,
      sym_comment,
  [17013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2194), 1,
      anon_sym_RBRACE,
    STATE(574), 1,
      sym_comment,
  [17026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2196), 1,
      anon_sym_LT,
    STATE(575), 1,
      sym_comment,
  [17039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2198), 1,
      anon_sym_LT,
    STATE(576), 1,
      sym_comment,
  [17052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2200), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      sym_comment,
  [17065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2202), 1,
      anon_sym_SEMI,
    STATE(578), 1,
      sym_comment,
  [17078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2204), 1,
      sym_identifier,
    STATE(579), 1,
      sym_comment,
  [17091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2206), 1,
      sym_identifier,
    STATE(580), 1,
      sym_comment,
  [17104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2208), 1,
      anon_sym_LBRACE,
    STATE(581), 1,
      sym_comment,
  [17117] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2210), 1,
      sym_identifier,
    STATE(582), 1,
      sym_comment,
  [17130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2212), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_comment,
  [17143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2214), 1,
      anon_sym_LBRACE,
    STATE(584), 1,
      sym_comment,
  [17156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2216), 1,
      anon_sym_SEMI,
    STATE(585), 1,
      sym_comment,
  [17169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2218), 1,
      anon_sym_SEMI,
    STATE(586), 1,
      sym_comment,
  [17182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2220), 1,
      anon_sym_SEMI,
    STATE(587), 1,
      sym_comment,
  [17195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2000), 1,
      anon_sym_LT,
    STATE(588), 1,
      sym_comment,
  [17208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2222), 1,
      anon_sym_RPAREN,
    STATE(589), 1,
      sym_comment,
  [17221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2104), 1,
      sym_identifier,
    STATE(590), 1,
      sym_comment,
  [17234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2224), 1,
      anon_sym_SEMI,
    STATE(591), 1,
      sym_comment,
  [17247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2226), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      sym_comment,
  [17260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2228), 1,
      anon_sym_SEMI,
    STATE(593), 1,
      sym_comment,
  [17273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2230), 1,
      anon_sym_SEMI,
    STATE(594), 1,
      sym_comment,
  [17286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2232), 1,
      sym_identifier,
    STATE(595), 1,
      sym_comment,
  [17299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2234), 1,
      sym_identifier,
    STATE(596), 1,
      sym_comment,
  [17312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2100), 1,
      sym_identifier,
    STATE(597), 1,
      sym_comment,
  [17325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2236), 1,
      anon_sym_SEMI,
    STATE(598), 1,
      sym_comment,
  [17338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2238), 1,
      anon_sym_LBRACE,
    STATE(599), 1,
      sym_comment,
  [17351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2240), 1,
      anon_sym_SEMI,
    STATE(600), 1,
      sym_comment,
  [17364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2242), 1,
      anon_sym_SEMI,
    STATE(601), 1,
      sym_comment,
  [17377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2244), 1,
      anon_sym_SEMI,
    STATE(602), 1,
      sym_comment,
  [17390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2246), 1,
      anon_sym_SEMI,
    STATE(603), 1,
      sym_comment,
  [17403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2248), 1,
      aux_sym_string_literal_token1,
    STATE(604), 1,
      sym_comment,
  [17416] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2250), 1,
      anon_sym_SEMI,
    STATE(605), 1,
      sym_comment,
  [17429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2252), 1,
      anon_sym_DQUOTE,
    STATE(606), 1,
      sym_comment,
  [17442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2254), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      sym_comment,
  [17455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2256), 1,
      anon_sym_SEMI,
    STATE(608), 1,
      sym_comment,
  [17468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2258), 1,
      anon_sym_SEMI,
    STATE(609), 1,
      sym_comment,
  [17481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2260), 1,
      anon_sym_LPAREN,
    STATE(610), 1,
      sym_comment,
  [17494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2262), 1,
      sym_identifier,
    STATE(611), 1,
      sym_comment,
  [17507] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2264), 1,
      anon_sym_SEMI,
    STATE(612), 1,
      sym_comment,
  [17520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2266), 1,
      anon_sym_LPAREN,
    STATE(613), 1,
      sym_comment,
  [17533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2268), 1,
      anon_sym_LBRACE,
    STATE(614), 1,
      sym_comment,
  [17546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2270), 1,
      anon_sym_SEMI,
    STATE(615), 1,
      sym_comment,
  [17559] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2272), 1,
      anon_sym_LBRACE,
    STATE(616), 1,
      sym_comment,
  [17572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2274), 1,
      anon_sym_SEMI,
    STATE(617), 1,
      sym_comment,
  [17585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2276), 1,
      anon_sym_SEMI,
    STATE(618), 1,
      sym_comment,
  [17598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2278), 1,
      sym_identifier,
    STATE(619), 1,
      sym_comment,
  [17611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2280), 1,
      anon_sym_SEMI,
    STATE(620), 1,
      sym_comment,
  [17624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2282), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      sym_comment,
  [17637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2284), 1,
      sym_identifier,
    STATE(622), 1,
      sym_comment,
  [17650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2286), 1,
      sym_identifier,
    STATE(623), 1,
      sym_comment,
  [17663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2288), 1,
      anon_sym_LBRACE,
    STATE(624), 1,
      sym_comment,
  [17676] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2290), 1,
      aux_sym_preproc_call_token1,
    STATE(625), 1,
      sym_comment,
  [17689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2292), 1,
      anon_sym_LBRACE,
    STATE(626), 1,
      sym_comment,
  [17702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2294), 1,
      anon_sym_LPAREN,
    STATE(627), 1,
      sym_comment,
  [17715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1854), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_comment,
  [17728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1945), 1,
      anon_sym_LBRACE,
    STATE(629), 1,
      sym_comment,
  [17741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2296), 1,
      anon_sym_SEMI,
    STATE(630), 1,
      sym_comment,
  [17754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2298), 1,
      aux_sym_char_literal_token1,
    STATE(631), 1,
      sym_comment,
  [17767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2300), 1,
      anon_sym_SQUOTE,
    STATE(632), 1,
      sym_comment,
  [17780] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2302), 1,
      anon_sym_SEMI,
    STATE(633), 1,
      sym_comment,
  [17793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2304), 1,
      anon_sym_SEMI,
    STATE(634), 1,
      sym_comment,
  [17806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1947), 1,
      anon_sym_manages,
    STATE(635), 1,
      sym_comment,
  [17819] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2306), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_comment,
  [17832] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1568), 1,
      anon_sym_SLASH,
    STATE(637), 1,
      sym_comment,
  [17845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2308), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      sym_comment,
  [17858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2310), 1,
      anon_sym_SEMI,
    STATE(639), 1,
      sym_comment,
  [17871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2312), 1,
      anon_sym_SEMI,
    STATE(640), 1,
      sym_comment,
  [17884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2314), 1,
      anon_sym_SEMI,
    STATE(641), 1,
      sym_comment,
  [17897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2316), 1,
      sym_identifier,
    STATE(642), 1,
      sym_comment,
  [17910] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2318), 1,
      anon_sym_SEMI,
    STATE(643), 1,
      sym_comment,
  [17923] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2320), 1,
      sym_identifier,
    STATE(644), 1,
      sym_comment,
  [17936] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2322), 1,
      anon_sym_LBRACE,
    STATE(645), 1,
      sym_comment,
  [17949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2324), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_comment,
  [17962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2326), 1,
      sym_identifier,
    STATE(647), 1,
      sym_comment,
  [17975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2328), 1,
      anon_sym_SEMI,
    STATE(648), 1,
      sym_comment,
  [17988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1837), 1,
      anon_sym_SEMI,
    STATE(649), 1,
      sym_comment,
  [18001] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2330), 1,
      anon_sym_SEMI,
    STATE(650), 1,
      sym_comment,
  [18014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2332), 1,
      anon_sym_GT,
    STATE(651), 1,
      sym_comment,
  [18027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2334), 1,
      anon_sym_LBRACE,
    STATE(652), 1,
      sym_comment,
  [18040] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2336), 1,
      anon_sym_SEMI,
    STATE(653), 1,
      sym_comment,
  [18053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2338), 1,
      anon_sym_SEMI,
    STATE(654), 1,
      sym_comment,
  [18066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1831), 1,
      anon_sym_SEMI,
    STATE(655), 1,
      sym_comment,
  [18079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2340), 1,
      anon_sym_LBRACE,
    STATE(656), 1,
      sym_comment,
  [18092] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2042), 1,
      sym_identifier,
    STATE(657), 1,
      sym_comment,
  [18105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2342), 1,
      anon_sym_LBRACE,
    STATE(658), 1,
      sym_comment,
  [18118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2344), 1,
      anon_sym_LPAREN,
    STATE(659), 1,
      sym_comment,
  [18131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2346), 1,
      sym_identifier,
    STATE(660), 1,
      sym_comment,
  [18144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2348), 1,
      anon_sym_SEMI,
    STATE(661), 1,
      sym_comment,
  [18157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2350), 1,
      anon_sym_SEMI,
    STATE(662), 1,
      sym_comment,
  [18170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2352), 1,
      anon_sym_SEMI,
    STATE(663), 1,
      sym_comment,
  [18183] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2354), 1,
      aux_sym_comment_token3,
    STATE(664), 1,
      sym_comment,
  [18196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2356), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_comment,
  [18209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2358), 1,
      anon_sym_GT,
    STATE(666), 1,
      sym_comment,
  [18222] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2360), 1,
      anon_sym_GT,
    STATE(667), 1,
      sym_comment,
  [18235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2362), 1,
      anon_sym_LBRACE,
    STATE(668), 1,
      sym_comment,
  [18248] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2364), 1,
      anon_sym_SEMI,
    STATE(669), 1,
      sym_comment,
  [18261] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2366), 1,
      anon_sym_LBRACE,
    STATE(670), 1,
      sym_comment,
  [18274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2368), 1,
      anon_sym_SEMI,
    STATE(671), 1,
      sym_comment,
  [18287] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2370), 1,
      anon_sym_SEMI,
    STATE(672), 1,
      sym_comment,
  [18300] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2372), 1,
      anon_sym_LPAREN,
    STATE(673), 1,
      sym_comment,
  [18313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2002), 1,
      sym_identifier,
    STATE(674), 1,
      sym_comment,
  [18326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2374), 1,
      anon_sym_SEMI,
    STATE(675), 1,
      sym_comment,
  [18339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2376), 1,
      anon_sym_COLON,
    STATE(676), 1,
      sym_comment,
  [18352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2378), 1,
      anon_sym_enum,
    STATE(677), 1,
      sym_comment,
  [18365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1739), 1,
      anon_sym_valuetype,
    STATE(678), 1,
      sym_comment,
  [18378] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2380), 1,
      anon_sym_LBRACE,
    STATE(679), 1,
      sym_comment,
  [18391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2382), 1,
      sym_identifier,
    STATE(680), 1,
      sym_comment,
  [18404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2384), 1,
      anon_sym_GT,
    STATE(681), 1,
      sym_comment,
  [18417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2386), 1,
      anon_sym_LPAREN,
    STATE(682), 1,
      sym_comment,
  [18430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2388), 1,
      anon_sym_SEMI,
    STATE(683), 1,
      sym_comment,
  [18443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2390), 1,
      sym_identifier,
    STATE(684), 1,
      sym_comment,
  [18456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2392), 1,
      anon_sym_attribute,
    STATE(685), 1,
      sym_comment,
  [18469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1976), 1,
      anon_sym_valuetype,
    STATE(686), 1,
      sym_comment,
  [18482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2394), 1,
      anon_sym_SEMI,
    STATE(687), 1,
      sym_comment,
  [18495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2396), 1,
      anon_sym_SEMI,
    STATE(688), 1,
      sym_comment,
  [18508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2398), 1,
      anon_sym_SEMI,
    STATE(689), 1,
      sym_comment,
  [18521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2400), 1,
      anon_sym_LPAREN,
    STATE(690), 1,
      sym_comment,
  [18534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2402), 1,
      anon_sym_SEMI,
    STATE(691), 1,
      sym_comment,
  [18547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2404), 1,
      anon_sym_SEMI,
    STATE(692), 1,
      sym_comment,
  [18560] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2406), 1,
      anon_sym_SEMI,
    STATE(693), 1,
      sym_comment,
  [18573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2408), 1,
      anon_sym_RBRACE,
    STATE(694), 1,
      sym_comment,
  [18586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2410), 1,
      anon_sym_LBRACE,
    STATE(695), 1,
      sym_comment,
  [18599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2412), 1,
      anon_sym_void,
    STATE(696), 1,
      sym_comment,
  [18612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2414), 1,
      anon_sym_SEMI,
    STATE(697), 1,
      sym_comment,
  [18625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1690), 1,
      anon_sym_LBRACE,
    STATE(698), 1,
      sym_comment,
  [18638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1661), 1,
      anon_sym_LBRACE,
    STATE(699), 1,
      sym_comment,
  [18651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2416), 1,
      anon_sym_RBRACE,
    STATE(700), 1,
      sym_comment,
  [18664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2418), 1,
      anon_sym_SEMI,
    STATE(701), 1,
      sym_comment,
  [18677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1958), 1,
      anon_sym_SEMI,
    STATE(702), 1,
      sym_comment,
  [18690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2420), 1,
      sym_identifier,
    STATE(703), 1,
      sym_comment,
  [18703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2422), 1,
      anon_sym_SEMI,
    STATE(704), 1,
      sym_comment,
  [18716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2424), 1,
      sym_identifier,
    STATE(705), 1,
      sym_comment,
  [18729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(706), 1,
      sym_comment,
  [18742] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2426), 1,
      sym_identifier,
    STATE(707), 1,
      sym_comment,
  [18755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2428), 1,
      anon_sym_SEMI,
    STATE(708), 1,
      sym_comment,
  [18768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2430), 1,
      anon_sym_RBRACK,
    STATE(709), 1,
      sym_comment,
  [18781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2432), 1,
      anon_sym_SEMI,
    STATE(710), 1,
      sym_comment,
  [18794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2434), 1,
      anon_sym_COLON,
    STATE(711), 1,
      sym_comment,
  [18807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2436), 1,
      sym_identifier,
    STATE(712), 1,
      sym_comment,
  [18820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2438), 1,
      anon_sym_SEMI,
    STATE(713), 1,
      sym_comment,
  [18833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2440), 1,
      sym_identifier,
    STATE(714), 1,
      sym_comment,
  [18846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2442), 1,
      anon_sym_SEMI,
    STATE(715), 1,
      sym_comment,
  [18859] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2444), 1,
      ts_builtin_sym_end,
    STATE(716), 1,
      sym_comment,
  [18872] = 4,
    ACTIONS(1566), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2446), 1,
      aux_sym_predefine_token1,
    STATE(717), 1,
      sym_comment,
  [18885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2448), 1,
      anon_sym_SEMI,
    STATE(718), 1,
      sym_comment,
  [18898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2450), 1,
      anon_sym_SEMI,
    STATE(719), 1,
      sym_comment,
  [18911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2452), 1,
      anon_sym_SEMI,
    STATE(720), 1,
      sym_comment,
  [18924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2454), 1,
      anon_sym_GT,
    STATE(721), 1,
      sym_comment,
  [18937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2456), 1,
      anon_sym_RBRACE,
    STATE(722), 1,
      sym_comment,
  [18950] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2458), 1,
      anon_sym_LBRACE,
    STATE(723), 1,
      sym_comment,
  [18963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2460), 1,
      anon_sym_SEMI,
    STATE(724), 1,
      sym_comment,
  [18976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2462), 1,
      anon_sym_GT,
    STATE(725), 1,
      sym_comment,
  [18989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2464), 1,
      sym_identifier,
    STATE(726), 1,
      sym_comment,
  [19002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2466), 1,
      anon_sym_SEMI,
    STATE(727), 1,
      sym_comment,
  [19015] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2468), 1,
      anon_sym_manages,
    STATE(728), 1,
      sym_comment,
  [19028] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2470), 1,
      anon_sym_SEMI,
    STATE(729), 1,
      sym_comment,
  [19041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2472), 1,
      anon_sym_LBRACE,
    STATE(730), 1,
      sym_comment,
  [19054] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2474), 1,
      sym_identifier,
    STATE(731), 1,
      sym_comment,
  [19067] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2476), 1,
      sym_identifier,
    STATE(732), 1,
      sym_comment,
  [19080] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2478), 1,
      anon_sym_RPAREN,
    STATE(733), 1,
      sym_comment,
  [19093] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2480), 1,
      sym_identifier,
    STATE(734), 1,
      sym_comment,
  [19106] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2482), 1,
      anon_sym_RPAREN,
    STATE(735), 1,
      sym_comment,
  [19119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1984), 1,
      anon_sym_RPAREN,
    STATE(736), 1,
      sym_comment,
  [19132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2484), 1,
      anon_sym_DQUOTE,
    STATE(737), 1,
      sym_comment,
  [19145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2486), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_comment,
  [19158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2488), 1,
      anon_sym_LBRACE,
    STATE(739), 1,
      sym_comment,
  [19171] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2490), 1,
      sym_identifier,
    STATE(740), 1,
      sym_comment,
  [19184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2492), 1,
      anon_sym_SEMI,
    STATE(741), 1,
      sym_comment,
  [19197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2494), 1,
      sym_identifier,
    STATE(742), 1,
      sym_comment,
  [19210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2496), 1,
      anon_sym_GT,
    STATE(743), 1,
      sym_comment,
  [19223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2498), 1,
      anon_sym_SEMI,
    STATE(744), 1,
      sym_comment,
  [19236] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2500), 1,
      anon_sym_enum,
    STATE(745), 1,
      sym_comment,
  [19249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2502), 1,
      sym_identifier,
    STATE(746), 1,
      sym_comment,
  [19262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2504), 1,
      anon_sym_SEMI,
    STATE(747), 1,
      sym_comment,
  [19275] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2506), 1,
      sym_identifier,
    STATE(748), 1,
      sym_comment,
  [19288] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2508), 1,
      sym_identifier,
    STATE(749), 1,
      sym_comment,
  [19301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2510), 1,
      sym_identifier,
    STATE(750), 1,
      sym_comment,
  [19314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2512), 1,
      sym_identifier,
    STATE(751), 1,
      sym_comment,
  [19327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2514), 1,
      sym_identifier,
    STATE(752), 1,
      sym_comment,
  [19340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
    STATE(753), 1,
      sym_comment,
  [19353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2516), 1,
      aux_sym_char_literal_token1,
    STATE(754), 1,
      sym_comment,
  [19366] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2518), 1,
      anon_sym_SEMI,
    STATE(755), 1,
      sym_comment,
  [19379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2520), 1,
      sym_identifier,
    STATE(756), 1,
      sym_comment,
  [19392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2522), 1,
      sym_identifier,
    STATE(757), 1,
      sym_comment,
  [19405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2524), 1,
      sym_identifier,
    STATE(758), 1,
      sym_comment,
  [19418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2526), 1,
      sym_identifier,
    STATE(759), 1,
      sym_comment,
  [19431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2528), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      sym_comment,
  [19444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2530), 1,
      anon_sym_LBRACE,
    STATE(761), 1,
      sym_comment,
  [19457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2532), 1,
      anon_sym_COMMA,
    STATE(762), 1,
      sym_comment,
  [19470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2534), 1,
      sym_identifier,
    STATE(763), 1,
      sym_comment,
  [19483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2536), 1,
      sym_identifier,
    STATE(764), 1,
      sym_comment,
  [19496] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1731), 1,
      anon_sym_SEMI,
    STATE(765), 1,
      sym_comment,
  [19509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2538), 1,
      anon_sym_LBRACE,
    STATE(766), 1,
      sym_comment,
  [19522] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2540), 1,
      anon_sym_RPAREN,
    STATE(767), 1,
      sym_comment,
  [19535] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2542), 1,
      anon_sym_SEMI,
    STATE(768), 1,
      sym_comment,
  [19548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2544), 1,
      sym_identifier,
    STATE(769), 1,
      sym_comment,
  [19561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2546), 1,
      sym_identifier,
    STATE(770), 1,
      sym_comment,
  [19574] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1723), 1,
      anon_sym_SEMI,
    STATE(771), 1,
      sym_comment,
  [19587] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2548), 1,
      anon_sym_GT,
    STATE(772), 1,
      sym_comment,
  [19600] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2550), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      sym_comment,
  [19613] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2552), 1,
      sym_identifier,
    STATE(774), 1,
      sym_comment,
  [19626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2554), 1,
      sym_identifier,
    STATE(775), 1,
      sym_comment,
  [19639] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2556), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_comment,
  [19652] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2558), 1,
      anon_sym_GT,
    STATE(777), 1,
      sym_comment,
  [19665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1737), 1,
      anon_sym_interface,
    STATE(778), 1,
      sym_comment,
  [19678] = 1,
    ACTIONS(2560), 1,
      ts_builtin_sym_end,
  [19682] = 1,
    ACTIONS(2562), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 145,
  [SMALL_STATE(37)] = 290,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 580,
  [SMALL_STATE(40)] = 725,
  [SMALL_STATE(41)] = 870,
  [SMALL_STATE(42)] = 1015,
  [SMALL_STATE(43)] = 1160,
  [SMALL_STATE(44)] = 1305,
  [SMALL_STATE(45)] = 1448,
  [SMALL_STATE(46)] = 1593,
  [SMALL_STATE(47)] = 1735,
  [SMALL_STATE(48)] = 1879,
  [SMALL_STATE(49)] = 2021,
  [SMALL_STATE(50)] = 2165,
  [SMALL_STATE(51)] = 2301,
  [SMALL_STATE(52)] = 2431,
  [SMALL_STATE(53)] = 2558,
  [SMALL_STATE(54)] = 2627,
  [SMALL_STATE(55)] = 2696,
  [SMALL_STATE(56)] = 2765,
  [SMALL_STATE(57)] = 2834,
  [SMALL_STATE(58)] = 2967,
  [SMALL_STATE(59)] = 3036,
  [SMALL_STATE(60)] = 3105,
  [SMALL_STATE(61)] = 3174,
  [SMALL_STATE(62)] = 3242,
  [SMALL_STATE(63)] = 3310,
  [SMALL_STATE(64)] = 3378,
  [SMALL_STATE(65)] = 3446,
  [SMALL_STATE(66)] = 3573,
  [SMALL_STATE(67)] = 3700,
  [SMALL_STATE(68)] = 3827,
  [SMALL_STATE(69)] = 3954,
  [SMALL_STATE(70)] = 4081,
  [SMALL_STATE(71)] = 4208,
  [SMALL_STATE(72)] = 4335,
  [SMALL_STATE(73)] = 4462,
  [SMALL_STATE(74)] = 4589,
  [SMALL_STATE(75)] = 4655,
  [SMALL_STATE(76)] = 4721,
  [SMALL_STATE(77)] = 4826,
  [SMALL_STATE(78)] = 4931,
  [SMALL_STATE(79)] = 4986,
  [SMALL_STATE(80)] = 5041,
  [SMALL_STATE(81)] = 5093,
  [SMALL_STATE(82)] = 5140,
  [SMALL_STATE(83)] = 5187,
  [SMALL_STATE(84)] = 5234,
  [SMALL_STATE(85)] = 5281,
  [SMALL_STATE(86)] = 5328,
  [SMALL_STATE(87)] = 5377,
  [SMALL_STATE(88)] = 5424,
  [SMALL_STATE(89)] = 5471,
  [SMALL_STATE(90)] = 5518,
  [SMALL_STATE(91)] = 5565,
  [SMALL_STATE(92)] = 5612,
  [SMALL_STATE(93)] = 5659,
  [SMALL_STATE(94)] = 5706,
  [SMALL_STATE(95)] = 5753,
  [SMALL_STATE(96)] = 5799,
  [SMALL_STATE(97)] = 5845,
  [SMALL_STATE(98)] = 5894,
  [SMALL_STATE(99)] = 5939,
  [SMALL_STATE(100)] = 5984,
  [SMALL_STATE(101)] = 6067,
  [SMALL_STATE(102)] = 6112,
  [SMALL_STATE(103)] = 6157,
  [SMALL_STATE(104)] = 6201,
  [SMALL_STATE(105)] = 6245,
  [SMALL_STATE(106)] = 6289,
  [SMALL_STATE(107)] = 6332,
  [SMALL_STATE(108)] = 6375,
  [SMALL_STATE(109)] = 6418,
  [SMALL_STATE(110)] = 6461,
  [SMALL_STATE(111)] = 6504,
  [SMALL_STATE(112)] = 6547,
  [SMALL_STATE(113)] = 6590,
  [SMALL_STATE(114)] = 6676,
  [SMALL_STATE(115)] = 6762,
  [SMALL_STATE(116)] = 6848,
  [SMALL_STATE(117)] = 6934,
  [SMALL_STATE(118)] = 7017,
  [SMALL_STATE(119)] = 7100,
  [SMALL_STATE(120)] = 7183,
  [SMALL_STATE(121)] = 7266,
  [SMALL_STATE(122)] = 7349,
  [SMALL_STATE(123)] = 7432,
  [SMALL_STATE(124)] = 7515,
  [SMALL_STATE(125)] = 7595,
  [SMALL_STATE(126)] = 7675,
  [SMALL_STATE(127)] = 7755,
  [SMALL_STATE(128)] = 7835,
  [SMALL_STATE(129)] = 7903,
  [SMALL_STATE(130)] = 7983,
  [SMALL_STATE(131)] = 8063,
  [SMALL_STATE(132)] = 8143,
  [SMALL_STATE(133)] = 8217,
  [SMALL_STATE(134)] = 8288,
  [SMALL_STATE(135)] = 8348,
  [SMALL_STATE(136)] = 8416,
  [SMALL_STATE(137)] = 8473,
  [SMALL_STATE(138)] = 8538,
  [SMALL_STATE(139)] = 8593,
  [SMALL_STATE(140)] = 8655,
  [SMALL_STATE(141)] = 8714,
  [SMALL_STATE(142)] = 8747,
  [SMALL_STATE(143)] = 8780,
  [SMALL_STATE(144)] = 8830,
  [SMALL_STATE(145)] = 8860,
  [SMALL_STATE(146)] = 8890,
  [SMALL_STATE(147)] = 8920,
  [SMALL_STATE(148)] = 8970,
  [SMALL_STATE(149)] = 9018,
  [SMALL_STATE(150)] = 9052,
  [SMALL_STATE(151)] = 9082,
  [SMALL_STATE(152)] = 9116,
  [SMALL_STATE(153)] = 9146,
  [SMALL_STATE(154)] = 9176,
  [SMALL_STATE(155)] = 9206,
  [SMALL_STATE(156)] = 9254,
  [SMALL_STATE(157)] = 9284,
  [SMALL_STATE(158)] = 9314,
  [SMALL_STATE(159)] = 9344,
  [SMALL_STATE(160)] = 9374,
  [SMALL_STATE(161)] = 9404,
  [SMALL_STATE(162)] = 9454,
  [SMALL_STATE(163)] = 9501,
  [SMALL_STATE(164)] = 9547,
  [SMALL_STATE(165)] = 9576,
  [SMALL_STATE(166)] = 9609,
  [SMALL_STATE(167)] = 9638,
  [SMALL_STATE(168)] = 9667,
  [SMALL_STATE(169)] = 9694,
  [SMALL_STATE(170)] = 9721,
  [SMALL_STATE(171)] = 9743,
  [SMALL_STATE(172)] = 9765,
  [SMALL_STATE(173)] = 9803,
  [SMALL_STATE(174)] = 9837,
  [SMALL_STATE(175)] = 9860,
  [SMALL_STATE(176)] = 9883,
  [SMALL_STATE(177)] = 9906,
  [SMALL_STATE(178)] = 9928,
  [SMALL_STATE(179)] = 9952,
  [SMALL_STATE(180)] = 9976,
  [SMALL_STATE(181)] = 9998,
  [SMALL_STATE(182)] = 10032,
  [SMALL_STATE(183)] = 10051,
  [SMALL_STATE(184)] = 10070,
  [SMALL_STATE(185)] = 10089,
  [SMALL_STATE(186)] = 10108,
  [SMALL_STATE(187)] = 10129,
  [SMALL_STATE(188)] = 10148,
  [SMALL_STATE(189)] = 10177,
  [SMALL_STATE(190)] = 10196,
  [SMALL_STATE(191)] = 10215,
  [SMALL_STATE(192)] = 10234,
  [SMALL_STATE(193)] = 10265,
  [SMALL_STATE(194)] = 10289,
  [SMALL_STATE(195)] = 10307,
  [SMALL_STATE(196)] = 10333,
  [SMALL_STATE(197)] = 10355,
  [SMALL_STATE(198)] = 10383,
  [SMALL_STATE(199)] = 10401,
  [SMALL_STATE(200)] = 10429,
  [SMALL_STATE(201)] = 10457,
  [SMALL_STATE(202)] = 10475,
  [SMALL_STATE(203)] = 10503,
  [SMALL_STATE(204)] = 10521,
  [SMALL_STATE(205)] = 10549,
  [SMALL_STATE(206)] = 10567,
  [SMALL_STATE(207)] = 10591,
  [SMALL_STATE(208)] = 10619,
  [SMALL_STATE(209)] = 10647,
  [SMALL_STATE(210)] = 10675,
  [SMALL_STATE(211)] = 10692,
  [SMALL_STATE(212)] = 10717,
  [SMALL_STATE(213)] = 10734,
  [SMALL_STATE(214)] = 10751,
  [SMALL_STATE(215)] = 10776,
  [SMALL_STATE(216)] = 10793,
  [SMALL_STATE(217)] = 10818,
  [SMALL_STATE(218)] = 10843,
  [SMALL_STATE(219)] = 10868,
  [SMALL_STATE(220)] = 10893,
  [SMALL_STATE(221)] = 10918,
  [SMALL_STATE(222)] = 10943,
  [SMALL_STATE(223)] = 10968,
  [SMALL_STATE(224)] = 10985,
  [SMALL_STATE(225)] = 11002,
  [SMALL_STATE(226)] = 11019,
  [SMALL_STATE(227)] = 11044,
  [SMALL_STATE(228)] = 11067,
  [SMALL_STATE(229)] = 11092,
  [SMALL_STATE(230)] = 11109,
  [SMALL_STATE(231)] = 11134,
  [SMALL_STATE(232)] = 11153,
  [SMALL_STATE(233)] = 11172,
  [SMALL_STATE(234)] = 11189,
  [SMALL_STATE(235)] = 11212,
  [SMALL_STATE(236)] = 11235,
  [SMALL_STATE(237)] = 11258,
  [SMALL_STATE(238)] = 11277,
  [SMALL_STATE(239)] = 11302,
  [SMALL_STATE(240)] = 11327,
  [SMALL_STATE(241)] = 11352,
  [SMALL_STATE(242)] = 11377,
  [SMALL_STATE(243)] = 11400,
  [SMALL_STATE(244)] = 11423,
  [SMALL_STATE(245)] = 11440,
  [SMALL_STATE(246)] = 11463,
  [SMALL_STATE(247)] = 11488,
  [SMALL_STATE(248)] = 11504,
  [SMALL_STATE(249)] = 11526,
  [SMALL_STATE(250)] = 11548,
  [SMALL_STATE(251)] = 11564,
  [SMALL_STATE(252)] = 11584,
  [SMALL_STATE(253)] = 11600,
  [SMALL_STATE(254)] = 11618,
  [SMALL_STATE(255)] = 11634,
  [SMALL_STATE(256)] = 11650,
  [SMALL_STATE(257)] = 11672,
  [SMALL_STATE(258)] = 11694,
  [SMALL_STATE(259)] = 11714,
  [SMALL_STATE(260)] = 11736,
  [SMALL_STATE(261)] = 11752,
  [SMALL_STATE(262)] = 11768,
  [SMALL_STATE(263)] = 11784,
  [SMALL_STATE(264)] = 11806,
  [SMALL_STATE(265)] = 11824,
  [SMALL_STATE(266)] = 11846,
  [SMALL_STATE(267)] = 11868,
  [SMALL_STATE(268)] = 11890,
  [SMALL_STATE(269)] = 11912,
  [SMALL_STATE(270)] = 11934,
  [SMALL_STATE(271)] = 11956,
  [SMALL_STATE(272)] = 11978,
  [SMALL_STATE(273)] = 11996,
  [SMALL_STATE(274)] = 12016,
  [SMALL_STATE(275)] = 12038,
  [SMALL_STATE(276)] = 12060,
  [SMALL_STATE(277)] = 12082,
  [SMALL_STATE(278)] = 12102,
  [SMALL_STATE(279)] = 12118,
  [SMALL_STATE(280)] = 12134,
  [SMALL_STATE(281)] = 12156,
  [SMALL_STATE(282)] = 12176,
  [SMALL_STATE(283)] = 12192,
  [SMALL_STATE(284)] = 12208,
  [SMALL_STATE(285)] = 12228,
  [SMALL_STATE(286)] = 12250,
  [SMALL_STATE(287)] = 12270,
  [SMALL_STATE(288)] = 12290,
  [SMALL_STATE(289)] = 12312,
  [SMALL_STATE(290)] = 12330,
  [SMALL_STATE(291)] = 12352,
  [SMALL_STATE(292)] = 12368,
  [SMALL_STATE(293)] = 12390,
  [SMALL_STATE(294)] = 12412,
  [SMALL_STATE(295)] = 12428,
  [SMALL_STATE(296)] = 12450,
  [SMALL_STATE(297)] = 12470,
  [SMALL_STATE(298)] = 12486,
  [SMALL_STATE(299)] = 12502,
  [SMALL_STATE(300)] = 12522,
  [SMALL_STATE(301)] = 12542,
  [SMALL_STATE(302)] = 12562,
  [SMALL_STATE(303)] = 12584,
  [SMALL_STATE(304)] = 12606,
  [SMALL_STATE(305)] = 12628,
  [SMALL_STATE(306)] = 12650,
  [SMALL_STATE(307)] = 12666,
  [SMALL_STATE(308)] = 12682,
  [SMALL_STATE(309)] = 12704,
  [SMALL_STATE(310)] = 12720,
  [SMALL_STATE(311)] = 12742,
  [SMALL_STATE(312)] = 12764,
  [SMALL_STATE(313)] = 12784,
  [SMALL_STATE(314)] = 12804,
  [SMALL_STATE(315)] = 12823,
  [SMALL_STATE(316)] = 12842,
  [SMALL_STATE(317)] = 12859,
  [SMALL_STATE(318)] = 12878,
  [SMALL_STATE(319)] = 12893,
  [SMALL_STATE(320)] = 12912,
  [SMALL_STATE(321)] = 12931,
  [SMALL_STATE(322)] = 12950,
  [SMALL_STATE(323)] = 12969,
  [SMALL_STATE(324)] = 12988,
  [SMALL_STATE(325)] = 13007,
  [SMALL_STATE(326)] = 13026,
  [SMALL_STATE(327)] = 13045,
  [SMALL_STATE(328)] = 13064,
  [SMALL_STATE(329)] = 13083,
  [SMALL_STATE(330)] = 13100,
  [SMALL_STATE(331)] = 13119,
  [SMALL_STATE(332)] = 13138,
  [SMALL_STATE(333)] = 13157,
  [SMALL_STATE(334)] = 13174,
  [SMALL_STATE(335)] = 13193,
  [SMALL_STATE(336)] = 13208,
  [SMALL_STATE(337)] = 13225,
  [SMALL_STATE(338)] = 13244,
  [SMALL_STATE(339)] = 13263,
  [SMALL_STATE(340)] = 13282,
  [SMALL_STATE(341)] = 13299,
  [SMALL_STATE(342)] = 13318,
  [SMALL_STATE(343)] = 13337,
  [SMALL_STATE(344)] = 13354,
  [SMALL_STATE(345)] = 13373,
  [SMALL_STATE(346)] = 13390,
  [SMALL_STATE(347)] = 13409,
  [SMALL_STATE(348)] = 13426,
  [SMALL_STATE(349)] = 13443,
  [SMALL_STATE(350)] = 13460,
  [SMALL_STATE(351)] = 13479,
  [SMALL_STATE(352)] = 13498,
  [SMALL_STATE(353)] = 13513,
  [SMALL_STATE(354)] = 13532,
  [SMALL_STATE(355)] = 13551,
  [SMALL_STATE(356)] = 13570,
  [SMALL_STATE(357)] = 13589,
  [SMALL_STATE(358)] = 13608,
  [SMALL_STATE(359)] = 13627,
  [SMALL_STATE(360)] = 13646,
  [SMALL_STATE(361)] = 13665,
  [SMALL_STATE(362)] = 13684,
  [SMALL_STATE(363)] = 13703,
  [SMALL_STATE(364)] = 13722,
  [SMALL_STATE(365)] = 13741,
  [SMALL_STATE(366)] = 13758,
  [SMALL_STATE(367)] = 13777,
  [SMALL_STATE(368)] = 13796,
  [SMALL_STATE(369)] = 13815,
  [SMALL_STATE(370)] = 13834,
  [SMALL_STATE(371)] = 13853,
  [SMALL_STATE(372)] = 13872,
  [SMALL_STATE(373)] = 13891,
  [SMALL_STATE(374)] = 13906,
  [SMALL_STATE(375)] = 13925,
  [SMALL_STATE(376)] = 13944,
  [SMALL_STATE(377)] = 13963,
  [SMALL_STATE(378)] = 13982,
  [SMALL_STATE(379)] = 14001,
  [SMALL_STATE(380)] = 14020,
  [SMALL_STATE(381)] = 14039,
  [SMALL_STATE(382)] = 14058,
  [SMALL_STATE(383)] = 14077,
  [SMALL_STATE(384)] = 14096,
  [SMALL_STATE(385)] = 14115,
  [SMALL_STATE(386)] = 14130,
  [SMALL_STATE(387)] = 14149,
  [SMALL_STATE(388)] = 14168,
  [SMALL_STATE(389)] = 14185,
  [SMALL_STATE(390)] = 14204,
  [SMALL_STATE(391)] = 14223,
  [SMALL_STATE(392)] = 14240,
  [SMALL_STATE(393)] = 14259,
  [SMALL_STATE(394)] = 14274,
  [SMALL_STATE(395)] = 14291,
  [SMALL_STATE(396)] = 14310,
  [SMALL_STATE(397)] = 14327,
  [SMALL_STATE(398)] = 14344,
  [SMALL_STATE(399)] = 14363,
  [SMALL_STATE(400)] = 14382,
  [SMALL_STATE(401)] = 14401,
  [SMALL_STATE(402)] = 14420,
  [SMALL_STATE(403)] = 14439,
  [SMALL_STATE(404)] = 14456,
  [SMALL_STATE(405)] = 14473,
  [SMALL_STATE(406)] = 14492,
  [SMALL_STATE(407)] = 14511,
  [SMALL_STATE(408)] = 14530,
  [SMALL_STATE(409)] = 14549,
  [SMALL_STATE(410)] = 14568,
  [SMALL_STATE(411)] = 14587,
  [SMALL_STATE(412)] = 14606,
  [SMALL_STATE(413)] = 14625,
  [SMALL_STATE(414)] = 14644,
  [SMALL_STATE(415)] = 14663,
  [SMALL_STATE(416)] = 14682,
  [SMALL_STATE(417)] = 14701,
  [SMALL_STATE(418)] = 14720,
  [SMALL_STATE(419)] = 14739,
  [SMALL_STATE(420)] = 14758,
  [SMALL_STATE(421)] = 14777,
  [SMALL_STATE(422)] = 14796,
  [SMALL_STATE(423)] = 14813,
  [SMALL_STATE(424)] = 14832,
  [SMALL_STATE(425)] = 14851,
  [SMALL_STATE(426)] = 14870,
  [SMALL_STATE(427)] = 14889,
  [SMALL_STATE(428)] = 14908,
  [SMALL_STATE(429)] = 14927,
  [SMALL_STATE(430)] = 14946,
  [SMALL_STATE(431)] = 14965,
  [SMALL_STATE(432)] = 14979,
  [SMALL_STATE(433)] = 14993,
  [SMALL_STATE(434)] = 15009,
  [SMALL_STATE(435)] = 15025,
  [SMALL_STATE(436)] = 15039,
  [SMALL_STATE(437)] = 15053,
  [SMALL_STATE(438)] = 15067,
  [SMALL_STATE(439)] = 15083,
  [SMALL_STATE(440)] = 15097,
  [SMALL_STATE(441)] = 15111,
  [SMALL_STATE(442)] = 15125,
  [SMALL_STATE(443)] = 15139,
  [SMALL_STATE(444)] = 15153,
  [SMALL_STATE(445)] = 15169,
  [SMALL_STATE(446)] = 15183,
  [SMALL_STATE(447)] = 15197,
  [SMALL_STATE(448)] = 15211,
  [SMALL_STATE(449)] = 15225,
  [SMALL_STATE(450)] = 15239,
  [SMALL_STATE(451)] = 15253,
  [SMALL_STATE(452)] = 15269,
  [SMALL_STATE(453)] = 15283,
  [SMALL_STATE(454)] = 15297,
  [SMALL_STATE(455)] = 15313,
  [SMALL_STATE(456)] = 15327,
  [SMALL_STATE(457)] = 15341,
  [SMALL_STATE(458)] = 15357,
  [SMALL_STATE(459)] = 15373,
  [SMALL_STATE(460)] = 15387,
  [SMALL_STATE(461)] = 15401,
  [SMALL_STATE(462)] = 15415,
  [SMALL_STATE(463)] = 15429,
  [SMALL_STATE(464)] = 15443,
  [SMALL_STATE(465)] = 15457,
  [SMALL_STATE(466)] = 15471,
  [SMALL_STATE(467)] = 15485,
  [SMALL_STATE(468)] = 15499,
  [SMALL_STATE(469)] = 15513,
  [SMALL_STATE(470)] = 15527,
  [SMALL_STATE(471)] = 15543,
  [SMALL_STATE(472)] = 15557,
  [SMALL_STATE(473)] = 15573,
  [SMALL_STATE(474)] = 15587,
  [SMALL_STATE(475)] = 15601,
  [SMALL_STATE(476)] = 15617,
  [SMALL_STATE(477)] = 15631,
  [SMALL_STATE(478)] = 15647,
  [SMALL_STATE(479)] = 15663,
  [SMALL_STATE(480)] = 15679,
  [SMALL_STATE(481)] = 15695,
  [SMALL_STATE(482)] = 15709,
  [SMALL_STATE(483)] = 15725,
  [SMALL_STATE(484)] = 15741,
  [SMALL_STATE(485)] = 15757,
  [SMALL_STATE(486)] = 15773,
  [SMALL_STATE(487)] = 15787,
  [SMALL_STATE(488)] = 15801,
  [SMALL_STATE(489)] = 15817,
  [SMALL_STATE(490)] = 15833,
  [SMALL_STATE(491)] = 15847,
  [SMALL_STATE(492)] = 15863,
  [SMALL_STATE(493)] = 15879,
  [SMALL_STATE(494)] = 15893,
  [SMALL_STATE(495)] = 15909,
  [SMALL_STATE(496)] = 15925,
  [SMALL_STATE(497)] = 15939,
  [SMALL_STATE(498)] = 15953,
  [SMALL_STATE(499)] = 15967,
  [SMALL_STATE(500)] = 15981,
  [SMALL_STATE(501)] = 15997,
  [SMALL_STATE(502)] = 16011,
  [SMALL_STATE(503)] = 16027,
  [SMALL_STATE(504)] = 16041,
  [SMALL_STATE(505)] = 16055,
  [SMALL_STATE(506)] = 16071,
  [SMALL_STATE(507)] = 16085,
  [SMALL_STATE(508)] = 16101,
  [SMALL_STATE(509)] = 16115,
  [SMALL_STATE(510)] = 16129,
  [SMALL_STATE(511)] = 16143,
  [SMALL_STATE(512)] = 16157,
  [SMALL_STATE(513)] = 16171,
  [SMALL_STATE(514)] = 16187,
  [SMALL_STATE(515)] = 16201,
  [SMALL_STATE(516)] = 16217,
  [SMALL_STATE(517)] = 16233,
  [SMALL_STATE(518)] = 16247,
  [SMALL_STATE(519)] = 16261,
  [SMALL_STATE(520)] = 16277,
  [SMALL_STATE(521)] = 16293,
  [SMALL_STATE(522)] = 16309,
  [SMALL_STATE(523)] = 16323,
  [SMALL_STATE(524)] = 16337,
  [SMALL_STATE(525)] = 16351,
  [SMALL_STATE(526)] = 16367,
  [SMALL_STATE(527)] = 16383,
  [SMALL_STATE(528)] = 16397,
  [SMALL_STATE(529)] = 16413,
  [SMALL_STATE(530)] = 16429,
  [SMALL_STATE(531)] = 16443,
  [SMALL_STATE(532)] = 16457,
  [SMALL_STATE(533)] = 16471,
  [SMALL_STATE(534)] = 16485,
  [SMALL_STATE(535)] = 16499,
  [SMALL_STATE(536)] = 16513,
  [SMALL_STATE(537)] = 16527,
  [SMALL_STATE(538)] = 16541,
  [SMALL_STATE(539)] = 16555,
  [SMALL_STATE(540)] = 16571,
  [SMALL_STATE(541)] = 16584,
  [SMALL_STATE(542)] = 16597,
  [SMALL_STATE(543)] = 16610,
  [SMALL_STATE(544)] = 16623,
  [SMALL_STATE(545)] = 16636,
  [SMALL_STATE(546)] = 16649,
  [SMALL_STATE(547)] = 16662,
  [SMALL_STATE(548)] = 16675,
  [SMALL_STATE(549)] = 16688,
  [SMALL_STATE(550)] = 16701,
  [SMALL_STATE(551)] = 16714,
  [SMALL_STATE(552)] = 16727,
  [SMALL_STATE(553)] = 16740,
  [SMALL_STATE(554)] = 16753,
  [SMALL_STATE(555)] = 16766,
  [SMALL_STATE(556)] = 16779,
  [SMALL_STATE(557)] = 16792,
  [SMALL_STATE(558)] = 16805,
  [SMALL_STATE(559)] = 16818,
  [SMALL_STATE(560)] = 16831,
  [SMALL_STATE(561)] = 16844,
  [SMALL_STATE(562)] = 16857,
  [SMALL_STATE(563)] = 16870,
  [SMALL_STATE(564)] = 16883,
  [SMALL_STATE(565)] = 16896,
  [SMALL_STATE(566)] = 16909,
  [SMALL_STATE(567)] = 16922,
  [SMALL_STATE(568)] = 16935,
  [SMALL_STATE(569)] = 16948,
  [SMALL_STATE(570)] = 16961,
  [SMALL_STATE(571)] = 16974,
  [SMALL_STATE(572)] = 16987,
  [SMALL_STATE(573)] = 17000,
  [SMALL_STATE(574)] = 17013,
  [SMALL_STATE(575)] = 17026,
  [SMALL_STATE(576)] = 17039,
  [SMALL_STATE(577)] = 17052,
  [SMALL_STATE(578)] = 17065,
  [SMALL_STATE(579)] = 17078,
  [SMALL_STATE(580)] = 17091,
  [SMALL_STATE(581)] = 17104,
  [SMALL_STATE(582)] = 17117,
  [SMALL_STATE(583)] = 17130,
  [SMALL_STATE(584)] = 17143,
  [SMALL_STATE(585)] = 17156,
  [SMALL_STATE(586)] = 17169,
  [SMALL_STATE(587)] = 17182,
  [SMALL_STATE(588)] = 17195,
  [SMALL_STATE(589)] = 17208,
  [SMALL_STATE(590)] = 17221,
  [SMALL_STATE(591)] = 17234,
  [SMALL_STATE(592)] = 17247,
  [SMALL_STATE(593)] = 17260,
  [SMALL_STATE(594)] = 17273,
  [SMALL_STATE(595)] = 17286,
  [SMALL_STATE(596)] = 17299,
  [SMALL_STATE(597)] = 17312,
  [SMALL_STATE(598)] = 17325,
  [SMALL_STATE(599)] = 17338,
  [SMALL_STATE(600)] = 17351,
  [SMALL_STATE(601)] = 17364,
  [SMALL_STATE(602)] = 17377,
  [SMALL_STATE(603)] = 17390,
  [SMALL_STATE(604)] = 17403,
  [SMALL_STATE(605)] = 17416,
  [SMALL_STATE(606)] = 17429,
  [SMALL_STATE(607)] = 17442,
  [SMALL_STATE(608)] = 17455,
  [SMALL_STATE(609)] = 17468,
  [SMALL_STATE(610)] = 17481,
  [SMALL_STATE(611)] = 17494,
  [SMALL_STATE(612)] = 17507,
  [SMALL_STATE(613)] = 17520,
  [SMALL_STATE(614)] = 17533,
  [SMALL_STATE(615)] = 17546,
  [SMALL_STATE(616)] = 17559,
  [SMALL_STATE(617)] = 17572,
  [SMALL_STATE(618)] = 17585,
  [SMALL_STATE(619)] = 17598,
  [SMALL_STATE(620)] = 17611,
  [SMALL_STATE(621)] = 17624,
  [SMALL_STATE(622)] = 17637,
  [SMALL_STATE(623)] = 17650,
  [SMALL_STATE(624)] = 17663,
  [SMALL_STATE(625)] = 17676,
  [SMALL_STATE(626)] = 17689,
  [SMALL_STATE(627)] = 17702,
  [SMALL_STATE(628)] = 17715,
  [SMALL_STATE(629)] = 17728,
  [SMALL_STATE(630)] = 17741,
  [SMALL_STATE(631)] = 17754,
  [SMALL_STATE(632)] = 17767,
  [SMALL_STATE(633)] = 17780,
  [SMALL_STATE(634)] = 17793,
  [SMALL_STATE(635)] = 17806,
  [SMALL_STATE(636)] = 17819,
  [SMALL_STATE(637)] = 17832,
  [SMALL_STATE(638)] = 17845,
  [SMALL_STATE(639)] = 17858,
  [SMALL_STATE(640)] = 17871,
  [SMALL_STATE(641)] = 17884,
  [SMALL_STATE(642)] = 17897,
  [SMALL_STATE(643)] = 17910,
  [SMALL_STATE(644)] = 17923,
  [SMALL_STATE(645)] = 17936,
  [SMALL_STATE(646)] = 17949,
  [SMALL_STATE(647)] = 17962,
  [SMALL_STATE(648)] = 17975,
  [SMALL_STATE(649)] = 17988,
  [SMALL_STATE(650)] = 18001,
  [SMALL_STATE(651)] = 18014,
  [SMALL_STATE(652)] = 18027,
  [SMALL_STATE(653)] = 18040,
  [SMALL_STATE(654)] = 18053,
  [SMALL_STATE(655)] = 18066,
  [SMALL_STATE(656)] = 18079,
  [SMALL_STATE(657)] = 18092,
  [SMALL_STATE(658)] = 18105,
  [SMALL_STATE(659)] = 18118,
  [SMALL_STATE(660)] = 18131,
  [SMALL_STATE(661)] = 18144,
  [SMALL_STATE(662)] = 18157,
  [SMALL_STATE(663)] = 18170,
  [SMALL_STATE(664)] = 18183,
  [SMALL_STATE(665)] = 18196,
  [SMALL_STATE(666)] = 18209,
  [SMALL_STATE(667)] = 18222,
  [SMALL_STATE(668)] = 18235,
  [SMALL_STATE(669)] = 18248,
  [SMALL_STATE(670)] = 18261,
  [SMALL_STATE(671)] = 18274,
  [SMALL_STATE(672)] = 18287,
  [SMALL_STATE(673)] = 18300,
  [SMALL_STATE(674)] = 18313,
  [SMALL_STATE(675)] = 18326,
  [SMALL_STATE(676)] = 18339,
  [SMALL_STATE(677)] = 18352,
  [SMALL_STATE(678)] = 18365,
  [SMALL_STATE(679)] = 18378,
  [SMALL_STATE(680)] = 18391,
  [SMALL_STATE(681)] = 18404,
  [SMALL_STATE(682)] = 18417,
  [SMALL_STATE(683)] = 18430,
  [SMALL_STATE(684)] = 18443,
  [SMALL_STATE(685)] = 18456,
  [SMALL_STATE(686)] = 18469,
  [SMALL_STATE(687)] = 18482,
  [SMALL_STATE(688)] = 18495,
  [SMALL_STATE(689)] = 18508,
  [SMALL_STATE(690)] = 18521,
  [SMALL_STATE(691)] = 18534,
  [SMALL_STATE(692)] = 18547,
  [SMALL_STATE(693)] = 18560,
  [SMALL_STATE(694)] = 18573,
  [SMALL_STATE(695)] = 18586,
  [SMALL_STATE(696)] = 18599,
  [SMALL_STATE(697)] = 18612,
  [SMALL_STATE(698)] = 18625,
  [SMALL_STATE(699)] = 18638,
  [SMALL_STATE(700)] = 18651,
  [SMALL_STATE(701)] = 18664,
  [SMALL_STATE(702)] = 18677,
  [SMALL_STATE(703)] = 18690,
  [SMALL_STATE(704)] = 18703,
  [SMALL_STATE(705)] = 18716,
  [SMALL_STATE(706)] = 18729,
  [SMALL_STATE(707)] = 18742,
  [SMALL_STATE(708)] = 18755,
  [SMALL_STATE(709)] = 18768,
  [SMALL_STATE(710)] = 18781,
  [SMALL_STATE(711)] = 18794,
  [SMALL_STATE(712)] = 18807,
  [SMALL_STATE(713)] = 18820,
  [SMALL_STATE(714)] = 18833,
  [SMALL_STATE(715)] = 18846,
  [SMALL_STATE(716)] = 18859,
  [SMALL_STATE(717)] = 18872,
  [SMALL_STATE(718)] = 18885,
  [SMALL_STATE(719)] = 18898,
  [SMALL_STATE(720)] = 18911,
  [SMALL_STATE(721)] = 18924,
  [SMALL_STATE(722)] = 18937,
  [SMALL_STATE(723)] = 18950,
  [SMALL_STATE(724)] = 18963,
  [SMALL_STATE(725)] = 18976,
  [SMALL_STATE(726)] = 18989,
  [SMALL_STATE(727)] = 19002,
  [SMALL_STATE(728)] = 19015,
  [SMALL_STATE(729)] = 19028,
  [SMALL_STATE(730)] = 19041,
  [SMALL_STATE(731)] = 19054,
  [SMALL_STATE(732)] = 19067,
  [SMALL_STATE(733)] = 19080,
  [SMALL_STATE(734)] = 19093,
  [SMALL_STATE(735)] = 19106,
  [SMALL_STATE(736)] = 19119,
  [SMALL_STATE(737)] = 19132,
  [SMALL_STATE(738)] = 19145,
  [SMALL_STATE(739)] = 19158,
  [SMALL_STATE(740)] = 19171,
  [SMALL_STATE(741)] = 19184,
  [SMALL_STATE(742)] = 19197,
  [SMALL_STATE(743)] = 19210,
  [SMALL_STATE(744)] = 19223,
  [SMALL_STATE(745)] = 19236,
  [SMALL_STATE(746)] = 19249,
  [SMALL_STATE(747)] = 19262,
  [SMALL_STATE(748)] = 19275,
  [SMALL_STATE(749)] = 19288,
  [SMALL_STATE(750)] = 19301,
  [SMALL_STATE(751)] = 19314,
  [SMALL_STATE(752)] = 19327,
  [SMALL_STATE(753)] = 19340,
  [SMALL_STATE(754)] = 19353,
  [SMALL_STATE(755)] = 19366,
  [SMALL_STATE(756)] = 19379,
  [SMALL_STATE(757)] = 19392,
  [SMALL_STATE(758)] = 19405,
  [SMALL_STATE(759)] = 19418,
  [SMALL_STATE(760)] = 19431,
  [SMALL_STATE(761)] = 19444,
  [SMALL_STATE(762)] = 19457,
  [SMALL_STATE(763)] = 19470,
  [SMALL_STATE(764)] = 19483,
  [SMALL_STATE(765)] = 19496,
  [SMALL_STATE(766)] = 19509,
  [SMALL_STATE(767)] = 19522,
  [SMALL_STATE(768)] = 19535,
  [SMALL_STATE(769)] = 19548,
  [SMALL_STATE(770)] = 19561,
  [SMALL_STATE(771)] = 19574,
  [SMALL_STATE(772)] = 19587,
  [SMALL_STATE(773)] = 19600,
  [SMALL_STATE(774)] = 19613,
  [SMALL_STATE(775)] = 19626,
  [SMALL_STATE(776)] = 19639,
  [SMALL_STATE(777)] = 19652,
  [SMALL_STATE(778)] = 19665,
  [SMALL_STATE(779)] = 19678,
  [SMALL_STATE(780)] = 19682,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(229),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(212),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(213),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(213),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(215),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(252),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(576),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(210),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(223),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(223),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(224),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(225),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(225),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(260),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(260),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(233),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(763),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(237),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(250),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(588),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(575),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(644),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(678),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(684),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(685),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(66),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(758),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(757),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(325),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(752),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(750),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(749),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(748),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(76),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(686),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(72),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(731),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(34),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(745),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(327),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(192),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(247),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(696),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(451),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(194),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_body, 1),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(229),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(212),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(213),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(213),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(215),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(252),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(576),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(210),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(223),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(223),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(224),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(225),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(225),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(260),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(260),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(233),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(763),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(237),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(250),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(588),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(575),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(644),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(678),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(684),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(685),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(66),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(758),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(757),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(325),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(752),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(750),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(749),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(748),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(76),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(686),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(707),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(34),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(745),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(327),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(192),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(247),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(696),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(705),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(451),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(194),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(229),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(212),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(213),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(213),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(215),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(252),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(576),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(210),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(223),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(223),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(224),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(225),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(225),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(260),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(260),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(233),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(763),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(237),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(250),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(588),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(575),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(644),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(678),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(684),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(685),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(66),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(758),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(757),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(325),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(752),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(750),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(749),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(748),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(76),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(686),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(34),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(745),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(327),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(192),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(247),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(696),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(451),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(194),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(644),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(778),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(324),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(759),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(756),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(325),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(326),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(752),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(751),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(750),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(749),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(748),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(370),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(438),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(34),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(745),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(327),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(328),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(192),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(742),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(541),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(740),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(726),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(451),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(717),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(644),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(778),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(324),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(759),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(758),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(757),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(756),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(325),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(326),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(752),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(751),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(750),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(749),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(748),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(76),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(438),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(34),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(745),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(327),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(328),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(192),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(742),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(541),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(740),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(726),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(451),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 2), SHIFT_REPEAT(717),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(229),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(212),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(213),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(213),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(215),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(252),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(576),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(210),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(224),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(260),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(260),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(233),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(763),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(237),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(250),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(588),
  [879] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(575),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(321),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(247),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(194),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(229),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(212),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(213),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(213),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(215),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(597),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(595),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(210),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(223),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(224),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(260),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(260),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(233),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(763),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(237),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(596),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(588),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(748),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(34),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(745),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(194),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 1),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 2),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(321),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 6),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 6),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [1103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 6),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 6),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [1129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(434),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat2, 1),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat2, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(685),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(66),
  [1222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(214),
  [1225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(209),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(428),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(426),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(425),
  [1237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(429),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 2),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(685),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(66),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(214),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(209),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(429),
  [1279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 3),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 3),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(685),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(66),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(214),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(209),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(429),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 4),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 4),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4, .production_id = 7),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4, .production_id = 7),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, .production_id = 4),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 1),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 1),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_export, 2),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(325),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_ref, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 1),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 2),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 1),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 1),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 2),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(676),
  [1446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(131),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(121),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 2),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_forward_dcl, 2),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 2),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 3),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(421),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 2),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(571),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 6),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 5),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2), SHIFT_REPEAT(269),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 3),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(287),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 3),
  [1636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(497),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 3),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 3),
  [1687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(323),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 5),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 4),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(317),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [1747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(732),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inheritance_spec, 2),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_inheritance_spec, 2),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [1776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2), SHIFT_REPEAT(470),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 7),
  [1787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2), SHIFT_REPEAT(479),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(483),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [1803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(227),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [1808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2), SHIFT_REPEAT(363),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 2),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 6),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 5),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 2),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 5),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 1),
  [1849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(521),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 5),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [1864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 4),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 1),
  [1874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 4),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(308),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 2),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(222),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(52),
  [1922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(433),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [1931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(241),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(527),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 3),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [1953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(300),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [1982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [1986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [1988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_param_dcl, 3),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_inherit_spec, 2),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [2014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 8),
  [2016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcl, 3),
  [2020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 6),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 8),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [2044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 5),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 5),
  [2068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [2114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_scope, 1),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_spec, 2),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_forward_dcl, 2),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 5),
  [2138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [2148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 5),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [2166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_dcl, 2),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 3),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 2),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id_dcl, 3),
  [2218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 4),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_dcl, 4),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4),
  [2230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_prefix_dcl, 3),
  [2232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [2234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [2236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 4),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 7),
  [2246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 7),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 6),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 6),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [2276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 4),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 2),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 7),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [2304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_dcl, 3),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consumes_dcl, 3),
  [2312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publishes_dcl, 3),
  [2314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 4),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emits_dcl, 3),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 3),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_dcl, 1),
  [2330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_dcl, 3),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 3),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 5),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [2352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [2354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [2356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dcl, 1),
  [2358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [2370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_dcl, 1),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [2374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 3),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [2390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [2394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_with_context, 2),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 5),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 5),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 6),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 6),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 3),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2444] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [2448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [2450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_box_def, 3),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 4),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [2472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 4),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 3),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 1),
  [2516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 1),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 4),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [2544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [2552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [2562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
