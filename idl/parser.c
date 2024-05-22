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
#define STATE_COUNT 789
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 351
#define ALIAS_COUNT 0
#define TOKEN_COUNT 134
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

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
  sym_escape_sequence = 45,
  anon_sym_L = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_literal_token1 = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_char_literal_token1 = 50,
  anon_sym_TRUE = 51,
  anon_sym_FALSE = 52,
  sym_number_literal = 53,
  aux_sym_preproc_call_token1 = 54,
  sym_preproc_directive = 55,
  sym_preproc_arg = 56,
  anon_sym_exception = 57,
  anon_sym_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_local = 60,
  anon_sym_abstract = 61,
  anon_sym_interface = 62,
  anon_sym_COLON = 63,
  anon_sym_SEMI = 64,
  anon_sym_void = 65,
  anon_sym_in = 66,
  anon_sym_out = 67,
  anon_sym_inout = 68,
  anon_sym_raises = 69,
  anon_sym_readonly = 70,
  anon_sym_attribute = 71,
  anon_sym_getraises = 72,
  anon_sym_setraises = 73,
  anon_sym_bitset = 74,
  anon_sym_bitfield = 75,
  anon_sym_bitmask = 76,
  anon_sym_ATannotation = 77,
  anon_sym_default = 78,
  anon_sym_AT = 79,
  anon_sym_EQ = 80,
  anon_sym_module = 81,
  anon_sym_typename = 82,
  anon_sym_valuetype = 83,
  anon_sym_eventtype = 84,
  anon_sym_struct = 85,
  anon_sym_union = 86,
  anon_sym_enum = 87,
  anon_sym_const = 88,
  anon_sym_alias = 89,
  anon_sym_custom = 90,
  anon_sym_truncatable = 91,
  anon_sym_supports = 92,
  anon_sym_public = 93,
  anon_sym_private = 94,
  anon_sym_factory = 95,
  anon_sym_typedef = 96,
  anon_sym_LBRACK = 97,
  anon_sym_RBRACK = 98,
  anon_sym_ATdefault_literal = 99,
  anon_sym_ATignore_literal_names = 100,
  anon_sym_switch = 101,
  anon_sym_case = 102,
  anon_sym_typeid = 103,
  anon_sym_typeprefix = 104,
  anon_sym_import = 105,
  anon_sym_Object = 106,
  anon_sym_oneway = 107,
  anon_sym_context = 108,
  sym_value_base_type = 109,
  anon_sym_component = 110,
  anon_sym_provides = 111,
  anon_sym_uses = 112,
  anon_sym_multiple = 113,
  anon_sym_home = 114,
  anon_sym_manages = 115,
  anon_sym_emits = 116,
  anon_sym_publishes = 117,
  anon_sym_consumes = 118,
  anon_sym_primarykey = 119,
  anon_sym_finder = 120,
  anon_sym_porttype = 121,
  anon_sym_port = 122,
  anon_sym_mirrorport = 123,
  anon_sym_connector = 124,
  anon_sym_native = 125,
  anon_sym_POUNDdefine = 126,
  aux_sym_predefine_token1 = 127,
  sym_identifier = 128,
  anon_sym_SLASH_SLASH = 129,
  aux_sym_comment_token1 = 130,
  aux_sym_comment_token2 = 131,
  anon_sym_SLASH_STAR = 132,
  aux_sym_comment_token3 = 133,
  sym_specification = 134,
  sym_signed_short_int = 135,
  sym_signed_long_int = 136,
  sym_signed_longlong_int = 137,
  sym_unsigned_int = 138,
  sym_fixed_pt_const_type = 139,
  sym_integer_type = 140,
  sym_signed_int = 141,
  sym_unsigned_short_int = 142,
  sym_unsigned_long_int = 143,
  sym_unsigned_longlong_int = 144,
  sym_floating_pt_type = 145,
  sym_char_type = 146,
  sym_scoped_name = 147,
  sym_string_type = 148,
  sym_type_spec = 149,
  sym_simple_type_spec = 150,
  sym_base_type_spec = 151,
  sym_any_type = 152,
  sym_fixed_pt_type = 153,
  sym_template_type_spec = 154,
  sym_sequence_type = 155,
  sym_map_type = 156,
  sym_positive_int_const = 157,
  sym_const_expr = 158,
  sym_or_expr = 159,
  sym_xor_expr = 160,
  sym_and_expr = 161,
  sym_shift_expr = 162,
  sym_add_expr = 163,
  sym_mult_expr = 164,
  sym_unary_expr = 165,
  sym_unary_operator = 166,
  sym_literal = 167,
  sym_string_literal = 168,
  sym_char_literal = 169,
  sym_boolean_literal = 170,
  sym_preproc_call = 171,
  sym_except_dcl = 172,
  sym_interface_dcl = 173,
  sym_interface_kind = 174,
  sym_interface_forward_dcl = 175,
  sym_interface_def = 176,
  sym_interface_header = 177,
  sym_interface_inheritance_spec = 178,
  sym_interface_name = 179,
  sym_interface_body = 180,
  sym_export = 181,
  sym_op_dcl = 182,
  sym_op_type_spec = 183,
  sym_parameter_dcls = 184,
  sym_param_dcl = 185,
  sym_param_attribute = 186,
  sym_raises_expr = 187,
  sym_attr_dcl = 188,
  sym_readonly_attr_spec = 189,
  sym_readonly_attr_declarator = 190,
  sym_attr_spec = 191,
  sym_attr_declarator = 192,
  sym_attr_raises_expr = 193,
  sym_get_excep_expr = 194,
  sym_set_excep_expr = 195,
  sym_exception_list = 196,
  sym_bitset_dcl = 197,
  sym_bitfield = 198,
  sym_bitfield_spec = 199,
  sym_destination_type = 200,
  sym_bitmask_dcl = 201,
  sym_bit_value = 202,
  sym_annotation_dcl = 203,
  sym_annotation_body = 204,
  sym_annotation_member = 205,
  sym_annotation_member_type = 206,
  sym_any_const_type = 207,
  sym_annotation_appl = 208,
  sym_annotation_appl_params = 209,
  sym_annotation_appl_param = 210,
  sym_template_module_dcl = 211,
  sym_formal_parameters = 212,
  sym_formal_parameter = 213,
  sym_formal_parameter_type = 214,
  sym_tpl_definition = 215,
  sym_template_module_inst = 216,
  sym_actual_parameters = 217,
  sym_actual_parameter = 218,
  sym_template_module_ref = 219,
  sym_formal_parameter_names = 220,
  sym_value_dcl = 221,
  sym_value_def = 222,
  sym_value_kind = 223,
  sym_value_header = 224,
  sym_value_inheritance_spec = 225,
  sym_value_name = 226,
  sym_value_element = 227,
  sym_state_member = 228,
  sym_init_dcl = 229,
  sym_init_param_dcls = 230,
  sym_init_param_dcl = 231,
  sym_value_forward_dcl = 232,
  sym_typedef_dcl = 233,
  sym_type_declarator = 234,
  sym_any_declarators = 235,
  sym_any_declarator = 236,
  sym_simple_declarator = 237,
  sym_declarator = 238,
  sym_declarators = 239,
  sym_array_declarator = 240,
  sym_fixed_array_size = 241,
  sym_enum_dcl = 242,
  sym_enumerator = 243,
  sym_enum_modifier = 244,
  sym_enum_anno = 245,
  sym_union_forward_dcl = 246,
  sym_union_def = 247,
  sym_case = 248,
  sym_case_label = 249,
  sym_element_spec = 250,
  sym_switch_type_spec = 251,
  sym_type_id_dcl = 252,
  sym_type_prefix_dcl = 253,
  sym_import_dcl = 254,
  sym_imported_scope = 255,
  sym_object_type = 256,
  sym_op_oneway_dcl = 257,
  sym_in_parameter_dcls = 258,
  sym_in_param_dcl = 259,
  sym_op_with_context = 260,
  sym_context_expr = 261,
  sym_value_box_def = 262,
  sym_value_abs_def = 263,
  sym_component_dcl = 264,
  sym_component_forward_dcl = 265,
  sym_component_def = 266,
  sym_component_header = 267,
  sym_component_inheritance_spec = 268,
  sym_component_body = 269,
  sym_component_export = 270,
  sym_provides_dcl = 271,
  sym_interface_type = 272,
  sym_uses_dcl = 273,
  sym_home_dcl = 274,
  sym_home_header = 275,
  sym_home_inheritance_spec = 276,
  sym_home_body = 277,
  sym_home_export = 278,
  sym_factory_dcl = 279,
  sym_factory_param_dcls = 280,
  sym_factory_param_dcl = 281,
  sym_supported_interface_spec = 282,
  sym_emits_dcl = 283,
  sym_publishes_dcl = 284,
  sym_consumes_dcl = 285,
  sym_primary_key_spec = 286,
  sym_finder_dcl = 287,
  sym_event_dcl = 288,
  sym_event_forward_dcl = 289,
  sym_event_abs_def = 290,
  sym_event_def = 291,
  sym_event_header = 292,
  sym_porttype_dcl = 293,
  sym_porttype_forward_dcl = 294,
  sym_porttype_def = 295,
  sym_port_body = 296,
  sym_port_ref = 297,
  sym_port_export = 298,
  sym_port_dcl = 299,
  sym_connector_dcl = 300,
  sym_connector_header = 301,
  sym_connector_inherit_spec = 302,
  sym_connector_export = 303,
  sym_definition = 304,
  sym_native_dcl = 305,
  sym_module_dcl = 306,
  sym_struct_forward_dcl = 307,
  sym_struct_def = 308,
  sym_member = 309,
  sym_default = 310,
  sym_predefine = 311,
  sym_const_dcl = 312,
  sym_const_type = 313,
  sym_comment = 314,
  aux_sym_specification_repeat1 = 315,
  aux_sym_string_literal_repeat1 = 316,
  aux_sym_char_literal_repeat1 = 317,
  aux_sym_except_dcl_repeat1 = 318,
  aux_sym_interface_def_repeat1 = 319,
  aux_sym_interface_inheritance_spec_repeat1 = 320,
  aux_sym_interface_body_repeat1 = 321,
  aux_sym_parameter_dcls_repeat1 = 322,
  aux_sym_raises_expr_repeat1 = 323,
  aux_sym_readonly_attr_declarator_repeat1 = 324,
  aux_sym_bitset_dcl_repeat1 = 325,
  aux_sym_bitfield_repeat1 = 326,
  aux_sym_bitmask_dcl_repeat1 = 327,
  aux_sym_annotation_dcl_repeat1 = 328,
  aux_sym_annotation_appl_params_repeat1 = 329,
  aux_sym_template_module_dcl_repeat1 = 330,
  aux_sym_formal_parameters_repeat1 = 331,
  aux_sym_actual_parameters_repeat1 = 332,
  aux_sym_formal_parameter_names_repeat1 = 333,
  aux_sym_value_def_repeat1 = 334,
  aux_sym_value_inheritance_spec_repeat1 = 335,
  aux_sym_init_param_dcls_repeat1 = 336,
  aux_sym_any_declarators_repeat1 = 337,
  aux_sym_declarators_repeat1 = 338,
  aux_sym_array_declarator_repeat1 = 339,
  aux_sym_enum_dcl_repeat1 = 340,
  aux_sym_enumerator_repeat1 = 341,
  aux_sym_union_def_repeat1 = 342,
  aux_sym_in_parameter_dcls_repeat1 = 343,
  aux_sym_context_expr_repeat1 = 344,
  aux_sym_component_body_repeat1 = 345,
  aux_sym_home_body_repeat1 = 346,
  aux_sym_factory_param_dcls_repeat1 = 347,
  aux_sym_port_body_repeat1 = 348,
  aux_sym_connector_dcl_repeat1 = 349,
  aux_sym_module_dcl_repeat1 = 350,
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
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_L] = "L",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "character",
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
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_char_literal_repeat1] = "char_literal_repeat1",
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
  [sym_escape_sequence] = sym_escape_sequence,
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
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_char_literal_repeat1] = aux_sym_char_literal_repeat1,
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_literal_repeat1] = {
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_directive] = "directive",
  [field_identifier] = "identifier",
  [field_parent] = "parent",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
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
    {field_parent, 3},
  [6] =
    {field_identifier, 2},
    {field_type, 1},
  [8] =
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
  [61] = 61,
  [62] = 62,
  [63] = 59,
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
  [74] = 59,
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
  [96] = 90,
  [97] = 91,
  [98] = 80,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 102,
  [109] = 109,
  [110] = 110,
  [111] = 107,
  [112] = 101,
  [113] = 113,
  [114] = 113,
  [115] = 113,
  [116] = 116,
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
  [178] = 178,
  [179] = 179,
  [180] = 79,
  [181] = 181,
  [182] = 86,
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
  [197] = 80,
  [198] = 90,
  [199] = 199,
  [200] = 94,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 95,
  [207] = 207,
  [208] = 208,
  [209] = 91,
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
  [308] = 86,
  [309] = 309,
  [310] = 79,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 80,
  [317] = 90,
  [318] = 91,
  [319] = 86,
  [320] = 320,
  [321] = 321,
  [322] = 79,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 249,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 332,
  [338] = 338,
  [339] = 335,
  [340] = 332,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 332,
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
  [412] = 335,
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
  [524] = 94,
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
  [535] = 95,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 94,
  [543] = 543,
  [544] = 544,
  [545] = 95,
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
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 743,
  [770] = 726,
  [771] = 620,
  [772] = 568,
  [773] = 635,
  [774] = 774,
  [775] = 661,
  [776] = 776,
  [777] = 620,
  [778] = 568,
  [779] = 635,
  [780] = 780,
  [781] = 661,
  [782] = 782,
  [783] = 620,
  [784] = 661,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
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
      if (eof) ADVANCE(573);
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '$') ADVANCE(633);
      if (lookahead == '%') ADVANCE(642);
      if (lookahead == '\'') ADVANCE(656);
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == ')') ADVANCE(644);
      if (lookahead == '*') ADVANCE(640);
      if (lookahead == '+') ADVANCE(637);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == '0') ADVANCE(672);
      if (lookahead == ':') ADVANCE(718);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == '<') ADVANCE(621);
      if (lookahead == '=') ADVANCE(743);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == 'V') ADVANCE(116);
      if (lookahead == '[') ADVANCE(774);
      if (lookahead == '\\') SKIP(569)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(632);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'u') ADVANCE(276);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(161);
      if (lookahead == '{') ADVANCE(710);
      if (lookahead == '|') ADVANCE(631);
      if (lookahead == '}') ADVANCE(711);
      if (lookahead == '~') ADVANCE(645);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(78)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(78)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(81)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(81)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(83)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(63)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(65)
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
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\'') ADVANCE(656);
      if (lookahead == '/') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0) ADVANCE(657);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == 'U') ADVANCE(565);
      if (lookahead == 'u') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '/') ADVANCE(653);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(654);
      if (lookahead != 0) ADVANCE(655);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(46)
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1110);
      if (lookahead == '\r') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1107);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '\\') SKIP(50)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(52)
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '/') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94)
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') SKIP(59)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') SKIP(59)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '/') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 58:
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 59:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(58)
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(328);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '$') ADVANCE(633);
      if (lookahead == '%') ADVANCE(642);
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == ')') ADVANCE(644);
      if (lookahead == '*') ADVANCE(640);
      if (lookahead == '+') ADVANCE(636);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == ':') ADVANCE(718);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == '<') ADVANCE(621);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(632);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == '{') ADVANCE(710);
      if (lookahead == '|') ADVANCE(631);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '\'') ADVANCE(656);
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == '+') ADVANCE(637);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '0') ADVANCE(674);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'F') ADVANCE(830);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'T') ADVANCE(835);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(892);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '~') ADVANCE(645);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '\'') ADVANCE(656);
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == '+') ADVANCE(637);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '0') ADVANCE(674);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'F') ADVANCE(830);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == 'T') ADVANCE(835);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '~') ADVANCE(645);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'L') ADVANCE(651);
      if (lookahead == '\\') SKIP(34)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(652);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(633);
      if (lookahead == '%') ADVANCE(642);
      if (lookahead == ')') ADVANCE(644);
      if (lookahead == '*') ADVANCE(640);
      if (lookahead == '+') ADVANCE(636);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(632);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(294);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == '{') ADVANCE(710);
      if (lookahead == '|') ADVANCE(631);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      if (lookahead == '$') ADVANCE(633);
      if (lookahead == ')') ADVANCE(644);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(190);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(632);
      if (lookahead == '{') ADVANCE(710);
      if (lookahead == '|') ADVANCE(631);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 70:
      if (lookahead == '\'') ADVANCE(656);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(892);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(644);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') SKIP(47)
      if (lookahead == 'i') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '*') ADVANCE(1114);
      if (lookahead == '/') ADVANCE(1103);
      END_STATE();
    case 75:
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '*') ADVANCE(1115);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '<') ADVANCE(620);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'c') ADVANCE(934);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(841);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 't') ADVANCE(1096);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(858);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '{') ADVANCE(710);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '0') ADVANCE(668);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(718);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(891);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '{') ADVANCE(710);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'c') ADVANCE(934);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(840);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == 'p') ADVANCE(1031);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 't') ADVANCE(1096);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(858);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'c') ADVANCE(934);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 't') ADVANCE(1096);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(858);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead == 'd') ADVANCE(910);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == 'w') ADVANCE(867);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(892);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(867);
      if (lookahead == '}') ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == 'V') ADVANCE(838);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(935);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == 'f') ADVANCE(959);
      if (lookahead == 'i') ADVANCE(991);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(890);
      if (lookahead == 't') ADVANCE(1099);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(859);
      if (lookahead == 'w') ADVANCE(868);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'm') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(861);
      if (lookahead == '\\') SKIP(42)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == 's') ADVANCE(892);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(867);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 's') ADVANCE(937);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'w') ADVANCE(868);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 't') ADVANCE(1030);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == '\\') SKIP(53)
      if (lookahead == 's') ADVANCE(1090);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') SKIP(59)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93)
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 95:
      if (lookahead == '1') ADVANCE(101);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '6') ADVANCE(99);
      if (lookahead == '8') ADVANCE(587);
      END_STATE();
    case 96:
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '3') ADVANCE(98);
      if (lookahead == '6') ADVANCE(100);
      if (lookahead == '8') ADVANCE(595);
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 97:
      if (lookahead == '2') ADVANCE(601);
      END_STATE();
    case 98:
      if (lookahead == '2') ADVANCE(582);
      END_STATE();
    case 99:
      if (lookahead == '4') ADVANCE(604);
      END_STATE();
    case 100:
      if (lookahead == '4') ADVANCE(585);
      END_STATE();
    case 101:
      if (lookahead == '6') ADVANCE(598);
      END_STATE();
    case 102:
      if (lookahead == '6') ADVANCE(576);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(615);
      END_STATE();
    case 104:
      if (lookahead == '<') ADVANCE(635);
      END_STATE();
    case 105:
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 'B') ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(661);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(663);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == 'S') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(377);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(470);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(470);
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(470);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(324);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(591);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(782);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(735);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'h') ADVANCE(399);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead == 'w') ADVANCE(291);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 251:
      if (lookahead == 'f') ADVANCE(772);
      END_STATE();
    case 252:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 253:
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(299);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 257:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(578);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(618);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(584);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(600);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(603);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(375);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(778);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(399);
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 306:
      if (lookahead == 'j') ADVANCE(244);
      END_STATE();
    case 307:
      if (lookahead == 'k') ADVANCE(736);
      END_STATE();
    case 308:
      if (lookahead == 'k') ADVANCE(226);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(776);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(755);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(760);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 'x') ADVANCE(166);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == 'x') ADVANCE(166);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(629);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 420:
      if (lookahead == 'q') ADVANCE(528);
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(805);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(810);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead == 'y') ADVANCE(408);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(801);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(800);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(795);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(777);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(787);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(791);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 523:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 526:
      if (lookahead == 'u') ADVANCE(478);
      END_STATE();
    case 527:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 536:
      if (lookahead == 'v') ADVANCE(298);
      END_STATE();
    case 537:
      if (lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 538:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 539:
      if (lookahead == 'x') ADVANCE(784);
      END_STATE();
    case 540:
      if (lookahead == 'x') ADVANCE(485);
      END_STATE();
    case 541:
      if (lookahead == 'y') ADVANCE(624);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(789);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(770);
      END_STATE();
    case 544:
      if (lookahead == 'y') ADVANCE(727);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(804);
      END_STATE();
    case 546:
      if (lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 547:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 548:
      if (lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 549:
      if (lookahead == 'y') ADVANCE(411);
      END_STATE();
    case 550:
      if (lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 551:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 552:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 553:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(665);
      END_STATE();
    case 554:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      END_STATE();
    case 555:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(679);
      END_STATE();
    case 556:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      END_STATE();
    case 557:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 558:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      END_STATE();
    case 559:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      END_STATE();
    case 560:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(559);
      END_STATE();
    case 561:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      END_STATE();
    case 562:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      END_STATE();
    case 563:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 564:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(563);
      END_STATE();
    case 565:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(564);
      END_STATE();
    case 566:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1111);
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead == '\\') ADVANCE(1112);
      END_STATE();
    case 567:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(705);
      END_STATE();
    case 568:
      if (eof) ADVANCE(573);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 569:
      if (eof) ADVANCE(573);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(568)
      END_STATE();
    case 570:
      if (eof) ADVANCE(573);
      if (lookahead == '\n') SKIP(572)
      END_STATE();
    case 571:
      if (eof) ADVANCE(573);
      if (lookahead == '\n') SKIP(572)
      if (lookahead == '\r') SKIP(570)
      END_STATE();
    case 572:
      if (eof) ADVANCE(573);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '$') ADVANCE(633);
      if (lookahead == '%') ADVANCE(642);
      if (lookahead == ')') ADVANCE(644);
      if (lookahead == '*') ADVANCE(640);
      if (lookahead == '+') ADVANCE(636);
      if (lookahead == ',') ADVANCE(626);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == ':') ADVANCE(718);
      if (lookahead == ';') ADVANCE(719);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(743);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == '\\') SKIP(571)
      if (lookahead == ']') ADVANCE(775);
      if (lookahead == '^') ADVANCE(632);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == 'u') ADVANCE(275);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == '|') ADVANCE(631);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(572)
      END_STATE();
    case 573:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == ' ') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_longlong);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_unsigned_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_octet_type);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_octet_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_signed_tiny_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_unsignedshort);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      if (lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_unsignedlonglong);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_longdouble);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_wchar);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_wchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_wstring);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(635);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(634);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '0') ADVANCE(672);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '0') ADVANCE(672);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1114);
      if (lookahead == '/') ADVANCE(1103);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(44);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(655);
      if (lookahead == '/') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(655);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(653);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == 'U') ADVANCE(565);
      if (lookahead == 'u') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(649);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(1114);
      if (lookahead == '/') ADVANCE(1103);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\') ADVANCE(44);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(665);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(693);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(667);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(667);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(682);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(683);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1101);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(685);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(683);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(554);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(685);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(686);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(688);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(691);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(556);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(688);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(687);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(689);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(692);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1101);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(689);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(693);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(552);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(679);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(679);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(555);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(679);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(683);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(685);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(683);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(685);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(556);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(685);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '0') ADVANCE(673);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(693);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '0') ADVANCE(675);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(666);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(666);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(557);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(667);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(667);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(688);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(679);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(679);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(693);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_preproc_call_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'e') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'f') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'i') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_preproc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') ADVANCE(703);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1114);
      if (lookahead == '/') ADVANCE(1103);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(707);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(705);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(706);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(615);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_raises);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_getraises);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_setraises);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_bitfield);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_typename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_valuetype);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_valuetype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_eventtype);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_eventtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_truncatable);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_truncatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_supports);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_supports);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_factory);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_factory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_ATdefault_literal);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_typeprefix);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_oneway);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_value_base_type);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_value_base_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_manages);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_emits);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_publishes);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_consumes);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_finder);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_finder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_porttype);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_mirrorport);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_connector);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '\r') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(818);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '*') ADVANCE(1117);
      if (lookahead == '/') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(818);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(815);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(818);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_predefine_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '0') ADVANCE(669);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(828);
      if (lookahead == '3') ADVANCE(824);
      if (lookahead == '6') ADVANCE(826);
      if (lookahead == '8') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(828);
      if (lookahead == '3') ADVANCE(824);
      if (lookahead == '6') ADVANCE(826);
      if (lookahead == '8') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(829);
      if (lookahead == '3') ADVANCE(825);
      if (lookahead == '6') ADVANCE(827);
      if (lookahead == '8') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == 'i') ADVANCE(1091);
      if (lookahead == 'l') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == 'l') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1044);
      if (lookahead == 'h') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1045);
      if (lookahead == 'n') ADVANCE(1092);
      if (lookahead == 't') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(938);
      if (lookahead == 's') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1065);
      if (lookahead == 'n') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1021);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 't') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1021);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 't') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1021);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 't') ADVANCE(1033);
      if (lookahead == 'u') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1021);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 't') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(926);
      if (lookahead == 'o') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(846);
      if (lookahead == 'o') ADVANCE(995);
      if (lookahead == 'u') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(846);
      if (lookahead == 'o') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1091);
      if (lookahead == 'l') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead == 'o') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == 'n') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == 'n') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead == 'u') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 's') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1018);
      if (lookahead == 'n') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(839);
      if (lookahead == 's') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'x') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1077);
      if (lookahead == 'v') ADVANCE(924);
      if (lookahead == 'x') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1077);
      if (lookahead == 'x') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1102);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1111);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(818);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(1107);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '@') ADVANCE(741);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(1110);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(1116);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1111);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '/') ADVANCE(1109);
      if (lookahead == '@') ADVANCE(741);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1111);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1111);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1111);
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead == '\\') ADVANCE(1112);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(566);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1111);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(818);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '*') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 572},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 81},
  [4] = {.lex_state = 81},
  [5] = {.lex_state = 81},
  [6] = {.lex_state = 81},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 82},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 572},
  [26] = {.lex_state = 572},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 64},
  [31] = {.lex_state = 64},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 71},
  [37] = {.lex_state = 71},
  [38] = {.lex_state = 71},
  [39] = {.lex_state = 71},
  [40] = {.lex_state = 71},
  [41] = {.lex_state = 71},
  [42] = {.lex_state = 71},
  [43] = {.lex_state = 71},
  [44] = {.lex_state = 71},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 85},
  [48] = {.lex_state = 85},
  [49] = {.lex_state = 71},
  [50] = {.lex_state = 86},
  [51] = {.lex_state = 81},
  [52] = {.lex_state = 81},
  [53] = {.lex_state = 81},
  [54] = {.lex_state = 81},
  [55] = {.lex_state = 86},
  [56] = {.lex_state = 81},
  [57] = {.lex_state = 81},
  [58] = {.lex_state = 71},
  [59] = {.lex_state = 81},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 78},
  [63] = {.lex_state = 78},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 71},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 83},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 71},
  [81] = {.lex_state = 85},
  [82] = {.lex_state = 71},
  [83] = {.lex_state = 71},
  [84] = {.lex_state = 85},
  [85] = {.lex_state = 85},
  [86] = {.lex_state = 71},
  [87] = {.lex_state = 85},
  [88] = {.lex_state = 71},
  [89] = {.lex_state = 71},
  [90] = {.lex_state = 71},
  [91] = {.lex_state = 71},
  [92] = {.lex_state = 71},
  [93] = {.lex_state = 85},
  [94] = {.lex_state = 71},
  [95] = {.lex_state = 71},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 63},
  [98] = {.lex_state = 63},
  [99] = {.lex_state = 71},
  [100] = {.lex_state = 90},
  [101] = {.lex_state = 572},
  [102] = {.lex_state = 572},
  [103] = {.lex_state = 572},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 68},
  [107] = {.lex_state = 572},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 572},
  [110] = {.lex_state = 572},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 65},
  [114] = {.lex_state = 65},
  [115] = {.lex_state = 65},
  [116] = {.lex_state = 68},
  [117] = {.lex_state = 65},
  [118] = {.lex_state = 65},
  [119] = {.lex_state = 65},
  [120] = {.lex_state = 65},
  [121] = {.lex_state = 65},
  [122] = {.lex_state = 65},
  [123] = {.lex_state = 65},
  [124] = {.lex_state = 65},
  [125] = {.lex_state = 65},
  [126] = {.lex_state = 65},
  [127] = {.lex_state = 65},
  [128] = {.lex_state = 65},
  [129] = {.lex_state = 65},
  [130] = {.lex_state = 65},
  [131] = {.lex_state = 65},
  [132] = {.lex_state = 572},
  [133] = {.lex_state = 65},
  [134] = {.lex_state = 65},
  [135] = {.lex_state = 65},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 65},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 65},
  [141] = {.lex_state = 65},
  [142] = {.lex_state = 572},
  [143] = {.lex_state = 572},
  [144] = {.lex_state = 68},
  [145] = {.lex_state = 68},
  [146] = {.lex_state = 68},
  [147] = {.lex_state = 68},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 68},
  [151] = {.lex_state = 68},
  [152] = {.lex_state = 68},
  [153] = {.lex_state = 68},
  [154] = {.lex_state = 68},
  [155] = {.lex_state = 68},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 68},
  [158] = {.lex_state = 68},
  [159] = {.lex_state = 68},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 68},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 68},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 65},
  [166] = {.lex_state = 68},
  [167] = {.lex_state = 68},
  [168] = {.lex_state = 572},
  [169] = {.lex_state = 572},
  [170] = {.lex_state = 68},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 63},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 69},
  [177] = {.lex_state = 65},
  [178] = {.lex_state = 69},
  [179] = {.lex_state = 69},
  [180] = {.lex_state = 63},
  [181] = {.lex_state = 69},
  [182] = {.lex_state = 63},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 66},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 69},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 72},
  [198] = {.lex_state = 72},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 63},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 68},
  [203] = {.lex_state = 69},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 63},
  [207] = {.lex_state = 72},
  [208] = {.lex_state = 72},
  [209] = {.lex_state = 72},
  [210] = {.lex_state = 69},
  [211] = {.lex_state = 87},
  [212] = {.lex_state = 68},
  [213] = {.lex_state = 91},
  [214] = {.lex_state = 72},
  [215] = {.lex_state = 69},
  [216] = {.lex_state = 88},
  [217] = {.lex_state = 69},
  [218] = {.lex_state = 68},
  [219] = {.lex_state = 69},
  [220] = {.lex_state = 69},
  [221] = {.lex_state = 69},
  [222] = {.lex_state = 69},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 88},
  [225] = {.lex_state = 69},
  [226] = {.lex_state = 69},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 69},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 72},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 69},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 68},
  [237] = {.lex_state = 69},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 69},
  [240] = {.lex_state = 69},
  [241] = {.lex_state = 69},
  [242] = {.lex_state = 69},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 72},
  [245] = {.lex_state = 63},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 69},
  [248] = {.lex_state = 72},
  [249] = {.lex_state = 72},
  [250] = {.lex_state = 72},
  [251] = {.lex_state = 43},
  [252] = {.lex_state = 43},
  [253] = {.lex_state = 69},
  [254] = {.lex_state = 69},
  [255] = {.lex_state = 43},
  [256] = {.lex_state = 69},
  [257] = {.lex_state = 69},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 45},
  [263] = {.lex_state = 69},
  [264] = {.lex_state = 73},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 68},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1110},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 72},
  [272] = {.lex_state = 72},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 69},
  [275] = {.lex_state = 68},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 69},
  [279] = {.lex_state = 69},
  [280] = {.lex_state = 69},
  [281] = {.lex_state = 72},
  [282] = {.lex_state = 72},
  [283] = {.lex_state = 69},
  [284] = {.lex_state = 69},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 69},
  [287] = {.lex_state = 51},
  [288] = {.lex_state = 68},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 72},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 69},
  [295] = {.lex_state = 69},
  [296] = {.lex_state = 69},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 69},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 69},
  [302] = {.lex_state = 69},
  [303] = {.lex_state = 72},
  [304] = {.lex_state = 45},
  [305] = {.lex_state = 45},
  [306] = {.lex_state = 69},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 51},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 51},
  [311] = {.lex_state = 73},
  [312] = {.lex_state = 73},
  [313] = {.lex_state = 73},
  [314] = {.lex_state = 72},
  [315] = {.lex_state = 69},
  [316] = {.lex_state = 51},
  [317] = {.lex_state = 51},
  [318] = {.lex_state = 51},
  [319] = {.lex_state = 72},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 45},
  [322] = {.lex_state = 72},
  [323] = {.lex_state = 45},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 78},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 78},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 72},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 68},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 72},
  [338] = {.lex_state = 72},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 72},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 72},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 572},
  [346] = {.lex_state = 69},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 78},
  [349] = {.lex_state = 72},
  [350] = {.lex_state = 72},
  [351] = {.lex_state = 78},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 72},
  [355] = {.lex_state = 72},
  [356] = {.lex_state = 72},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 78},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 45},
  [366] = {.lex_state = 72},
  [367] = {.lex_state = 72},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 78},
  [371] = {.lex_state = 78},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 72},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 78},
  [378] = {.lex_state = 69},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 72},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 72},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 43},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 72},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 92},
  [397] = {.lex_state = 72},
  [398] = {.lex_state = 78},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 69},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 72},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 69},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 43},
  [414] = {.lex_state = 43},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 69},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 72},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 72},
  [423] = {.lex_state = 68},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 72},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 72},
  [432] = {.lex_state = 78},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 72},
  [435] = {.lex_state = 72},
  [436] = {.lex_state = 72},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 78},
  [439] = {.lex_state = 72},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 69},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 69},
  [448] = {.lex_state = 78},
  [449] = {.lex_state = 69},
  [450] = {.lex_state = 78},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 69},
  [453] = {.lex_state = 69},
  [454] = {.lex_state = 73},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 78},
  [457] = {.lex_state = 73},
  [458] = {.lex_state = 69},
  [459] = {.lex_state = 69},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 69},
  [463] = {.lex_state = 73},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 68},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 69},
  [468] = {.lex_state = 69},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 69},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 69},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 69},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 68},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 69},
  [487] = {.lex_state = 69},
  [488] = {.lex_state = 69},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 78},
  [491] = {.lex_state = 72},
  [492] = {.lex_state = 69},
  [493] = {.lex_state = 69},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 69},
  [496] = {.lex_state = 69},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 72},
  [499] = {.lex_state = 69},
  [500] = {.lex_state = 69},
  [501] = {.lex_state = 69},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 69},
  [504] = {.lex_state = 69},
  [505] = {.lex_state = 69},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 78},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 78},
  [512] = {.lex_state = 69},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 69},
  [516] = {.lex_state = 69},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 78},
  [520] = {.lex_state = 72},
  [521] = {.lex_state = 72},
  [522] = {.lex_state = 72},
  [523] = {.lex_state = 72},
  [524] = {.lex_state = 51},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 72},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 69},
  [530] = {.lex_state = 69},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 69},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 51},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 78},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 69},
  [540] = {.lex_state = 78},
  [541] = {.lex_state = 69},
  [542] = {.lex_state = 72},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 72},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 69},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 69},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 69},
  [552] = {.lex_state = 54},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 69},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 69},
  [557] = {.lex_state = 78},
  [558] = {.lex_state = 69},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 78},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 69},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 69},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 69},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 78},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 78},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 69},
  [591] = {.lex_state = 69},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 69},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 78},
  [603] = {.lex_state = 69},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 69},
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
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 69},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 69},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 69},
  [628] = {.lex_state = 69},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 69},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 69},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 55},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 69},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 78},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 75},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 78},
  [670] = {.lex_state = 78},
  [671] = {.lex_state = 78},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 69},
  [678] = {.lex_state = 69},
  [679] = {.lex_state = 68},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 78},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 69},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 69},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 78},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 69},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 69},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 69},
  [714] = {.lex_state = 68},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 69},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 78},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 78},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 69},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 69},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 69},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 78},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 69},
  [743] = {.lex_state = 817},
  [744] = {.lex_state = 69},
  [745] = {.lex_state = 69},
  [746] = {.lex_state = 69},
  [747] = {.lex_state = 69},
  [748] = {.lex_state = 69},
  [749] = {.lex_state = 69},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 69},
  [755] = {.lex_state = 69},
  [756] = {.lex_state = 69},
  [757] = {.lex_state = 69},
  [758] = {.lex_state = 69},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 69},
  [763] = {.lex_state = 69},
  [764] = {.lex_state = 69},
  [765] = {.lex_state = 69},
  [766] = {.lex_state = 69},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 817},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 69},
  [772] = {.lex_state = 69},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 69},
  [778] = {.lex_state = 69},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 69},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 69},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 572},
  [787] = {(TSStateId)(-1)},
  [788] = {(TSStateId)(-1)},
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
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
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
    [sym_specification] = STATE(729),
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(726),
    [sym_interface_dcl] = STATE(726),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(726),
    [sym_bitmask_dcl] = STATE(726),
    [sym_annotation_dcl] = STATE(726),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(726),
    [sym_template_module_inst] = STATE(726),
    [sym_value_dcl] = STATE(726),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(726),
    [sym_enum_dcl] = STATE(726),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(726),
    [sym_union_def] = STATE(726),
    [sym_type_id_dcl] = STATE(726),
    [sym_type_prefix_dcl] = STATE(726),
    [sym_import_dcl] = STATE(726),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(726),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(726),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(726),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(726),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(726),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(726),
    [sym_module_dcl] = STATE(726),
    [sym_struct_forward_dcl] = STATE(726),
    [sym_struct_def] = STATE(726),
    [sym_predefine] = STATE(107),
    [sym_const_dcl] = STATE(726),
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
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(779),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(335),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(779),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(779),
    [sym_bitmask_dcl] = STATE(779),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(779),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(779),
    [sym_enum_dcl] = STATE(779),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(779),
    [sym_union_def] = STATE(779),
    [sym_type_id_dcl] = STATE(779),
    [sym_import_dcl] = STATE(779),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(335),
    [sym_op_with_context] = STATE(779),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_home_body] = STATE(681),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(685),
    [sym_finder_dcl] = STATE(685),
    [sym_native_dcl] = STATE(779),
    [sym_struct_forward_dcl] = STATE(779),
    [sym_struct_def] = STATE(779),
    [sym_const_dcl] = STATE(779),
    [sym_comment] = STATE(2),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_factory] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(149),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(773),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(339),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(773),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(773),
    [sym_bitmask_dcl] = STATE(773),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(773),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_element] = STATE(57),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(773),
    [sym_enum_dcl] = STATE(773),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(773),
    [sym_union_def] = STATE(773),
    [sym_type_id_dcl] = STATE(773),
    [sym_import_dcl] = STATE(773),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(339),
    [sym_op_with_context] = STATE(773),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(773),
    [sym_struct_forward_dcl] = STATE(773),
    [sym_struct_def] = STATE(773),
    [sym_const_dcl] = STATE(773),
    [sym_comment] = STATE(3),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(773),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(339),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(773),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(773),
    [sym_bitmask_dcl] = STATE(773),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(773),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_element] = STATE(57),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(773),
    [sym_enum_dcl] = STATE(773),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(773),
    [sym_union_def] = STATE(773),
    [sym_type_id_dcl] = STATE(773),
    [sym_import_dcl] = STATE(773),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(339),
    [sym_op_with_context] = STATE(773),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(773),
    [sym_struct_forward_dcl] = STATE(773),
    [sym_struct_def] = STATE(773),
    [sym_const_dcl] = STATE(773),
    [sym_comment] = STATE(4),
    [aux_sym_interface_def_repeat1] = STATE(245),
    [aux_sym_value_def_repeat1] = STATE(4),
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
  [5] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(773),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(339),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(773),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(773),
    [sym_bitmask_dcl] = STATE(773),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(773),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_element] = STATE(57),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(773),
    [sym_enum_dcl] = STATE(773),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(773),
    [sym_union_def] = STATE(773),
    [sym_type_id_dcl] = STATE(773),
    [sym_import_dcl] = STATE(773),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(339),
    [sym_op_with_context] = STATE(773),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(773),
    [sym_struct_forward_dcl] = STATE(773),
    [sym_struct_def] = STATE(773),
    [sym_const_dcl] = STATE(773),
    [sym_comment] = STATE(5),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(773),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(339),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(773),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(773),
    [sym_bitmask_dcl] = STATE(773),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(773),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_element] = STATE(57),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(773),
    [sym_enum_dcl] = STATE(773),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(773),
    [sym_union_def] = STATE(773),
    [sym_type_id_dcl] = STATE(773),
    [sym_import_dcl] = STATE(773),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(339),
    [sym_op_with_context] = STATE(773),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(773),
    [sym_struct_forward_dcl] = STATE(773),
    [sym_struct_def] = STATE(773),
    [sym_const_dcl] = STATE(773),
    [sym_comment] = STATE(6),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_RBRACE] = ACTIONS(300),
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
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(773),
    [sym_export] = STATE(56),
    [sym_op_dcl] = STATE(339),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(773),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(773),
    [sym_bitmask_dcl] = STATE(773),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(773),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_element] = STATE(57),
    [sym_state_member] = STATE(56),
    [sym_init_dcl] = STATE(56),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(773),
    [sym_enum_dcl] = STATE(773),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(773),
    [sym_union_def] = STATE(773),
    [sym_type_id_dcl] = STATE(773),
    [sym_import_dcl] = STATE(773),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(339),
    [sym_op_with_context] = STATE(773),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(773),
    [sym_struct_forward_dcl] = STATE(773),
    [sym_struct_def] = STATE(773),
    [sym_const_dcl] = STATE(773),
    [sym_comment] = STATE(7),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_factory] = ACTIONS(159),
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(779),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(335),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(779),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(779),
    [sym_bitmask_dcl] = STATE(779),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(779),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(779),
    [sym_enum_dcl] = STATE(779),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(779),
    [sym_union_def] = STATE(779),
    [sym_type_id_dcl] = STATE(779),
    [sym_import_dcl] = STATE(779),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(335),
    [sym_op_with_context] = STATE(779),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(685),
    [sym_finder_dcl] = STATE(685),
    [sym_native_dcl] = STATE(779),
    [sym_struct_forward_dcl] = STATE(779),
    [sym_struct_def] = STATE(779),
    [sym_const_dcl] = STATE(779),
    [sym_comment] = STATE(8),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_factory] = ACTIONS(137),
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_finder] = ACTIONS(149),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [9] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(779),
    [sym_export] = STATE(60),
    [sym_op_dcl] = STATE(335),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(779),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(779),
    [sym_bitmask_dcl] = STATE(779),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(779),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(779),
    [sym_enum_dcl] = STATE(779),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(779),
    [sym_union_def] = STATE(779),
    [sym_type_id_dcl] = STATE(779),
    [sym_import_dcl] = STATE(779),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(335),
    [sym_op_with_context] = STATE(779),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_home_export] = STATE(62),
    [sym_factory_dcl] = STATE(685),
    [sym_finder_dcl] = STATE(685),
    [sym_native_dcl] = STATE(779),
    [sym_struct_forward_dcl] = STATE(779),
    [sym_struct_def] = STATE(779),
    [sym_const_dcl] = STATE(779),
    [sym_comment] = STATE(9),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_interface_body] = STATE(722),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(10),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [11] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_interface_body] = STATE(639),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(11),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [12] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(12),
    [aux_sym_interface_def_repeat1] = STATE(245),
    [aux_sym_interface_body_repeat1] = STATE(17),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [13] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(13),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_RBRACE] = ACTIONS(449),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [14] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(14),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_RBRACE] = ACTIONS(451),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [15] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(15),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_RBRACE] = ACTIONS(453),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [16] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(16),
    [aux_sym_interface_def_repeat1] = STATE(245),
    [aux_sym_interface_body_repeat1] = STATE(16),
    [anon_sym_short] = ACTIONS(455),
    [anon_sym_int16] = ACTIONS(455),
    [anon_sym_long] = ACTIONS(458),
    [anon_sym_int32] = ACTIONS(458),
    [anon_sym_longlong] = ACTIONS(461),
    [anon_sym_int64] = ACTIONS(464),
    [sym_unsigned_tiny_int] = ACTIONS(467),
    [sym_boolean_type] = ACTIONS(470),
    [anon_sym_fixed] = ACTIONS(473),
    [sym_octet_type] = ACTIONS(470),
    [sym_signed_tiny_int] = ACTIONS(476),
    [anon_sym_unsignedshort] = ACTIONS(479),
    [anon_sym_uint16] = ACTIONS(482),
    [anon_sym_unsignedlong] = ACTIONS(485),
    [anon_sym_uint32] = ACTIONS(485),
    [anon_sym_unsignedlonglong] = ACTIONS(488),
    [anon_sym_uint64] = ACTIONS(491),
    [anon_sym_float] = ACTIONS(494),
    [anon_sym_double] = ACTIONS(494),
    [anon_sym_longdouble] = ACTIONS(497),
    [anon_sym_char] = ACTIONS(500),
    [anon_sym_wchar] = ACTIONS(500),
    [anon_sym_COLON_COLON] = ACTIONS(503),
    [anon_sym_string] = ACTIONS(506),
    [anon_sym_wstring] = ACTIONS(506),
    [anon_sym_any] = ACTIONS(509),
    [anon_sym_sequence] = ACTIONS(512),
    [anon_sym_map] = ACTIONS(515),
    [anon_sym_exception] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_abstract] = ACTIONS(523),
    [anon_sym_void] = ACTIONS(526),
    [anon_sym_readonly] = ACTIONS(529),
    [anon_sym_attribute] = ACTIONS(532),
    [anon_sym_bitset] = ACTIONS(535),
    [anon_sym_bitmask] = ACTIONS(538),
    [anon_sym_AT] = ACTIONS(541),
    [anon_sym_valuetype] = ACTIONS(544),
    [anon_sym_struct] = ACTIONS(547),
    [anon_sym_union] = ACTIONS(550),
    [anon_sym_enum] = ACTIONS(553),
    [anon_sym_const] = ACTIONS(556),
    [anon_sym_custom] = ACTIONS(559),
    [anon_sym_typedef] = ACTIONS(562),
    [anon_sym_ATignore_literal_names] = ACTIONS(565),
    [anon_sym_typeid] = ACTIONS(568),
    [anon_sym_import] = ACTIONS(571),
    [anon_sym_Object] = ACTIONS(574),
    [anon_sym_oneway] = ACTIONS(577),
    [sym_value_base_type] = ACTIONS(470),
    [anon_sym_native] = ACTIONS(580),
    [sym_identifier] = ACTIONS(583),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [17] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(17),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_RBRACE] = ACTIONS(449),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [18] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(18),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [19] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(19),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [20] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(20),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [21] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(611),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_except_dcl] = STATE(635),
    [sym_export] = STATE(73),
    [sym_op_dcl] = STATE(412),
    [sym_op_type_spec] = STATE(643),
    [sym_attr_dcl] = STATE(635),
    [sym_readonly_attr_spec] = STATE(645),
    [sym_attr_spec] = STATE(645),
    [sym_bitset_dcl] = STATE(635),
    [sym_bitmask_dcl] = STATE(635),
    [sym_annotation_appl] = STATE(200),
    [sym_value_dcl] = STATE(635),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(635),
    [sym_enum_dcl] = STATE(635),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(635),
    [sym_union_def] = STATE(635),
    [sym_type_id_dcl] = STATE(635),
    [sym_import_dcl] = STATE(635),
    [sym_object_type] = STATE(254),
    [sym_op_oneway_dcl] = STATE(412),
    [sym_op_with_context] = STATE(635),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_native_dcl] = STATE(635),
    [sym_struct_forward_dcl] = STATE(635),
    [sym_struct_def] = STATE(635),
    [sym_const_dcl] = STATE(635),
    [sym_comment] = STATE(21),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_typedef] = ACTIONS(139),
    [anon_sym_ATignore_literal_names] = ACTIONS(45),
    [anon_sym_typeid] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_Object] = ACTIONS(145),
    [anon_sym_oneway] = ACTIONS(147),
    [sym_value_base_type] = ACTIONS(75),
    [anon_sym_native] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [22] = {
    [sym_except_dcl] = STATE(770),
    [sym_interface_dcl] = STATE(770),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(770),
    [sym_bitmask_dcl] = STATE(770),
    [sym_annotation_dcl] = STATE(770),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(770),
    [sym_tpl_definition] = STATE(106),
    [sym_template_module_inst] = STATE(770),
    [sym_template_module_ref] = STATE(618),
    [sym_value_dcl] = STATE(770),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(770),
    [sym_enum_dcl] = STATE(770),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(770),
    [sym_union_def] = STATE(770),
    [sym_type_id_dcl] = STATE(770),
    [sym_type_prefix_dcl] = STATE(770),
    [sym_import_dcl] = STATE(770),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(770),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(770),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(770),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(770),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(770),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(105),
    [sym_native_dcl] = STATE(770),
    [sym_module_dcl] = STATE(770),
    [sym_struct_forward_dcl] = STATE(770),
    [sym_struct_def] = STATE(770),
    [sym_predefine] = STATE(111),
    [sym_const_dcl] = STATE(770),
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
    [sym_except_dcl] = STATE(770),
    [sym_interface_dcl] = STATE(770),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(770),
    [sym_bitmask_dcl] = STATE(770),
    [sym_annotation_dcl] = STATE(770),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(770),
    [sym_tpl_definition] = STATE(106),
    [sym_template_module_inst] = STATE(770),
    [sym_template_module_ref] = STATE(618),
    [sym_value_dcl] = STATE(770),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(770),
    [sym_enum_dcl] = STATE(770),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(770),
    [sym_union_def] = STATE(770),
    [sym_type_id_dcl] = STATE(770),
    [sym_type_prefix_dcl] = STATE(770),
    [sym_import_dcl] = STATE(770),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(770),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(770),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(770),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(770),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(770),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(105),
    [sym_native_dcl] = STATE(770),
    [sym_module_dcl] = STATE(770),
    [sym_struct_forward_dcl] = STATE(770),
    [sym_struct_def] = STATE(770),
    [sym_predefine] = STATE(111),
    [sym_const_dcl] = STATE(770),
    [sym_comment] = STATE(23),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_template_module_dcl_repeat1] = STATE(22),
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
    [sym_except_dcl] = STATE(770),
    [sym_interface_dcl] = STATE(770),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(770),
    [sym_bitmask_dcl] = STATE(770),
    [sym_annotation_dcl] = STATE(770),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(770),
    [sym_tpl_definition] = STATE(106),
    [sym_template_module_inst] = STATE(770),
    [sym_template_module_ref] = STATE(618),
    [sym_value_dcl] = STATE(770),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(770),
    [sym_enum_dcl] = STATE(770),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(770),
    [sym_union_def] = STATE(770),
    [sym_type_id_dcl] = STATE(770),
    [sym_type_prefix_dcl] = STATE(770),
    [sym_import_dcl] = STATE(770),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(770),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(770),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(770),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(770),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(770),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(105),
    [sym_native_dcl] = STATE(770),
    [sym_module_dcl] = STATE(770),
    [sym_struct_forward_dcl] = STATE(770),
    [sym_struct_def] = STATE(770),
    [sym_predefine] = STATE(111),
    [sym_const_dcl] = STATE(770),
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
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(726),
    [sym_interface_dcl] = STATE(726),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(726),
    [sym_bitmask_dcl] = STATE(726),
    [sym_annotation_dcl] = STATE(726),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(726),
    [sym_template_module_inst] = STATE(726),
    [sym_value_dcl] = STATE(726),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(726),
    [sym_enum_dcl] = STATE(726),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(726),
    [sym_union_def] = STATE(726),
    [sym_type_id_dcl] = STATE(726),
    [sym_type_prefix_dcl] = STATE(726),
    [sym_import_dcl] = STATE(726),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(726),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(726),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(726),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(726),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(726),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(726),
    [sym_module_dcl] = STATE(726),
    [sym_struct_forward_dcl] = STATE(726),
    [sym_struct_def] = STATE(726),
    [sym_predefine] = STATE(107),
    [sym_const_dcl] = STATE(726),
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
    [sym_preproc_call] = STATE(109),
    [sym_except_dcl] = STATE(726),
    [sym_interface_dcl] = STATE(726),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(726),
    [sym_bitmask_dcl] = STATE(726),
    [sym_annotation_dcl] = STATE(726),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(726),
    [sym_template_module_inst] = STATE(726),
    [sym_value_dcl] = STATE(726),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(726),
    [sym_enum_dcl] = STATE(726),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(726),
    [sym_union_def] = STATE(726),
    [sym_type_id_dcl] = STATE(726),
    [sym_type_prefix_dcl] = STATE(726),
    [sym_import_dcl] = STATE(726),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(726),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(726),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(726),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(726),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(726),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(109),
    [sym_native_dcl] = STATE(726),
    [sym_module_dcl] = STATE(726),
    [sym_struct_forward_dcl] = STATE(726),
    [sym_struct_def] = STATE(726),
    [sym_predefine] = STATE(107),
    [sym_const_dcl] = STATE(726),
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
    [sym_except_dcl] = STATE(770),
    [sym_interface_dcl] = STATE(770),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(770),
    [sym_bitmask_dcl] = STATE(770),
    [sym_annotation_dcl] = STATE(770),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(770),
    [sym_template_module_inst] = STATE(770),
    [sym_value_dcl] = STATE(770),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(770),
    [sym_enum_dcl] = STATE(770),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(770),
    [sym_union_def] = STATE(770),
    [sym_type_id_dcl] = STATE(770),
    [sym_type_prefix_dcl] = STATE(770),
    [sym_import_dcl] = STATE(770),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(770),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(770),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(770),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(770),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(770),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(116),
    [sym_native_dcl] = STATE(770),
    [sym_module_dcl] = STATE(770),
    [sym_struct_forward_dcl] = STATE(770),
    [sym_struct_def] = STATE(770),
    [sym_predefine] = STATE(111),
    [sym_const_dcl] = STATE(770),
    [sym_comment] = STATE(27),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_module_dcl_repeat1] = STATE(27),
    [anon_sym_exception] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_local] = ACTIONS(779),
    [anon_sym_abstract] = ACTIONS(782),
    [anon_sym_interface] = ACTIONS(785),
    [anon_sym_bitset] = ACTIONS(788),
    [anon_sym_bitmask] = ACTIONS(791),
    [anon_sym_ATannotation] = ACTIONS(794),
    [anon_sym_AT] = ACTIONS(797),
    [anon_sym_module] = ACTIONS(800),
    [anon_sym_valuetype] = ACTIONS(803),
    [anon_sym_eventtype] = ACTIONS(806),
    [anon_sym_struct] = ACTIONS(809),
    [anon_sym_union] = ACTIONS(812),
    [anon_sym_enum] = ACTIONS(815),
    [anon_sym_const] = ACTIONS(818),
    [anon_sym_custom] = ACTIONS(821),
    [anon_sym_typedef] = ACTIONS(824),
    [anon_sym_ATignore_literal_names] = ACTIONS(827),
    [anon_sym_typeid] = ACTIONS(830),
    [anon_sym_typeprefix] = ACTIONS(833),
    [anon_sym_import] = ACTIONS(836),
    [anon_sym_component] = ACTIONS(839),
    [anon_sym_home] = ACTIONS(842),
    [anon_sym_porttype] = ACTIONS(845),
    [anon_sym_connector] = ACTIONS(848),
    [anon_sym_native] = ACTIONS(851),
    [anon_sym_POUNDdefine] = ACTIONS(854),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [28] = {
    [sym_except_dcl] = STATE(770),
    [sym_interface_dcl] = STATE(770),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(770),
    [sym_bitmask_dcl] = STATE(770),
    [sym_annotation_dcl] = STATE(770),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(770),
    [sym_template_module_inst] = STATE(770),
    [sym_value_dcl] = STATE(770),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(770),
    [sym_enum_dcl] = STATE(770),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(770),
    [sym_union_def] = STATE(770),
    [sym_type_id_dcl] = STATE(770),
    [sym_type_prefix_dcl] = STATE(770),
    [sym_import_dcl] = STATE(770),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(770),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(770),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(770),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(770),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(770),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(116),
    [sym_native_dcl] = STATE(770),
    [sym_module_dcl] = STATE(770),
    [sym_struct_forward_dcl] = STATE(770),
    [sym_struct_def] = STATE(770),
    [sym_predefine] = STATE(111),
    [sym_const_dcl] = STATE(770),
    [sym_comment] = STATE(28),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_module_dcl_repeat1] = STATE(27),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(857),
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
    [sym_except_dcl] = STATE(770),
    [sym_interface_dcl] = STATE(770),
    [sym_interface_kind] = STATE(720),
    [sym_interface_forward_dcl] = STATE(719),
    [sym_interface_def] = STATE(719),
    [sym_interface_header] = STATE(718),
    [sym_bitset_dcl] = STATE(770),
    [sym_bitmask_dcl] = STATE(770),
    [sym_annotation_dcl] = STATE(770),
    [sym_annotation_appl] = STATE(200),
    [sym_template_module_dcl] = STATE(770),
    [sym_template_module_inst] = STATE(770),
    [sym_value_dcl] = STATE(770),
    [sym_value_def] = STATE(715),
    [sym_value_kind] = STATE(713),
    [sym_value_header] = STATE(698),
    [sym_value_forward_dcl] = STATE(715),
    [sym_typedef_dcl] = STATE(770),
    [sym_enum_dcl] = STATE(770),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(770),
    [sym_union_def] = STATE(770),
    [sym_type_id_dcl] = STATE(770),
    [sym_type_prefix_dcl] = STATE(770),
    [sym_import_dcl] = STATE(770),
    [sym_value_box_def] = STATE(715),
    [sym_value_abs_def] = STATE(715),
    [sym_component_dcl] = STATE(770),
    [sym_component_forward_dcl] = STATE(683),
    [sym_component_def] = STATE(683),
    [sym_component_header] = STATE(682),
    [sym_home_dcl] = STATE(770),
    [sym_home_header] = STATE(680),
    [sym_event_dcl] = STATE(770),
    [sym_event_forward_dcl] = STATE(675),
    [sym_event_abs_def] = STATE(675),
    [sym_event_def] = STATE(675),
    [sym_event_header] = STATE(673),
    [sym_porttype_dcl] = STATE(770),
    [sym_porttype_forward_dcl] = STATE(555),
    [sym_porttype_def] = STATE(555),
    [sym_connector_dcl] = STATE(770),
    [sym_connector_header] = STATE(668),
    [sym_definition] = STATE(116),
    [sym_native_dcl] = STATE(770),
    [sym_module_dcl] = STATE(770),
    [sym_struct_forward_dcl] = STATE(770),
    [sym_struct_def] = STATE(770),
    [sym_predefine] = STATE(111),
    [sym_const_dcl] = STATE(770),
    [sym_comment] = STATE(29),
    [aux_sym_interface_def_repeat1] = STATE(172),
    [aux_sym_module_dcl_repeat1] = STATE(28),
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
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(169),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(511),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_const_expr] = STATE(511),
    [sym_or_expr] = STATE(194),
    [sym_xor_expr] = STATE(181),
    [sym_and_expr] = STATE(178),
    [sym_shift_expr] = STATE(171),
    [sym_add_expr] = STATE(166),
    [sym_mult_expr] = STATE(161),
    [sym_unary_expr] = STATE(163),
    [sym_unary_operator] = STATE(165),
    [sym_literal] = STATE(147),
    [sym_string_literal] = STATE(159),
    [sym_char_literal] = STATE(159),
    [sym_boolean_literal] = STATE(159),
    [sym_actual_parameters] = STATE(557),
    [sym_actual_parameter] = STATE(326),
    [sym_object_type] = STATE(254),
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
    [anon_sym_Object] = ACTIONS(145),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [31] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(169),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(511),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_const_expr] = STATE(511),
    [sym_or_expr] = STATE(194),
    [sym_xor_expr] = STATE(181),
    [sym_and_expr] = STATE(178),
    [sym_shift_expr] = STATE(171),
    [sym_add_expr] = STATE(166),
    [sym_mult_expr] = STATE(161),
    [sym_unary_expr] = STATE(163),
    [sym_unary_operator] = STATE(165),
    [sym_literal] = STATE(147),
    [sym_string_literal] = STATE(159),
    [sym_char_literal] = STATE(159),
    [sym_boolean_literal] = STATE(159),
    [sym_actual_parameter] = STATE(540),
    [sym_object_type] = STATE(254),
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
    [anon_sym_Object] = ACTIONS(145),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [32] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_type_spec] = STATE(294),
    [sym_simple_type_spec] = STATE(306),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(306),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_bitset_dcl] = STATE(294),
    [sym_bitmask_dcl] = STATE(294),
    [sym_annotation_appl] = STATE(200),
    [sym_enum_dcl] = STATE(294),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(294),
    [sym_union_def] = STATE(294),
    [sym_element_spec] = STATE(716),
    [sym_object_type] = STATE(254),
    [sym_struct_forward_dcl] = STATE(294),
    [sym_struct_def] = STATE(294),
    [sym_comment] = STATE(32),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_Object] = ACTIONS(145),
    [sym_value_base_type] = ACTIONS(75),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [33] = {
    [sym_signed_short_int] = STATE(225),
    [sym_signed_long_int] = STATE(225),
    [sym_signed_longlong_int] = STATE(225),
    [sym_unsigned_int] = STATE(242),
    [sym_integer_type] = STATE(254),
    [sym_signed_int] = STATE(242),
    [sym_unsigned_short_int] = STATE(222),
    [sym_unsigned_long_int] = STATE(222),
    [sym_unsigned_longlong_int] = STATE(222),
    [sym_floating_pt_type] = STATE(254),
    [sym_char_type] = STATE(254),
    [sym_scoped_name] = STATE(249),
    [sym_string_type] = STATE(256),
    [sym_simple_type_spec] = STATE(247),
    [sym_base_type_spec] = STATE(257),
    [sym_any_type] = STATE(254),
    [sym_fixed_pt_type] = STATE(256),
    [sym_template_type_spec] = STATE(247),
    [sym_sequence_type] = STATE(256),
    [sym_map_type] = STATE(256),
    [sym_bitset_dcl] = STATE(247),
    [sym_bitmask_dcl] = STATE(247),
    [sym_annotation_appl] = STATE(200),
    [sym_type_declarator] = STATE(582),
    [sym_enum_dcl] = STATE(247),
    [sym_enum_anno] = STATE(686),
    [sym_union_forward_dcl] = STATE(247),
    [sym_union_def] = STATE(247),
    [sym_object_type] = STATE(254),
    [sym_struct_forward_dcl] = STATE(247),
    [sym_struct_def] = STATE(247),
    [sym_comment] = STATE(33),
    [aux_sym_interface_def_repeat1] = STATE(245),
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
    [anon_sym_Object] = ACTIONS(145),
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_except_dcl_repeat1,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_except_dcl_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
  [1160] = 40,
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
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
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
    STATE(42), 2,
      sym_comment,
      aux_sym_except_dcl_repeat1,
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(916), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_except_dcl_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_except_dcl_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_interface_def_repeat1,
    STATE(88), 1,
      sym_member,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(240), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(979), 1,
      anon_sym_LBRACE,
    ACTIONS(981), 1,
      anon_sym_COLON,
    ACTIONS(983), 1,
      anon_sym_SEMI,
    ACTIONS(985), 1,
      anon_sym_supports,
    STATE(45), 1,
      sym_comment,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(328), 1,
      sym_scoped_name,
    STATE(646), 1,
      sym_type_spec,
    STATE(653), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
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
    ACTIONS(139), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(989), 1,
      anon_sym_fixed,
    ACTIONS(991), 1,
      anon_sym_any,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    ACTIONS(995), 1,
      anon_sym_ATignore_literal_names,
    STATE(46), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(84), 1,
      sym_annotation_member,
    STATE(85), 1,
      sym_annotation_body,
    STATE(491), 1,
      sym_scoped_name,
    STATE(492), 1,
      sym_annotation_member_type,
    STATE(686), 1,
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
    ACTIONS(987), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(708), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(710), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(608), 6,
      sym_fixed_pt_const_type,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_string_type,
      sym_sequence_type,
  [1879] = 41,
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
    ACTIONS(139), 1,
      anon_sym_typedef,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(989), 1,
      anon_sym_fixed,
    ACTIONS(991), 1,
      anon_sym_any,
    ACTIONS(995), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_annotation_dcl_repeat1,
    STATE(84), 1,
      sym_annotation_member,
    STATE(85), 1,
      sym_annotation_body,
    STATE(491), 1,
      sym_scoped_name,
    STATE(492), 1,
      sym_annotation_member_type,
    STATE(686), 1,
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
    ACTIONS(987), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(708), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(710), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(608), 6,
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
    ACTIONS(1005), 1,
      anon_sym_longlong,
    ACTIONS(1008), 1,
      anon_sym_int64,
    ACTIONS(1011), 1,
      sym_unsigned_tiny_int,
    ACTIONS(1017), 1,
      anon_sym_fixed,
    ACTIONS(1020), 1,
      sym_signed_tiny_int,
    ACTIONS(1023), 1,
      anon_sym_unsignedshort,
    ACTIONS(1026), 1,
      anon_sym_uint16,
    ACTIONS(1032), 1,
      anon_sym_unsignedlonglong,
    ACTIONS(1035), 1,
      anon_sym_uint64,
    ACTIONS(1041), 1,
      anon_sym_longdouble,
    ACTIONS(1047), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1053), 1,
      anon_sym_any,
    ACTIONS(1056), 1,
      anon_sym_sequence,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    ACTIONS(1061), 1,
      anon_sym_enum,
    ACTIONS(1064), 1,
      anon_sym_const,
    ACTIONS(1067), 1,
      anon_sym_typedef,
    ACTIONS(1070), 1,
      anon_sym_ATignore_literal_names,
    ACTIONS(1073), 1,
      sym_identifier,
    STATE(84), 1,
      sym_annotation_member,
    STATE(85), 1,
      sym_annotation_body,
    STATE(491), 1,
      sym_scoped_name,
    STATE(492), 1,
      sym_annotation_member_type,
    STATE(686), 1,
      sym_enum_anno,
    ACTIONS(999), 2,
      anon_sym_short,
      anon_sym_int16,
    ACTIONS(1002), 2,
      anon_sym_long,
      anon_sym_int32,
    ACTIONS(1014), 2,
      sym_boolean_type,
      sym_octet_type,
    ACTIONS(1029), 2,
      anon_sym_unsignedlong,
      anon_sym_uint32,
    ACTIONS(1038), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(1044), 2,
      anon_sym_char,
      anon_sym_wchar,
    ACTIONS(1050), 2,
      anon_sym_string,
      anon_sym_wstring,
    STATE(48), 2,
      sym_comment,
      aux_sym_annotation_dcl_repeat1,
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(708), 2,
      sym_any_const_type,
      sym_const_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(710), 3,
      sym_typedef_dcl,
      sym_enum_dcl,
      sym_const_dcl,
    STATE(608), 6,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(887), 1,
      anon_sym_AT,
    STATE(49), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_interface_def_repeat1,
    STATE(94), 1,
      sym_annotation_appl,
    STATE(221), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      anon_sym_sequence,
    ACTIONS(1080), 1,
      anon_sym_const,
    STATE(50), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(330), 1,
      sym_formal_parameter,
    STATE(562), 1,
      sym_formal_parameters,
    STATE(780), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(733), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(254), 5,
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
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(1088), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1086), 48,
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
  [2569] = 5,
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
  [2638] = 5,
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
  [2707] = 34,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1076), 1,
      anon_sym_sequence,
    ACTIONS(1080), 1,
      anon_sym_const,
    STATE(55), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(537), 1,
      sym_formal_parameter,
    STATE(780), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(733), 2,
      sym_simple_type_spec,
      sym_sequence_type,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(254), 5,
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
  [2834] = 5,
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
  [2903] = 5,
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
  [2972] = 37,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1106), 1,
      anon_sym_GT,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(731), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
      sym_integer_type,
      sym_floating_pt_type,
      sym_char_type,
      sym_any_type,
      sym_object_type,
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
  [3242] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
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
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
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
  [3378] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(1112), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1110), 47,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
    STATE(237), 1,
      sym_type_spec,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(65), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(450), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(453), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(468), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(467), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(458), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(249), 1,
      sym_scoped_name,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(409), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(145), 1,
      anon_sym_Object,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
    STATE(257), 1,
      sym_base_type_spec,
    STATE(328), 1,
      sym_scoped_name,
    STATE(723), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(306), 2,
      sym_simple_type_spec,
      sym_template_type_spec,
    ACTIONS(75), 3,
      sym_boolean_type,
      sym_octet_type,
      sym_value_base_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(256), 4,
      sym_string_type,
      sym_fixed_pt_type,
      sym_sequence_type,
      sym_map_type,
    STATE(254), 5,
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
    ACTIONS(1112), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1110), 45,
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
    ACTIONS(989), 1,
      anon_sym_fixed,
    STATE(75), 1,
      sym_comment,
    STATE(498), 1,
      sym_scoped_name,
    STATE(693), 1,
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
    ACTIONS(987), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(608), 6,
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
    ACTIONS(989), 1,
      anon_sym_fixed,
    STATE(76), 1,
      sym_comment,
    STATE(498), 1,
      sym_scoped_name,
    STATE(598), 1,
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
    ACTIONS(987), 2,
      sym_boolean_type,
      sym_octet_type,
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
    STATE(608), 6,
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
  [5093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(1147), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
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
  [5140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(1151), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1149), 26,
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
  [5187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(1155), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1153), 26,
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
  [5234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(1159), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(1157), 26,
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
    STATE(84), 1,
      sym_comment,
    ACTIONS(1163), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1161), 26,
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
  [5328] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(1167), 7,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
      anon_sym_ATignore_literal_names,
    ACTIONS(1165), 26,
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
  [5375] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_comment,
    ACTIONS(1171), 6,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
      anon_sym_AT,
    ACTIONS(1169), 26,
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
      anon_sym_AT,
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
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
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
      anon_sym_AT,
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
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
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
      anon_sym_LPAREN,
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
      anon_sym_LPAREN,
      anon_sym_AT,
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
      anon_sym_map,
      anon_sym_Object,
      sym_value_base_type,
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
  [5845] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(1187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1189), 27,
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
  [5890] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(1191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1193), 27,
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
  [5935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(1145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_COLON,
    ACTIONS(1147), 27,
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
  [5980] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(1213), 5,
      anon_sym_longlong,
      anon_sym_unsignedshort,
      anon_sym_unsignedlonglong,
      anon_sym_longdouble,
      anon_sym_COLON_COLON,
    ACTIONS(1211), 26,
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
  [6025] = 24,
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
    ACTIONS(1215), 1,
      sym_boolean_type,
    STATE(100), 1,
      sym_comment,
    STATE(446), 1,
      sym_scoped_name,
    STATE(665), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(666), 2,
      sym_integer_type,
      sym_char_type,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
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
    ACTIONS(1223), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1221), 25,
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
  [6194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
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
  [6237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
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
  [6280] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(1235), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1233), 27,
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
  [6323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(1239), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1237), 27,
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
  [6452] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_comment,
    ACTIONS(1247), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1245), 25,
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
  [6495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(1251), 4,
      sym_preproc_directive,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
      anon_sym_POUNDdefine,
    ACTIONS(1249), 25,
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
  [6538] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(1243), 2,
      anon_sym_AT,
      anon_sym_ATignore_literal_names,
    ACTIONS(1241), 27,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(362), 1,
      sym_annotation_appl_param,
    STATE(712), 1,
      sym_const_expr,
    STATE(784), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(362), 1,
      sym_annotation_appl_param,
    STATE(712), 1,
      sym_const_expr,
    STATE(781), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6796] = 27,
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
    STATE(115), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(362), 1,
      sym_annotation_appl_param,
    STATE(712), 1,
      sym_const_expr,
    STATE(775), 1,
      sym_annotation_appl_params,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [6882] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(362), 1,
      sym_annotation_appl_param,
    STATE(661), 1,
      sym_annotation_appl_params,
    STATE(712), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(671), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(509), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(740), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(724), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(659), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(684), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(370), 1,
      sym_const_expr,
    STATE(662), 1,
      sym_positive_int_const,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(612), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(559), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(601), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(714), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7911] = 25,
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
    STATE(129), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(574), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [7991] = 25,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(525), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8071] = 25,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(181), 1,
      sym_xor_expr,
    STATE(194), 1,
      sym_or_expr,
    STATE(702), 1,
      sym_const_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8151] = 19,
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
    STATE(132), 1,
      sym_comment,
    STATE(669), 1,
      sym_integer_type,
    STATE(670), 1,
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
    STATE(242), 2,
      sym_unsigned_int,
      sym_signed_int,
    STATE(222), 3,
      sym_unsigned_short_int,
      sym_unsigned_long_int,
      sym_unsigned_longlong_int,
    STATE(225), 3,
      sym_signed_short_int,
      sym_signed_long_int,
      sym_signed_longlong_int,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(178), 1,
      sym_and_expr,
    STATE(179), 1,
      sym_xor_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(171), 1,
      sym_shift_expr,
    STATE(176), 1,
      sym_and_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8364] = 21,
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
    STATE(135), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(166), 1,
      sym_add_expr,
    STATE(170), 1,
      sym_shift_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8432] = 17,
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
    STATE(136), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_component_body_repeat1,
    STATE(173), 1,
      sym_component_export,
    STATE(672), 1,
      sym_component_body,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(664), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
  [8492] = 20,
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
    STATE(137), 1,
      sym_comment,
    STATE(143), 1,
      sym_scoped_name,
    STATE(147), 1,
      sym_literal,
    STATE(161), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    STATE(167), 1,
      sym_add_expr,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [8557] = 16,
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
    STATE(138), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_component_body_repeat1,
    STATE(173), 1,
      sym_component_export,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(664), 7,
      sym_attr_dcl,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_emits_dcl,
      sym_publishes_dcl,
      sym_consumes_dcl,
      sym_port_dcl,
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
    STATE(173), 1,
      sym_component_export,
    ACTIONS(1314), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(139), 2,
      sym_comment,
      aux_sym_component_body_repeat1,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(664), 7,
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
    STATE(147), 1,
      sym_literal,
    STATE(153), 1,
      sym_mult_expr,
    STATE(163), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
      sym_literal,
    STATE(151), 1,
      sym_unary_expr,
    STATE(165), 1,
      sym_unary_operator,
    ACTIONS(863), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
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
  [8886] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_comment,
    ACTIONS(1331), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1333), 14,
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
  [8916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
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
  [8946] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(147), 1,
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
  [8976] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1335), 1,
      anon_sym_RBRACE,
    ACTIONS(1337), 1,
      anon_sym_readonly,
    ACTIONS(1340), 1,
      anon_sym_attribute,
    ACTIONS(1343), 1,
      anon_sym_provides,
    ACTIONS(1346), 1,
      anon_sym_uses,
    STATE(185), 1,
      sym_port_export,
    STATE(190), 1,
      sym_port_ref,
    STATE(649), 1,
      sym_attr_dcl,
    ACTIONS(1349), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(148), 2,
      sym_comment,
      aux_sym_port_body_repeat1,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9024] = 15,
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
    ACTIONS(1352), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(184), 1,
      sym_port_ref,
    STATE(193), 1,
      sym_connector_export,
    STATE(690), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9074] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(1354), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1356), 14,
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
  [9104] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
      sym_comment,
    ACTIONS(1358), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1360), 14,
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
  [9134] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_comment,
    ACTIONS(1362), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1364), 14,
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
  [9164] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1366), 1,
      anon_sym_GT,
    ACTIONS(1372), 1,
      anon_sym_SLASH,
    STATE(153), 1,
      sym_comment,
    ACTIONS(1370), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1368), 12,
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
  [9198] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(1374), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1376), 14,
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
  [9228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1380), 14,
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
  [9258] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1382), 1,
      anon_sym_RBRACE,
    ACTIONS(1384), 1,
      anon_sym_readonly,
    ACTIONS(1387), 1,
      anon_sym_attribute,
    ACTIONS(1390), 1,
      anon_sym_provides,
    ACTIONS(1393), 1,
      anon_sym_uses,
    STATE(184), 1,
      sym_port_ref,
    STATE(193), 1,
      sym_connector_export,
    STATE(690), 1,
      sym_attr_dcl,
    ACTIONS(1396), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(156), 2,
      sym_comment,
      aux_sym_connector_dcl_repeat1,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9306] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_comment,
    ACTIONS(1399), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1401), 14,
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
  [9336] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_comment,
    ACTIONS(1403), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1405), 14,
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
  [9366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(159), 1,
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
  [9396] = 15,
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
    STATE(160), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_port_body_repeat1,
    STATE(185), 1,
      sym_port_export,
    STATE(190), 1,
      sym_port_ref,
    STATE(649), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9446] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1372), 1,
      anon_sym_SLASH,
    ACTIONS(1413), 1,
      anon_sym_GT,
    STATE(161), 1,
      sym_comment,
    ACTIONS(1370), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(1415), 12,
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
  [9480] = 15,
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
    STATE(148), 1,
      aux_sym_port_body_repeat1,
    STATE(162), 1,
      sym_comment,
    STATE(185), 1,
      sym_port_export,
    STATE(190), 1,
      sym_port_ref,
    STATE(649), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(163), 1,
      sym_comment,
    ACTIONS(1419), 2,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(1421), 14,
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
  [9560] = 14,
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
    STATE(149), 1,
      aux_sym_connector_dcl_repeat1,
    STATE(164), 1,
      sym_comment,
    STATE(184), 1,
      sym_port_ref,
    STATE(193), 1,
      sym_connector_export,
    STATE(690), 1,
      sym_attr_dcl,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(645), 2,
      sym_readonly_attr_spec,
      sym_attr_spec,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9607] = 14,
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
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_scoped_name,
    STATE(146), 1,
      sym_literal,
    STATE(165), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(159), 3,
      sym_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [9653] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1425), 1,
      anon_sym_GT,
    STATE(166), 1,
      sym_comment,
    ACTIONS(1429), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1427), 10,
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
  [9682] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1431), 1,
      anon_sym_GT,
    STATE(167), 1,
      sym_comment,
    ACTIONS(1429), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1433), 10,
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
  [9711] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    ACTIONS(1435), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym_comment,
    ACTIONS(1147), 11,
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
  [9740] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1323), 1,
      anon_sym_SLASH,
    ACTIONS(1437), 1,
      anon_sym_GT,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
    STATE(169), 1,
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
  [9773] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1441), 1,
      anon_sym_GT,
    STATE(170), 1,
      sym_comment,
    ACTIONS(1445), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1443), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9800] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1447), 1,
      anon_sym_GT,
    STATE(171), 1,
      sym_comment,
    ACTIONS(1445), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(1449), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9827] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1451), 1,
      anon_sym_bitmask,
    ACTIONS(1453), 1,
      anon_sym_struct,
    STATE(172), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_interface_def_repeat1,
    STATE(200), 1,
      sym_annotation_appl,
    STATE(564), 1,
      sym_interface_header,
    STATE(570), 1,
      sym_interface_kind,
    ACTIONS(13), 2,
      anon_sym_local,
      anon_sym_abstract,
  [9865] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(173), 1,
      sym_comment,
    ACTIONS(1455), 10,
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
  [9887] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1277), 1,
      anon_sym_provides,
    ACTIONS(1279), 1,
      anon_sym_uses,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      sym_port_ref,
    STATE(174), 1,
      sym_comment,
    STATE(768), 1,
      sym_port_body,
    ACTIONS(1287), 2,
      anon_sym_port,
      anon_sym_mirrorport,
    STATE(694), 3,
      sym_provides_dcl,
      sym_uses_dcl,
      sym_port_dcl,
  [9921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      sym_comment,
    ACTIONS(1459), 10,
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
  [9943] = 5,
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
  [9966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(177), 1,
      sym_comment,
    ACTIONS(1465), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1467), 5,
      anon_sym_L,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_number_literal,
      sym_identifier,
  [9989] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1463), 1,
      anon_sym_DOLLAR,
    STATE(178), 1,
      sym_comment,
    ACTIONS(1469), 8,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10012] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1473), 1,
      anon_sym_CARET,
    STATE(179), 1,
      sym_comment,
    ACTIONS(1471), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10034] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1475), 1,
      anon_sym_AT,
    STATE(200), 1,
      sym_annotation_appl,
    STATE(180), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
    ACTIONS(1140), 5,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_struct,
  [10058] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1473), 1,
      anon_sym_CARET,
    STATE(181), 1,
      sym_comment,
    ACTIONS(1478), 7,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10080] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1480), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_comment,
    ACTIONS(1171), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10104] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    ACTIONS(1484), 1,
      anon_sym_SEMI,
    ACTIONS(1486), 1,
      anon_sym_getraises,
    ACTIONS(1488), 1,
      anon_sym_setraises,
    STATE(183), 1,
      sym_comment,
    STATE(353), 1,
      sym_get_excep_expr,
    STATE(358), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(571), 1,
      sym_attr_raises_expr,
    STATE(573), 1,
      sym_set_excep_expr,
  [10138] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(184), 1,
      sym_comment,
    ACTIONS(1490), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      sym_comment,
    ACTIONS(1492), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      sym_comment,
    ACTIONS(1494), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(187), 1,
      sym_comment,
    ACTIONS(1496), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(188), 1,
      sym_comment,
    ACTIONS(1498), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_raises,
      anon_sym_getraises,
      anon_sym_setraises,
      anon_sym_default,
  [10233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(189), 1,
      sym_comment,
    ACTIONS(1500), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      sym_comment,
    ACTIONS(1502), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10271] = 10,
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
    ACTIONS(1504), 1,
      anon_sym_L,
    STATE(191), 1,
      sym_comment,
    STATE(528), 1,
      sym_scoped_name,
    STATE(567), 1,
      sym_imported_scope,
    STATE(575), 1,
      sym_string_literal,
  [10302] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    ACTIONS(1508), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_param_attribute,
    STATE(192), 1,
      sym_comment,
    STATE(361), 1,
      sym_param_dcl,
    STATE(580), 1,
      sym_parameter_dcls,
    ACTIONS(1510), 2,
      anon_sym_out,
      anon_sym_inout,
  [10331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(193), 1,
      sym_comment,
    ACTIONS(1512), 7,
      anon_sym_RBRACE,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_provides,
      anon_sym_uses,
      anon_sym_port,
      anon_sym_mirrorport,
  [10350] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1516), 1,
      anon_sym_PIPE,
    STATE(194), 1,
      sym_comment,
    ACTIONS(1514), 6,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [10371] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1520), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      sym_comment,
    STATE(204), 1,
      aux_sym_array_declarator_repeat1,
    STATE(300), 1,
      sym_fixed_array_size,
    ACTIONS(1518), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10395] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1522), 1,
      anon_sym_RBRACE,
    ACTIONS(1524), 1,
      anon_sym_default,
    ACTIONS(1527), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(437), 1,
      sym_case,
    STATE(196), 2,
      sym_comment,
      aux_sym_union_def_repeat1,
  [10421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(197), 1,
      sym_comment,
    ACTIONS(1147), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_comment,
    ACTIONS(1189), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10457] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1520), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      aux_sym_array_declarator_repeat1,
    STATE(199), 1,
      sym_comment,
    STATE(300), 1,
      sym_fixed_array_size,
    ACTIONS(1498), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      sym_comment,
    ACTIONS(1205), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10499] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1530), 1,
      anon_sym_RBRACE,
    ACTIONS(1532), 1,
      anon_sym_default,
    ACTIONS(1534), 1,
      anon_sym_case,
    STATE(32), 1,
      sym_case_label,
    STATE(196), 1,
      aux_sym_union_def_repeat1,
    STATE(201), 1,
      sym_comment,
    STATE(437), 1,
      sym_case,
  [10527] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1536), 1,
      anon_sym_LBRACE,
    ACTIONS(1538), 1,
      anon_sym_COLON,
    ACTIONS(1540), 1,
      anon_sym_SEMI,
    ACTIONS(1542), 1,
      anon_sym_supports,
    STATE(202), 1,
      sym_comment,
    STATE(368), 1,
      sym_component_inheritance_spec,
    STATE(588), 1,
      sym_supported_interface_spec,
  [10555] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1544), 1,
      anon_sym_RBRACE,
    ACTIONS(1546), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(203), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_enumerator_repeat1,
    STATE(357), 1,
      sym_enumerator,
    STATE(530), 1,
      sym_enum_modifier,
  [10583] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1552), 1,
      anon_sym_LBRACK,
    STATE(300), 1,
      sym_fixed_array_size,
    STATE(204), 2,
      sym_comment,
      aux_sym_array_declarator_repeat1,
    ACTIONS(1550), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [10605] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1532), 1,
      anon_sym_default,
    ACTIONS(1534), 1,
      anon_sym_case,
    ACTIONS(1555), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_case_label,
    STATE(201), 1,
      aux_sym_union_def_repeat1,
    STATE(205), 1,
      sym_comment,
    STATE(437), 1,
      sym_case,
  [10633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(206), 1,
      sym_comment,
    ACTIONS(1209), 6,
      anon_sym_local,
      anon_sym_abstract,
      anon_sym_interface,
      anon_sym_bitmask,
      anon_sym_AT,
      anon_sym_struct,
  [10651] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1557), 1,
      anon_sym_RBRACE,
    ACTIONS(1559), 1,
      anon_sym_AT,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(207), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_interface_def_repeat1,
    STATE(404), 1,
      sym_bit_value,
    STATE(542), 1,
      sym_annotation_appl,
  [10679] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1559), 1,
      anon_sym_AT,
    ACTIONS(1561), 1,
      sym_identifier,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym_interface_def_repeat1,
    STATE(407), 1,
      sym_bit_value,
    STATE(542), 1,
      sym_annotation_appl,
  [10707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(209), 1,
      sym_comment,
    ACTIONS(1193), 6,
      anon_sym_COLON_COLON,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_identifier,
  [10725] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1548), 1,
      sym_identifier,
    ACTIONS(1565), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_enumerator_repeat1,
    STATE(402), 1,
      sym_enumerator,
    STATE(530), 1,
      sym_enum_modifier,
  [10753] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1567), 1,
      anon_sym_Object,
    ACTIONS(1569), 1,
      anon_sym_multiple,
    STATE(211), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
    STATE(742), 1,
      sym_interface_type,
  [10781] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1571), 1,
      anon_sym_LBRACE,
    ACTIONS(1573), 1,
      anon_sym_COLON,
    ACTIONS(1575), 1,
      anon_sym_SEMI,
    ACTIONS(1577), 1,
      anon_sym_supports,
    STATE(212), 1,
      sym_comment,
    STATE(705), 1,
      sym_value_inheritance_spec,
  [10806] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(1579), 1,
      anon_sym_truncatable,
    STATE(213), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(292), 1,
      sym_value_name,
  [10831] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1559), 1,
      anon_sym_AT,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(214), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym_interface_def_repeat1,
    STATE(392), 1,
      sym_bit_value,
    STATE(542), 1,
      sym_annotation_appl,
  [10856] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1548), 1,
      sym_identifier,
    STATE(215), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_enumerator_repeat1,
    STATE(530), 1,
      sym_enum_modifier,
    STATE(550), 1,
      sym_enumerator,
  [10881] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1567), 1,
      anon_sym_Object,
    STATE(216), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
    STATE(624), 1,
      sym_interface_type,
  [10906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(217), 1,
      sym_comment,
    ACTIONS(1581), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10923] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_COLON,
    ACTIONS(1577), 1,
      anon_sym_supports,
    ACTIONS(1583), 1,
      anon_sym_LBRACE,
    ACTIONS(1585), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      sym_comment,
    STATE(699), 1,
      sym_value_inheritance_spec,
  [10948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym_comment,
    ACTIONS(1587), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10965] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(220), 1,
      sym_comment,
    ACTIONS(1589), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [10982] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(221), 1,
      sym_comment,
    STATE(276), 1,
      sym_declarator,
    STATE(389), 1,
      sym_declarators,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(222), 1,
      sym_comment,
    ACTIONS(1593), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11022] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1595), 1,
      anon_sym_RBRACE,
    ACTIONS(1597), 1,
      anon_sym_bitfield,
    STATE(223), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(416), 1,
      sym_bitfield_spec,
    STATE(473), 1,
      sym_bitfield,
  [11047] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(1567), 1,
      anon_sym_Object,
    STATE(224), 1,
      sym_comment,
    STATE(527), 1,
      sym_scoped_name,
    STATE(744), 1,
      sym_interface_type,
  [11072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(225), 1,
      sym_comment,
    ACTIONS(1599), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(226), 1,
      sym_comment,
    ACTIONS(1601), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11106] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(227), 1,
      sym_comment,
    ACTIONS(1603), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11125] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(228), 1,
      sym_comment,
    ACTIONS(1605), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1607), 1,
      anon_sym_COMMA,
    STATE(229), 2,
      sym_comment,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1603), 3,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11161] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_bitfield,
    ACTIONS(1610), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(416), 1,
      sym_bitfield_spec,
    STATE(473), 1,
      sym_bitfield,
  [11186] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1559), 1,
      anon_sym_AT,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(231), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym_interface_def_repeat1,
    STATE(494), 1,
      sym_bit_value,
    STATE(542), 1,
      sym_annotation_appl,
  [11211] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_bitfield,
    ACTIONS(1612), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
    STATE(243), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(416), 1,
      sym_bitfield_spec,
    STATE(473), 1,
      sym_bitfield,
  [11236] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1508), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_param_attribute,
    STATE(233), 1,
      sym_comment,
    STATE(466), 1,
      sym_param_dcl,
    ACTIONS(1510), 2,
      anon_sym_out,
      anon_sym_inout,
  [11259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(234), 1,
      sym_comment,
    ACTIONS(1614), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11276] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_raises_expr_repeat1,
    ACTIONS(1618), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [11299] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1542), 1,
      anon_sym_supports,
    ACTIONS(1620), 1,
      anon_sym_COLON,
    ACTIONS(1622), 1,
      anon_sym_manages,
    STATE(236), 1,
      sym_comment,
    STATE(384), 1,
      sym_home_inheritance_spec,
    STATE(597), 1,
      sym_supported_interface_spec,
  [11324] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(237), 1,
      sym_comment,
    STATE(276), 1,
      sym_declarator,
    STATE(633), 1,
      sym_declarators,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11347] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    ACTIONS(1624), 1,
      anon_sym_SEMI,
    ACTIONS(1626), 1,
      anon_sym_raises,
    STATE(238), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_readonly_attr_declarator_repeat1,
    STATE(631), 1,
      sym_raises_expr,
  [11372] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(239), 1,
      sym_comment,
    ACTIONS(1628), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11389] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(240), 1,
      sym_comment,
    STATE(276), 1,
      sym_declarator,
    STATE(387), 1,
      sym_declarators,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11412] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1630), 1,
      anon_sym_LT,
    STATE(241), 1,
      sym_comment,
    ACTIONS(1632), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(242), 1,
      sym_comment,
    ACTIONS(1634), 5,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_identifier,
  [11448] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1636), 1,
      anon_sym_RBRACE,
    ACTIONS(1638), 1,
      anon_sym_bitfield,
    STATE(416), 1,
      sym_bitfield_spec,
    STATE(473), 1,
      sym_bitfield,
    STATE(243), 2,
      sym_comment,
      aux_sym_bitset_dcl_repeat1,
  [11471] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1559), 1,
      anon_sym_AT,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(244), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym_interface_def_repeat1,
    STATE(407), 1,
      sym_bit_value,
    STATE(542), 1,
      sym_annotation_appl,
  [11496] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(1451), 1,
      anon_sym_bitmask,
    ACTIONS(1453), 1,
      anon_sym_struct,
    STATE(180), 1,
      aux_sym_interface_def_repeat1,
    STATE(200), 1,
      sym_annotation_appl,
    STATE(245), 1,
      sym_comment,
  [11521] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1597), 1,
      anon_sym_bitfield,
    ACTIONS(1641), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      aux_sym_bitset_dcl_repeat1,
    STATE(246), 1,
      sym_comment,
    STATE(416), 1,
      sym_bitfield_spec,
    STATE(473), 1,
      sym_bitfield,
  [11546] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(247), 1,
      sym_comment,
    STATE(360), 1,
      sym_any_declarator,
    STATE(581), 1,
      sym_any_declarators,
    STATE(526), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [11569] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1559), 1,
      anon_sym_AT,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(231), 1,
      aux_sym_interface_def_repeat1,
    STATE(248), 1,
      sym_comment,
    STATE(514), 1,
      sym_bit_value,
    STATE(542), 1,
      sym_annotation_appl,
  [11594] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    STATE(249), 1,
      sym_comment,
    ACTIONS(1439), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      sym_identifier,
  [11612] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(250), 1,
      sym_comment,
    STATE(331), 1,
      sym_scoped_name,
    STATE(785), 1,
      sym_interface_name,
  [11634] = 6,
    ACTIONS(1649), 1,
      anon_sym_SQUOTE,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(251), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1647), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [11654] = 6,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1655), 1,
      anon_sym_SQUOTE,
    STATE(252), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym_char_literal_repeat1,
    ACTIONS(1647), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [11674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(253), 1,
      sym_comment,
    ACTIONS(1657), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(254), 1,
      sym_comment,
    ACTIONS(1659), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11706] = 5,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1664), 1,
      anon_sym_SQUOTE,
    ACTIONS(1661), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
    STATE(255), 2,
      sym_comment,
      aux_sym_char_literal_repeat1,
  [11724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(256), 1,
      sym_comment,
    ACTIONS(1666), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(257), 1,
      sym_comment,
    ACTIONS(1439), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11756] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1668), 1,
      anon_sym_L,
    STATE(258), 1,
      sym_comment,
    STATE(584), 1,
      sym_string_literal,
  [11778] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1668), 1,
      anon_sym_L,
    STATE(259), 1,
      sym_comment,
    STATE(587), 1,
      sym_string_literal,
  [11800] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1670), 1,
      anon_sym_COMMA,
    ACTIONS(1673), 2,
      anon_sym_SEMI,
      anon_sym_default,
    STATE(260), 2,
      sym_comment,
      aux_sym_declarators_repeat1,
  [11818] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    STATE(261), 1,
      sym_comment,
    STATE(471), 1,
      sym_raises_expr,
    ACTIONS(1675), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [11838] = 7,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1677), 1,
      sym_escape_sequence,
    ACTIONS(1679), 1,
      anon_sym_DQUOTE,
    ACTIONS(1681), 1,
      aux_sym_string_literal_token1,
    STATE(262), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_string_literal_repeat1,
  [11860] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(263), 1,
      sym_comment,
    ACTIONS(1683), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [11876] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1685), 1,
      anon_sym_RPAREN,
    ACTIONS(1687), 1,
      anon_sym_in,
    STATE(264), 1,
      sym_comment,
    STATE(415), 1,
      sym_in_param_dcl,
    STATE(641), 1,
      sym_in_parameter_dcls,
  [11898] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1689), 1,
      anon_sym_LBRACE,
    ACTIONS(1691), 1,
      anon_sym_primarykey,
    STATE(265), 1,
      sym_comment,
    STATE(629), 1,
      sym_primary_key_spec,
  [11920] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_LBRACE,
    ACTIONS(1695), 1,
      anon_sym_COLON,
    ACTIONS(1697), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      sym_comment,
    STATE(600), 1,
      sym_interface_inheritance_spec,
  [11942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(267), 1,
      sym_comment,
    ACTIONS(1699), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [11958] = 7,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1701), 1,
      anon_sym_AT,
    ACTIONS(1703), 1,
      aux_sym_comment_token2,
    STATE(268), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_interface_def_repeat1,
    STATE(524), 1,
      sym_annotation_appl,
  [11980] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1705), 1,
      anon_sym_COMMA,
    ACTIONS(1708), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
    STATE(269), 2,
      sym_comment,
      aux_sym_value_inheritance_spec_repeat1,
  [11998] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1710), 1,
      anon_sym_COMMA,
    ACTIONS(1712), 1,
      anon_sym_LBRACE,
    ACTIONS(1714), 1,
      anon_sym_supports,
    STATE(270), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_value_inheritance_spec_repeat1,
  [12020] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(271), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
    STATE(342), 1,
      sym_value_name,
  [12042] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(272), 1,
      sym_comment,
    STATE(331), 1,
      sym_scoped_name,
    STATE(341), 1,
      sym_interface_name,
  [12064] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1710), 1,
      anon_sym_COMMA,
    ACTIONS(1716), 1,
      anon_sym_LBRACE,
    ACTIONS(1718), 1,
      anon_sym_supports,
    STATE(269), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(273), 1,
      sym_comment,
  [12086] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1720), 1,
      anon_sym_LBRACE,
    ACTIONS(1722), 1,
      anon_sym_COLON,
    STATE(274), 1,
      sym_comment,
    ACTIONS(1724), 2,
      anon_sym_SEMI,
      sym_identifier,
  [12106] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_COLON,
    ACTIONS(1577), 1,
      anon_sym_supports,
    ACTIONS(1726), 1,
      anon_sym_LBRACE,
    STATE(275), 1,
      sym_comment,
    STATE(697), 1,
      sym_value_inheritance_spec,
  [12128] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1728), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_declarators_repeat1,
    ACTIONS(1730), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [12148] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1710), 1,
      anon_sym_COMMA,
    ACTIONS(1712), 1,
      anon_sym_LBRACE,
    ACTIONS(1714), 1,
      anon_sym_supports,
    STATE(269), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(277), 1,
      sym_comment,
  [12170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1732), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1735), 1,
      sym_identifier,
    STATE(530), 1,
      sym_enum_modifier,
    STATE(278), 2,
      sym_comment,
      aux_sym_enumerator_repeat1,
  [12190] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(279), 1,
      sym_comment,
    ACTIONS(1737), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(280), 1,
      sym_comment,
    ACTIONS(1739), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12222] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(281), 1,
      sym_comment,
    STATE(325), 1,
      sym_interface_name,
    STATE(331), 1,
      sym_scoped_name,
  [12244] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(282), 1,
      sym_comment,
    STATE(331), 1,
      sym_scoped_name,
    STATE(399), 1,
      sym_interface_name,
  [12266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(283), 1,
      sym_comment,
    ACTIONS(1741), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12282] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(284), 1,
      sym_comment,
    ACTIONS(1743), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12298] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    STATE(285), 1,
      sym_comment,
    STATE(464), 1,
      sym_raises_expr,
    ACTIONS(1745), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [12318] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(286), 1,
      sym_comment,
    ACTIONS(1747), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12334] = 7,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1701), 1,
      anon_sym_AT,
    ACTIONS(1749), 1,
      aux_sym_comment_token1,
    STATE(287), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_interface_def_repeat1,
    STATE(524), 1,
      sym_annotation_appl,
  [12356] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1573), 1,
      anon_sym_COLON,
    ACTIONS(1577), 1,
      anon_sym_supports,
    ACTIONS(1751), 1,
      anon_sym_LBRACE,
    STATE(288), 1,
      sym_comment,
    STATE(725), 1,
      sym_value_inheritance_spec,
  [12378] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    ACTIONS(1753), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_comment,
    STATE(382), 1,
      aux_sym_raises_expr_repeat1,
  [12400] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(270), 1,
      sym_value_name,
    STATE(290), 1,
      sym_comment,
    STATE(291), 1,
      sym_scoped_name,
  [12422] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(291), 1,
      sym_comment,
    ACTIONS(1755), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [12440] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1710), 1,
      anon_sym_COMMA,
    ACTIONS(1757), 1,
      anon_sym_LBRACE,
    ACTIONS(1759), 1,
      anon_sym_supports,
    STATE(277), 1,
      aux_sym_value_inheritance_spec_repeat1,
    STATE(292), 1,
      sym_comment,
  [12462] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_raises_expr_repeat1,
    STATE(293), 1,
      sym_comment,
    ACTIONS(1761), 2,
      anon_sym_LBRACE,
      anon_sym_manages,
  [12482] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(294), 1,
      sym_comment,
    STATE(730), 1,
      sym_declarator,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12502] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1546), 1,
      anon_sym_ATdefault_literal,
    ACTIONS(1763), 1,
      sym_identifier,
    STATE(278), 1,
      aux_sym_enumerator_repeat1,
    STATE(295), 1,
      sym_comment,
    STATE(530), 1,
      sym_enum_modifier,
  [12524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(296), 1,
      sym_comment,
    ACTIONS(1765), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12540] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1691), 1,
      anon_sym_primarykey,
    ACTIONS(1767), 1,
      anon_sym_LBRACE,
    STATE(297), 1,
      sym_comment,
    STATE(560), 1,
      sym_primary_key_spec,
  [12562] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(298), 1,
      sym_comment,
    ACTIONS(1769), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12578] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    ACTIONS(1771), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_comment,
    STATE(373), 1,
      aux_sym_raises_expr_repeat1,
  [12600] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(300), 1,
      sym_comment,
    ACTIONS(1773), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
      anon_sym_LBRACK,
  [12616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(301), 1,
      sym_comment,
    ACTIONS(1775), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12632] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(302), 1,
      sym_comment,
    STATE(461), 1,
      sym_any_declarator,
    STATE(526), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12652] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(303), 1,
      sym_comment,
    STATE(331), 1,
      sym_scoped_name,
    STATE(546), 1,
      sym_interface_name,
  [12674] = 7,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1677), 1,
      sym_escape_sequence,
    ACTIONS(1681), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1777), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      sym_comment,
    STATE(305), 1,
      aux_sym_string_literal_repeat1,
  [12696] = 6,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1779), 1,
      sym_escape_sequence,
    ACTIONS(1782), 1,
      anon_sym_DQUOTE,
    ACTIONS(1784), 1,
      aux_sym_string_literal_token1,
    STATE(305), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [12716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(306), 1,
      sym_comment,
    ACTIONS(1787), 4,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_identifier,
  [12732] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1691), 1,
      anon_sym_primarykey,
    ACTIONS(1789), 1,
      anon_sym_LBRACE,
    STATE(307), 1,
      sym_comment,
    STATE(654), 1,
      sym_primary_key_spec,
  [12754] = 6,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1791), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1793), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12774] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1668), 1,
      anon_sym_L,
    ACTIONS(1795), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_comment,
    STATE(359), 1,
      sym_string_literal,
  [12796] = 6,
    ACTIONS(1138), 1,
      aux_sym_comment_token1,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1797), 1,
      anon_sym_AT,
    STATE(524), 1,
      sym_annotation_appl,
    STATE(310), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [12816] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1800), 1,
      anon_sym_RPAREN,
    ACTIONS(1802), 1,
      anon_sym_in,
    STATE(311), 1,
      sym_comment,
    STATE(374), 1,
      sym_init_param_dcl,
    STATE(586), 1,
      sym_init_param_dcls,
  [12838] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1804), 1,
      anon_sym_RPAREN,
    ACTIONS(1806), 1,
      anon_sym_in,
    STATE(312), 1,
      sym_comment,
    STATE(386), 1,
      sym_factory_param_dcl,
    STATE(592), 1,
      sym_factory_param_dcls,
  [12860] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1802), 1,
      anon_sym_in,
    ACTIONS(1808), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_comment,
    STATE(374), 1,
      sym_init_param_dcl,
    STATE(595), 1,
      sym_init_param_dcls,
  [12882] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(314), 1,
      sym_comment,
    STATE(331), 1,
      sym_scoped_name,
    STATE(344), 1,
      sym_interface_name,
  [12904] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1591), 1,
      sym_identifier,
    STATE(315), 1,
      sym_comment,
    STATE(394), 1,
      sym_declarator,
    STATE(385), 2,
      sym_simple_declarator,
      sym_array_declarator,
  [12924] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1145), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12940] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(317), 1,
      sym_comment,
    ACTIONS(1187), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12956] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1191), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_AT,
      aux_sym_comment_token1,
  [12972] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1810), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1171), 2,
      anon_sym_AT,
      sym_identifier,
  [12992] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1728), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_declarators_repeat1,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1812), 2,
      anon_sym_SEMI,
      anon_sym_default,
  [13012] = 7,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1677), 1,
      sym_escape_sequence,
    ACTIONS(1681), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1814), 1,
      anon_sym_DQUOTE,
    STATE(305), 1,
      aux_sym_string_literal_repeat1,
    STATE(321), 1,
      sym_comment,
  [13034] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      sym_identifier,
    ACTIONS(1816), 1,
      anon_sym_AT,
    STATE(542), 1,
      sym_annotation_appl,
    STATE(322), 2,
      sym_comment,
      aux_sym_interface_def_repeat1,
  [13054] = 7,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1677), 1,
      sym_escape_sequence,
    ACTIONS(1681), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1814), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym_string_literal_repeat1,
    STATE(323), 1,
      sym_comment,
  [13076] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    ACTIONS(1819), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      sym_comment,
    STATE(658), 1,
      sym_raises_expr,
  [13095] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1823), 1,
      anon_sym_LBRACE,
    STATE(325), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13114] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1825), 1,
      anon_sym_GT,
    ACTIONS(1827), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_actual_parameters_repeat1,
  [13133] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1829), 1,
      anon_sym_COMMA,
    ACTIONS(1832), 1,
      anon_sym_RBRACE,
    STATE(327), 2,
      sym_comment,
      aux_sym_enum_dcl_repeat1,
  [13150] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(328), 1,
      sym_comment,
    ACTIONS(1439), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13167] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1834), 1,
      anon_sym_COMMA,
    ACTIONS(1836), 1,
      anon_sym_SEMI,
    STATE(329), 1,
      sym_comment,
    STATE(427), 1,
      aux_sym_any_declarators_repeat1,
  [13186] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1838), 1,
      anon_sym_GT,
    ACTIONS(1840), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      sym_comment,
    STATE(432), 1,
      aux_sym_formal_parameters_repeat1,
  [13205] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1842), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [13222] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1844), 1,
      sym_identifier,
    STATE(319), 1,
      sym_scoped_name,
    STATE(332), 1,
      sym_comment,
  [13241] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1846), 2,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13258] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1848), 1,
      anon_sym_LBRACE,
    ACTIONS(1850), 1,
      anon_sym_COLON,
    STATE(334), 1,
      sym_comment,
    STATE(599), 1,
      sym_connector_inherit_spec,
  [13277] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1852), 1,
      anon_sym_SEMI,
    ACTIONS(1854), 1,
      anon_sym_context,
    STATE(335), 1,
      sym_comment,
    STATE(759), 1,
      sym_context_expr,
  [13296] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1856), 2,
      anon_sym_supports,
      anon_sym_manages,
  [13313] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1858), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1860), 1,
      sym_identifier,
    STATE(86), 1,
      sym_scoped_name,
    STATE(337), 1,
      sym_comment,
  [13332] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(297), 1,
      sym_scoped_name,
    STATE(338), 1,
      sym_comment,
  [13351] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1854), 1,
      anon_sym_context,
    ACTIONS(1862), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      sym_comment,
    STATE(759), 1,
      sym_context_expr,
  [13370] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1864), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1866), 1,
      sym_identifier,
    STATE(308), 1,
      sym_scoped_name,
    STATE(340), 1,
      sym_comment,
  [13389] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1716), 1,
      anon_sym_LBRACE,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(342), 1,
      sym_comment,
    ACTIONS(1708), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_supports,
  [13423] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(343), 1,
      sym_comment,
    STATE(474), 1,
      sym_scoped_name,
  [13442] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1868), 1,
      anon_sym_LBRACE,
    STATE(344), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [13461] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1870), 1,
      anon_sym_interface,
    ACTIONS(1872), 1,
      anon_sym_valuetype,
    ACTIONS(1874), 1,
      anon_sym_eventtype,
    STATE(345), 1,
      sym_comment,
  [13480] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(183), 1,
      sym_simple_declarator,
    STATE(346), 1,
      sym_comment,
    STATE(642), 1,
      sym_attr_declarator,
  [13499] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1878), 1,
      anon_sym_COMMA,
    ACTIONS(1881), 1,
      anon_sym_LBRACE,
    STATE(347), 2,
      sym_comment,
      aux_sym_interface_inheritance_spec_repeat1,
  [13516] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1883), 1,
      anon_sym_GT,
    ACTIONS(1885), 1,
      anon_sym_COMMA,
    STATE(348), 2,
      sym_comment,
      aux_sym_actual_parameters_repeat1,
  [13533] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(182), 1,
      sym_scoped_name,
    STATE(349), 1,
      sym_comment,
  [13552] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1888), 1,
      sym_identifier,
    STATE(350), 1,
      sym_comment,
    STATE(490), 1,
      sym_scoped_name,
  [13571] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1890), 1,
      anon_sym_GT,
    ACTIONS(1892), 1,
      anon_sym_COMMA,
    STATE(351), 2,
      sym_comment,
      aux_sym_formal_parameters_repeat1,
  [13588] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1895), 1,
      anon_sym_COMMA,
    ACTIONS(1898), 1,
      anon_sym_RPAREN,
    STATE(352), 2,
      sym_comment,
      aux_sym_annotation_appl_params_repeat1,
  [13605] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1488), 1,
      anon_sym_setraises,
    ACTIONS(1900), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      sym_comment,
    STATE(637), 1,
      sym_set_excep_expr,
  [13624] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(354), 1,
      sym_comment,
    STATE(544), 1,
      sym_scoped_name,
  [13643] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(258), 1,
      sym_scoped_name,
    STATE(355), 1,
      sym_comment,
  [13662] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(259), 1,
      sym_scoped_name,
    STATE(356), 1,
      sym_comment,
  [13681] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1565), 1,
      anon_sym_RBRACE,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_enum_dcl_repeat1,
  [13700] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    ACTIONS(1904), 1,
      anon_sym_SEMI,
    STATE(358), 1,
      sym_comment,
    STATE(408), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [13719] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1906), 1,
      anon_sym_COMMA,
    ACTIONS(1908), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_comment,
    STATE(418), 1,
      aux_sym_context_expr_repeat1,
  [13738] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1834), 1,
      anon_sym_COMMA,
    ACTIONS(1910), 1,
      anon_sym_SEMI,
    STATE(329), 1,
      aux_sym_any_declarators_repeat1,
    STATE(360), 1,
      sym_comment,
  [13757] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1912), 1,
      anon_sym_COMMA,
    ACTIONS(1914), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym_comment,
    STATE(419), 1,
      aux_sym_parameter_dcls_repeat1,
  [13776] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      anon_sym_COMMA,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      sym_comment,
    STATE(428), 1,
      aux_sym_annotation_appl_params_repeat1,
  [13795] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1920), 1,
      anon_sym_GT,
    ACTIONS(1922), 1,
      anon_sym_COMMA,
    STATE(363), 2,
      sym_comment,
      aux_sym_formal_parameter_names_repeat1,
  [13812] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    ACTIONS(1925), 1,
      anon_sym_SEMI,
    STATE(364), 1,
      sym_comment,
    STATE(652), 1,
      sym_raises_expr,
  [13831] = 5,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1929), 1,
      aux_sym_string_literal_token1,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1927), 2,
      sym_escape_sequence,
      anon_sym_DQUOTE,
  [13848] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(333), 1,
      sym_scoped_name,
    STATE(366), 1,
      sym_comment,
  [13867] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(235), 1,
      sym_scoped_name,
    STATE(367), 1,
      sym_comment,
  [13886] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1542), 1,
      anon_sym_supports,
    ACTIONS(1931), 1,
      anon_sym_LBRACE,
    STATE(368), 1,
      sym_comment,
    STATE(782), 1,
      sym_supported_interface_spec,
  [13905] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1933), 1,
      anon_sym_COMMA,
    ACTIONS(1935), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_comment,
    STATE(372), 1,
      aux_sym_bitmask_dcl_repeat1,
  [13924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(370), 1,
      sym_comment,
    ACTIONS(1937), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13939] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1939), 1,
      anon_sym_GT,
    ACTIONS(1941), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(371), 1,
      sym_comment,
  [13958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1943), 1,
      anon_sym_COMMA,
    ACTIONS(1946), 1,
      anon_sym_RBRACE,
    STATE(372), 2,
      sym_comment,
      aux_sym_bitmask_dcl_repeat1,
  [13975] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    ACTIONS(1948), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_raises_expr_repeat1,
    STATE(373), 1,
      sym_comment,
  [13994] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1950), 1,
      anon_sym_COMMA,
    ACTIONS(1952), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_comment,
    STATE(429), 1,
      aux_sym_init_param_dcls_repeat1,
  [14013] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(336), 1,
      sym_scoped_name,
    STATE(375), 1,
      sym_comment,
  [14032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(376), 1,
      sym_comment,
    ACTIONS(1954), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [14047] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1941), 1,
      anon_sym_COMMA,
    ACTIONS(1956), 1,
      anon_sym_GT,
    STATE(371), 1,
      aux_sym_formal_parameter_names_repeat1,
    STATE(377), 1,
      sym_comment,
  [14066] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1958), 1,
      anon_sym_SEMI,
    ACTIONS(1960), 1,
      sym_identifier,
    STATE(378), 2,
      sym_comment,
      aux_sym_bitfield_repeat1,
  [14083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1963), 1,
      anon_sym_COMMA,
    ACTIONS(1966), 1,
      anon_sym_RPAREN,
    STATE(379), 2,
      sym_comment,
      aux_sym_in_parameter_dcls_repeat1,
  [14100] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(307), 1,
      sym_scoped_name,
    STATE(380), 1,
      sym_comment,
  [14119] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    ACTIONS(1968), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(381), 1,
      sym_comment,
  [14138] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    ACTIONS(1970), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_raises_expr_repeat1,
    STATE(382), 1,
      sym_comment,
  [14157] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(383), 1,
      sym_comment,
    STATE(497), 1,
      sym_scoped_name,
  [14176] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1542), 1,
      anon_sym_supports,
    ACTIONS(1972), 1,
      anon_sym_manages,
    STATE(384), 1,
      sym_comment,
    STATE(776), 1,
      sym_supported_interface_spec,
  [14195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(385), 1,
      sym_comment,
    ACTIONS(1974), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14210] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1976), 1,
      anon_sym_COMMA,
    ACTIONS(1978), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      sym_comment,
    STATE(442), 1,
      aux_sym_factory_param_dcls_repeat1,
  [14229] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1980), 1,
      anon_sym_SEMI,
    ACTIONS(1982), 1,
      anon_sym_default,
    STATE(387), 1,
      sym_comment,
    STATE(596), 1,
      sym_default,
  [14248] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1984), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(388), 1,
      sym_comment,
  [14267] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1982), 1,
      anon_sym_default,
    ACTIONS(1986), 1,
      anon_sym_SEMI,
    STATE(389), 1,
      sym_comment,
    STATE(604), 1,
      sym_default,
  [14286] = 5,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(251), 1,
      aux_sym_char_literal_repeat1,
    STATE(390), 1,
      sym_comment,
    ACTIONS(1647), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [14303] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    ACTIONS(1988), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      sym_comment,
    STATE(663), 1,
      sym_raises_expr,
  [14322] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1933), 1,
      anon_sym_COMMA,
    ACTIONS(1935), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_comment,
    STATE(444), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14341] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(393), 1,
      sym_comment,
    STATE(543), 1,
      sym_scoped_name,
  [14360] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(394), 1,
      sym_comment,
    ACTIONS(1673), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_default,
  [14375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1990), 1,
      anon_sym_COMMA,
    ACTIONS(1993), 1,
      anon_sym_RPAREN,
    STATE(395), 2,
      sym_comment,
      aux_sym_factory_param_dcls_repeat1,
  [14392] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1995), 1,
      anon_sym_SEMI,
    ACTIONS(1997), 1,
      anon_sym_switch,
    ACTIONS(1999), 1,
      sym_identifier,
    STATE(396), 1,
      sym_comment,
  [14411] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(397), 1,
      sym_comment,
    STATE(448), 1,
      sym_scoped_name,
  [14430] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2001), 1,
      anon_sym_LT,
    ACTIONS(2003), 1,
      anon_sym_LBRACE,
    STATE(398), 1,
      sym_comment,
  [14449] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(2005), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      sym_comment,
    STATE(441), 1,
      aux_sym_interface_inheritance_spec_repeat1,
  [14468] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2007), 1,
      anon_sym_SEMI,
    ACTIONS(2009), 1,
      sym_identifier,
    STATE(378), 1,
      aux_sym_bitfield_repeat1,
    STATE(400), 1,
      sym_comment,
  [14487] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(2005), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(401), 1,
      sym_comment,
  [14506] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    ACTIONS(2011), 1,
      anon_sym_RBRACE,
    STATE(381), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(402), 1,
      sym_comment,
  [14525] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    ACTIONS(2013), 1,
      anon_sym_SEMI,
    STATE(403), 1,
      sym_comment,
    STATE(408), 1,
      aux_sym_readonly_attr_declarator_repeat1,
  [14544] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1563), 1,
      anon_sym_RBRACE,
    ACTIONS(1933), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_bitmask_dcl_repeat1,
  [14563] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(289), 1,
      sym_scoped_name,
    STATE(405), 1,
      sym_comment,
  [14582] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1933), 1,
      anon_sym_COMMA,
    ACTIONS(2015), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(406), 1,
      sym_comment,
  [14601] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1933), 1,
      anon_sym_COMMA,
    ACTIONS(2015), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(407), 1,
      sym_comment,
  [14620] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2017), 1,
      anon_sym_COMMA,
    ACTIONS(2020), 1,
      anon_sym_SEMI,
    STATE(408), 2,
      sym_comment,
      aux_sym_readonly_attr_declarator_repeat1,
  [14637] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(238), 1,
      sym_simple_declarator,
    STATE(409), 1,
      sym_comment,
    STATE(566), 1,
      sym_readonly_attr_declarator,
  [14656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2022), 1,
      anon_sym_COMMA,
    ACTIONS(2025), 1,
      anon_sym_RPAREN,
    STATE(410), 2,
      sym_comment,
      aux_sym_init_param_dcls_repeat1,
  [14673] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(2027), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(411), 1,
      sym_comment,
  [14692] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1854), 1,
      anon_sym_context,
    ACTIONS(2029), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      sym_comment,
    STATE(759), 1,
      sym_context_expr,
  [14711] = 5,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(252), 1,
      aux_sym_char_literal_repeat1,
    STATE(413), 1,
      sym_comment,
    ACTIONS(1647), 2,
      sym_escape_sequence,
      aux_sym_char_literal_token1,
  [14728] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(414), 1,
      sym_comment,
    ACTIONS(2031), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      aux_sym_char_literal_token1,
  [14743] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2033), 1,
      anon_sym_COMMA,
    ACTIONS(2035), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_in_parameter_dcls_repeat1,
  [14762] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2009), 1,
      sym_identifier,
    ACTIONS(2037), 1,
      anon_sym_SEMI,
    STATE(400), 1,
      aux_sym_bitfield_repeat1,
    STATE(416), 1,
      sym_comment,
  [14781] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(1668), 1,
      anon_sym_L,
    STATE(417), 1,
      sym_comment,
    STATE(460), 1,
      sym_string_literal,
  [14800] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1906), 1,
      anon_sym_COMMA,
    ACTIONS(2039), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_context_expr_repeat1,
  [14819] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1912), 1,
      anon_sym_COMMA,
    ACTIONS(2041), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_comment,
    STATE(421), 1,
      aux_sym_parameter_dcls_repeat1,
  [14838] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(265), 1,
      sym_scoped_name,
    STATE(420), 1,
      sym_comment,
  [14857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2043), 1,
      anon_sym_COMMA,
    ACTIONS(2046), 1,
      anon_sym_RPAREN,
    STATE(421), 2,
      sym_comment,
      aux_sym_parameter_dcls_repeat1,
  [14874] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(422), 1,
      sym_comment,
    STATE(553), 1,
      sym_scoped_name,
  [14893] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1693), 1,
      anon_sym_LBRACE,
    ACTIONS(1695), 1,
      anon_sym_COLON,
    STATE(423), 1,
      sym_comment,
    STATE(600), 1,
      sym_interface_inheritance_spec,
  [14912] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    ACTIONS(2048), 1,
      anon_sym_SEMI,
    STATE(424), 1,
      sym_comment,
    STATE(700), 1,
      sym_raises_expr,
  [14931] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(227), 1,
      sym_scoped_name,
    STATE(425), 1,
      sym_comment,
  [14950] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2050), 1,
      anon_sym_COMMA,
    ACTIONS(2053), 1,
      anon_sym_RPAREN,
    STATE(426), 2,
      sym_comment,
      aux_sym_context_expr_repeat1,
  [14967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2055), 1,
      anon_sym_COMMA,
    ACTIONS(2058), 1,
      anon_sym_SEMI,
    STATE(427), 2,
      sym_comment,
      aux_sym_any_declarators_repeat1,
  [14984] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1916), 1,
      anon_sym_COMMA,
    ACTIONS(2060), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_annotation_appl_params_repeat1,
    STATE(428), 1,
      sym_comment,
  [15003] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1950), 1,
      anon_sym_COMMA,
    ACTIONS(2062), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_init_param_dcls_repeat1,
    STATE(429), 1,
      sym_comment,
  [15022] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2033), 1,
      anon_sym_COMMA,
    ACTIONS(2064), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_in_parameter_dcls_repeat1,
    STATE(430), 1,
      sym_comment,
  [15041] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1844), 1,
      sym_identifier,
    STATE(431), 1,
      sym_comment,
    STATE(523), 1,
      sym_scoped_name,
  [15060] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1840), 1,
      anon_sym_COMMA,
    ACTIONS(2066), 1,
      anon_sym_GT,
    STATE(351), 1,
      aux_sym_formal_parameters_repeat1,
    STATE(432), 1,
      sym_comment,
  [15079] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    ACTIONS(2068), 1,
      anon_sym_SEMI,
    STATE(433), 1,
      sym_comment,
    STATE(704), 1,
      sym_raises_expr,
  [15098] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1844), 1,
      sym_identifier,
    STATE(434), 1,
      sym_comment,
    STATE(522), 1,
      sym_scoped_name,
  [15117] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1844), 1,
      sym_identifier,
    STATE(435), 1,
      sym_comment,
    STATE(521), 1,
      sym_scoped_name,
  [15136] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(861), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1645), 1,
      sym_identifier,
    STATE(299), 1,
      sym_scoped_name,
    STATE(436), 1,
      sym_comment,
  [15155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(437), 1,
      sym_comment,
    ACTIONS(2070), 3,
      anon_sym_RBRACE,
      anon_sym_default,
      anon_sym_case,
  [15170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1827), 1,
      anon_sym_COMMA,
    ACTIONS(2072), 1,
      anon_sym_GT,
    STATE(348), 1,
      aux_sym_actual_parameters_repeat1,
    STATE(438), 1,
      sym_comment,
  [15189] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1844), 1,
      sym_identifier,
    STATE(439), 1,
      sym_comment,
    STATE(520), 1,
      sym_scoped_name,
  [15208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    ACTIONS(2011), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_enum_dcl_repeat1,
    STATE(440), 1,
      sym_comment,
  [15227] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1823), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_interface_inheritance_spec_repeat1,
    STATE(441), 1,
      sym_comment,
  [15246] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1976), 1,
      anon_sym_COMMA,
    ACTIONS(2074), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_factory_param_dcls_repeat1,
    STATE(442), 1,
      sym_comment,
  [15265] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1626), 1,
      anon_sym_raises,
    ACTIONS(2076), 1,
      anon_sym_SEMI,
    STATE(443), 1,
      sym_comment,
    STATE(707), 1,
      sym_raises_expr,
  [15284] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1933), 1,
      anon_sym_COMMA,
    ACTIONS(2078), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      aux_sym_bitmask_dcl_repeat1,
    STATE(444), 1,
      sym_comment,
  [15303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(445), 1,
      sym_comment,
    ACTIONS(2080), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2082), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_comment,
  [15333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(447), 1,
      sym_comment,
    ACTIONS(2084), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2086), 1,
      anon_sym_LT,
    STATE(448), 1,
      sym_comment,
  [15363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(449), 1,
      sym_comment,
    ACTIONS(2088), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2090), 1,
      anon_sym_GT,
    ACTIONS(2092), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      sym_comment,
  [15393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(451), 1,
      sym_comment,
    ACTIONS(2094), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(452), 1,
      sym_comment,
    ACTIONS(2096), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15421] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(453), 1,
      sym_comment,
    STATE(507), 1,
      sym_simple_declarator,
  [15437] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1806), 1,
      anon_sym_in,
    STATE(454), 1,
      sym_comment,
    STATE(483), 1,
      sym_factory_param_dcl,
  [15453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_comment,
    ACTIONS(2098), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(456), 1,
      sym_comment,
    ACTIONS(2100), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15481] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1687), 1,
      anon_sym_in,
    STATE(457), 1,
      sym_comment,
    STATE(508), 1,
      sym_in_param_dcl,
  [15497] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(458), 1,
      sym_comment,
    STATE(477), 1,
      sym_simple_declarator,
  [15513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(459), 1,
      sym_comment,
    ACTIONS(2102), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(460), 1,
      sym_comment,
    ACTIONS(2053), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(461), 1,
      sym_comment,
    ACTIONS(2058), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15555] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2104), 1,
      sym_identifier,
    STATE(462), 1,
      sym_comment,
    STATE(534), 1,
      sym_annotation_appl_param,
  [15571] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1802), 1,
      anon_sym_in,
    STATE(463), 1,
      sym_comment,
    STATE(475), 1,
      sym_init_param_dcl,
  [15587] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(464), 1,
      sym_comment,
    ACTIONS(2106), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2108), 1,
      anon_sym_LBRACE,
    ACTIONS(2110), 1,
      anon_sym_COLON,
    STATE(465), 1,
      sym_comment,
  [15617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(466), 1,
      sym_comment,
    ACTIONS(2046), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(467), 1,
      sym_comment,
    STATE(472), 1,
      sym_simple_declarator,
  [15647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(468), 1,
      sym_comment,
    STATE(469), 1,
      sym_simple_declarator,
  [15663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(469), 1,
      sym_comment,
    ACTIONS(2112), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(470), 1,
      sym_comment,
    ACTIONS(2114), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15691] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(471), 1,
      sym_comment,
    ACTIONS(1745), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15705] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(472), 1,
      sym_comment,
    ACTIONS(2116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(473), 1,
      sym_comment,
    ACTIONS(2118), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [15733] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2120), 1,
      anon_sym_LBRACE,
    STATE(474), 1,
      sym_comment,
  [15749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(475), 1,
      sym_comment,
    ACTIONS(2025), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(476), 1,
      sym_comment,
    ACTIONS(2122), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(477), 1,
      sym_comment,
    ACTIONS(2124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(478), 1,
      sym_comment,
    ACTIONS(2126), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [15805] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2128), 1,
      anon_sym_SEMI,
    ACTIONS(2130), 1,
      anon_sym_default,
    STATE(479), 1,
      sym_comment,
  [15821] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(480), 1,
      sym_comment,
    ACTIONS(2132), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [15835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(481), 1,
      sym_comment,
    ACTIONS(2134), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(482), 1,
      sym_comment,
    ACTIONS(2020), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [15863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(483), 1,
      sym_comment,
    ACTIONS(1993), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15877] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2136), 1,
      anon_sym_LBRACE,
    ACTIONS(2138), 1,
      anon_sym_COLON,
    STATE(484), 1,
      sym_comment,
  [15893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(485), 1,
      sym_comment,
    ACTIONS(2140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_comment,
    ACTIONS(2142), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(487), 1,
      sym_comment,
    ACTIONS(2144), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(488), 1,
      sym_comment,
    ACTIONS(2146), 2,
      anon_sym_SEMI,
      sym_identifier,
  [15949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(489), 1,
      sym_comment,
    ACTIONS(2148), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [15963] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2150), 1,
      anon_sym_LT,
    STATE(490), 1,
      sym_comment,
  [15979] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2152), 1,
      sym_identifier,
    STATE(491), 1,
      sym_comment,
  [15995] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(479), 1,
      sym_simple_declarator,
    STATE(492), 1,
      sym_comment,
  [16011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(493), 1,
      sym_comment,
    ACTIONS(2154), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16025] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(494), 1,
      sym_comment,
    ACTIONS(2156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(495), 1,
      sym_comment,
    ACTIONS(2158), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_comment,
    ACTIONS(2160), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2162), 1,
      anon_sym_LBRACE,
    STATE(497), 1,
      sym_comment,
  [16083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2164), 1,
      sym_identifier,
    STATE(498), 1,
      sym_comment,
  [16099] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(499), 1,
      sym_comment,
    ACTIONS(2166), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(500), 1,
      sym_comment,
    ACTIONS(2168), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(501), 1,
      sym_comment,
    ACTIONS(2170), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16141] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2172), 1,
      anon_sym_DQUOTE,
    ACTIONS(2174), 1,
      anon_sym_SQUOTE,
    STATE(502), 1,
      sym_comment,
  [16157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_comment,
    ACTIONS(2176), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16171] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2178), 1,
      sym_identifier,
    STATE(504), 1,
      sym_comment,
    STATE(728), 1,
      sym_formal_parameter_names,
  [16187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(505), 1,
      sym_comment,
    ACTIONS(2180), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(506), 1,
      sym_comment,
    ACTIONS(2182), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16215] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(507), 1,
      sym_comment,
    ACTIONS(2184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16229] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_comment,
    ACTIONS(1966), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16243] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2186), 1,
      anon_sym_GT,
    ACTIONS(2188), 1,
      anon_sym_COMMA,
    STATE(509), 1,
      sym_comment,
  [16259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(510), 1,
      sym_comment,
    ACTIONS(2190), 2,
      anon_sym_RBRACE,
      anon_sym_bitfield,
  [16273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(511), 1,
      sym_comment,
    ACTIONS(2192), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16287] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(512), 1,
      sym_comment,
    ACTIONS(2194), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(513), 1,
      sym_comment,
    ACTIONS(2196), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_comment,
    ACTIONS(1946), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2198), 1,
      anon_sym_LT,
    ACTIONS(2200), 1,
      sym_identifier,
    STATE(515), 1,
      sym_comment,
  [16345] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(516), 1,
      sym_comment,
    ACTIONS(2202), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16359] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(517), 1,
      sym_comment,
    ACTIONS(2204), 2,
      anon_sym_SEMI,
      anon_sym_setraises,
  [16373] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(518), 1,
      sym_comment,
    ACTIONS(2206), 2,
      anon_sym_SEMI,
      anon_sym_context,
  [16387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(519), 1,
      sym_comment,
    ACTIONS(1920), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16401] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2208), 1,
      sym_identifier,
    STATE(520), 1,
      sym_comment,
  [16417] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2210), 1,
      sym_identifier,
    STATE(521), 1,
      sym_comment,
  [16433] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2212), 1,
      sym_identifier,
    STATE(522), 1,
      sym_comment,
  [16449] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2214), 1,
      sym_identifier,
    STATE(523), 1,
      sym_comment,
  [16465] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(524), 1,
      sym_comment,
    ACTIONS(1203), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16479] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(525), 1,
      sym_comment,
    ACTIONS(2216), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(526), 1,
      sym_comment,
    ACTIONS(2218), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [16507] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2220), 1,
      sym_identifier,
    STATE(527), 1,
      sym_comment,
  [16523] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2222), 1,
      anon_sym_SEMI,
    STATE(528), 1,
      sym_comment,
  [16539] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(529), 1,
      sym_comment,
    STATE(561), 1,
      sym_simple_declarator,
  [16555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(530), 1,
      sym_comment,
    ACTIONS(2224), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(531), 1,
      sym_comment,
    ACTIONS(2226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(532), 1,
      sym_comment,
    ACTIONS(2228), 2,
      anon_sym_ATdefault_literal,
      sym_identifier,
  [16597] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2230), 1,
      anon_sym_LPAREN,
    STATE(533), 1,
      sym_comment,
    STATE(636), 1,
      sym_exception_list,
  [16613] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(534), 1,
      sym_comment,
    ACTIONS(1898), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16627] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    STATE(535), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_AT,
      aux_sym_comment_token1,
  [16641] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2230), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym_exception_list,
    STATE(536), 1,
      sym_comment,
  [16657] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(537), 1,
      sym_comment,
    ACTIONS(1890), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16671] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2232), 1,
      anon_sym_valuetype,
    ACTIONS(2234), 1,
      anon_sym_eventtype,
    STATE(538), 1,
      sym_comment,
  [16687] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(482), 1,
      sym_simple_declarator,
    STATE(539), 1,
      sym_comment,
  [16703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(540), 1,
      sym_comment,
    ACTIONS(1883), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [16717] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(541), 1,
      sym_comment,
    ACTIONS(2236), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16731] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(542), 1,
      sym_comment,
    ACTIONS(1205), 2,
      anon_sym_AT,
      sym_identifier,
  [16745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2238), 1,
      anon_sym_LBRACE,
    STATE(543), 1,
      sym_comment,
  [16761] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2240), 1,
      anon_sym_LBRACE,
    STATE(544), 1,
      sym_comment,
  [16777] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(545), 1,
      sym_comment,
    ACTIONS(1209), 2,
      anon_sym_AT,
      sym_identifier,
  [16791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(546), 1,
      sym_comment,
    ACTIONS(1881), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [16805] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(547), 1,
      sym_comment,
    ACTIONS(2242), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16819] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2244), 1,
      anon_sym_LBRACE,
    ACTIONS(2246), 1,
      anon_sym_SEMI,
    STATE(548), 1,
      sym_comment,
  [16835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(549), 1,
      sym_comment,
    ACTIONS(2248), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(550), 1,
      sym_comment,
    ACTIONS(1832), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(551), 1,
      sym_comment,
    ACTIONS(2250), 2,
      anon_sym_SEMI,
      sym_identifier,
  [16877] = 5,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2252), 1,
      aux_sym_preproc_call_token1,
    ACTIONS(2254), 1,
      sym_preproc_arg,
    STATE(552), 1,
      sym_comment,
  [16893] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1317), 1,
      anon_sym_COLON_COLON,
    ACTIONS(2256), 1,
      anon_sym_LBRACE,
    STATE(553), 1,
      sym_comment,
  [16909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2258), 1,
      sym_identifier,
    STATE(554), 1,
      sym_comment,
  [16922] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2260), 1,
      anon_sym_SEMI,
    STATE(555), 1,
      sym_comment,
  [16935] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2262), 1,
      sym_identifier,
    STATE(556), 1,
      sym_comment,
  [16948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2264), 1,
      anon_sym_GT,
    STATE(557), 1,
      sym_comment,
  [16961] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2266), 1,
      sym_identifier,
    STATE(558), 1,
      sym_comment,
  [16974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2268), 1,
      anon_sym_SEMI,
    STATE(559), 1,
      sym_comment,
  [16987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1689), 1,
      anon_sym_LBRACE,
    STATE(560), 1,
      sym_comment,
  [17000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2270), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      sym_comment,
  [17013] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2272), 1,
      anon_sym_GT,
    STATE(562), 1,
      sym_comment,
  [17026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2274), 1,
      anon_sym_LBRACE,
    STATE(563), 1,
      sym_comment,
  [17039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2276), 1,
      anon_sym_LBRACE,
    STATE(564), 1,
      sym_comment,
  [17052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2278), 1,
      sym_identifier,
    STATE(565), 1,
      sym_comment,
  [17065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2280), 1,
      anon_sym_SEMI,
    STATE(566), 1,
      sym_comment,
  [17078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2282), 1,
      anon_sym_SEMI,
    STATE(567), 1,
      sym_comment,
  [17091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2284), 1,
      sym_identifier,
    STATE(568), 1,
      sym_comment,
  [17104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2286), 1,
      anon_sym_SEMI,
    STATE(569), 1,
      sym_comment,
  [17117] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2288), 1,
      sym_identifier,
    STATE(570), 1,
      sym_comment,
  [17130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1904), 1,
      anon_sym_SEMI,
    STATE(571), 1,
      sym_comment,
  [17143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1435), 1,
      anon_sym_EQ,
    STATE(572), 1,
      sym_comment,
  [17156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1900), 1,
      anon_sym_SEMI,
    STATE(573), 1,
      sym_comment,
  [17169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2290), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_comment,
  [17182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2222), 1,
      anon_sym_SEMI,
    STATE(575), 1,
      sym_comment,
  [17195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2292), 1,
      anon_sym_SEMI,
    STATE(576), 1,
      sym_comment,
  [17208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2294), 1,
      anon_sym_LPAREN,
    STATE(577), 1,
      sym_comment,
  [17221] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2296), 1,
      anon_sym_EQ,
    STATE(578), 1,
      sym_comment,
  [17234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2172), 1,
      anon_sym_DQUOTE,
    STATE(579), 1,
      sym_comment,
  [17247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2298), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      sym_comment,
  [17260] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2300), 1,
      anon_sym_SEMI,
    STATE(581), 1,
      sym_comment,
  [17273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2302), 1,
      anon_sym_SEMI,
    STATE(582), 1,
      sym_comment,
  [17286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2304), 1,
      anon_sym_LT,
    STATE(583), 1,
      sym_comment,
  [17299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2306), 1,
      anon_sym_SEMI,
    STATE(584), 1,
      sym_comment,
  [17312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2308), 1,
      anon_sym_LT,
    STATE(585), 1,
      sym_comment,
  [17325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2310), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      sym_comment,
  [17338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2312), 1,
      anon_sym_SEMI,
    STATE(587), 1,
      sym_comment,
  [17351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1931), 1,
      anon_sym_LBRACE,
    STATE(588), 1,
      sym_comment,
  [17364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2314), 1,
      anon_sym_SEMI,
    STATE(589), 1,
      sym_comment,
  [17377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2316), 1,
      sym_identifier,
    STATE(590), 1,
      sym_comment,
  [17390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2318), 1,
      sym_identifier,
    STATE(591), 1,
      sym_comment,
  [17403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2320), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      sym_comment,
  [17416] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2322), 1,
      anon_sym_SEMI,
    STATE(593), 1,
      sym_comment,
  [17429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2324), 1,
      anon_sym_SEMI,
    STATE(594), 1,
      sym_comment,
  [17442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2326), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      sym_comment,
  [17455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2328), 1,
      anon_sym_SEMI,
    STATE(596), 1,
      sym_comment,
  [17468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1972), 1,
      anon_sym_manages,
    STATE(597), 1,
      sym_comment,
  [17481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2330), 1,
      sym_identifier,
    STATE(598), 1,
      sym_comment,
  [17494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2332), 1,
      anon_sym_LBRACE,
    STATE(599), 1,
      sym_comment,
  [17507] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2334), 1,
      anon_sym_LBRACE,
    STATE(600), 1,
      sym_comment,
  [17520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2336), 1,
      anon_sym_SEMI,
    STATE(601), 1,
      sym_comment,
  [17533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2198), 1,
      anon_sym_LT,
    STATE(602), 1,
      sym_comment,
  [17546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2338), 1,
      sym_identifier,
    STATE(603), 1,
      sym_comment,
  [17559] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2340), 1,
      anon_sym_SEMI,
    STATE(604), 1,
      sym_comment,
  [17572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2342), 1,
      anon_sym_SEMI,
    STATE(605), 1,
      sym_comment,
  [17585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2344), 1,
      anon_sym_SEMI,
    STATE(606), 1,
      sym_comment,
  [17598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2346), 1,
      anon_sym_SEMI,
    STATE(607), 1,
      sym_comment,
  [17611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2164), 1,
      sym_identifier,
    STATE(608), 1,
      sym_comment,
  [17624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2348), 1,
      anon_sym_SEMI,
    STATE(609), 1,
      sym_comment,
  [17637] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1872), 1,
      anon_sym_valuetype,
    STATE(610), 1,
      sym_comment,
  [17650] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2350), 1,
      sym_identifier,
    STATE(611), 1,
      sym_comment,
  [17663] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2352), 1,
      anon_sym_SEMI,
    STATE(612), 1,
      sym_comment,
  [17676] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2354), 1,
      anon_sym_LBRACE,
    STATE(613), 1,
      sym_comment,
  [17689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2356), 1,
      anon_sym_attribute,
    STATE(614), 1,
      sym_comment,
  [17702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2358), 1,
      anon_sym_SEMI,
    STATE(615), 1,
      sym_comment,
  [17715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2360), 1,
      anon_sym_SEMI,
    STATE(616), 1,
      sym_comment,
  [17728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2362), 1,
      anon_sym_SEMI,
    STATE(617), 1,
      sym_comment,
  [17741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2364), 1,
      anon_sym_SEMI,
    STATE(618), 1,
      sym_comment,
  [17754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2366), 1,
      anon_sym_SEMI,
    STATE(619), 1,
      sym_comment,
  [17767] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2368), 1,
      sym_identifier,
    STATE(620), 1,
      sym_comment,
  [17780] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2370), 1,
      anon_sym_SEMI,
    STATE(621), 1,
      sym_comment,
  [17793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2372), 1,
      anon_sym_LBRACE,
    STATE(622), 1,
      sym_comment,
  [17806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2374), 1,
      anon_sym_SEMI,
    STATE(623), 1,
      sym_comment,
  [17819] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2376), 1,
      sym_identifier,
    STATE(624), 1,
      sym_comment,
  [17832] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2378), 1,
      anon_sym_LBRACE,
    STATE(625), 1,
      sym_comment,
  [17845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2380), 1,
      anon_sym_SEMI,
    STATE(626), 1,
      sym_comment,
  [17858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2382), 1,
      sym_identifier,
    STATE(627), 1,
      sym_comment,
  [17871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2384), 1,
      sym_identifier,
    STATE(628), 1,
      sym_comment,
  [17884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2386), 1,
      anon_sym_LBRACE,
    STATE(629), 1,
      sym_comment,
  [17897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2388), 1,
      anon_sym_LPAREN,
    STATE(630), 1,
      sym_comment,
  [17910] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2013), 1,
      anon_sym_SEMI,
    STATE(631), 1,
      sym_comment,
  [17923] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2232), 1,
      anon_sym_valuetype,
    STATE(632), 1,
      sym_comment,
  [17936] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2390), 1,
      anon_sym_SEMI,
    STATE(633), 1,
      sym_comment,
  [17949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2392), 1,
      anon_sym_void,
    STATE(634), 1,
      sym_comment,
  [17962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2029), 1,
      anon_sym_SEMI,
    STATE(635), 1,
      sym_comment,
  [17975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2394), 1,
      anon_sym_SEMI,
    STATE(636), 1,
      sym_comment,
  [17988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2396), 1,
      anon_sym_SEMI,
    STATE(637), 1,
      sym_comment,
  [18001] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2398), 1,
      anon_sym_LPAREN,
    STATE(638), 1,
      sym_comment,
  [18014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(639), 1,
      sym_comment,
  [18027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2400), 1,
      sym_identifier,
    STATE(640), 1,
      sym_comment,
  [18040] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2402), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      sym_comment,
  [18053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2404), 1,
      anon_sym_SEMI,
    STATE(642), 1,
      sym_comment,
  [18066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2406), 1,
      sym_identifier,
    STATE(643), 1,
      sym_comment,
  [18079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2408), 1,
      anon_sym_SEMI,
    STATE(644), 1,
      sym_comment,
  [18092] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2410), 1,
      anon_sym_SEMI,
    STATE(645), 1,
      sym_comment,
  [18105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2412), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_comment,
  [18118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2414), 1,
      anon_sym_LBRACE,
    STATE(647), 1,
      sym_comment,
  [18131] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2416), 1,
      aux_sym_preproc_call_token1,
    STATE(648), 1,
      sym_comment,
  [18144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2418), 1,
      anon_sym_SEMI,
    STATE(649), 1,
      sym_comment,
  [18157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2420), 1,
      anon_sym_SEMI,
    STATE(650), 1,
      sym_comment,
  [18170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1749), 1,
      anon_sym_SLASH,
    STATE(651), 1,
      sym_comment,
  [18183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2048), 1,
      anon_sym_SEMI,
    STATE(652), 1,
      sym_comment,
  [18196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2422), 1,
      anon_sym_LBRACE,
    STATE(653), 1,
      sym_comment,
  [18209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1767), 1,
      anon_sym_LBRACE,
    STATE(654), 1,
      sym_comment,
  [18222] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2424), 1,
      anon_sym_SEMI,
    STATE(655), 1,
      sym_comment,
  [18235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2426), 1,
      sym_identifier,
    STATE(656), 1,
      sym_comment,
  [18248] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2428), 1,
      anon_sym_LBRACE,
    STATE(657), 1,
      sym_comment,
  [18261] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2068), 1,
      anon_sym_SEMI,
    STATE(658), 1,
      sym_comment,
  [18274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2430), 1,
      anon_sym_RBRACK,
    STATE(659), 1,
      sym_comment,
  [18287] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2432), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_comment,
  [18300] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2434), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      sym_comment,
  [18313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2436), 1,
      anon_sym_GT,
    STATE(662), 1,
      sym_comment,
  [18326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2076), 1,
      anon_sym_SEMI,
    STATE(663), 1,
      sym_comment,
  [18339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2438), 1,
      anon_sym_SEMI,
    STATE(664), 1,
      sym_comment,
  [18352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2440), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      sym_comment,
  [18365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2082), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_comment,
  [18378] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2442), 1,
      aux_sym_comment_token3,
    STATE(667), 1,
      sym_comment,
  [18391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2444), 1,
      anon_sym_LBRACE,
    STATE(668), 1,
      sym_comment,
  [18404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2446), 1,
      anon_sym_GT,
    STATE(669), 1,
      sym_comment,
  [18417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2448), 1,
      anon_sym_GT,
    STATE(670), 1,
      sym_comment,
  [18430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2450), 1,
      anon_sym_GT,
    STATE(671), 1,
      sym_comment,
  [18443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2452), 1,
      anon_sym_RBRACE,
    STATE(672), 1,
      sym_comment,
  [18456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2454), 1,
      anon_sym_LBRACE,
    STATE(673), 1,
      sym_comment,
  [18469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2456), 1,
      anon_sym_SEMI,
    STATE(674), 1,
      sym_comment,
  [18482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2458), 1,
      anon_sym_SEMI,
    STATE(675), 1,
      sym_comment,
  [18495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2460), 1,
      anon_sym_SEMI,
    STATE(676), 1,
      sym_comment,
  [18508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2462), 1,
      sym_identifier,
    STATE(677), 1,
      sym_comment,
  [18521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2464), 1,
      sym_identifier,
    STATE(678), 1,
      sym_comment,
  [18534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2466), 1,
      anon_sym_COLON,
    STATE(679), 1,
      sym_comment,
  [18547] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2468), 1,
      anon_sym_LBRACE,
    STATE(680), 1,
      sym_comment,
  [18560] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2470), 1,
      anon_sym_RBRACE,
    STATE(681), 1,
      sym_comment,
  [18573] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2472), 1,
      anon_sym_LBRACE,
    STATE(682), 1,
      sym_comment,
  [18586] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2474), 1,
      anon_sym_SEMI,
    STATE(683), 1,
      sym_comment,
  [18599] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2476), 1,
      anon_sym_GT,
    STATE(684), 1,
      sym_comment,
  [18612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2478), 1,
      anon_sym_SEMI,
    STATE(685), 1,
      sym_comment,
  [18625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2480), 1,
      anon_sym_enum,
    STATE(686), 1,
      sym_comment,
  [18638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2482), 1,
      sym_identifier,
    STATE(687), 1,
      sym_comment,
  [18651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2484), 1,
      anon_sym_SEMI,
    STATE(688), 1,
      sym_comment,
  [18664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2486), 1,
      anon_sym_SEMI,
    STATE(689), 1,
      sym_comment,
  [18677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2488), 1,
      anon_sym_SEMI,
    STATE(690), 1,
      sym_comment,
  [18690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2490), 1,
      anon_sym_LBRACE,
    STATE(691), 1,
      sym_comment,
  [18703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2492), 1,
      anon_sym_SEMI,
    STATE(692), 1,
      sym_comment,
  [18716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2494), 1,
      sym_identifier,
    STATE(693), 1,
      sym_comment,
  [18729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2496), 1,
      anon_sym_SEMI,
    STATE(694), 1,
      sym_comment,
  [18742] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2498), 1,
      anon_sym_LBRACE,
    STATE(695), 1,
      sym_comment,
  [18755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2500), 1,
      anon_sym_SEMI,
    STATE(696), 1,
      sym_comment,
  [18768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2502), 1,
      anon_sym_LBRACE,
    STATE(697), 1,
      sym_comment,
  [18781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2504), 1,
      anon_sym_LBRACE,
    STATE(698), 1,
      sym_comment,
  [18794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2506), 1,
      anon_sym_LBRACE,
    STATE(699), 1,
      sym_comment,
  [18807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2508), 1,
      anon_sym_SEMI,
    STATE(700), 1,
      sym_comment,
  [18820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2510), 1,
      anon_sym_LT,
    STATE(701), 1,
      sym_comment,
  [18833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2512), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      sym_comment,
  [18846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2514), 1,
      anon_sym_SEMI,
    STATE(703), 1,
      sym_comment,
  [18859] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2516), 1,
      anon_sym_SEMI,
    STATE(704), 1,
      sym_comment,
  [18872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1751), 1,
      anon_sym_LBRACE,
    STATE(705), 1,
      sym_comment,
  [18885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2518), 1,
      sym_identifier,
    STATE(706), 1,
      sym_comment,
  [18898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2520), 1,
      anon_sym_SEMI,
    STATE(707), 1,
      sym_comment,
  [18911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2152), 1,
      sym_identifier,
    STATE(708), 1,
      sym_comment,
  [18924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2522), 1,
      anon_sym_SEMI,
    STATE(709), 1,
      sym_comment,
  [18937] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2524), 1,
      anon_sym_SEMI,
    STATE(710), 1,
      sym_comment,
  [18950] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2526), 1,
      anon_sym_SEMI,
    STATE(711), 1,
      sym_comment,
  [18963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      sym_comment,
  [18976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2528), 1,
      sym_identifier,
    STATE(713), 1,
      sym_comment,
  [18989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2530), 1,
      anon_sym_COLON,
    STATE(714), 1,
      sym_comment,
  [19002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2532), 1,
      anon_sym_SEMI,
    STATE(715), 1,
      sym_comment,
  [19015] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2534), 1,
      anon_sym_SEMI,
    STATE(716), 1,
      sym_comment,
  [19028] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2536), 1,
      anon_sym_SEMI,
    STATE(717), 1,
      sym_comment,
  [19041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2538), 1,
      anon_sym_LBRACE,
    STATE(718), 1,
      sym_comment,
  [19054] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2540), 1,
      anon_sym_SEMI,
    STATE(719), 1,
      sym_comment,
  [19067] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2542), 1,
      sym_identifier,
    STATE(720), 1,
      sym_comment,
  [19080] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2544), 1,
      anon_sym_SEMI,
    STATE(721), 1,
      sym_comment,
  [19093] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2546), 1,
      anon_sym_RBRACE,
    STATE(722), 1,
      sym_comment,
  [19106] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2548), 1,
      anon_sym_COMMA,
    STATE(723), 1,
      sym_comment,
  [19119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2550), 1,
      anon_sym_COMMA,
    STATE(724), 1,
      sym_comment,
  [19132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2552), 1,
      anon_sym_LBRACE,
    STATE(725), 1,
      sym_comment,
  [19145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2554), 1,
      anon_sym_SEMI,
    STATE(726), 1,
      sym_comment,
  [19158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2556), 1,
      anon_sym_SEMI,
    STATE(727), 1,
      sym_comment,
  [19171] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2558), 1,
      anon_sym_GT,
    STATE(728), 1,
      sym_comment,
  [19184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2560), 1,
      ts_builtin_sym_end,
    STATE(729), 1,
      sym_comment,
  [19197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2562), 1,
      anon_sym_SEMI,
    STATE(730), 1,
      sym_comment,
  [19210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2564), 1,
      anon_sym_GT,
    STATE(731), 1,
      sym_comment,
  [19223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2566), 1,
      anon_sym_SEMI,
    STATE(732), 1,
      sym_comment,
  [19236] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2200), 1,
      sym_identifier,
    STATE(733), 1,
      sym_comment,
  [19249] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2568), 1,
      anon_sym_SEMI,
    STATE(734), 1,
      sym_comment,
  [19262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2570), 1,
      sym_identifier,
    STATE(735), 1,
      sym_comment,
  [19275] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2572), 1,
      anon_sym_LPAREN,
    STATE(736), 1,
      sym_comment,
  [19288] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2574), 1,
      sym_identifier,
    STATE(737), 1,
      sym_comment,
  [19301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2576), 1,
      anon_sym_LPAREN,
    STATE(738), 1,
      sym_comment,
  [19314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2578), 1,
      anon_sym_SEMI,
    STATE(739), 1,
      sym_comment,
  [19327] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2580), 1,
      anon_sym_GT,
    STATE(740), 1,
      sym_comment,
  [19340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2582), 1,
      anon_sym_SEMI,
    STATE(741), 1,
      sym_comment,
  [19353] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2584), 1,
      sym_identifier,
    STATE(742), 1,
      sym_comment,
  [19366] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2586), 1,
      aux_sym_predefine_token1,
    STATE(743), 1,
      sym_comment,
  [19379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2588), 1,
      sym_identifier,
    STATE(744), 1,
      sym_comment,
  [19392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2590), 1,
      sym_identifier,
    STATE(745), 1,
      sym_comment,
  [19405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2592), 1,
      sym_identifier,
    STATE(746), 1,
      sym_comment,
  [19418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2594), 1,
      sym_identifier,
    STATE(747), 1,
      sym_comment,
  [19431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2596), 1,
      sym_identifier,
    STATE(748), 1,
      sym_comment,
  [19444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2220), 1,
      sym_identifier,
    STATE(749), 1,
      sym_comment,
  [19457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2598), 1,
      anon_sym_SEMI,
    STATE(750), 1,
      sym_comment,
  [19470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2600), 1,
      anon_sym_enum,
    STATE(751), 1,
      sym_comment,
  [19483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2602), 1,
      anon_sym_LPAREN,
    STATE(752), 1,
      sym_comment,
  [19496] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2604), 1,
      anon_sym_LPAREN,
    STATE(753), 1,
      sym_comment,
  [19509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2606), 1,
      sym_identifier,
    STATE(754), 1,
      sym_comment,
  [19522] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2608), 1,
      sym_identifier,
    STATE(755), 1,
      sym_comment,
  [19535] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2610), 1,
      sym_identifier,
    STATE(756), 1,
      sym_comment,
  [19548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2612), 1,
      sym_identifier,
    STATE(757), 1,
      sym_comment,
  [19561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2614), 1,
      sym_identifier,
    STATE(758), 1,
      sym_comment,
  [19574] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2616), 1,
      anon_sym_SEMI,
    STATE(759), 1,
      sym_comment,
  [19587] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2618), 1,
      anon_sym_LPAREN,
    STATE(760), 1,
      sym_comment,
  [19600] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2620), 1,
      anon_sym_SEMI,
    STATE(761), 1,
      sym_comment,
  [19613] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2622), 1,
      sym_identifier,
    STATE(762), 1,
      sym_comment,
  [19626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2624), 1,
      sym_identifier,
    STATE(763), 1,
      sym_comment,
  [19639] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2626), 1,
      sym_identifier,
    STATE(764), 1,
      sym_comment,
  [19652] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2628), 1,
      sym_identifier,
    STATE(765), 1,
      sym_comment,
  [19665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2630), 1,
      sym_identifier,
    STATE(766), 1,
      sym_comment,
  [19678] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2632), 1,
      anon_sym_SEMI,
    STATE(767), 1,
      sym_comment,
  [19691] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2634), 1,
      anon_sym_RBRACE,
    STATE(768), 1,
      sym_comment,
  [19704] = 4,
    ACTIONS(1651), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2636), 1,
      aux_sym_predefine_token1,
    STATE(769), 1,
      sym_comment,
  [19717] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2638), 1,
      anon_sym_SEMI,
    STATE(770), 1,
      sym_comment,
  [19730] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2640), 1,
      sym_identifier,
    STATE(771), 1,
      sym_comment,
  [19743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2642), 1,
      sym_identifier,
    STATE(772), 1,
      sym_comment,
  [19756] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1862), 1,
      anon_sym_SEMI,
    STATE(773), 1,
      sym_comment,
  [19769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2644), 1,
      anon_sym_SEMI,
    STATE(774), 1,
      sym_comment,
  [19782] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2646), 1,
      anon_sym_RPAREN,
    STATE(775), 1,
      sym_comment,
  [19795] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2648), 1,
      anon_sym_manages,
    STATE(776), 1,
      sym_comment,
  [19808] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2650), 1,
      sym_identifier,
    STATE(777), 1,
      sym_comment,
  [19821] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2652), 1,
      sym_identifier,
    STATE(778), 1,
      sym_comment,
  [19834] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1852), 1,
      anon_sym_SEMI,
    STATE(779), 1,
      sym_comment,
  [19847] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2654), 1,
      sym_identifier,
    STATE(780), 1,
      sym_comment,
  [19860] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2656), 1,
      anon_sym_RPAREN,
    STATE(781), 1,
      sym_comment,
  [19873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2658), 1,
      anon_sym_LBRACE,
    STATE(782), 1,
      sym_comment,
  [19886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2660), 1,
      sym_identifier,
    STATE(783), 1,
      sym_comment,
  [19899] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(2662), 1,
      anon_sym_RPAREN,
    STATE(784), 1,
      sym_comment,
  [19912] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1757), 1,
      anon_sym_LBRACE,
    STATE(785), 1,
      sym_comment,
  [19925] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1870), 1,
      anon_sym_interface,
    STATE(786), 1,
      sym_comment,
  [19938] = 1,
    ACTIONS(2664), 1,
      ts_builtin_sym_end,
  [19942] = 1,
    ACTIONS(2666), 1,
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
  [SMALL_STATE(42)] = 1160,
  [SMALL_STATE(43)] = 1303,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1593,
  [SMALL_STATE(46)] = 1735,
  [SMALL_STATE(47)] = 1879,
  [SMALL_STATE(48)] = 2023,
  [SMALL_STATE(49)] = 2165,
  [SMALL_STATE(50)] = 2301,
  [SMALL_STATE(51)] = 2431,
  [SMALL_STATE(52)] = 2500,
  [SMALL_STATE(53)] = 2569,
  [SMALL_STATE(54)] = 2638,
  [SMALL_STATE(55)] = 2707,
  [SMALL_STATE(56)] = 2834,
  [SMALL_STATE(57)] = 2903,
  [SMALL_STATE(58)] = 2972,
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
  [SMALL_STATE(81)] = 5140,
  [SMALL_STATE(82)] = 5187,
  [SMALL_STATE(83)] = 5234,
  [SMALL_STATE(84)] = 5281,
  [SMALL_STATE(85)] = 5328,
  [SMALL_STATE(86)] = 5375,
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
  [SMALL_STATE(97)] = 5890,
  [SMALL_STATE(98)] = 5935,
  [SMALL_STATE(99)] = 5980,
  [SMALL_STATE(100)] = 6025,
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
  [SMALL_STATE(116)] = 6882,
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
  [SMALL_STATE(130)] = 7991,
  [SMALL_STATE(131)] = 8071,
  [SMALL_STATE(132)] = 8151,
  [SMALL_STATE(133)] = 8219,
  [SMALL_STATE(134)] = 8293,
  [SMALL_STATE(135)] = 8364,
  [SMALL_STATE(136)] = 8432,
  [SMALL_STATE(137)] = 8492,
  [SMALL_STATE(138)] = 8557,
  [SMALL_STATE(139)] = 8614,
  [SMALL_STATE(140)] = 8669,
  [SMALL_STATE(141)] = 8731,
  [SMALL_STATE(142)] = 8790,
  [SMALL_STATE(143)] = 8823,
  [SMALL_STATE(144)] = 8856,
  [SMALL_STATE(145)] = 8886,
  [SMALL_STATE(146)] = 8916,
  [SMALL_STATE(147)] = 8946,
  [SMALL_STATE(148)] = 8976,
  [SMALL_STATE(149)] = 9024,
  [SMALL_STATE(150)] = 9074,
  [SMALL_STATE(151)] = 9104,
  [SMALL_STATE(152)] = 9134,
  [SMALL_STATE(153)] = 9164,
  [SMALL_STATE(154)] = 9198,
  [SMALL_STATE(155)] = 9228,
  [SMALL_STATE(156)] = 9258,
  [SMALL_STATE(157)] = 9306,
  [SMALL_STATE(158)] = 9336,
  [SMALL_STATE(159)] = 9366,
  [SMALL_STATE(160)] = 9396,
  [SMALL_STATE(161)] = 9446,
  [SMALL_STATE(162)] = 9480,
  [SMALL_STATE(163)] = 9530,
  [SMALL_STATE(164)] = 9560,
  [SMALL_STATE(165)] = 9607,
  [SMALL_STATE(166)] = 9653,
  [SMALL_STATE(167)] = 9682,
  [SMALL_STATE(168)] = 9711,
  [SMALL_STATE(169)] = 9740,
  [SMALL_STATE(170)] = 9773,
  [SMALL_STATE(171)] = 9800,
  [SMALL_STATE(172)] = 9827,
  [SMALL_STATE(173)] = 9865,
  [SMALL_STATE(174)] = 9887,
  [SMALL_STATE(175)] = 9921,
  [SMALL_STATE(176)] = 9943,
  [SMALL_STATE(177)] = 9966,
  [SMALL_STATE(178)] = 9989,
  [SMALL_STATE(179)] = 10012,
  [SMALL_STATE(180)] = 10034,
  [SMALL_STATE(181)] = 10058,
  [SMALL_STATE(182)] = 10080,
  [SMALL_STATE(183)] = 10104,
  [SMALL_STATE(184)] = 10138,
  [SMALL_STATE(185)] = 10157,
  [SMALL_STATE(186)] = 10176,
  [SMALL_STATE(187)] = 10195,
  [SMALL_STATE(188)] = 10214,
  [SMALL_STATE(189)] = 10233,
  [SMALL_STATE(190)] = 10252,
  [SMALL_STATE(191)] = 10271,
  [SMALL_STATE(192)] = 10302,
  [SMALL_STATE(193)] = 10331,
  [SMALL_STATE(194)] = 10350,
  [SMALL_STATE(195)] = 10371,
  [SMALL_STATE(196)] = 10395,
  [SMALL_STATE(197)] = 10421,
  [SMALL_STATE(198)] = 10439,
  [SMALL_STATE(199)] = 10457,
  [SMALL_STATE(200)] = 10481,
  [SMALL_STATE(201)] = 10499,
  [SMALL_STATE(202)] = 10527,
  [SMALL_STATE(203)] = 10555,
  [SMALL_STATE(204)] = 10583,
  [SMALL_STATE(205)] = 10605,
  [SMALL_STATE(206)] = 10633,
  [SMALL_STATE(207)] = 10651,
  [SMALL_STATE(208)] = 10679,
  [SMALL_STATE(209)] = 10707,
  [SMALL_STATE(210)] = 10725,
  [SMALL_STATE(211)] = 10753,
  [SMALL_STATE(212)] = 10781,
  [SMALL_STATE(213)] = 10806,
  [SMALL_STATE(214)] = 10831,
  [SMALL_STATE(215)] = 10856,
  [SMALL_STATE(216)] = 10881,
  [SMALL_STATE(217)] = 10906,
  [SMALL_STATE(218)] = 10923,
  [SMALL_STATE(219)] = 10948,
  [SMALL_STATE(220)] = 10965,
  [SMALL_STATE(221)] = 10982,
  [SMALL_STATE(222)] = 11005,
  [SMALL_STATE(223)] = 11022,
  [SMALL_STATE(224)] = 11047,
  [SMALL_STATE(225)] = 11072,
  [SMALL_STATE(226)] = 11089,
  [SMALL_STATE(227)] = 11106,
  [SMALL_STATE(228)] = 11125,
  [SMALL_STATE(229)] = 11142,
  [SMALL_STATE(230)] = 11161,
  [SMALL_STATE(231)] = 11186,
  [SMALL_STATE(232)] = 11211,
  [SMALL_STATE(233)] = 11236,
  [SMALL_STATE(234)] = 11259,
  [SMALL_STATE(235)] = 11276,
  [SMALL_STATE(236)] = 11299,
  [SMALL_STATE(237)] = 11324,
  [SMALL_STATE(238)] = 11347,
  [SMALL_STATE(239)] = 11372,
  [SMALL_STATE(240)] = 11389,
  [SMALL_STATE(241)] = 11412,
  [SMALL_STATE(242)] = 11431,
  [SMALL_STATE(243)] = 11448,
  [SMALL_STATE(244)] = 11471,
  [SMALL_STATE(245)] = 11496,
  [SMALL_STATE(246)] = 11521,
  [SMALL_STATE(247)] = 11546,
  [SMALL_STATE(248)] = 11569,
  [SMALL_STATE(249)] = 11594,
  [SMALL_STATE(250)] = 11612,
  [SMALL_STATE(251)] = 11634,
  [SMALL_STATE(252)] = 11654,
  [SMALL_STATE(253)] = 11674,
  [SMALL_STATE(254)] = 11690,
  [SMALL_STATE(255)] = 11706,
  [SMALL_STATE(256)] = 11724,
  [SMALL_STATE(257)] = 11740,
  [SMALL_STATE(258)] = 11756,
  [SMALL_STATE(259)] = 11778,
  [SMALL_STATE(260)] = 11800,
  [SMALL_STATE(261)] = 11818,
  [SMALL_STATE(262)] = 11838,
  [SMALL_STATE(263)] = 11860,
  [SMALL_STATE(264)] = 11876,
  [SMALL_STATE(265)] = 11898,
  [SMALL_STATE(266)] = 11920,
  [SMALL_STATE(267)] = 11942,
  [SMALL_STATE(268)] = 11958,
  [SMALL_STATE(269)] = 11980,
  [SMALL_STATE(270)] = 11998,
  [SMALL_STATE(271)] = 12020,
  [SMALL_STATE(272)] = 12042,
  [SMALL_STATE(273)] = 12064,
  [SMALL_STATE(274)] = 12086,
  [SMALL_STATE(275)] = 12106,
  [SMALL_STATE(276)] = 12128,
  [SMALL_STATE(277)] = 12148,
  [SMALL_STATE(278)] = 12170,
  [SMALL_STATE(279)] = 12190,
  [SMALL_STATE(280)] = 12206,
  [SMALL_STATE(281)] = 12222,
  [SMALL_STATE(282)] = 12244,
  [SMALL_STATE(283)] = 12266,
  [SMALL_STATE(284)] = 12282,
  [SMALL_STATE(285)] = 12298,
  [SMALL_STATE(286)] = 12318,
  [SMALL_STATE(287)] = 12334,
  [SMALL_STATE(288)] = 12356,
  [SMALL_STATE(289)] = 12378,
  [SMALL_STATE(290)] = 12400,
  [SMALL_STATE(291)] = 12422,
  [SMALL_STATE(292)] = 12440,
  [SMALL_STATE(293)] = 12462,
  [SMALL_STATE(294)] = 12482,
  [SMALL_STATE(295)] = 12502,
  [SMALL_STATE(296)] = 12524,
  [SMALL_STATE(297)] = 12540,
  [SMALL_STATE(298)] = 12562,
  [SMALL_STATE(299)] = 12578,
  [SMALL_STATE(300)] = 12600,
  [SMALL_STATE(301)] = 12616,
  [SMALL_STATE(302)] = 12632,
  [SMALL_STATE(303)] = 12652,
  [SMALL_STATE(304)] = 12674,
  [SMALL_STATE(305)] = 12696,
  [SMALL_STATE(306)] = 12716,
  [SMALL_STATE(307)] = 12732,
  [SMALL_STATE(308)] = 12754,
  [SMALL_STATE(309)] = 12774,
  [SMALL_STATE(310)] = 12796,
  [SMALL_STATE(311)] = 12816,
  [SMALL_STATE(312)] = 12838,
  [SMALL_STATE(313)] = 12860,
  [SMALL_STATE(314)] = 12882,
  [SMALL_STATE(315)] = 12904,
  [SMALL_STATE(316)] = 12924,
  [SMALL_STATE(317)] = 12940,
  [SMALL_STATE(318)] = 12956,
  [SMALL_STATE(319)] = 12972,
  [SMALL_STATE(320)] = 12992,
  [SMALL_STATE(321)] = 13012,
  [SMALL_STATE(322)] = 13034,
  [SMALL_STATE(323)] = 13054,
  [SMALL_STATE(324)] = 13076,
  [SMALL_STATE(325)] = 13095,
  [SMALL_STATE(326)] = 13114,
  [SMALL_STATE(327)] = 13133,
  [SMALL_STATE(328)] = 13150,
  [SMALL_STATE(329)] = 13167,
  [SMALL_STATE(330)] = 13186,
  [SMALL_STATE(331)] = 13205,
  [SMALL_STATE(332)] = 13222,
  [SMALL_STATE(333)] = 13241,
  [SMALL_STATE(334)] = 13258,
  [SMALL_STATE(335)] = 13277,
  [SMALL_STATE(336)] = 13296,
  [SMALL_STATE(337)] = 13313,
  [SMALL_STATE(338)] = 13332,
  [SMALL_STATE(339)] = 13351,
  [SMALL_STATE(340)] = 13370,
  [SMALL_STATE(341)] = 13389,
  [SMALL_STATE(342)] = 13408,
  [SMALL_STATE(343)] = 13423,
  [SMALL_STATE(344)] = 13442,
  [SMALL_STATE(345)] = 13461,
  [SMALL_STATE(346)] = 13480,
  [SMALL_STATE(347)] = 13499,
  [SMALL_STATE(348)] = 13516,
  [SMALL_STATE(349)] = 13533,
  [SMALL_STATE(350)] = 13552,
  [SMALL_STATE(351)] = 13571,
  [SMALL_STATE(352)] = 13588,
  [SMALL_STATE(353)] = 13605,
  [SMALL_STATE(354)] = 13624,
  [SMALL_STATE(355)] = 13643,
  [SMALL_STATE(356)] = 13662,
  [SMALL_STATE(357)] = 13681,
  [SMALL_STATE(358)] = 13700,
  [SMALL_STATE(359)] = 13719,
  [SMALL_STATE(360)] = 13738,
  [SMALL_STATE(361)] = 13757,
  [SMALL_STATE(362)] = 13776,
  [SMALL_STATE(363)] = 13795,
  [SMALL_STATE(364)] = 13812,
  [SMALL_STATE(365)] = 13831,
  [SMALL_STATE(366)] = 13848,
  [SMALL_STATE(367)] = 13867,
  [SMALL_STATE(368)] = 13886,
  [SMALL_STATE(369)] = 13905,
  [SMALL_STATE(370)] = 13924,
  [SMALL_STATE(371)] = 13939,
  [SMALL_STATE(372)] = 13958,
  [SMALL_STATE(373)] = 13975,
  [SMALL_STATE(374)] = 13994,
  [SMALL_STATE(375)] = 14013,
  [SMALL_STATE(376)] = 14032,
  [SMALL_STATE(377)] = 14047,
  [SMALL_STATE(378)] = 14066,
  [SMALL_STATE(379)] = 14083,
  [SMALL_STATE(380)] = 14100,
  [SMALL_STATE(381)] = 14119,
  [SMALL_STATE(382)] = 14138,
  [SMALL_STATE(383)] = 14157,
  [SMALL_STATE(384)] = 14176,
  [SMALL_STATE(385)] = 14195,
  [SMALL_STATE(386)] = 14210,
  [SMALL_STATE(387)] = 14229,
  [SMALL_STATE(388)] = 14248,
  [SMALL_STATE(389)] = 14267,
  [SMALL_STATE(390)] = 14286,
  [SMALL_STATE(391)] = 14303,
  [SMALL_STATE(392)] = 14322,
  [SMALL_STATE(393)] = 14341,
  [SMALL_STATE(394)] = 14360,
  [SMALL_STATE(395)] = 14375,
  [SMALL_STATE(396)] = 14392,
  [SMALL_STATE(397)] = 14411,
  [SMALL_STATE(398)] = 14430,
  [SMALL_STATE(399)] = 14449,
  [SMALL_STATE(400)] = 14468,
  [SMALL_STATE(401)] = 14487,
  [SMALL_STATE(402)] = 14506,
  [SMALL_STATE(403)] = 14525,
  [SMALL_STATE(404)] = 14544,
  [SMALL_STATE(405)] = 14563,
  [SMALL_STATE(406)] = 14582,
  [SMALL_STATE(407)] = 14601,
  [SMALL_STATE(408)] = 14620,
  [SMALL_STATE(409)] = 14637,
  [SMALL_STATE(410)] = 14656,
  [SMALL_STATE(411)] = 14673,
  [SMALL_STATE(412)] = 14692,
  [SMALL_STATE(413)] = 14711,
  [SMALL_STATE(414)] = 14728,
  [SMALL_STATE(415)] = 14743,
  [SMALL_STATE(416)] = 14762,
  [SMALL_STATE(417)] = 14781,
  [SMALL_STATE(418)] = 14800,
  [SMALL_STATE(419)] = 14819,
  [SMALL_STATE(420)] = 14838,
  [SMALL_STATE(421)] = 14857,
  [SMALL_STATE(422)] = 14874,
  [SMALL_STATE(423)] = 14893,
  [SMALL_STATE(424)] = 14912,
  [SMALL_STATE(425)] = 14931,
  [SMALL_STATE(426)] = 14950,
  [SMALL_STATE(427)] = 14967,
  [SMALL_STATE(428)] = 14984,
  [SMALL_STATE(429)] = 15003,
  [SMALL_STATE(430)] = 15022,
  [SMALL_STATE(431)] = 15041,
  [SMALL_STATE(432)] = 15060,
  [SMALL_STATE(433)] = 15079,
  [SMALL_STATE(434)] = 15098,
  [SMALL_STATE(435)] = 15117,
  [SMALL_STATE(436)] = 15136,
  [SMALL_STATE(437)] = 15155,
  [SMALL_STATE(438)] = 15170,
  [SMALL_STATE(439)] = 15189,
  [SMALL_STATE(440)] = 15208,
  [SMALL_STATE(441)] = 15227,
  [SMALL_STATE(442)] = 15246,
  [SMALL_STATE(443)] = 15265,
  [SMALL_STATE(444)] = 15284,
  [SMALL_STATE(445)] = 15303,
  [SMALL_STATE(446)] = 15317,
  [SMALL_STATE(447)] = 15333,
  [SMALL_STATE(448)] = 15347,
  [SMALL_STATE(449)] = 15363,
  [SMALL_STATE(450)] = 15377,
  [SMALL_STATE(451)] = 15393,
  [SMALL_STATE(452)] = 15407,
  [SMALL_STATE(453)] = 15421,
  [SMALL_STATE(454)] = 15437,
  [SMALL_STATE(455)] = 15453,
  [SMALL_STATE(456)] = 15467,
  [SMALL_STATE(457)] = 15481,
  [SMALL_STATE(458)] = 15497,
  [SMALL_STATE(459)] = 15513,
  [SMALL_STATE(460)] = 15527,
  [SMALL_STATE(461)] = 15541,
  [SMALL_STATE(462)] = 15555,
  [SMALL_STATE(463)] = 15571,
  [SMALL_STATE(464)] = 15587,
  [SMALL_STATE(465)] = 15601,
  [SMALL_STATE(466)] = 15617,
  [SMALL_STATE(467)] = 15631,
  [SMALL_STATE(468)] = 15647,
  [SMALL_STATE(469)] = 15663,
  [SMALL_STATE(470)] = 15677,
  [SMALL_STATE(471)] = 15691,
  [SMALL_STATE(472)] = 15705,
  [SMALL_STATE(473)] = 15719,
  [SMALL_STATE(474)] = 15733,
  [SMALL_STATE(475)] = 15749,
  [SMALL_STATE(476)] = 15763,
  [SMALL_STATE(477)] = 15777,
  [SMALL_STATE(478)] = 15791,
  [SMALL_STATE(479)] = 15805,
  [SMALL_STATE(480)] = 15821,
  [SMALL_STATE(481)] = 15835,
  [SMALL_STATE(482)] = 15849,
  [SMALL_STATE(483)] = 15863,
  [SMALL_STATE(484)] = 15877,
  [SMALL_STATE(485)] = 15893,
  [SMALL_STATE(486)] = 15907,
  [SMALL_STATE(487)] = 15921,
  [SMALL_STATE(488)] = 15935,
  [SMALL_STATE(489)] = 15949,
  [SMALL_STATE(490)] = 15963,
  [SMALL_STATE(491)] = 15979,
  [SMALL_STATE(492)] = 15995,
  [SMALL_STATE(493)] = 16011,
  [SMALL_STATE(494)] = 16025,
  [SMALL_STATE(495)] = 16039,
  [SMALL_STATE(496)] = 16053,
  [SMALL_STATE(497)] = 16067,
  [SMALL_STATE(498)] = 16083,
  [SMALL_STATE(499)] = 16099,
  [SMALL_STATE(500)] = 16113,
  [SMALL_STATE(501)] = 16127,
  [SMALL_STATE(502)] = 16141,
  [SMALL_STATE(503)] = 16157,
  [SMALL_STATE(504)] = 16171,
  [SMALL_STATE(505)] = 16187,
  [SMALL_STATE(506)] = 16201,
  [SMALL_STATE(507)] = 16215,
  [SMALL_STATE(508)] = 16229,
  [SMALL_STATE(509)] = 16243,
  [SMALL_STATE(510)] = 16259,
  [SMALL_STATE(511)] = 16273,
  [SMALL_STATE(512)] = 16287,
  [SMALL_STATE(513)] = 16301,
  [SMALL_STATE(514)] = 16315,
  [SMALL_STATE(515)] = 16329,
  [SMALL_STATE(516)] = 16345,
  [SMALL_STATE(517)] = 16359,
  [SMALL_STATE(518)] = 16373,
  [SMALL_STATE(519)] = 16387,
  [SMALL_STATE(520)] = 16401,
  [SMALL_STATE(521)] = 16417,
  [SMALL_STATE(522)] = 16433,
  [SMALL_STATE(523)] = 16449,
  [SMALL_STATE(524)] = 16465,
  [SMALL_STATE(525)] = 16479,
  [SMALL_STATE(526)] = 16493,
  [SMALL_STATE(527)] = 16507,
  [SMALL_STATE(528)] = 16523,
  [SMALL_STATE(529)] = 16539,
  [SMALL_STATE(530)] = 16555,
  [SMALL_STATE(531)] = 16569,
  [SMALL_STATE(532)] = 16583,
  [SMALL_STATE(533)] = 16597,
  [SMALL_STATE(534)] = 16613,
  [SMALL_STATE(535)] = 16627,
  [SMALL_STATE(536)] = 16641,
  [SMALL_STATE(537)] = 16657,
  [SMALL_STATE(538)] = 16671,
  [SMALL_STATE(539)] = 16687,
  [SMALL_STATE(540)] = 16703,
  [SMALL_STATE(541)] = 16717,
  [SMALL_STATE(542)] = 16731,
  [SMALL_STATE(543)] = 16745,
  [SMALL_STATE(544)] = 16761,
  [SMALL_STATE(545)] = 16777,
  [SMALL_STATE(546)] = 16791,
  [SMALL_STATE(547)] = 16805,
  [SMALL_STATE(548)] = 16819,
  [SMALL_STATE(549)] = 16835,
  [SMALL_STATE(550)] = 16849,
  [SMALL_STATE(551)] = 16863,
  [SMALL_STATE(552)] = 16877,
  [SMALL_STATE(553)] = 16893,
  [SMALL_STATE(554)] = 16909,
  [SMALL_STATE(555)] = 16922,
  [SMALL_STATE(556)] = 16935,
  [SMALL_STATE(557)] = 16948,
  [SMALL_STATE(558)] = 16961,
  [SMALL_STATE(559)] = 16974,
  [SMALL_STATE(560)] = 16987,
  [SMALL_STATE(561)] = 17000,
  [SMALL_STATE(562)] = 17013,
  [SMALL_STATE(563)] = 17026,
  [SMALL_STATE(564)] = 17039,
  [SMALL_STATE(565)] = 17052,
  [SMALL_STATE(566)] = 17065,
  [SMALL_STATE(567)] = 17078,
  [SMALL_STATE(568)] = 17091,
  [SMALL_STATE(569)] = 17104,
  [SMALL_STATE(570)] = 17117,
  [SMALL_STATE(571)] = 17130,
  [SMALL_STATE(572)] = 17143,
  [SMALL_STATE(573)] = 17156,
  [SMALL_STATE(574)] = 17169,
  [SMALL_STATE(575)] = 17182,
  [SMALL_STATE(576)] = 17195,
  [SMALL_STATE(577)] = 17208,
  [SMALL_STATE(578)] = 17221,
  [SMALL_STATE(579)] = 17234,
  [SMALL_STATE(580)] = 17247,
  [SMALL_STATE(581)] = 17260,
  [SMALL_STATE(582)] = 17273,
  [SMALL_STATE(583)] = 17286,
  [SMALL_STATE(584)] = 17299,
  [SMALL_STATE(585)] = 17312,
  [SMALL_STATE(586)] = 17325,
  [SMALL_STATE(587)] = 17338,
  [SMALL_STATE(588)] = 17351,
  [SMALL_STATE(589)] = 17364,
  [SMALL_STATE(590)] = 17377,
  [SMALL_STATE(591)] = 17390,
  [SMALL_STATE(592)] = 17403,
  [SMALL_STATE(593)] = 17416,
  [SMALL_STATE(594)] = 17429,
  [SMALL_STATE(595)] = 17442,
  [SMALL_STATE(596)] = 17455,
  [SMALL_STATE(597)] = 17468,
  [SMALL_STATE(598)] = 17481,
  [SMALL_STATE(599)] = 17494,
  [SMALL_STATE(600)] = 17507,
  [SMALL_STATE(601)] = 17520,
  [SMALL_STATE(602)] = 17533,
  [SMALL_STATE(603)] = 17546,
  [SMALL_STATE(604)] = 17559,
  [SMALL_STATE(605)] = 17572,
  [SMALL_STATE(606)] = 17585,
  [SMALL_STATE(607)] = 17598,
  [SMALL_STATE(608)] = 17611,
  [SMALL_STATE(609)] = 17624,
  [SMALL_STATE(610)] = 17637,
  [SMALL_STATE(611)] = 17650,
  [SMALL_STATE(612)] = 17663,
  [SMALL_STATE(613)] = 17676,
  [SMALL_STATE(614)] = 17689,
  [SMALL_STATE(615)] = 17702,
  [SMALL_STATE(616)] = 17715,
  [SMALL_STATE(617)] = 17728,
  [SMALL_STATE(618)] = 17741,
  [SMALL_STATE(619)] = 17754,
  [SMALL_STATE(620)] = 17767,
  [SMALL_STATE(621)] = 17780,
  [SMALL_STATE(622)] = 17793,
  [SMALL_STATE(623)] = 17806,
  [SMALL_STATE(624)] = 17819,
  [SMALL_STATE(625)] = 17832,
  [SMALL_STATE(626)] = 17845,
  [SMALL_STATE(627)] = 17858,
  [SMALL_STATE(628)] = 17871,
  [SMALL_STATE(629)] = 17884,
  [SMALL_STATE(630)] = 17897,
  [SMALL_STATE(631)] = 17910,
  [SMALL_STATE(632)] = 17923,
  [SMALL_STATE(633)] = 17936,
  [SMALL_STATE(634)] = 17949,
  [SMALL_STATE(635)] = 17962,
  [SMALL_STATE(636)] = 17975,
  [SMALL_STATE(637)] = 17988,
  [SMALL_STATE(638)] = 18001,
  [SMALL_STATE(639)] = 18014,
  [SMALL_STATE(640)] = 18027,
  [SMALL_STATE(641)] = 18040,
  [SMALL_STATE(642)] = 18053,
  [SMALL_STATE(643)] = 18066,
  [SMALL_STATE(644)] = 18079,
  [SMALL_STATE(645)] = 18092,
  [SMALL_STATE(646)] = 18105,
  [SMALL_STATE(647)] = 18118,
  [SMALL_STATE(648)] = 18131,
  [SMALL_STATE(649)] = 18144,
  [SMALL_STATE(650)] = 18157,
  [SMALL_STATE(651)] = 18170,
  [SMALL_STATE(652)] = 18183,
  [SMALL_STATE(653)] = 18196,
  [SMALL_STATE(654)] = 18209,
  [SMALL_STATE(655)] = 18222,
  [SMALL_STATE(656)] = 18235,
  [SMALL_STATE(657)] = 18248,
  [SMALL_STATE(658)] = 18261,
  [SMALL_STATE(659)] = 18274,
  [SMALL_STATE(660)] = 18287,
  [SMALL_STATE(661)] = 18300,
  [SMALL_STATE(662)] = 18313,
  [SMALL_STATE(663)] = 18326,
  [SMALL_STATE(664)] = 18339,
  [SMALL_STATE(665)] = 18352,
  [SMALL_STATE(666)] = 18365,
  [SMALL_STATE(667)] = 18378,
  [SMALL_STATE(668)] = 18391,
  [SMALL_STATE(669)] = 18404,
  [SMALL_STATE(670)] = 18417,
  [SMALL_STATE(671)] = 18430,
  [SMALL_STATE(672)] = 18443,
  [SMALL_STATE(673)] = 18456,
  [SMALL_STATE(674)] = 18469,
  [SMALL_STATE(675)] = 18482,
  [SMALL_STATE(676)] = 18495,
  [SMALL_STATE(677)] = 18508,
  [SMALL_STATE(678)] = 18521,
  [SMALL_STATE(679)] = 18534,
  [SMALL_STATE(680)] = 18547,
  [SMALL_STATE(681)] = 18560,
  [SMALL_STATE(682)] = 18573,
  [SMALL_STATE(683)] = 18586,
  [SMALL_STATE(684)] = 18599,
  [SMALL_STATE(685)] = 18612,
  [SMALL_STATE(686)] = 18625,
  [SMALL_STATE(687)] = 18638,
  [SMALL_STATE(688)] = 18651,
  [SMALL_STATE(689)] = 18664,
  [SMALL_STATE(690)] = 18677,
  [SMALL_STATE(691)] = 18690,
  [SMALL_STATE(692)] = 18703,
  [SMALL_STATE(693)] = 18716,
  [SMALL_STATE(694)] = 18729,
  [SMALL_STATE(695)] = 18742,
  [SMALL_STATE(696)] = 18755,
  [SMALL_STATE(697)] = 18768,
  [SMALL_STATE(698)] = 18781,
  [SMALL_STATE(699)] = 18794,
  [SMALL_STATE(700)] = 18807,
  [SMALL_STATE(701)] = 18820,
  [SMALL_STATE(702)] = 18833,
  [SMALL_STATE(703)] = 18846,
  [SMALL_STATE(704)] = 18859,
  [SMALL_STATE(705)] = 18872,
  [SMALL_STATE(706)] = 18885,
  [SMALL_STATE(707)] = 18898,
  [SMALL_STATE(708)] = 18911,
  [SMALL_STATE(709)] = 18924,
  [SMALL_STATE(710)] = 18937,
  [SMALL_STATE(711)] = 18950,
  [SMALL_STATE(712)] = 18963,
  [SMALL_STATE(713)] = 18976,
  [SMALL_STATE(714)] = 18989,
  [SMALL_STATE(715)] = 19002,
  [SMALL_STATE(716)] = 19015,
  [SMALL_STATE(717)] = 19028,
  [SMALL_STATE(718)] = 19041,
  [SMALL_STATE(719)] = 19054,
  [SMALL_STATE(720)] = 19067,
  [SMALL_STATE(721)] = 19080,
  [SMALL_STATE(722)] = 19093,
  [SMALL_STATE(723)] = 19106,
  [SMALL_STATE(724)] = 19119,
  [SMALL_STATE(725)] = 19132,
  [SMALL_STATE(726)] = 19145,
  [SMALL_STATE(727)] = 19158,
  [SMALL_STATE(728)] = 19171,
  [SMALL_STATE(729)] = 19184,
  [SMALL_STATE(730)] = 19197,
  [SMALL_STATE(731)] = 19210,
  [SMALL_STATE(732)] = 19223,
  [SMALL_STATE(733)] = 19236,
  [SMALL_STATE(734)] = 19249,
  [SMALL_STATE(735)] = 19262,
  [SMALL_STATE(736)] = 19275,
  [SMALL_STATE(737)] = 19288,
  [SMALL_STATE(738)] = 19301,
  [SMALL_STATE(739)] = 19314,
  [SMALL_STATE(740)] = 19327,
  [SMALL_STATE(741)] = 19340,
  [SMALL_STATE(742)] = 19353,
  [SMALL_STATE(743)] = 19366,
  [SMALL_STATE(744)] = 19379,
  [SMALL_STATE(745)] = 19392,
  [SMALL_STATE(746)] = 19405,
  [SMALL_STATE(747)] = 19418,
  [SMALL_STATE(748)] = 19431,
  [SMALL_STATE(749)] = 19444,
  [SMALL_STATE(750)] = 19457,
  [SMALL_STATE(751)] = 19470,
  [SMALL_STATE(752)] = 19483,
  [SMALL_STATE(753)] = 19496,
  [SMALL_STATE(754)] = 19509,
  [SMALL_STATE(755)] = 19522,
  [SMALL_STATE(756)] = 19535,
  [SMALL_STATE(757)] = 19548,
  [SMALL_STATE(758)] = 19561,
  [SMALL_STATE(759)] = 19574,
  [SMALL_STATE(760)] = 19587,
  [SMALL_STATE(761)] = 19600,
  [SMALL_STATE(762)] = 19613,
  [SMALL_STATE(763)] = 19626,
  [SMALL_STATE(764)] = 19639,
  [SMALL_STATE(765)] = 19652,
  [SMALL_STATE(766)] = 19665,
  [SMALL_STATE(767)] = 19678,
  [SMALL_STATE(768)] = 19691,
  [SMALL_STATE(769)] = 19704,
  [SMALL_STATE(770)] = 19717,
  [SMALL_STATE(771)] = 19730,
  [SMALL_STATE(772)] = 19743,
  [SMALL_STATE(773)] = 19756,
  [SMALL_STATE(774)] = 19769,
  [SMALL_STATE(775)] = 19782,
  [SMALL_STATE(776)] = 19795,
  [SMALL_STATE(777)] = 19808,
  [SMALL_STATE(778)] = 19821,
  [SMALL_STATE(779)] = 19834,
  [SMALL_STATE(780)] = 19847,
  [SMALL_STATE(781)] = 19860,
  [SMALL_STATE(782)] = 19873,
  [SMALL_STATE(783)] = 19886,
  [SMALL_STATE(784)] = 19899,
  [SMALL_STATE(785)] = 19912,
  [SMALL_STATE(786)] = 19925,
  [SMALL_STATE(787)] = 19938,
  [SMALL_STATE(788)] = 19942,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(217),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(219),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(220),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(220),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(222),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(254),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(585),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(225),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(226),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(226),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(228),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(234),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(234),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(263),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(263),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(239),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(771),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(241),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(253),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(602),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(583),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(565),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(610),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(611),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(614),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(69),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(764),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(763),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(349),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(758),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(756),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(755),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(754),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(76),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(632),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(64),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(656),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(33),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(751),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(355),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(191),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(286),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(634),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(529),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 2), SHIFT_REPEAT(197),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_body, 1),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(217),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(219),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(220),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(220),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(222),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(254),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(585),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(225),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(226),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(226),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(228),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(234),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(234),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(263),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(263),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(239),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(771),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(241),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(253),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(602),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(583),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(565),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(610),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(611),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(614),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(69),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(764),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(763),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(349),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(758),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(756),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(755),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(754),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(76),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(632),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(677),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(33),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(751),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(355),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(191),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(286),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(634),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(678),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(529),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 2), SHIFT_REPEAT(197),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(217),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(219),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(220),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(220),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(222),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(254),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(585),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(225),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(226),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(226),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(228),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(234),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(234),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(263),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(263),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(239),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(771),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(241),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(253),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(602),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(583),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(565),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(610),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(611),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(614),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(69),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(764),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(763),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(349),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(758),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(756),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(755),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(754),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(76),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(632),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(33),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(751),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(355),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(191),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(286),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(634),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(529),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(197),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(565),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(786),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(345),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(765),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(763),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(349),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(350),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(756),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(755),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(754),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(397),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(538),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(751),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(355),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(356),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(191),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(748),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(747),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(746),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(745),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(529),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 2), SHIFT_REPEAT(769),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(552),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(565),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(786),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(345),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(765),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(764),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(763),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(762),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(349),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(350),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(758),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(757),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(756),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(755),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(754),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(76),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(538),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(33),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(751),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(355),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(356),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(191),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(748),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(747),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(746),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(745),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(529),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(743),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(565),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(786),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(345),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(765),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(764),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(763),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(762),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(349),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(350),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(758),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(757),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(756),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(755),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(754),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(538),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(751),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(355),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(356),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(191),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(748),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(747),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(746),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(745),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(529),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 2), SHIFT_REPEAT(769),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(217),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(219),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(222),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(254),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(585),
  [922] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(228),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(234),
  [937] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(234),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(263),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(263),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(771),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(241),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(253),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(602),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(583),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(337),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(286),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 2), SHIFT_REPEAT(197),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 2),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_forward_dcl, 2),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(217),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(219),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(220),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(222),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(608),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(603),
  [1020] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(225),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [1026] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(226),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(228),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(234),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(234),
  [1038] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(263),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(263),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(239),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(771),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(241),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(706),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(602),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(754),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(76),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(33),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(751),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 2), SHIFT_REPEAT(197),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_member, 4),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_member, 4),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 7),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 7),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 5),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 5),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_dcl, 6),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_dcl, 6),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_element, 1),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_element, 1),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_def_repeat1, 1),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 1),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_home_export, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_export, 2),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_home_body_repeat1, 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_label, 3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_label, 3),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(337),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 1),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 3),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 3),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 5),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 5),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3, .production_id = 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3, .production_id = 3),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 1),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_dcl_repeat1, 1),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 2),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_body, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_body, 2),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_except_dcl_repeat1, 1),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 5, .production_id = 5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 5),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 2),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_name, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_name, 3),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 4, .production_id = 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 3),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_member, 5),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member, 5),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 1),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_appl, 5),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl, 5),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_attribute, 1),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_attribute, 1),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefine, 2),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefine, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 2),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 2, .production_id = 1),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 2),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 2),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tpl_definition, 1),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tpl_definition, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_module_dcl_repeat1, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_call, 3, .production_id = 2),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_dcl_repeat1, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_body, 1),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2),
  [1293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(614),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(69),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(224),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(211),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(431),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(434),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(435),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 2), SHIFT_REPEAT(439),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 4),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 4),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2),
  [1337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(614),
  [1340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(69),
  [1343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(224),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(211),
  [1349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 2), SHIFT_REPEAT(439),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 3),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 3),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 4),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 4),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(614),
  [1387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(69),
  [1390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(224),
  [1393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(211),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 2), SHIFT_REPEAT(439),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 3),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 1),
  [1413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_body, 2),
  [1419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_expr, 1),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_expr, 1),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 1),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expr, 3),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expr, 3),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type_spec, 1),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_spec, 1),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_body_repeat1, 1),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_export, 2),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 3),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor_expr, 1),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(349),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 1),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_port_body_repeat1, 1),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_export, 2),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_ref, 2),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declarator, 1),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 2),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_export, 1),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connector_dcl_repeat1, 1),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 2),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2),
  [1524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(679),
  [1527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 2), SHIFT_REPEAT(128),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_forward_dcl, 2),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2),
  [1552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 2), SHIFT_REPEAT(122),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 2),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 2),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_short_int, 1),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_forward_dcl, 3),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_long_int, 1),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_longlong_int, 1),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_int, 1),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_int, 1),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_short_int, 1),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_long_int, 1),
  [1607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raises_expr_repeat1, 2), SHIFT_REPEAT(425),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_longlong_int, 1),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 2),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 1),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_type, 1),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2),
  [1638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 2), SHIFT_REPEAT(701),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_type, 1),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type_spec, 1),
  [1661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2), SHIFT_REPEAT(414),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 2),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type_spec, 1),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2), SHIFT_REPEAT(315),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarators_repeat1, 2),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 4),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_pt_type, 1),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 6),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 2),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_forward_dcl, 2),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_array_size, 3),
  [1701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2), SHIFT_REPEAT(271),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_inheritance_spec_repeat1, 2),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 3),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 4),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_forward_dcl, 2),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 1),
  [1732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2), SHIFT_REPEAT(532),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 2),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 4),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_type, 6),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 5),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 3),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_name, 1),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 2),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supported_interface_spec, 3),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 3),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 5),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 8),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declarator_repeat1, 1),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 5),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(365),
  [1782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(365),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 1),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 4),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(340),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarators, 2),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_def_repeat1, 2), SHIFT_REPEAT(332),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 4),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 6),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 1),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2), SHIFT_REPEAT(215),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_dcl_repeat1, 2),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 2),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 1),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inheritance_spec, 2),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 2),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_inheritance_spec, 2),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 2),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2), SHIFT_REPEAT(303),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2),
  [1885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actual_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(55),
  [1895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2), SHIFT_REPEAT(462),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
  [1900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 1),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_declarator, 2),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarators, 1),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 1),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 1),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
  [1922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_names_repeat1, 2), SHIFT_REPEAT(735),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 3),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_int_const, 1),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 2),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2), SHIFT_REPEAT(248),
  [1946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 1),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_names, 1),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2),
  [1960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 2), SHIFT_REPEAT(488),
  [1963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2), SHIFT_REPEAT(457),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_parameter_dcls_repeat1, 2),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarator, 1),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 1),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 7),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 4),
  [1990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2), SHIFT_REPEAT(454),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_factory_param_dcls_repeat1, 2),
  [1995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_forward_dcl, 2),
  [1997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_forward_dcl, 2),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_inheritance_spec, 5),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [2013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_declarator, 2),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2), SHIFT_REPEAT(539),
  [2020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
  [2022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2), SHIFT_REPEAT(463),
  [2025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_init_param_dcls_repeat1, 2),
  [2027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_inheritance_spec, 3),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [2031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_char_literal_repeat1, 1),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 1),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_dcls, 2),
  [2043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2), SHIFT_REPEAT(233),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_dcls_repeat1, 2),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2), SHIFT_REPEAT(417),
  [2053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_expr_repeat1, 2),
  [2055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2), SHIFT_REPEAT(302),
  [2058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_any_declarators_repeat1, 2),
  [2060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_params, 2),
  [2062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcls, 2),
  [2064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parameter_dcls, 2),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [2068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 5),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_def_repeat1, 1),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameters, 2),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcls, 2),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 5),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 6),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_type_spec, 1),
  [2084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 5),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 5),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 2),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 8),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 6),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 7),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dcl, 6),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_dcl, 3),
  [2114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 4),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_param_dcl, 3),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitset_dcl_repeat1, 1),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 4),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_param_dcl, 3),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_oneway_dcl, 5),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_excep_expr, 2),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 5),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_value, 1),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 7, .production_id = 4),
  [2144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 5),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_repeat1, 1),
  [2148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 2),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_member_type, 1),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 7),
  [2156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
  [2158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 7),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 4),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [2166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 8),
  [2168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 8, .production_id = 6),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_spec, 6),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 9),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 3),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_param_dcl, 3),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield, 3),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_parameter, 1),
  [2194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_dcl, 6),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 4),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 1),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitmask_dcl, 6),
  [2204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_list, 4),
  [2206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_expr, 5),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_appl_param, 3),
  [2218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_declarator, 1),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_type, 1),
  [2222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imported_scope, 1),
  [2224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_repeat1, 1),
  [2226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1),
  [2228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifier, 1),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 4),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_inherit_spec, 2),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 6, .production_id = 4),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_forward_dcl, 2),
  [2248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_def, 4),
  [2250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_dcl, 6),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [2256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_key_spec, 2),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_dcl, 1),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_dcl, 5),
  [2270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_dcl, 2),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [2280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_readonly_attr_spec, 4),
  [2282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_dcl, 2),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_inst, 6),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 3),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declarator, 2),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_dcl, 2),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_id_dcl, 3),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_prefix_dcl, 3),
  [2314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 4),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 2),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 6),
  [2324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 6),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_header, 3),
  [2334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_header, 3),
  [2336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 2),
  [2338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_pt_const_type, 1),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 7),
  [2344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 7),
  [2346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 5),
  [2348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 3),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_type_spec, 1),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 7),
  [2360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_dcl, 3),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consumes_dcl, 3),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publishes_dcl, 3),
  [2368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emits_dcl, 3),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_dcl, 3),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_dcl, 3),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_header, 7),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_excep_expr, 2),
  [2396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_raises_expr, 2),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 2),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_spec, 3),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 4),
  [2410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_dcl, 1),
  [2412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_box_def, 3),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 5),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_header, 3),
  [2424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 3),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 3),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destination_type, 1),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [2456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_dcl, 8),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dcl, 1),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 3),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_dcl, 1),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 3),
  [2486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 5),
  [2488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_expr, 5),
  [2494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_type, 2),
  [2496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 4),
  [2502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 5),
  [2516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factory_dcl, 6),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_const_type, 1),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finder_dcl, 6),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_abs_def, 5),
  [2524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_abs_def, 5),
  [2528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_dcl, 1),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except_dcl, 5),
  [2538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_dcl, 1),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_dcl, 4),
  [2546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_header, 4),
  [2554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connector_dcl, 4),
  [2558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2560] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_spec, 2),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4),
  [2568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home_dcl, 4),
  [2570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_def, 4),
  [2580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_module_ref, 6),
  [2584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [2588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_def, 4),
  [2600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_anno, 1),
  [2602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_kind, 1),
  [2616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_with_context, 2),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_def, 4),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_kind, 1),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_dcl, 4),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porttype_def, 4),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [2658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_header, 4),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [2666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
